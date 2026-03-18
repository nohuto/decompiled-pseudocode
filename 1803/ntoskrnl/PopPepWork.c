/*
 * XREFs of PopPepWork @ 0x1400789D0
 * Callers:
 *     PopFxPluginWork @ 0x1400777B0 (PopFxPluginWork.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PopPepStartActivity @ 0x140078E00 (PopPepStartActivity.c)
 *     PopPepGetReadyActivityType @ 0x140079784 (PopPepGetReadyActivityType.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140079E34 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
  __int64 v20; // r11
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
      EtwWriteEx(v7, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
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
        ReadyActivityType = PopPepGetReadyActivityType(v9 + 72, 0LL, 0LL);
        if ( ReadyActivityType != 6 )
        {
          started = PopPepStartActivity(v9, 0, (int)v9 + 72, ReadyActivityType, v9 + 120, a1);
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
        v19 = PopPepGetReadyActivityType(v14 - 12, 1LL, 3LL);
        started = PopPepStartActivity(v9, (int)v20 - 104, (int)v20 - 48, v19, v20, a1);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
        v16 = 2;
        goto LABEL_17;
      }
LABEL_15:
      if ( v11 )
      {
        v15 = PopPepGetReadyActivityType(v9 + 72, 4LL, 5LL);
        started = PopPepStartActivity(v9, 0, (int)v9 + 72, v15, v9 + 120, a1);
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
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  PopDiagTraceFxDefaultPepWorkerEnd(*(_QWORD *)(v24 + 32), v16, v2, v8, v3);
  return started;
}
