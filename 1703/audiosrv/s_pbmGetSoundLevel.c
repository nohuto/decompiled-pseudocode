/*
 * XREFs of s_pbmGetSoundLevel @ 0x18002EC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmGetSoundLevel(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( (unsigned int)IsPbmSoundLevelSupported() )
    return PbmGetSoundLevel(a1, a2);
  if ( g_PolicyManager )
  {
    v6 = *(_QWORD *)g_PolicyManager;
    v10 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v6 + 32))(
           g_PolicyManager,
           a1,
           &v10);
    v8 = v10;
    v4 = v7;
    if ( v7 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 336LL))(v10, a2);
      v8 = v10;
      v4 = v9;
      if ( v10 )
LABEL_8:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v8);
    }
    else if ( v10 )
    {
      goto LABEL_8;
    }
  }
  return v4;
}
