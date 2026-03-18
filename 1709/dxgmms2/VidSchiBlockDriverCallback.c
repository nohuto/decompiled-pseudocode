/*
 * XREFs of VidSchiBlockDriverCallback @ 0x1C00B61D0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C002CA7C (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00B5480 (VidSchTerminateAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1C00B5FF0 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaData @ 0x1C00B6018 (VidSchQueryDmaData.c)
 *     VidSchQueryDmaHeader @ 0x1C00B60EC (VidSchQueryDmaHeader.c)
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
