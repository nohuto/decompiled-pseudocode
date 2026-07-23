/*
 * XREFs of ZwReadFile @ 0x14017D980
 * Callers:
 *     CmpFileReadEx @ 0x1400AF4A4 (CmpFileReadEx.c)
 *     RtlInitializeBootStatDataCache @ 0x140134704 (RtlInitializeBootStatDataCache.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1405AC0FC (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlpGetSetBootStatusData @ 0x1405AC8AC (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1405D8E7C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1405E5B60 (EtwpRealtimeRestoreState.c)
 *     CmpTouchFile @ 0x1406950E4 (CmpTouchFile.c)
 *     RtlCheckBootStatusIntegrity @ 0x1407232B0 (RtlCheckBootStatusIntegrity.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
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
