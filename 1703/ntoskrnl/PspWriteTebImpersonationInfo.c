/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x14047E920
 * Callers:
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     PsRestoreImpersonation @ 0x140510CB0 (PsRestoreImpersonation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _KPROCESS *v5; // r14
  int v6; // eax
  bool v7; // dl
  BOOL v8; // ecx
  unsigned __int64 v9; // rax
  __int16 v10; // r8
  signed __int32 v12[8]; // [rsp+0h] [rbp-98h] BYREF
  char v13; // [rsp+20h] [rbp-78h]
  bool v14; // [rsp+21h] [rbp-77h]
  BOOL v15; // [rsp+24h] [rbp-74h]
  _DWORD *v16; // [rsp+28h] [rbp-70h]
  _KPROCESS *v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  $5BC46E0569261879018906DEC3127961 v19; // [rsp+40h] [rbp-58h] BYREF

  v18 = a1;
  v4 = *(_DWORD **)(a1 + 240);
  v16 = v4;
  if ( v4 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v5 = *(_KPROCESS **)(a1 + 544);
    v17 = v5;
    if ( *(_KPROCESS **)(a2 + 184) == v5 )
    {
      v13 = 0;
    }
    else
    {
      KiStackAttachProcess(v5, 0, (__int64)&v19);
      v13 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1712)) )
    {
      do
      {
        v6 = *(_DWORD *)(a1 + 1736) & 8;
        v7 = v6 != 0;
        v14 = v6 != 0;
        v8 = v6 != 0;
        v15 = v8;
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
      while ( v7 != ((*(_DWORD *)(a1 + 1736) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1712));
    }
    if ( v13 )
      KiUnstackDetachProcess(&v19, 0LL);
  }
  return 0LL;
}
