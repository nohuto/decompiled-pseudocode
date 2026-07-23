/*
 * XREFs of VfUtilFreePoolDispatchLevel @ 0x14024FF60
 * Callers:
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1407753A8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140775484 (ViTargetRemovingCheckContiguousMemory.c)
 *     IovpSessionDataDereference @ 0x14077D0D8 (IovpSessionDataDereference.c)
 * Callees:
 *     <none>
 */

void __fastcall VfUtilFreePoolDispatchLevel(_SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, 0);
}
