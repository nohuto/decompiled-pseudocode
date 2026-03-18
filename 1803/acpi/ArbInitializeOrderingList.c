/*
 * XREFs of ArbInitializeOrderingList @ 0x1C00946E0
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C0093B00 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  PVOID PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4C627241u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  *(_WORD *)a1 = 0;
  if ( PoolWithTag )
  {
    *(_WORD *)(a1 + 2) = 16;
    return 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 2) = 0;
    return 3221225626LL;
  }
}
