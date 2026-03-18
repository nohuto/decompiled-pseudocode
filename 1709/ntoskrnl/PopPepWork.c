/*
 * XREFs of PopPepWork @ 0x1400FD200
 * Callers:
 *     PopFxPluginWork @ 0x1400FD120 (PopFxPluginWork.c)
 * Callees:
 *     PopPepStartActivity @ 0x14001AFB0 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x14001EB94 (PopPepGetReadyActivityType.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400FD544 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopPepWork(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // r14d
  int v3; // r13d
  char started; // r12
  __int64 *v5; // rdi
  __int64 v6; // rbx
  REGHANDLE v7; // rsi
  int v8; // esi
  __int64 v9; // rbx
  volatile LONG *v10; // rcx
  int v11; // r10d
  int ReadyActivityType; // r9d
  unsigned int v13; // eax
  _DWORD *v14; // r11
  int v15; // eax
  int v16; // ebp
  int v18; // eax
  int v19; // eax
  volatile signed __int32 *v20; // r11
  __int64 v22; // [rsp+50h] [rbp-58h] BYREF
  __int64 CurrentIrql; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+60h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0;
  started = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  v5 = PopPepLastCheckedDevice;
  if ( PopPepLastCheckedDevice == &PopPepDeviceList )
  {
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&PopPepLastCheckedDevice,
      *PopPepLastCheckedDevice,
      (signed __int64)PopPepLastCheckedDevice);
    v5 = PopPepLastCheckedDevice;
  }
  v6 = v5[4];
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START) )
    {
      v22 = 0LL;
      if ( v6 )
        v22 = *(_QWORD *)(v6 + 48);
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v22;
      EtwWriteEx(v7, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 0;
  while ( 2 )
  {
    v9 = (__int64)v5;
    do
    {
      v24 = v9;
      v10 = (volatile LONG *)(v9 + 64);
      if ( v8 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v10);
        v18 = v3 + 1;
        if ( v8 != 2 )
          v18 = v3;
        v3 = v18;
      }
      else if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v10) )
      {
        goto LABEL_23;
      }
      v11 = *(_DWORD *)(v9 + 120);
      if ( v11 )
      {
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 0, 0);
        if ( ReadyActivityType != 6 )
        {
          started = PopPepStartActivity(v9, 0LL, v9 + 72, ReadyActivityType, (volatile signed __int32 *)(v9 + 120), a1);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
          v16 = 1;
          goto LABEL_17;
        }
      }
      v13 = *(_DWORD *)(v9 + 180);
      v2 = 0;
      if ( v13 )
      {
        v14 = (_DWORD *)(v9 + 288);
        while ( !*v14 )
        {
          ++v2;
          v14 += 50;
          if ( v2 >= v13 )
            goto LABEL_15;
        }
        v19 = PopPepGetReadyActivityType((__int64)(v14 - 12), 1u, 3);
        started = PopPepStartActivity(v9, (__int64)(v20 - 26), (__int64)(v20 - 12), v19, v20, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v16 = 2;
        goto LABEL_17;
      }
LABEL_15:
      if ( v11 )
      {
        v15 = PopPepGetReadyActivityType(v9 + 72, 4u, 5);
        started = PopPepStartActivity(v9, 0LL, v9 + 72, v15, (volatile signed __int32 *)(v9 + 120), a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v16 = 3;
        goto LABEL_17;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
LABEL_23:
      v9 = *(_QWORD *)v9;
      if ( (__int64 *)v9 == &PopPepDeviceList )
        v9 = *(_QWORD *)v9;
    }
    while ( (__int64 *)v9 != v5 );
    if ( (unsigned int)++v8 < 3 )
      continue;
    break;
  }
  v16 = 0;
LABEL_17:
  __writecr8((unsigned __int8)CurrentIrql);
  if ( (__int64 *)v9 != v5 )
    _InterlockedExchange64((volatile __int64 *)&PopPepLastCheckedDevice, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(*(_QWORD *)(v24 + 32), v16, v2, v8, v3);
  return started;
}
