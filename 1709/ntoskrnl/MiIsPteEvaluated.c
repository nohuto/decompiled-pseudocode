/*
 * XREFs of MiIsPteEvaluated @ 0x14000C0B8
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x14022EEDC (MiGetClusterPage.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 */

_BOOL8 __fastcall MiIsPteEvaluated(__int64 *a1)
{
  __int64 PteShadow; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // r9

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  return PteShadow
      && ((PteShadow & 1) != 0
       || (PteShadow & 0x400) == 0
       || !(unsigned int)MiIsPrototypePteVadLookup(PteShadow)
       || ((v3 >> 5) & 0x1F) != v4);
}
