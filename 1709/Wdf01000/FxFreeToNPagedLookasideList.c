/*
 * XREFs of FxFreeToNPagedLookasideList @ 0x1C006B7A4
 * Callers:
 *     ?FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ @ 0x1C006AE70 (-FreeSgListBuffer@FxDmaScatterGatherTransaction@@AEAAXXZ.c)
 *     ?Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C007EE40 (-Reclaim@FxNPagedLookasideList@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007EE70 (-ReclaimPool@FxNPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 *     ?Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z @ 0x1C007F340 (-Reclaim@FxPagedLookasideListFromPool@@MEAAXPEAVFxMemoryBufferFromLookaside@@@Z.c)
 *     ?ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z @ 0x1C007F370 (-ReclaimPool@FxPagedLookasideListFromPool@@MEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeToNPagedLookasideList(_PAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) < Lookaside->L.Depth )
  {
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))Lookaside->L.FreeEx)(Entry);
  }
}
