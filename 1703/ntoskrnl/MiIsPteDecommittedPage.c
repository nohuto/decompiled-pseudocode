/*
 * XREFs of MiIsPteDecommittedPage @ 0x1401087FC
 * Callers:
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPteDecommittedPage(__int64 a1)
{
  __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return (v1 & 0x3E0) == 0x200 && (v1 & 1) == 0 && ((v1 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v1));
}
