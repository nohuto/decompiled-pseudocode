/*
 * XREFs of MiCanPageMove @ 0x1400CB2A0
 * Callers:
 *     MiReferenceInPageFile @ 0x1400678E4 (MiReferenceInPageFile.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiCanPageMove(__int64 a1)
{
  unsigned int v1; // r9d
  int IsPfnFileOnly; // eax
  __int64 v4; // r8
  int v5; // r9d
  _QWORD *PrototypePteDirect; // rax
  __int64 v7; // rdx

  v1 = 1;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    return v1;
  IsPfnFileOnly = MiIsPfnFileOnly(a1);
  if ( IsPfnFileOnly == v5 )
    return 0LL;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v4 + 16));
  v7 = *PrototypePteDirect;
  if ( PrototypePteDirect == (_QWORD *)(*PrototypePteDirect + 128LL) || (*(_DWORD *)(v7 + 56) & 0x20) == 0 )
    return v1;
  return v1 & ~(*(_DWORD *)(v7 + 92) >> 20);
}
