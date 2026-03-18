/*
 * XREFs of UsbhLogSignalDriverResetEvent @ 0x1C0007F24
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0009A54 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003FF64 (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhLogSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  int v3; // edi
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bl

  v3 = a1;
  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 4944);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  Log(v3, 16, 1685213779, *(_DWORD *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  KeSetEvent((PRKEVENT)(a2 + 824), 0, 0);
  KeReleaseSpinLock(v4, v5);
  return 1LL;
}
