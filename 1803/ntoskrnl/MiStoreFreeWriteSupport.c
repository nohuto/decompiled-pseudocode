/*
 * XREFs of MiStoreFreeWriteSupport @ 0x140091704
 * Callers:
 *     SmIoRequestComplete @ 0x1400914A8 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x1400D6708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreFreeWriteSupport(PSLIST_ENTRY ListEntry, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[76].Alignment) >= 0x100u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 76, ListEntry);
}
