/*
 * XREFs of PsGetIoPriorityThread @ 0x1401281D0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140064C50 (KiAbTryIncrementIoWaiterCounts.c)
 *     FsRtlpWaitForIoAtEof @ 0x14007C42C (FsRtlpWaitForIoAtEof.c)
 *     PfSnCheckLoggingForThread @ 0x14008E8B0 (PfSnCheckLoggingForThread.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14008FFAC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     CcForceWriteThrough @ 0x140098ED0 (CcForceWriteThrough.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x1400A5400 (IoRetrievePriorityInfo.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     ExpWorkerThread @ 0x1401261B0 (ExpWorkerThread.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     EtwpTraceThreadRundown @ 0x140172374 (EtwpTraceThreadRundown.c)
 *     NtSetInformationVirtualMemory @ 0x1404B30D0 (NtSetInformationVirtualMemory.c)
 *     MiLogRelocationRva @ 0x1404BD2AC (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     PfSnBeginScenario @ 0x14050DE38 (PfSnBeginScenario.c)
 *     MmPrefetchVirtualAddresses @ 0x14052C6E0 (MmPrefetchVirtualAddresses.c)
 *     PspBoostJobIoPriorityCallback @ 0x14052EEE0 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x140566B44 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1744) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (unsigned int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1800) )
      return 2LL;
  }
  return result;
}
