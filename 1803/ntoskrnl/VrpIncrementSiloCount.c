/*
 * XREFs of VrpIncrementSiloCount @ 0x140707988
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpRegisterCallbackInternal @ 0x140651468 (CmpRegisterCallbackInternal.c)
 */

__int64 VrpIncrementSiloCount()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  const void *v6[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpActiveSilosLock, 0LL);
  if ( VrpNumActiveSilos )
    goto LABEL_5;
  v6[1] = L"189900";
  LODWORD(v6[0]) = 917516;
  if ( !VrpDriverObject )
  {
    v1 = -1073741583;
    goto LABEL_6;
  }
  v1 = CmpRegisterCallbackInternal((__int64)VrpRegistryCallback, 0LL, v6, 0, 1u, &VrpCallbackCookie);
  if ( v1 >= 0 )
LABEL_5:
    ++VrpNumActiveSilos;
LABEL_6:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpActiveSilosLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&VrpActiveSilosLock, v2, v3, v4);
  KeAbPostRelease((ULONG_PTR)&VrpActiveSilosLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
