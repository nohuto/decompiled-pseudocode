/*
 * XREFs of TtmpStopCallout @ 0x140771884
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140770C10 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x140770DF0 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x140770E98 (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x140770F20 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140770FC8 (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x140771914 (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     TtmpCalloutDestroyWatchdog @ 0x1407711A8 (TtmpCalloutDestroyWatchdog.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x140771378 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x140774C7C (TtmiLogCalloutStop.c)
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
