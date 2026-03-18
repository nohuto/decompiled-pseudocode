/*
 * XREFs of PsQueryRuntimeProcess @ 0x1404EC620
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspSetJobTimeLimitCallback @ 0x1406E1EF0 (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v5; // rbp
  unsigned int v6; // edi
  int v7; // esi
  _QWORD **v8; // rbx
  _QWORD *i; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 1712);
  ExAcquirePushLockSharedEx(a1 + 1712, 0LL);
  v6 = *(_DWORD *)(a1 + 620);
  v7 = *(_DWORD *)(a1 + 624);
  v8 = (_QWORD **)(a1 + 1160);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v6 += *((_DWORD *)i - 261);
    v7 += *((_DWORD *)i - 241);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  result = v6;
  *a2 = v7;
  return result;
}
