/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1401A6828
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x14026D914 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx

  v1 = MiReverseSwizzleInvalidPte(a1);
  return MiSwizzleInvalidPte(v1 & 0xFFFF000000000FFFuLL | ((v2 & 0xFFFFFFFFFLL) << 12));
}
