/*
 * XREFs of MiIsPteEvaluated @ 0x14007682C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x140222084 (MiGetClusterPage.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r10

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return v1
      && ((v1 & 1) != 0 || (v1 & 0x400) == 0 || !(unsigned int)MiIsPrototypePteVadLookup(v1) || ((v3 >> 5) & 0x1F) != v4);
}
