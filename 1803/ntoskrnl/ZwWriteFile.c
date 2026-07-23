/*
 * XREFs of ZwWriteFile @ 0x1401A75C0
 * Callers:
 *     CmpDoFileWrite @ 0x14049BEC0 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1405875C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1405C3F44 (EtwpRealtimeSaveState.c)
 *     EtwpRealtimeSaveBuffer @ 0x1405E6708 (EtwpRealtimeSaveBuffer.c)
 *     RtlpGetSetBootStatusData @ 0x14060F484 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x14064C26C (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14071307C (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x1407131D0 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1407193D0 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x1407202C0 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140786D28 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1407B9DC4 (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x140807430 (KdPullRemoteFile.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1408A2EC0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
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
