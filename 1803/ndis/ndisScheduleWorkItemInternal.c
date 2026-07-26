/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C001A1A0
 * Callers:
 *     ndisInitModeTimeoutDpc @ 0x1C0016F90 (ndisInitModeTimeoutDpc.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001A0DC (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisPdcTaskClientDisableTimeoutDpc @ 0x1C004AEE0 (ndisPdcTaskClientDisableTimeoutDpc.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004B788 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisScheduleWorkItem @ 0x1C0051960 (NdisScheduleWorkItem.c)
 *     NdisMResetMiniport @ 0x1C005EF20 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C00653F0 (NdisMReenumerateFailedAdapter.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C0066528 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006F840 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisIdleWaitWakeCallback @ 0x1C00709A0 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C00712C0 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0072EAC (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0074D30 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
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
