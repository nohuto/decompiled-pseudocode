/*
 * XREFs of PsGetIoPriorityThread @ 0x140061EF0
 * Callers:
 *     PfSnCheckLoggingForThread @ 0x14001313C (PfSnCheckLoggingForThread.c)
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14002AE10 (MiFinishMdlForMappedFileFault.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     IopCallDriverReference @ 0x1400610C0 (IopCallDriverReference.c)
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     IoRetrievePriorityInfo @ 0x1401070F0 (IoRetrievePriorityInfo.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     ExpApplyPrewaitBoost @ 0x140117340 (ExpApplyPrewaitBoost.c)
 *     CcForceWriteThrough @ 0x14012D540 (CcForceWriteThrough.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140267348 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     EtwpTraceThreadRundown @ 0x14027EF38 (EtwpTraceThreadRundown.c)
 *     MmPrefetchVirtualAddresses @ 0x140444690 (MmPrefetchVirtualAddresses.c)
 *     PfSnBeginScenario @ 0x140453178 (PfSnBeginScenario.c)
 *     NtSetInformationVirtualMemory @ 0x1404D43D0 (NtSetInformationVirtualMemory.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404D99C0 (PspBoostJobIoPriorityCallback.c)
 *     CmpBoostActiveHiveWriter @ 0x1404E66A0 (CmpBoostActiveHiveWriter.c)
 *     MiLogRelocationRva @ 0x1404F7BA0 (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
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
