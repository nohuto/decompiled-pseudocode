/*
 * XREFs of CmpDeleteKeyObject @ 0x1404A97C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     CmpWaitForLateUnloadWorker @ 0x14011FC44 (CmpWaitForLateUnloadWorker.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14047BEE8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1405851A8 (CmpArmDelayDerefKCBWorker.c)
 *     CmpFireCleanupNotifications @ 0x140689914 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x140689994 (CmpFreeCallbackObjectContexts.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14069B148 (CmpKeyEnumStackFreeResumeContext.c)
 */

void __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v4; // r9d
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rax
  ULONG_PTR v7; // rsi
  char v8; // r9
  unsigned int i; // r8d
  signed __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rdi
  struct _PRIVILEGE_SET *v15; // rcx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // edx
  __int64 v18; // rdx
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  ULONG_PTR v21; // rdi
  bool v22; // r14
  char v23; // r13
  _RTL_BALANCED_NODE *v24; // rax
  _RTL_BALANCED_NODE *v25; // r15
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  unsigned __int8 v29; // si
  signed __int32 v30; // eax
  __int64 v31; // rcx
  PVOID **v32; // rdi
  PVOID *v33; // rax
  struct _WORK_QUEUE_ITEM *v34; // rcx
  struct _KEVENT *v35; // rcx
  _QWORD v36[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v37[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v38[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v39[8]; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int8 v40; // [rsp+100h] [rbp+67h]

  v2 = 0;
  memset(v38, 0, sizeof(v38));
  v37[1] = v37;
  v37[0] = v37;
  if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v38[0] = a1;
      LOBYTE(v4) = 1;
      CmpCallCallBacksEx(14, (unsigned int)v38, 0, v4, 25, a1, (__int64)v37);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 56) )
    CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
  v36[1] = v36;
  v5 = v36;
  v36[0] = v36;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v5 = (_QWORD *)v36[0];
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v7 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v7);
        CmpFlushNotify(a1, 0, (__int64)v36);
        CmpUnlockKcb(v7);
      }
      v8 = 0;
LABEL_16:
      for ( i = 0; i < 4; ++i )
      {
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 128), 0LL, a1);
        if ( a1 == v10 )
          goto LABEL_26;
        if ( (unsigned __int64)(v10 - 1) <= 1 )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          v8 = 1;
          goto LABEL_16;
        }
      }
      if ( !v8 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        ExAcquirePushLockExclusiveEx(v11 + 40, 0LL);
        v8 = 1;
        *(_QWORD *)(v11 + 48) = KeGetCurrentThread();
      }
      v12 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v12 + 8) != a1 + 32 || (v13 = *(_QWORD **)(a1 + 40), *v13 != a1 + 32) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
LABEL_26:
      if ( v8 )
      {
        v21 = *(_QWORD *)(a1 + 8);
        v22 = (*(_DWORD *)(v21 + 4) & 0x80000) != 0;
        if ( *(struct _KTHREAD **)(v21 + 48) == KeGetCurrentThread() )
          *(_QWORD *)(v21 + 48) = 0LL;
        else
          _InterlockedDecrement((volatile signed __int32 *)(v21 + 48));
        ExReleasePushLockEx(v21 + 40, 0LL);
        if ( v22 && (*(_DWORD *)(v21 + 4) & 0x80000) != 0 )
          CmpFreeKeyControlBlock(v21);
      }
      v14 = *(_QWORD *)(v7 + 24);
      if ( *(_BYTE *)(v14 + 4112) == 1 )
      {
        v2 = 1;
        *(_DWORD *)(v14 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5500), 1u) & 0x7F) + 5504) = 16;
      }
      v15 = *(struct _PRIVILEGE_SET **)(a1 + 88);
      if ( v15 )
        CmpKeyEnumStackFreeResumeContext(v15);
      if ( ((*(_DWORD *)(v7 + 176) & 0x40000) == 0 || *(_DWORD *)v7 != 1) && (*(_DWORD *)(v7 + 4) & 0x20) == 0 )
      {
        v16 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 <= 1u )
        {
LABEL_54:
          v23 = 0;
          v24 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0);
          v25 = v24;
          CurrentIrql = KeGetCurrentIrql();
          v40 = CurrentIrql;
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
          {
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v24);
            CurrentIrql = v40;
          }
          if ( v25 )
            BYTE2(v25[1].Left) |= 1u;
          *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
          *(_BYTE *)(v7 + 56) |= 1u;
          v27 = (_QWORD *)(v7 + 216);
          v28 = (_QWORD *)qword_140387058;
          if ( *(__int64 **)qword_140387058 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v20 = CmpDelayDerefKCBWorkItemActive == 0;
          *v27 = &CmpDelayDerefKCBListHead;
          v27[1] = v28;
          *v28 = v27;
          qword_140387058 = (__int64)v27;
          if ( v20 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v23 = 1;
          }
          v29 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
          *(&CmpDelayDerefKCBLock + 1) = 0LL;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
          if ( v30 )
            ExpReleaseFastMutexContended((__int64)&CmpDelayDerefKCBLock, v30);
          __writecr8(v29);
          KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
          if ( v23 )
            CmpArmDelayDerefKCBWorker();
        }
        else
        {
          while ( 1 )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)v7, v16 - 1, v16);
            if ( v16 == v17 )
              break;
            if ( v16 <= 1 )
              goto LABEL_54;
          }
        }
        goto LABEL_35;
      }
LABEL_72:
      CmpDereferenceKeyControlBlock(v7);
LABEL_35:
      if ( v2 == 1 )
      {
        *(_DWORD *)(v14 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5500), 1u) & 0x7F) + 5504) = 18;
        CmpDoQueueLateUnloadWorker(v14);
      }
      v5 = (_QWORD *)v36[0];
    }
  }
  else if ( v7 )
  {
    v14 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)(v14 + 4112) == 1 )
    {
      v2 = 1;
      *(_DWORD *)(v14 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5500), 1u) & 0x7F) + 5504) = 17;
    }
    goto LABEL_72;
  }
  if ( CmpPuntBoot )
    goto LABEL_41;
  ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
  KeLeaveCriticalRegion();
  LOBYTE(v18) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v18);
  while ( 1 )
  {
    v5 = (_QWORD *)v36[0];
LABEL_41:
    if ( v5 == v36 )
      break;
    if ( (_QWORD *)v5[1] != v36 || (v31 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    v36[0] = *v5;
    v32 = (PVOID **)(v5 - 2);
    *(_QWORD *)(v31 + 8) = v36;
    if ( (unsigned __int16)*((_DWORD *)v5 + 10) != 3 )
    {
      v35 = (struct _KEVENT *)*v32[8];
LABEL_91:
      KeSetEvent(v35, 0, 0);
      ObfDereferenceObject(*v32[8]);
      goto LABEL_92;
    }
    v33 = v32[8];
    v34 = (struct _WORK_QUEUE_ITEM *)v33[1];
    if ( v34 )
      ExQueueWorkItem(v34, *((WORK_QUEUE_TYPE *)v33 + 4));
    v35 = (struct _KEVENT *)*v32[8];
    if ( v35 )
      goto LABEL_91;
LABEL_92:
    CmpFreePostBlock(v32);
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v37[0] != v37 )
  {
    memset(&v39[1], 0, 0x30uLL);
    v39[0] = 0LL;
    v39[2] = v38;
    LODWORD(v39[1]) = 0;
    v37[2] = v39;
    LODWORD(v39[3]) = 0;
    v37[3] = 0LL;
    CmpCallCallBacksEx(25, (unsigned int)v39, 0, 0, 25, 0LL, (__int64)v37);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker();
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v19);
  }
}
