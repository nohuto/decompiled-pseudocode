/*
 * XREFs of PopFxRemoveAcpiDevice @ 0x14027620C
 * Callers:
 *     PopFxAcpiUnregisterDevice @ 0x140283158 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall PopFxRemoveAcpiDevice(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v6 = (__int64 *)(a2 + 184);
  v7 = *v6;
  if ( *(__int64 **)(*v6 + 8) != v6 || (v8 = (__int64 *)v6[1], (__int64 *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock, v7, v4, v5);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
