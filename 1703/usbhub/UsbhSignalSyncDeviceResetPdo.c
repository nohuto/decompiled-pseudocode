/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0007900 (UsbhDriverResetPort.c)
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0009A54 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0010E20 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhBusConnectPdo @ 0x1C002557C (UsbhBusConnectPdo.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003FF64 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042290 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0042B54 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044010 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0044618 (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C0050780 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C0051320 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 *     UsbhResetPortData @ 0x1C0056830 (UsbhResetPortData.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  __int64 v8; // rax

  v5 = a1;
  v6 = (KSPIN_LOCK *)(FdoExt(a1) + 5168);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *(_QWORD *)(PdoExt(a2) + 864) )
  {
    *(_DWORD *)(PdoExt(a2) + 872) = a3;
    Log(v5, 4, 1936287557, a2, 0LL);
    v8 = PdoExt(a2);
    KeSetEvent(*(PRKEVENT *)(v8 + 864), 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
