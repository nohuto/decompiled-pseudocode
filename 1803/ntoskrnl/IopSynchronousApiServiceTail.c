/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1405610F8
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140560E8C (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopCancelAlertedRequest @ 0x14071957C (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5,
        _OWORD *a6)
{
  unsigned int v8; // edi

  v8 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v8 = *a5;
  }
  *a6 = *(_OWORD *)a5;
  ExFreePoolWithTag(a2, 0);
  return v8;
}
