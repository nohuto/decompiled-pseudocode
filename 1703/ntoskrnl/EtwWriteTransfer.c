/*
 * XREFs of EtwWriteTransfer @ 0x140030E20
 * Callers:
 *     FlushEventEntryList @ 0x14044C6F0 (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}
