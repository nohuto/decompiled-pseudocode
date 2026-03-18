/*
 * XREFs of EtwTraceKernelEvent @ 0x1400C1C38
 * Callers:
 *     KiEventClockStateChange @ 0x140005D9C (KiEventClockStateChange.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     EtwpTraceImageUnload @ 0x14003E620 (EtwpTraceImageUnload.c)
 *     CcWorkerThread @ 0x140043080 (CcWorkerThread.c)
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
 *     MiDemoteCombinedPte @ 0x1400AD310 (MiDemoteCombinedPte.c)
 *     PpmEventIdleStateChange @ 0x1400BA468 (PpmEventIdleStateChange.c)
 *     EtwTraceProcessTerminate @ 0x1400C1BCC (EtwTraceProcessTerminate.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x140107C40 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     KiCheckForTimerExpiration @ 0x14010D920 (KiCheckForTimerExpiration.c)
 *     KeResumeClockTimerFromIdle @ 0x14010DC30 (KeResumeClockTimerFromIdle.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     KiTimerExpirationDpc @ 0x140154320 (KiTimerExpirationDpc.c)
 *     KiTimerExpiration @ 0x1401543F4 (KiTimerExpiration.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x140156130 (PerfInfoLogUnexpectedInterrupt.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 *     PpmEventProcessorPerfStateChange @ 0x14016BE48 (PpmEventProcessorPerfStateChange.c)
 *     CcPerfLogScheduleReadAhead @ 0x14017C9E8 (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushSection @ 0x14017CC58 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14017CD38 (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14017D810 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x14018131C (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x140182474 (CcPerfLogLazyWriteScan.c)
 *     EtwTraceAntiStarvationBoost @ 0x1401A6E5C (EtwTraceAntiStarvationBoost.c)
 *     CcPerfLogCanWriteFail @ 0x1402212DC (CcPerfLogCanWriteFail.c)
 *     CcPerfLogExtraWBThreadAction @ 0x140221368 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompleteRequest @ 0x1402381FC (IopPerfCompleteRequest.c)
 *     IopPerfCompletionRoutine @ 0x140238430 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x140238588 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x140238654 (IopPerfLogCallReturnEvent.c)
 *     KiTraceCancelTimer2 @ 0x14024AD58 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x14024ADF0 (KiTraceSetTimer.c)
 *     KiTraceSetTimer2 @ 0x14024AF18 (KiTraceSetTimer2.c)
 *     KiParkUmsThread @ 0x14024C690 (KiParkUmsThread.c)
 *     MiLogAllocateWsleEvent @ 0x140253678 (MiLogAllocateWsleEvent.c)
 *     MiLogPerfMemoryEvent @ 0x140253750 (MiLogPerfMemoryEvent.c)
 *     MiLogRemoveWsleEvent @ 0x1402537B0 (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x140254F3C (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140260304 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x1402614BC (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x14026BDCC (MiLogCombinedPteDelete.c)
 *     PpmTraceExitLatency @ 0x140273BDC (PpmTraceExitLatency.c)
 *     PopLogNotifyDevice @ 0x14027A7EC (PopLogNotifyDevice.c)
 *     PpmTracePerfIdleRundown @ 0x14027EC10 (PpmTracePerfIdleRundown.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1402805E8 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x140280784 (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x1402811E8 (PpmEventThermalCapChange.c)
 *     EtwTraceDebuggerEvent @ 0x1402AEA10 (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1402AEA90 (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1402AEB18 (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1402AECA8 (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1402AED2C (EtwTraceIoTimerEvent.c)
 *     EtwTracePriority @ 0x1402AF09C (EtwTracePriority.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402AF2A8 (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1402AF470 (EtwTraceThreadAffinity.c)
 *     EtwTraceThreadWorkItem @ 0x1402AF4F0 (EtwTraceThreadWorkItem.c)
 *     EtwpLogMemInfo @ 0x1402AFB10 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1402AFEA0 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1402B0380 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1402B03E0 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1402B04E0 (EtwpTraceDebugPrint.c)
 *     EtwpTraceFltIo @ 0x1402B0640 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x1402B0840 (EtwpTraceNetwork.c)
 *     EtwpTraceOpticalIo @ 0x1402B08D0 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1402B0B90 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1402B0D20 (EtwpTraceSplitIo.c)
 *     EtwpTraceWdf @ 0x1402B0D90 (EtwpTraceWdf.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1402B18AC (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x1402B1954 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1402B1B4C (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1402B1C68 (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x1402B1E58 (PerfLogSpinLockRelease.c)
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140474F40 (KiCalibrateTimeAdjustment.c)
 *     PopSystemIrpCompletion @ 0x1404756C0 (PopSystemIrpCompletion.c)
 *     CmpNotifyChangeKey @ 0x1404A3080 (CmpNotifyChangeKey.c)
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageLoad @ 0x1404B7840 (PerfLogImageLoad.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     HvpMarkDirty @ 0x1404E3FF0 (HvpMarkDirty.c)
 *     EtwTraceThreadSetName @ 0x14056DFAC (EtwTraceThreadSetName.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PopDispatchStateCallout @ 0x140583BFC (PopDispatchStateCallout.c)
 *     KeSetIntervalProfile @ 0x1405C4388 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1405EBDD0 (PopPolicyWorkerAction.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     CmpLogHiveDestroyEvent @ 0x1406EE28C (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x1406EE37C (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x1406EE460 (CmpLogHiveLinkEvent.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 *     MiLogSectionCreate @ 0x14074C154 (MiLogSectionCreate.c)
 *     MmLogQueryCombineStats @ 0x140756628 (MmLogQueryCombineStats.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 *     EtwTraceFreezeThawProcess @ 0x1407A7764 (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x1407A7840 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1407A790C (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1407A79B0 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x1407A7A50 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1407A7B9C (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x1407A80FC (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1407A81B8 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x1407A8580 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1407A883C (EtwpLogSessionWorkingSetInfo.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceKernelEvent(int a1, int a2, unsigned int a3, __int16 a4, int a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx

  result = EtwpHostSiloState;
  v7 = a3;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4188);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    result = v10 - 1;
    v10 &= result;
    v13 = EtwpHostSiloState + 32 * (v12 + 132);
    if ( v13 )
    {
      result = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v13 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a1,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4172),
                   a2,
                   a4,
                   a5);
    }
  }
  return result;
}
