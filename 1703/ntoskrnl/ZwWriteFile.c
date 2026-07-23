/*
 * XREFs of ZwWriteFile @ 0x14017E040
 * Callers:
 *     EtwpRealtimeSaveState @ 0x14045ECA8 (EtwpRealtimeSaveState.c)
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x140550754 (EtwpFlushBufferToLogfile.c)
 *     EtwpRealtimeSaveBuffer @ 0x140550854 (EtwpRealtimeSaveBuffer.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140582208 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x1405CF3FC (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x1406834D8 (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14068362C (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1406887C0 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14068F640 (IopLiveDumpWriteBuffer.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x140713EA4 (EtwpSavePersistedLogger.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14078D0F8 (KdPullRemoteFile.c)
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
