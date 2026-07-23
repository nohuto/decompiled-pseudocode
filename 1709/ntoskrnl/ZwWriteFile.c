/*
 * XREFs of ZwWriteFile @ 0x14017D9C0
 * Callers:
 *     CmpDoFileWrite @ 0x1404E0284 (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1405330A4 (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x1405AC8AC (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeSaveBuffer @ 0x1405DA000 (EtwpRealtimeSaveBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1405E5B60 (EtwpRealtimeRestoreState.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     DbgkpWerWriteSecondaryData @ 0x1406AE7CC (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x1406AE920 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1406B47A0 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x1406BB30C (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x140723458 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x14073BCF4 (SmKmStoreFileWriteHeader.c)
 *     EtwpRealtimeSaveState @ 0x140752394 (EtwpRealtimeSaveState.c)
 *     EtwpSavePersistedLogger @ 0x140753024 (EtwpSavePersistedLogger.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14079A314 (KdPullRemoteFile.c)
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
