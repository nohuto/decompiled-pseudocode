/*
 * XREFs of ZwReadFile @ 0x14017E000
 * Callers:
 *     CmpFileReadEx @ 0x14007FD50 (CmpFileReadEx.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140582208 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1405B8C9C (RtlInitializeBootStatusDataBlackBox.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1405C6D7C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeRestoreState @ 0x1405CF3FC (EtwpRealtimeRestoreState.c)
 *     CmpTouchFile @ 0x14066AA60 (CmpTouchFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
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
