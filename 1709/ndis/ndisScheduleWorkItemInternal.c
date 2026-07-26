/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C0022FEC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisInitModeTimeoutDpc @ 0x1C0022FD0 (ndisInitModeTimeoutDpc.c)
 *     ndisPdcTaskClientDisableTimeoutDpc @ 0x1C0049F20 (ndisPdcTaskClientDisableTimeoutDpc.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004A7B0 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisScheduleWorkItem @ 0x1C0050FE0 (NdisScheduleWorkItem.c)
 *     NdisMResetMiniport @ 0x1C005E520 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00648B0 (NdisMReenumerateFailedAdapter.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0065A10 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EFAC (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisIdleWaitWakeCallback @ 0x1C0070150 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C0070A60 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072630 (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C00744C0 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = ndisWorkItemHandler;
  *(_QWORD *)(a1 + 40) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 16), CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
}
