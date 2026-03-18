/*
 * XREFs of ArbFreeOrderingList @ 0x1405CFB58
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1405CEFB8 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall ArbFreeOrderingList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
}
