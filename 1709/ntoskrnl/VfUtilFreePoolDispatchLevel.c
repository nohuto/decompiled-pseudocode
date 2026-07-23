/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x140276760
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1407B7168 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1407B7244 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x1407BF044 (IovpSessionDataDereference.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400F90A0 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
