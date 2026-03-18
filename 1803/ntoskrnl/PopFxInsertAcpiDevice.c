/*
 * XREFs of PopFxInsertAcpiDevice @ 0x1402753A0
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140283060 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v8 = (_QWORD *)qword_1403AB3E8;
  v9 = (_QWORD *)(a3 + 184);
  if ( *(__int64 **)qword_1403AB3E8 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  *v9 = &PopFxAcpiDeviceList;
  v9[1] = v8;
  *v8 = v9;
  qword_1403AB3E8 = (__int64)v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
