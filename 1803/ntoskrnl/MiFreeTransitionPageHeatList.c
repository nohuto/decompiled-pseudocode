/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x140258C9C
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_1403CC110.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_1403CC110, ListEntry);
}
