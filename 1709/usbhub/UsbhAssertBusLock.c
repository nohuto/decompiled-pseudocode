/*
 * XREFs of UsbhAssertBusLock @ 0x1C0043398
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0027D3C (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C0051458 (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0051900 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C00520E0 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C0052250 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C0052320 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0052400 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0052760 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C0052850 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C00528C0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C00529A0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0052CC0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
