/*
 * XREFs of MiTryDeleteTransitionPte @ 0x14007A1EC
 * Callers:
 *     MiDeleteMergedPte @ 0x140079374 (MiDeleteMergedPte.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 || !MiLockTransitionLeafPage(BugCheckParameter2) )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2);
}
