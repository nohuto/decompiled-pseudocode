/*
 * XREFs of MiCanPageMove @ 0x14000318C
 * Callers:
 *     MiTradeTransitionPage @ 0x140002F48 (MiTradeTransitionPage.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiReferenceInPageFile @ 0x14005A494 (MiReferenceInPageFile.c)
 *     MiReplaceLockedPage @ 0x14025B7C8 (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
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
