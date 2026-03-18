/*
 * XREFs of PspRemoveEnclaveThreadWait @ 0x14077FF5C
 * Callers:
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspRemoveEnclaveThreadWait(__int64 a1, __int64 *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 **v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a1 + 112);
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v10 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v10 + 8) != a2 || (v11 = (__int64 **)a2[1], *v11 != a2) )
      __fastfail(3u);
    *v11 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  else
  {
    a3 = *((_DWORD *)a2 + 10);
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return a3;
}
