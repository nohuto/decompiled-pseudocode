/*
 * XREFs of s_pbmRegisterAsBackgroundTask @ 0x1800B0D40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmRegisterAsBackgroundTask(__int64 a1, __int128 *a2)
{
  int v3; // ebx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( g_PolicyManager )
  {
    v4 = *(_QWORD *)g_PolicyManager;
    v8 = 0LL;
    v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v4 + 32))(
           g_PolicyManager,
           a1,
           &v8);
    if ( v3 >= 0 )
    {
      v5 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 280LL);
      v7 = *a2;
      v5(v8, &v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)v3;
}
