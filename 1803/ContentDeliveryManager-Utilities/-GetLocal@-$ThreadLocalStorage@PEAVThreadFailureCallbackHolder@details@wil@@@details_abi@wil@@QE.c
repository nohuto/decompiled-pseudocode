/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68
 * Callers:
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18002AC60 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18002B2A4 (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18002B8E4 (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x180041A70 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180049BF0 (-StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@Mob.c)
 *     ?StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180050B80 (-StartActivity@ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180051130 (-StartActivity@ActionRevertedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x1800516E0 (-StartActivity@ActionStagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ?StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180051C90 (-StartActivity@ActionUnstagedActivity@ContentDeliveryManagerTelemetry@Background@ContentDelivery.c)
 *     ?StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBG00@Z @ 0x180052240 (-StartActivity@ActionCommittedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18005CE28 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18005D4A8 (-StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18005DF58 (-StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ??0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@AEBV0123@@Z @ 0x18005E9C8 (--0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x18005EAB8 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180073888 (-StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180074388 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x180077BBC (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ??0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z @ 0x180097060 (--0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z.c)
 *     ?StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z @ 0x180097150 (-StartActivity@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB_W@Z.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
        __int64 a1,
        char a2)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  signed __int64 result; // rax
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax

  v2 = wil::details::g_pThreadFailureCallbacks;
  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xAuLL;
  for ( result = *(_QWORD *)(v2 + 8 * v5); result; result = *(_QWORD *)(result + 16) )
  {
    if ( *(_DWORD *)(result + 8) == CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v9 = (signed __int64)v8;
  if ( !v8 )
    return 0LL;
  *v8 = 0LL;
  v8[2] = 0LL;
  *((_DWORD *)v8 + 2) = CurrentThreadId;
  _m_prefetchw((const void *)(v2 + 8 * v5));
  do
  {
    v10 = *(_QWORD *)(v2 + 8 * v5);
    *(_QWORD *)(v9 + 16) = v10;
  }
  while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8 * v5), v9, v10) );
  return v9;
}
