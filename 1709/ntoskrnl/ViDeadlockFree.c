/*
 * XREFs of ViDeadlockFree @ 0x1407BC91C
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140277E68 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140277FC8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VfDeadlockBeforeCallDriver @ 0x1407BB094 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1407BB52C (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1407BC684 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViDeadlockFree(PVOID Entry, int a2)
{
  int v2; // edx
  int v3; // edx
  PVOID v4; // rdx
  struct _NPAGED_LOOKASIDE_LIST *v5; // rcx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
      v4 = Entry;
      v5 = &ViDeadlockThreadLookaside;
    }
    else
    {
      v4 = Entry;
      v5 = &ViDeadlockNodeLookaside;
    }
  }
  else
  {
    v4 = Entry;
    v5 = &ViDeadlockResourceLookaside;
  }
  ExFreeToNPagedLookasideList(v5, v4);
}
