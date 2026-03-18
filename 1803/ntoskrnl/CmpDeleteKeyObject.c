/*
 * XREFs of CmpDeleteKeyObject @ 0x14059F520
 * Callers:
 *     <none>
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400A1C88 (CmpWaitForLateUnloadWorker.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14049BB4C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpFreePostBlock @ 0x1404E224C (CmpFreePostBlock.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     CmpFlushNotify @ 0x14054E0F0 (CmpFlushNotify.c)
 *     CmpArmDelayDerefKCBWorker @ 0x140574F50 (CmpArmDelayDerefKCBWorker.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x1406EDD10 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x1406EDD90 (CmpFreeCallbackObjectContexts.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1406FFD38 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rax
  ULONG_PTR v7; // rsi
  __int64 i; // r8
  __int64 v9; // rdx
  signed __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct _PRIVILEGE_SET *v14; // rcx
  unsigned __int32 v15; // eax
  unsigned __int32 v16; // edx
  __int64 v17; // rdx
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  char v20; // r15
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  unsigned __int8 v23; // si
  signed __int32 v24; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  PVOID **v30; // rdi
  PVOID *v31; // r9
  struct _WORK_QUEUE_ITEM *v32; // rcx
  struct _KEVENT *v33; // rcx
  _QWORD v34[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v35[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v36[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v37[8]; // [rsp+90h] [rbp-9h] BYREF

  v2 = 0;
  memset(v36, 0, sizeof(v36));
  v35[1] = v35;
  v35[0] = v35;
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v36[0] = a1;
      LOBYTE(v3) = 1;
      CmpCallCallBacksEx(14, (unsigned int)v36, 0, v3, 25, a1, (__int64)v35);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 56) )
    CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
  v34[1] = v34;
  v5 = v34;
  v34[0] = v34;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v5 = (_QWORD *)v34[0];
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v7 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v7);
        CmpFlushNotify(a1, 0LL, v34, v25);
        CmpUnlockKcb(v7, v26, v27, v28);
      }
      LOBYTE(v3) = 0;
LABEL_16:
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(a1 + 8) + 8LL * (unsigned int)i;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 128), 0LL, a1);
        if ( a1 == v10 )
          goto LABEL_26;
        if ( (unsigned __int64)(v10 - 1) <= 1 )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          LOBYTE(v3) = 1;
          goto LABEL_16;
        }
      }
      if ( !(_BYTE)v3 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        ExAcquirePushLockExclusiveEx(v11 + 40, 0LL);
        LOBYTE(v3) = 1;
        *(_QWORD *)(v11 + 48) = KeGetCurrentThread();
      }
      v12 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v12 + 8) != a1 + 32 || (v9 = *(_QWORD *)(a1 + 40), *(_QWORD *)v9 != a1 + 32) )
        __fastfail(3u);
      *(_QWORD *)v9 = v12;
      *(_QWORD *)(v12 + 8) = v9;
LABEL_26:
      if ( (_BYTE)v3 )
        CmpUnlockKcb(*(_QWORD *)(a1 + 8), v9, i, v3);
      v13 = *(_QWORD *)(v7 + 24);
      if ( *(_BYTE *)(v13 + 2936) == 1 )
      {
        v2 = 1;
        *(_DWORD *)(v13 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4292), 1u) & 0x7F) + 4296) = 16;
      }
      v14 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v14 )
        CmpKeyEnumStackFreeResumeContext(v14);
      if ( ((*(_DWORD *)(v7 + 176) & 0x40000) == 0 || *(_DWORD *)v7 != 1) && (*(_DWORD *)(v7 + 4) & 0x20) == 0 )
      {
        v15 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 <= 1u )
        {
LABEL_51:
          v20 = 0;
          ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
          *(_BYTE *)(v7 + 56) |= 1u;
          v21 = (_QWORD *)qword_1403CA598;
          v22 = (_QWORD *)(v7 + 216);
          if ( *(__int64 **)qword_1403CA598 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v19 = CmpDelayDerefKCBWorkItemActive == 0;
          *v22 = &CmpDelayDerefKCBListHead;
          v22[1] = v21;
          *v21 = v22;
          qword_1403CA598 = (__int64)v22;
          if ( v19 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v20 = 1;
          }
          v23 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
          *(&CmpDelayDerefKCBLock + 1) = 0LL;
          v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
          if ( v24 )
            ExpReleaseFastMutexContended((__int64)&CmpDelayDerefKCBLock, v24);
          __writecr8(v23);
          KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
          if ( v20 )
            CmpArmDelayDerefKCBWorker();
        }
        else
        {
          while ( 1 )
          {
            v16 = v15;
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)v7, v15 - 1, v15);
            if ( v15 == v16 )
              break;
            if ( v15 <= 1 )
              goto LABEL_51;
          }
        }
        goto LABEL_36;
      }
LABEL_65:
      CmpDereferenceKeyControlBlock(v7);
LABEL_36:
      if ( v2 == 1 )
      {
        *(_DWORD *)(v13 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4292), 1u) & 0x7F) + 4296) = 18;
        CmpDoQueueLateUnloadWorker(v13);
      }
      v5 = (_QWORD *)v34[0];
    }
  }
  else if ( v7 )
  {
    v13 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v13 + 2936) == 1 )
    {
      v2 = 1;
      *(_DWORD *)(v13 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4292), 1u) & 0x7F) + 4296) = 17;
    }
    goto LABEL_65;
  }
  if ( CmpPuntBoot )
    goto LABEL_42;
  ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
  KeLeaveCriticalRegion();
  LOBYTE(v17) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v17);
  while ( 1 )
  {
    v5 = (_QWORD *)v34[0];
LABEL_42:
    if ( v5 == v34 )
      break;
    if ( (_QWORD *)v5[1] != v34 || (v29 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    v34[0] = *v5;
    v30 = (PVOID **)(v5 - 2);
    *(_QWORD *)(v29 + 8) = v34;
    v31 = (PVOID *)v5[6];
    if ( (unsigned __int16)*((_DWORD *)v5 + 10) != 3 )
    {
      v33 = (struct _KEVENT *)*v31;
LABEL_81:
      KeSetEvent(v33, 0, 0);
      ObfDereferenceObject(*v30[8]);
      goto LABEL_82;
    }
    v32 = (struct _WORK_QUEUE_ITEM *)v31[1];
    if ( v32 )
    {
      ExQueueWorkItem(v32, *((WORK_QUEUE_TYPE *)v31 + 4));
      v31 = v30[8];
    }
    v33 = (struct _KEVENT *)*v31;
    if ( *v31 )
      goto LABEL_81;
LABEL_82:
    CmpFreePostBlock(v30);
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v35[0] != v35 )
  {
    memset(v37, 0, 0x38uLL);
    v37[0] = 0LL;
    v37[2] = v36;
    LODWORD(v37[1]) = 0;
    v35[2] = v37;
    LODWORD(v37[3]) = 0;
    v35[3] = 0LL;
    CmpCallCallBacksEx(25, (unsigned int)v37, 0, 0, 25, 0LL, (__int64)v35);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker();
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable++ == -1;
  if ( v19
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
