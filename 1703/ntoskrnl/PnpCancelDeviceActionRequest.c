/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x1401F9C28
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x1406A8DFC (PiQueueDeviceRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  *(_BYTE *)(a1 + 88) = 1;
  ExReleasePushLockEx(a1 + 80, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
