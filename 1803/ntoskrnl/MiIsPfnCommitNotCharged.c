/*
 * XREFs of MiIsPfnCommitNotCharged @ 0x140032060
 * Callers:
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnCommitNotCharged(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v1 > 0xFFFFF6BFFFFFFF78uLL || v1 < 0xFFFFF68000000000uLL )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 35) >> 5) & 1;
}
