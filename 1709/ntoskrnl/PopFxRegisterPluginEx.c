/*
 * XREFs of PopFxRegisterPluginEx @ 0x14023EB10
 * Callers:
 *     PoFxRegisterPluginEx @ 0x14023D840 (PoFxRegisterPluginEx.c)
 *     PoFxRegisterPlugin @ 0x1406F7EA0 (PoFxRegisterPlugin.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeInitializeQueue @ 0x14011C630 (KeInitializeQueue.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x1405E82B4 (PopFxCreateEmergencyWorkerThread.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140703AB8 (PopDiagTraceFxPluginRegistration.c)
 */

__int64 __fastcall PopFxRegisterPluginEx(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int EmergencyWorkerThread; // ebx
  bool v8; // cf
  __int16 v10; // ax
  unsigned int v11; // r13d
  __int64 v12; // r12
  char *PoolWithTag; // rax
  char *v14; // rdi
  __int64 v15; // r9
  char *v16; // r8
  char *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+60h] [rbp+18h]

  v3 = *a3;
  if ( *a3 > 3u )
    return (unsigned int)-1073700860;
  switch ( v3 )
  {
    case 3u:
      v8 = a3[1] < 0x60u;
      break;
    case 2u:
      v8 = a3[1] < 0x58u;
      break;
    case 0u:
      return (unsigned int)-1073741811;
    default:
      goto LABEL_11;
  }
  if ( v8 )
    return (unsigned int)-1073741811;
LABEL_11:
  if ( a3[1] < 0x38u )
    return (unsigned int)-1073741811;
  v10 = *a1;
  if ( *a1 > 3u )
    return (unsigned int)-1073700859;
  if ( v10 == 3 )
  {
    if ( a1[1] < 0x20u || !*((_QWORD *)a1 + 1) && !*((_QWORD *)a1 + 3) )
      return (unsigned int)-1073741811;
  }
  else if ( v10 != 2 || a1[1] < 0x18u || !*((_QWORD *)a1 + 1) )
  {
    return (unsigned int)-1073741811;
  }
  v11 = (a2 & 1) != 0 ? 4 : 1;
  v12 = v11;
  v23 = (56 * v11 + 128 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 136LL * v11 + v23, 0x4D584650u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 136LL * v11 + v23);
    v15 = v11;
    v16 = &v14[v23];
    v17 = &v14[v23];
    v18 = (__int64)&v14[v23 + 65];
    do
    {
      *(_DWORD *)v17 = 0;
      *v17 = 8;
      *(_DWORD *)(v18 - 61) = 0;
      *(_QWORD *)(v18 - 49) = v18 - 57;
      *(_QWORD *)(v18 - 57) = v18 - 57;
      *(_QWORD *)(v18 - 9) = 0LL;
      *(_QWORD *)(v18 - 41) = 0LL;
      *(_QWORD *)(v18 + 31) = v17;
      v17 += 136;
      *(_QWORD *)(v18 + 23) = PopFxWorkOrderWatchdog;
      *(_DWORD *)(v18 - 1) = 275;
      *(_QWORD *)(v18 + 55) = 0LL;
      *(_QWORD *)(v18 + 15) = 0LL;
      v18 += 136LL;
      --v15;
    }
    while ( v15 );
    *((_DWORD *)v14 + 30) = v11;
    v19 = v14 + 128;
    do
    {
      v19[5] = v14;
      v19[2] = PopFxPluginWork;
      v19[3] = v19;
      *v19 = 0LL;
      v19[6] = v16;
      *((_QWORD *)v16 + 16) = v19;
      v16 += 136;
      v19 += 7;
      --v12;
    }
    while ( v12 );
    KeInitializeQueue((PRKQUEUE)(v14 + 32), 1u);
    EmergencyWorkerThread = PopFxCreateEmergencyWorkerThread(v14 + 32);
    if ( EmergencyWorkerThread >= 0 )
    {
      *((_DWORD *)v14 + 4) = *a1;
      *((_QWORD *)v14 + 3) = a2;
      *((_QWORD *)v14 + 12) = *((_QWORD *)a1 + 1);
      *((_QWORD *)v14 + 13) = *((_QWORD *)a1 + 2);
      if ( *a1 >= 3u )
        *((_QWORD *)v14 + 14) = *((_QWORD *)a1 + 3);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopFxPluginLock, 0LL);
      v21 = (_QWORD *)PopFxDeviceRegisterHead;
      v22 = *(_QWORD *)PopFxDeviceRegisterHead;
      if ( *(_QWORD *)(*(_QWORD *)PopFxDeviceRegisterHead + 8LL) != PopFxDeviceRegisterHead )
        __fastfail(3u);
      *((_QWORD *)v14 + 1) = PopFxDeviceRegisterHead;
      *(_QWORD *)v14 = v22;
      *(_QWORD *)(v22 + 8) = v14;
      *v21 = v14;
      if ( (a2 & 0x80000000) != 0 )
        PopFxDeviceRegisterHead = (__int64)v14;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxPluginLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PopFxPluginLock);
      KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PopDiagTraceFxPluginRegistration(v14, a2, 0LL);
      v8 = *a3 < 2u;
      *((_QWORD *)a3 + 2) = PopFxRequestWorker;
      *((_QWORD *)a3 + 6) = PopFxTransitionCriticalResource;
      *((_QWORD *)a3 + 1) = v14;
      *((_QWORD *)a3 + 4) = 0LL;
      *((_QWORD *)a3 + 5) = 0LL;
      *((_QWORD *)a3 + 3) = 0LL;
      if ( !v8 )
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
      ExFreePoolWithTag(v14, 0x4D584650u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)EmergencyWorkerThread;
}
