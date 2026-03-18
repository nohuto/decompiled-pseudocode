/*
 * XREFs of EtwpRealtimeZeroTruncateLogfile @ 0x1405D0660
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x14054FCD8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017E420 (ZwSetInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeZeroTruncateLogfile(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 FileInformation; // [rsp+58h] [rbp+10h] BYREF

  v5 = 72LL;
  if ( ZwSetInformationFile(*(HANDLE *)(a1 + 360), &IoStatusBlock, &v5, 8u, FileEndOfFileInformation) < 0
    || (v2 = *(void **)(a1 + 360),
        FileInformation = 72LL,
        result = ZwSetInformationFile(v2, &IoStatusBlock, &FileInformation, 8u, FileAllocationInformation),
        result < 0) )
  {
    result = ZwClose(*(HANDLE *)(a1 + 360));
    *(_QWORD *)(a1 + 360) = 0LL;
    *(_QWORD *)(a1 + 400) = 0LL;
    *(_QWORD *)(a1 + 392) = 0LL;
    *(_QWORD *)(a1 + 384) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 400) = 72LL;
    *(_QWORD *)(a1 + 392) = 72LL;
    *(_QWORD *)(a1 + 384) = 72LL;
  }
  return result;
}
