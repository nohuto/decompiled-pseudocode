/*
 * XREFs of ndisScheduleWorkItemInternal @ 0x1C001D998
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisInitModeTimeoutDpc @ 0x1C001D8C0 (ndisInitModeTimeoutDpc.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001D8D4 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     NdisScheduleWorkItem @ 0x1C0028100 (NdisScheduleWorkItem.c)
 *     ndisPdcTaskClientDisableTimeoutDpc @ 0x1C004C690 (ndisPdcTaskClientDisableTimeoutDpc.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004CEFC (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisMResetMiniport @ 0x1C005E760 (NdisMResetMiniport.c)
 *     NdisMReenumerateFailedAdapter @ 0x1C0064270 (NdisMReenumerateFailedAdapter.c)
 *     ndisMediaDisconnectTimeout @ 0x1C0065210 (ndisMediaDisconnectTimeout.c)
 *     ndisScheduleD0CompleteSignalWorkItem @ 0x1C00653C4 (ndisScheduleD0CompleteSignalWorkItem.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisIdleWaitWakeCallback @ 0x1C006E9E0 (ndisIdleWaitWakeCallback.c)
 *     ndisSSIdleTimerDpc @ 0x1C006F2F0 (ndisSSIdleTimerDpc.c)
 *     ?ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0070D5C (-ndisAoAcScheduleWakeWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0072970 (-ndisTempRefTimerDpc@@YAXPEAX000@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisScheduleWorkItemInternal(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = ndisWorkItemHandler;
  *(_QWORD *)(a1 + 40) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 16), CriticalWorkQueue);
}
