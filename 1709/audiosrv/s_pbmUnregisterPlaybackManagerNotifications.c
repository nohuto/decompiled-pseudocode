/*
 * XREFs of s_pbmUnregisterPlaybackManagerNotifications @ 0x1800A26D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmUnregisterPlaybackManagerNotifications(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( (unsigned int)IsPbmUnregisterPlaybackManagerNotificationsSupported() )
  {
    return (unsigned int)PbmUnregisterPlaybackManagerNotifications(a1, a2, a3);
  }
  else if ( !a2 && g_PolicyManager )
  {
    v7 = *(_QWORD *)g_PolicyManager;
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v7 + 32))(
           g_PolicyManager,
           a1,
           &v12);
    v9 = v12;
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 336LL))(v12);
      v9 = v12;
      v6 = v10;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
