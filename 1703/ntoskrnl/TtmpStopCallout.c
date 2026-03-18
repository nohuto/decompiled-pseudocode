/*
 * XREFs of TtmpStopCallout @ 0x1406D7D40
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1406D7240 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x1406D7410 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x1406D74B8 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x1406D7540 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1406D75E8 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x1406D7DD0 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     TtmpCalloutDestroyWatchdog @ 0x1406D77C8 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x1406D7880 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x1406DB03C (TtmiLogCalloutStop.c)
 */

BOOLEAN __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int CalloutTagFromCalloutType; // eax
  __int64 v6; // r10
  struct _KTHREAD *CurrentThread; // rax

  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) )
    TtmpCalloutDestroyWatchdog(a1);
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(*(_DWORD *)(a1 + 16));
  TtmiLogCalloutStop(
    *(_DWORD *)(v6 + 16),
    *(_DWORD *)(v6 + 72),
    *(_QWORD *)(v6 + 24),
    CalloutTagFromCalloutType,
    a2,
    v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
