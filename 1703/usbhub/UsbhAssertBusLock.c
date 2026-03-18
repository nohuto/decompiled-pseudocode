/*
 * XREFs of UsbhAssertBusLock @ 0x1C0042550
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0027A44 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C0050694 (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050B40 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C0051320 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C0051490 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C0051560 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0051640 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C00517A0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C00519A0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C0051A90 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C0051B00 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051BE0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D40 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051F00 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
