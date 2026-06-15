/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x1800A2340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  if ( (unsigned int)IsPbmLaunchBackgroundTaskSupported() )
  {
    return (unsigned int)PbmLaunchBackgroundTask(a1, a2, a3, a4);
  }
  else if ( g_PolicyManager )
  {
    v9 = *(_QWORD *)g_PolicyManager;
    v11[0] = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD *))(v9 + 32))(
           g_PolicyManager,
           a1,
           v11);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 208LL))(
             g_PolicyManager,
             v11[0],
             a2,
             a3,
             a4);
    if ( v11[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  }
  return (unsigned int)v8;
}
