/*
 * XREFs of PopFxInsertDevice @ 0x14016ED34
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1406146C0 (PoFxRegisterCoreDevice.c)
 *     PopFxRegisterDevice @ 0x140614B24 (PopFxRegisterDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

_QWORD *__fastcall PopFxInsertDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  char v9; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  v8 = (_QWORD *)qword_1403AB3F8;
  if ( *(ULONG_PTR **)qword_1403AB3F8 != &PopFxDeviceList )
    __fastfail(3u);
  *a3 = &PopFxDeviceList;
  a3[1] = v8;
  *v8 = a3;
  qword_1403AB3F8 = (__int64)a3;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
