/*
 * XREFs of UsbhDecPdoIoCount @ 0x1C000A050
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00016D0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0001978 (UsbhCompletePdoWakeIrp.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_WaitWake @ 0x1C00088F0 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0008F98 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0009B18 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0009CB0 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoReturnHubCount @ 0x1C0009D40 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C0009DE0 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhPdoSystemControl @ 0x1C0009EC0 (UsbhPdoSystemControl.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C0009FAC (UsbhFdoReturnTopologyAddress.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0010FC0 (UsbhFdoReturnPortStatus.c)
 *     UsbhPdoDeviceControl @ 0x1C0028F30 (UsbhPdoDeviceControl.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C00290E0 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C003B874 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003B924 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC1C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E7CC (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003E928 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003E984 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003EA64 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003EB40 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C003F10C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C003F168 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnHubName @ 0x1C003F214 (UsbhFdoReturnHubName.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F2AC (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0047030 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPower_Sequence @ 0x1C0047110 (UsbhPdoPower_Sequence.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0054EC4 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 *     UsbhPdoSuccess @ 0x1C0056130 (UsbhPdoSuccess.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00572C0 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004B944 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall UsbhDecPdoIoCount(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
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
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
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
