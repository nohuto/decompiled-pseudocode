/*
 * XREFs of VrpIncrementSiloCount @ 0x1406792EC
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     CmpRegisterCallbackInternal @ 0x1405D2288 (CmpRegisterCallbackInternal.c)
 */

__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v2; // eax
  const void *v4[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gActiveSilosLock, 0LL);
  v2 = gNumActiveSilos;
  if ( gNumActiveSilos )
    goto LABEL_6;
  v4[1] = L"189900";
  LODWORD(v4[0]) = 917516;
  if ( !gDriverObject )
  {
    v1 = -1073741583;
    goto LABEL_7;
  }
  v1 = CmpRegisterCallbackInternal((__int64)RegistryCallback, 0LL, v4, 0, 1u, &gCallbackCookie);
  if ( v1 >= 0 )
  {
    v2 = gNumActiveSilos;
LABEL_6:
    gNumActiveSilos = v2 + 1;
  }
LABEL_7:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&gActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&gActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&gActiveSilosLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
