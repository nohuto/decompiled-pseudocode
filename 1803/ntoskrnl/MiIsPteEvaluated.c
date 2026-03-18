/*
 * XREFs of MiIsPteEvaluated @ 0x14013C64C
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // r10

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  return v1
      && ((v1 & 1) != 0 || (v1 & 0x400) == 0 || !(unsigned int)MiIsPrototypePteVadLookup(v1) || ((v3 >> 5) & 0x1F) != v4);
}
