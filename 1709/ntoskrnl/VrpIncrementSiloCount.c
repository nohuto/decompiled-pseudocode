/*
 * XREFs of VrpIncrementSiloCount @ 0x1406A330C
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     CmpRegisterCallbackInternal @ 0x1405ECF38 (CmpRegisterCallbackInternal.c)
 */

__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  const void *v3[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( VrpNumActiveSilos )
    goto LABEL_5;
  v3[1] = L"189900";
  LODWORD(v3[0]) = 917516;
  if ( !VrpDriverObject )
  {
    v1 = -1073741583;
    goto LABEL_6;
  }
  v1 = CmpRegisterCallbackInternal((__int64)VrpRegistryCallback, 0LL, v3, 0, 1u, &VrpCallbackCookie);
  if ( v1 >= 0 )
LABEL_5:
    ++VrpNumActiveSilos;
LABEL_6:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
