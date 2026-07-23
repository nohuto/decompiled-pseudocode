/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140129BE0
 * Callers:
 *     <none>
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14000DF50 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     KeTimeOutQueueWaiters @ 0x14002969C (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14002F0FC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KeAreAllApcsDisabled @ 0x1400E2F30 (KeAreAllApcsDisabled.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14012A458 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x14012A928 (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14012B1B8 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140428F60 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 *     ObpRemoveObjectRoutine @ 0x140520990 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpDeregisterObject @ 0x1406C2688 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // dl
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  NTSTATUS result; // eax
  PVOID v10; // rdi
  NTSTATUS Thread; // r12d
  bool v12; // r13
  PKSPIN_LOCK *v13; // r8
  unsigned __int64 *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v16; // rdx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  char v21; // si
  char v22; // r14
  int v23; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  signed __int64 v25; // rdi
  signed __int64 v26; // rbx
  bool v27; // cc
  signed __int64 v28; // rbx
  PKSPIN_LOCK v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  PKSPIN_LOCK *v33; // rbx
  __int64 v34; // rax
  __int128 v35; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  PKSPIN_LOCK *v38; // [rsp+70h] [rbp-48h]
  _QWORD v39[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = 0uLL;
  if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
  {
LABEL_2:
    v6 = 4;
LABEL_3:
    if ( WorkerFactoryInformationLength != v6 )
      return -1073741820;
    if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)WorkerFactoryInformation + 4 > 0x7FFFFFFF0000LL
          || (char *)WorkerFactoryInformation + 4 < WorkerFactoryInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
LABEL_9:
      v7 = *(_DWORD *)WorkerFactoryInformation;
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v35 = *(_QWORD *)WorkerFactoryInformation;
          v7 = *(_QWORD *)WorkerFactoryInformation;
          goto LABEL_23;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_9;
          v8 = (__int64)WorkerFactoryInformation;
          if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
            v8 = 0x7FFFFFFF0000LL;
          v7 = *(_DWORD *)v8;
          break;
        default:
          __fastfail(0x25u);
      }
    }
    LODWORD(v35) = v7;
LABEL_23:
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    v10 = Object;
    v39[2] = Object;
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v12 = 0;
        v13 = (PKSPIN_LOCK *)((char *)Object + 16);
        v38 = (PKSPIN_LOCK *)((char *)Object + 16);
        v14 = (unsigned __int64 *)*((_QWORD *)Object + 2);
        LockHandle.LockQueue.Lock = v14;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v14);
          v13 = v38;
        }
        else
        {
          v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v14, (__int64)&LockHandle);
          if ( v16 )
          {
            KxWaitForLockOwnerShip((__int64)&LockHandle, v16);
            v13 = v38;
          }
          v10 = Object;
          v7 = v35;
        }
        if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
        {
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              if ( (__int64)v35 >= 0 )
                goto LABEL_127;
              if ( (__int64)v35 > -10000000 )
              {
                *(_QWORD *)&v35 = -10000000LL;
              }
              else if ( (__int64)v35 < -6000000000LL )
              {
                *(_QWORD *)&v35 = -6000000000LL;
              }
              *((_QWORD *)v10 + 14) = v35;
              v39[0] = 0LL;
              v39[1] = -1LL;
              KeSetTimer2((__int64)v10 + 168, v35, -(__int64)v35, (__int64)v39);
              goto LABEL_40;
            case WorkerFactoryBindingCount:
              v30 = *((_DWORD *)v10 + 37);
              if ( (v7 & 0x80000000) != 0 )
              {
                if ( v30 > -v7 )
                  *((_DWORD *)v10 + 37) = v30 + v7;
                else
                  *((_DWORD *)v10 + 37) = 0;
              }
              else if ( v30 >= v30 + v7 )
              {
                *((_DWORD *)v10 + 37) = -1;
              }
              else
              {
                *((_DWORD *)v10 + 37) = v30 + v7;
              }
              if ( v30 )
              {
                if ( !*((_DWORD *)v10 + 37) && (*((_DWORD *)v10 + 38) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v10);
              }
              else if ( *((_DWORD *)v10 + 37) && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v10) )
              {
                ExpWorkerFactoryCheckCreate((__int64)v10, &LockHandle, 0);
                v22 = 0;
                goto LABEL_41;
              }
              goto LABEL_40;
            case WorkerFactoryThreadMinimum:
              if ( *((_BYTE *)*v13 + 33) )
              {
                Thread = 128;
              }
              else
              {
                v12 = v7 > *((_DWORD *)v10 + 30);
                *((_DWORD *)v10 + 30) = v7;
                if ( *((_DWORD *)v10 + 31) < v7 )
                  *((_DWORD *)v10 + 31) = v7;
                if ( !v12 )
                {
                  v22 = 1;
                  goto LABEL_41;
                }
                v12 = 0;
                if ( (*((_DWORD *)v10 + 38) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v10);
                if ( (unsigned int)(*((_DWORD *)v10 + 32) + *((_DWORD *)v10 + 34)) < *((_DWORD *)v10 + 30) )
                {
                  v33 = v38;
                  while ( 1 )
                  {
                    ++*((_DWORD *)v10 + 36);
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    __writecr8(LockHandle.OldIrql);
                    Thread = ExpWorkerFactoryCreateThread(v10);
                    KeAcquireInStackQueuedSpinLock(*v33, &LockHandle);
                    if ( Thread < 0 )
                      break;
                    if ( (unsigned int)(*((_DWORD *)v10 + 32) + *((_DWORD *)v10 + 34)) >= *((_DWORD *)v10 + 30) )
                      goto LABEL_40;
                  }
                  --*((_DWORD *)v10 + 36);
                }
              }
              goto LABEL_40;
            case WorkerFactoryThreadMaximum:
              v29 = *v13;
              if ( *((_BYTE *)*v13 + 33) )
              {
                Thread = 128;
                goto LABEL_40;
              }
              v21 = 1;
              if ( v7 && (!*((_DWORD *)v10 + 31) && *((_DWORD *)v29 + 6) || *(int *)(v29[1] + 4) > 0) )
                v12 = 1;
              *((_DWORD *)v10 + 31) = v7;
              if ( v7 < *((_DWORD *)v10 + 30) )
              {
                *((_DWORD *)v10 + 30) = v7;
                v22 = 1;
                goto LABEL_42;
              }
              break;
            default:
              __fastfail(0x25u);
          }
          goto LABEL_37;
        }
        if ( v7 )
        {
          v17 = v7 - 1;
          if ( !v17 )
          {
            v12 = 1;
            v21 = 0;
            v22 = 1;
            goto LABEL_42;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            v19 = *((_DWORD *)v10 + 32);
            if ( v19 )
            {
              v20 = v19 - 1;
              *((_DWORD *)v10 + 32) = v20;
              if ( !v20 )
                v12 = 1;
            }
            else
            {
              Thread = -1073741823;
            }
            v21 = 0;
LABEL_37:
            v22 = 1;
            goto LABEL_42;
          }
          if ( v18 == 1 )
          {
            if ( *((_DWORD *)v10 + 32) )
            {
              ExpRemoveCurrentThreadFromThreadHistory((__int64)v10);
              --*((_DWORD *)v10 + 32);
              --*((_DWORD *)v10 + 33);
              v12 = *((_DWORD *)v10 + 32) == 0;
            }
            else
            {
              Thread = -1073741823;
            }
            v21 = 0;
            v22 = 1;
            goto LABEL_42;
          }
LABEL_127:
          Thread = -1073741811;
        }
        else
        {
          v23 = *((_DWORD *)v10 + 32);
          if ( v23 == *((_DWORD *)v10 + 33) )
            Thread = -1073741823;
          else
            *((_DWORD *)v10 + 32) = v23 + 1;
        }
LABEL_40:
        v22 = 1;
LABEL_41:
        v21 = 0;
LABEL_42:
        if ( v12 )
        {
          v31 = *((_DWORD *)v10 + 32);
          if ( *(_BYTE *)(*((_QWORD *)v10 + 2) + 33LL) )
          {
            Thread = 128;
          }
          else
          {
            v32 = *((_DWORD *)v10 + 31);
            if ( v31 >= v32 )
            {
              if ( !v21 )
                Thread = -1073741527;
            }
            else
            {
              if ( *((_DWORD *)v10 + 36) || v31 + *((_DWORD *)v10 + 34) >= v32 )
                goto LABEL_86;
              if ( (*((_DWORD *)v10 + 38) & 0x200) != 0 )
                ExpLeaveWorkerFactoryAwayMode(v10);
              ++*((_DWORD *)v10 + 36);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              __writecr8(LockHandle.OldIrql);
              v22 = 0;
              Thread = ExpWorkerFactoryCreateThread(v10);
              if ( Thread < 0 )
              {
                v22 = 1;
                KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v10 + 2), &LockHandle);
                --*((_DWORD *)v10 + 36);
                if ( v21 )
LABEL_86:
                  Thread = 0;
              }
            }
          }
        }
        if ( !v22 )
          goto LABEL_49;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_48;
        }
        _m_prefetchw(&LockHandle);
        Next = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_47:
            v10 = Object;
LABEL_48:
            __writecr8(LockHandle.OldIrql);
LABEL_49:
            v25 = (signed __int64)v10 - 48;
            if ( ObpTraceFlags )
              ObpPushStackInfo(v25);
            v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL);
            v27 = v26 <= 1;
            v28 = v26 - 1;
            if ( v27 )
            {
              if ( *(_QWORD *)(v25 + 8) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v25 + 24) ^ (unsigned __int64)BYTE1(v25)],
                  (ULONG_PTR)Object,
                  1uLL,
                  *(_QWORD *)(v25 + 8));
              if ( v28 < 0 )
                KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v28);
              if ( KeAreAllApcsDisabled() )
              {
                ObpDeferObjectDeletion(v25);
              }
              else
              {
                v34 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v25);
                if ( v34 )
                  ObpHandleRevocationBlockRemoveObject(v34);
                if ( ObpTraceFlags )
                  ObpDeregisterObject(v25);
                ObpRemoveObjectRoutine(v25, 0LL);
              }
            }
            return Thread;
          }
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        goto LABEL_47;
      }
      if ( !v7 )
      {
        v7 = KeNumberProcessors_0;
        v10 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v7;
      ObfDereferenceObjectWithTag(v10, 0x746C6644u);
      return 0;
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryIdleTimeout:
        v6 = 8;
        goto LABEL_3;
      case WorkerFactoryBindingCount:
      case WorkerFactoryThreadMinimum:
      case WorkerFactoryThreadMaximum:
      case WorkerFactoryAdjustThreadGoal:
      case WorkerFactoryThreadBasePriority:
      case WorkerFactoryTimeoutWaiters:
      case WorkerFactoryFlags:
      case WorkerFactoryThreadSoftMaximum:
        goto LABEL_2;
      case WorkerFactoryPaused:
        result = -1073741822;
        break;
      case WorkerFactoryStackInformation:
        v6 = 16;
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
