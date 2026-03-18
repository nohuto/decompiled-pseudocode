/*
 * XREFs of UsbhReset2CycleDevice @ 0x1C0052850
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     UsbhAssertBusLock @ 0x1C0043398 (UsbhAssertBusLock.c)
 *     UsbhPortCycle @ 0x1C0051A30 (UsbhPortCycle.c)
 */

__int64 __fastcall UsbhReset2CycleDevice(__int64 a1, __int64 a2, __int64 a3)
{
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return UsbhPortCycle(a1, a2, a3);
}
