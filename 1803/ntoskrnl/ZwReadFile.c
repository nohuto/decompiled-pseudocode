/*
 * XREFs of ZwReadFile @ 0x1401A7580
 * Callers:
 *     CmpDoFileRead @ 0x140006B1C (CmpDoFileRead.c)
 *     RtlInitializeBootStatDataCache @ 0x140184128 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x14060F484 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1406231C4 (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1406436FC (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x14064C26C (EtwpRealtimeRestoreState.c)
 *     RtlCheckBootStatusIntegrity @ 0x140786B80 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
