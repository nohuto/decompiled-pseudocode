/*
 * XREFs of MiTryDeleteTransitionPte @ 0x1400524F0
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     MiDeleteMergedPte @ 0x1400AD9AC (MiDeleteMergedPte.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiDeleteTransitionPte @ 0x140052AA8 (MiDeleteTransitionPte.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 || !MiLockTransitionLeafPage(BugCheckParameter2) )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2);
}
