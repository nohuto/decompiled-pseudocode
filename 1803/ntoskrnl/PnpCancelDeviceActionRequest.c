/*
 * XREFs of PnpCancelDeviceActionRequest @ 0x14023C514
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14073B9A0 (PiQueueDeviceRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PnpCancelDeviceActionRequest(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  *(_BYTE *)(a1 + 88) = 1;
  ExReleasePushLockEx(a1 + 80, 0LL, v3, v4);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
