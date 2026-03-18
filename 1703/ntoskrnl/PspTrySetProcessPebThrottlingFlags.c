/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x1406E09A0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int16 v7; // dx
  $5BC46E0569261879018906DEC3127961 v9; // [rsp+20h] [rbp-48h] BYREF

  KiStackAttachProcess(a1, 0, (__int64)&v9);
  v4 = a1[1].ActiveProcessors.Bitmap[1];
  if ( v4 )
  {
    v5 = 0LL;
    v6 = a1[1].ActiveProcessors.Bitmap[7];
    if ( v6 )
    {
      v7 = *(_WORD *)(v6 + 8);
      if ( v7 == 332 || v7 == 452 )
        v5 = *(_QWORD *)v6;
    }
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v4 + 80), 0x60u);
      if ( v5 )
        _InterlockedOr((volatile signed __int32 *)(v5 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v4 + 80), 0xFFFFFFBF);
      if ( v5 )
        _InterlockedAnd((volatile signed __int32 *)(v5 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess(&v9, 0LL);
}
