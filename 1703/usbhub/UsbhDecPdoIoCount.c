/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C0020BD0
 * Callers:
 *     UsbhCompletePdoWakeIrp @ 0x1C00018C8 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0006480 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C00129D0 (UsbhFdoReturnPortStatus.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0020630 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoReturnHubCount @ 0x1C00206C0 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0020750 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0020818 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C00208B0 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhPdoSystemControl @ 0x1C0020AE0 (UsbhPdoSystemControl.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0020DF0 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026E24 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C003A3B4 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003A540 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003A5F0 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003A8EC (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003D91C (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003DA78 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003DAD4 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003DBB4 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003DC90 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003DE90 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003E25C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003E2B8 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003E364 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003E3FC (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0046270 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x1C0046350 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0054E24 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 *     UsbhPdoDeviceControl @ 0x1C0055930 (UsbhPdoDeviceControl.c)
 *     UsbhPdoSuccess @ 0x1C0056280 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00573BC (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004AAD4 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  int v10; // eax

  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  v5 = (_QWORD *)(v4 + 1216);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1208));
  if ( (_QWORD *)*v5 == v5 || (v7 = (_QWORD *)*v5) == 0LL || v7 == v5 )
  {
LABEL_20:
    v10 = *(_DWORD *)(v4 + 1256);
    if ( !v10 )
    {
      USBHUB_TriggerCallBacks(BugCheckParameter3);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, BugCheckParameter3, BugCheckParameter4);
    }
    *(_DWORD *)(v4 + 1256) = v10 - 1;
  }
  else
  {
    while ( v7[2] != BugCheckParameter4 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == v5 )
        goto LABEL_20;
    }
    v8 = (_QWORD *)*v7;
    v9 = (_QWORD *)v7[1];
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    ExFreePoolWithTag(v7 - 1, 0);
  }
  if ( (_QWORD *)*v5 != v5 || *(_DWORD *)(v4 + 1256) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1208), v6);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 1208), v6);
    KeSetEvent((PRKEVENT)(v4 + 1232), 0, 0);
  }
}
