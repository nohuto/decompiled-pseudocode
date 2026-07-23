/*
 * XREFs of MiStoreFreeWriteSupport @ 0x140054EB0
 * Callers:
 *     SmIoRequestComplete @ 0x140054C54 (SmIoRequestComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiStoreFreeWriteSupport(_SLIST_ENTRY *a1, _SLIST_HEADER *a2)
{
  if ( LOWORD(a2[78].Alignment) >= 0x100u )
    ExFreePoolWithTag(a1, 0);
  else
    RtlpInterlockedPushEntrySList(a2 + 78, a1);
}
