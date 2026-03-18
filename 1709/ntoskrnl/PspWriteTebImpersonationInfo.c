/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x1404CEA30
 * Callers:
 *     PsRestoreImpersonation @ 0x1404C62C0 (PsRestoreImpersonation.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r14
  _KPROCESS *v5; // rsi
  int v6; // eax
  bool v7; // dl
  BOOL v8; // ecx
  unsigned __int64 v9; // rax
  __int16 v10; // r8
  signed __int32 v12[8]; // [rsp+0h] [rbp-98h] BYREF
  char v13; // [rsp+20h] [rbp-78h]
  bool v14; // [rsp+21h] [rbp-77h]
  _DWORD *v15; // [rsp+28h] [rbp-70h]
  _KPROCESS *v16; // [rsp+30h] [rbp-68h]
  __int64 v17; // [rsp+38h] [rbp-60h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v18; // [rsp+40h] [rbp-58h] BYREF

  v17 = a1;
  v4 = *(_DWORD **)(a1 + 240);
  v15 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_KPROCESS **)(a1 + 544);
    v16 = v5;
    if ( *(_KPROCESS **)(a2 + 184) == v5 )
    {
      v13 = 0;
    }
    else
    {
      KiStackAttachProcess(v5, 0, (__int64)&v18);
      v13 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1720)) )
    {
      do
      {
        v6 = *(_DWORD *)(a1 + 1744) & 8;
        v7 = v6 != 0;
        v14 = v6 != 0;
        v8 = v6 != 0;
        v4[1511] = v8;
        v4[1530] = 0;
        v9 = v5[1].ActiveProcessors.Bitmap[7];
        if ( v9 )
        {
          v10 = *(_WORD *)(v9 + 8);
          if ( v10 == 332 || v10 == 452 )
          {
            v4[3047] = v8;
            v4[3057] = 0;
          }
        }
        _InterlockedOr(v12, 0);
      }
      while ( v7 != ((*(_DWORD *)(a1 + 1744) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1720));
    }
    if ( v13 )
      KiUnstackDetachProcess(&v18, 0LL);
  }
  return 0LL;
}
