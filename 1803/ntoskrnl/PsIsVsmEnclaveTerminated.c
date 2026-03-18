/*
 * XREFs of PsIsVsmEnclaveTerminated @ 0x14077FB70
 * Callers:
 *     MiCanDeleteEnclave @ 0x140263990 (MiCanDeleteEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

bool __fastcall PsIsVsmEnclaveTerminated(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  bool v8; // si

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (volatile signed __int64 *)(a1 + 48);
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v7 = *(_DWORD *)(a1 + 44);
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
    v7 = *(_DWORD *)(a1 + 44);
  }
  v8 = v7 == 2;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  return v8;
}
