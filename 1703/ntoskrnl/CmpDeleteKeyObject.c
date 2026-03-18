/*
 * XREFs of CmpDeleteKeyObject @ 0x140506F30
 * Callers:
 *     <none>
 * Callees:
 *     CmpWaitForLateUnloadWorker @ 0x14006BCD0 (CmpWaitForLateUnloadWorker.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExpReleaseFastMutexContended @ 0x140111A5C (ExpReleaseFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14011C88C (ExpAcquireFastMutexContended.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14044CCA8 (CmpArmDelayDerefKCBWorker.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14048D310 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpFlushNotify @ 0x1404CB670 (CmpFlushNotify.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x140660984 (CmpFireCleanupNotifications.c)
 *     CmpFreeCallbackObjectContexts @ 0x140660A04 (CmpFreeCallbackObjectContexts.c)
 */

__int64 __fastcall CmpDeleteKeyObject(__int64 a1)
{
  char v2; // r12
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r9d
  __int64 *v6; // rax
  struct _KTHREAD *v7; // rax
  ULONG_PTR v8; // rdi
  char v9; // r9
  unsigned int i; // r8d
  signed __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // edx
  __int64 v18; // rdx
  struct _KTHREAD *v19; // rcx
  char v20; // r13
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r15
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  bool v27; // zf
  unsigned __int8 v28; // di
  signed __int32 v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  struct _WORK_QUEUE_ITEM *v33; // rcx
  struct _KEVENT *v34; // rcx
  __int64 v35[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v36[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v38[8]; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int8 v39; // [rsp+100h] [rbp+67h]

  v2 = 0;
  memset(v37, 0, sizeof(v37));
  v36[1] = v36;
  v36[0] = v36;
  result = *(unsigned int *)(a1 + 48);
  if ( (result & 4) != 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount )
  {
    if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v37[0] = a1;
      LOBYTE(v5) = 1;
      CmpCallCallBacksEx(14, (unsigned int)v37, 0, v5, 25, a1, (__int64)v36);
      if ( *(_DWORD *)a1 == 1803104306 && *(_QWORD *)(a1 + 72) != a1 + 72 )
      {
        CmpFireCleanupNotifications(a1);
        CmpFreeCallbackObjectContexts(a1);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 56) )
    CmpTransDereferenceTransaction(*(_QWORD *)(a1 + 56));
  v35[1] = (__int64)v35;
  v6 = v35;
  v35[0] = (__int64)v35;
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v6 = (__int64 *)v35[0];
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)a1 == 1803104306 )
  {
    if ( v8 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        CmpLockKcbExclusive(v8);
        CmpFlushNotify(a1, 0LL, v35);
        CmpUnlockKcb(v8);
      }
      v9 = 0;
LABEL_16:
      for ( i = 0; i < 4; ++i )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8LL * i + 128), 0LL, a1);
        if ( a1 == v11 )
          goto LABEL_28;
        if ( (unsigned __int64)(v11 - 1) <= 1 )
        {
          CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
          v9 = 1;
          goto LABEL_16;
        }
      }
      if ( !v9 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        if ( (*(_DWORD *)(v12 + 4) & 0x100000) != 0 )
          *(_DWORD *)(v12 + 60) = CmpLockTableAdd(*(_QWORD *)(a1 + 8), 1);
        ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
        v9 = 1;
        *(_QWORD *)(v12 + 48) = KeGetCurrentThread();
      }
      v13 = *(_QWORD *)(a1 + 32);
      v14 = *(_QWORD **)(a1 + 40);
      if ( *(_QWORD *)(v13 + 8) != a1 + 32 || *v14 != a1 + 32 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
LABEL_28:
      if ( v9 )
        CmpUnlockKcb(*(_QWORD *)(a1 + 8));
      v15 = *(_QWORD *)(v8 + 24);
      if ( *(_BYTE *)(v15 + 4112) == 1 )
      {
        v2 = 1;
        *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 5500), 1u) & 0x7F) + 5504) = 16;
      }
      if ( ((*(_DWORD *)(v8 + 176) & 0x40000) == 0 || *(_DWORD *)v8 != 1) && (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
      {
        v16 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 <= 1u )
        {
LABEL_51:
          v20 = 0;
          v21 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL);
          v23 = v21;
          CurrentIrql = KeGetCurrentIrql();
          v39 = CurrentIrql;
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0) )
          {
            ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v21, v22);
            CurrentIrql = v39;
          }
          if ( v23 )
            *(_BYTE *)(v23 + 26) |= 1u;
          *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
          *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
          *(_BYTE *)(v8 + 56) |= 1u;
          v25 = (_QWORD *)(v8 + 216);
          v26 = (_QWORD *)qword_14036B0B8;
          if ( *(__int64 **)qword_14036B0B8 != &CmpDelayDerefKCBListHead )
            __fastfail(3u);
          v27 = CmpDelayDerefKCBWorkItemActive == 0;
          *v25 = &CmpDelayDerefKCBListHead;
          v25[1] = v26;
          *v26 = v25;
          qword_14036B0B8 = (__int64)v25;
          if ( v27 )
          {
            CmpDelayDerefKCBWorkItemActive = 1;
            v20 = 1;
          }
          v28 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
          *(&CmpDelayDerefKCBLock + 1) = 0LL;
          v29 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
          if ( v29 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v29);
          __writecr8(v28);
          KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
          if ( v20 )
            CmpArmDelayDerefKCBWorker();
        }
        else
        {
          while ( 1 )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange((volatile signed __int32 *)v8, v16 - 1, v16);
            if ( v16 == v17 )
              break;
            if ( v16 <= 1 )
              goto LABEL_51;
          }
        }
        goto LABEL_36;
      }
LABEL_69:
      CmpDereferenceKeyControlBlock(v8);
LABEL_36:
      if ( v2 == 1 )
      {
        *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 5500), 1u) & 0x7F) + 5504) = 18;
        CmpDoQueueLateUnloadWorker(v15);
      }
      v6 = (__int64 *)v35[0];
    }
  }
  else if ( v8 )
  {
    v15 = *(_QWORD *)(v8 + 24);
    if ( *(_BYTE *)(v15 + 4112) == 1 )
    {
      v2 = 1;
      *(_DWORD *)(v15 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 5500), 1u) & 0x7F) + 5504) = 17;
    }
    goto LABEL_69;
  }
  if ( CmpPuntBoot )
    goto LABEL_42;
  ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
  KeLeaveCriticalRegion();
  LOBYTE(v18) = 1;
  PsBoostThreadIo((__int64)KeGetCurrentThread(), v18);
  while ( 1 )
  {
    v6 = (__int64 *)v35[0];
LABEL_42:
    if ( v6 == v35 )
      break;
    v30 = *v6;
    if ( (__int64 *)v6[1] != v35 || *(__int64 **)(v30 + 8) != v6 )
      __fastfail(3u);
    v35[0] = *v6;
    v31 = (__int64)(v6 - 2);
    *(_QWORD *)(v30 + 8) = v35;
    if ( (unsigned __int16)*((_DWORD *)v6 + 10) != 3 )
    {
      v34 = **(struct _KEVENT ***)(v31 + 64);
LABEL_85:
      KeSetEvent(v34, 0, 0);
      ObfDereferenceObject(**(PVOID **)(v31 + 64));
      goto LABEL_86;
    }
    v32 = *(_QWORD *)(v31 + 64);
    v33 = *(struct _WORK_QUEUE_ITEM **)(v32 + 8);
    if ( v33 )
      ExQueueWorkItem(v33, *(WORK_QUEUE_TYPE *)(v32 + 16));
    v34 = **(struct _KEVENT ***)(v31 + 64);
    if ( v34 )
      goto LABEL_85;
LABEL_86:
    CmpFreePostBlock(v31);
  }
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v36[0] != v36 )
  {
    memset(&v38[1], 0, 0x30uLL);
    v38[0] = 0LL;
    v38[2] = v37;
    LODWORD(v38[1]) = 0;
    v36[2] = v38;
    LODWORD(v38[3]) = 0;
    v36[3] = 0LL;
    CmpCallCallBacksEx(25, (unsigned int)v38, 0, 0, 25, 0LL, (__int64)v36);
  }
  if ( v2 && *(char *)(a1 - 21) < 0 )
    CmpWaitForLateUnloadWorker();
  v19 = KeGetCurrentThread();
  result = (unsigned int)++v19->KernelApcDisable;
  if ( !(_WORD)result )
  {
    result = (__int64)&v19->152;
    if ( *(_QWORD *)result != result && !v19->SpecialApcDisable )
      return KiCheckForKernelApcDelivery((__int64)v19);
  }
  return result;
}
