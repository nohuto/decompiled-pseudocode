/*
 * XREFs of VidSchiBlockDriverCallback @ 0x1C00AD7C0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002AF80 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00ACAA0 (VidSchTerminateAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1C00AD5D0 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaData @ 0x1C00AD5F8 (VidSchQueryDmaData.c)
 *     VidSchQueryDmaHeader @ 0x1C00AD6DC (VidSchQueryDmaHeader.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 24), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL), 0LL);
  KeFlushQueuedDpcs();
}
