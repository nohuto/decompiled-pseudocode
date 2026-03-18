/*
 * XREFs of PopFxRegisterPluginEx @ 0x14022B7A0
 * Callers:
 *     PoFxRegisterPluginEx @ 0x14022A750 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x1406C74C0 (PoFxRegisterPlugin.c)
 * Callees:
 *     KeInitializeQueue @ 0x140024C20 (KeInitializeQueue.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405CF5DC (PopFxCreateEmergencyWorkerThread.c)
 *     PopDiagTraceFxPluginRegistration @ 0x1406CD864 (PopDiagTraceFxPluginRegistration.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int EmergencyWorkerThread; // ebx
  __int16 v8; // ax
  unsigned int v10; // ebx
  __int64 v11; // r13
  char *PoolWithTag; // rax
  char *v13; // rsi
  char *v14; // r8
  char *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v20; // rax
  __int64 v21; // rdx
  bool v22; // cf
  unsigned __int64 v23; // [rsp+60h] [rbp+18h]

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  if ( v3 == 3 && a3[1] < 0x60u || v3 == 2 && a3[1] < 0x58u || !v3 || a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v8 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v8 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v8 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (a2 & 1) != 0 ? 4 : 1;
  v11 = v10;
  v23 = (56 * v10 + 128 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 136LL * v10 + v23, 0x4D584650u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 136LL * v10 + v23);
    v14 = &v13[v23];
    v15 = &v13[v23];
    v16 = (__int64)&v13[v23 + 65];
    do
    {
      *(_DWORD *)v15 = 0;
      *v15 = 8;
      *(_DWORD *)(v16 - 61) = 0;
      *(_QWORD *)(v16 - 49) = v16 - 57;
      *(_QWORD *)(v16 - 57) = v16 - 57;
      *(_QWORD *)(v16 - 9) = 0LL;
      *(_QWORD *)(v16 - 41) = 0LL;
      *(_QWORD *)(v16 + 31) = v15;
      v15 += 136;
      *(_QWORD *)(v16 + 23) = PopFxWorkOrderWatchdog;
      *(_DWORD *)(v16 - 1) = 275;
      *(_QWORD *)(v16 + 55) = 0LL;
      *(_QWORD *)(v16 + 15) = 0LL;
      v16 += 136LL;
      --v11;
    }
    while ( v11 );
    *((_DWORD *)v13 + 30) = v10;
    v17 = v13 + 128;
    v18 = v10;
    do
    {
      v17[5] = v13;
      v17[2] = PopFxPluginWork;
      v17[3] = v17;
      *v17 = 0LL;
      v17[6] = v14;
      *((_QWORD *)v14 + 16) = v17;
      v14 += 136;
      v17 += 7;
      --v18;
    }
    while ( v18 );
    KeInitializeQueue((PRKQUEUE)(v13 + 32), 1u);
    EmergencyWorkerThread = PopFxCreateEmergencyWorkerThread(v13 + 32);
    if ( EmergencyWorkerThread >= 0 )
    {
      *((_DWORD *)v13 + 4) = *a1;
      *((_QWORD *)v13 + 3) = a2;
      *((_QWORD *)v13 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v13 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v13 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxPluginLock, 0LL);
      v20 = (_QWORD *)PopFxDeviceRegisterHead;
      v21 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *((_QWORD *)v13 + 1) = PopFxDeviceRegisterHead;
      *(_QWORD *)v13 = v21;
      *(_QWORD *)(v21 + 8) = v13;
      *v20 = v13;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v13;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v13, a2, 0LL);
      v22 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v13;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v22 )
      {
        *((_QWORD *)a3 + 7) = PopFxProcessorIdleVeto;
        *((_QWORD *)a3 + 8) = PopFxPlatformIdleVeto;
        *((_QWORD *)a3 + 9) = PopFxUpdateProcessorIdleState;
        *((_QWORD *)a3 + 10) = PopFxUpdatePlatformIdleState;
      }
      if ( *a1 >= 3u )
      {
        *((_QWORD *)a3 + 11) = PopFxRequestCommon;
        if ( *a1 == 3 )
        {
          if ( *((_QWORD *)a1 + 3) )
            PopFxAcpiPepRegistered = 1;
        }
      }
      return 0;
    }
    else
    {
      ExFreePoolWithTag(v13, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)EmergencyWorkerThread;
}
