/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140085580
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KeTimeOutQueueWaiters @ 0x140085270 (KeTimeOutQueueWaiters.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140085E00 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x140086C70 (ExpWorkerFactoryCreateThread.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140087A0C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400AA020 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1400C4720 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140552910 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpRemoveObjectRoutine @ 0x14059C950 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14075A4D0 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  int v7; // eax
  __int64 v8; // rax
  NTSTATUS result; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS Thread; // r14d
  bool v13; // r15
  char v14; // r12
  PKSPIN_LOCK *v15; // r13
  unsigned __int64 *v16; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v20; // rdx
  char *v21; // rdi
  int v22; // eax
  int v23; // eax
  char v24; // r13
  int v25; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  char *v29; // rdi
  signed __int64 v30; // rbx
  bool v31; // cc
  signed __int64 v32; // rbx
  unsigned int v33; // ecx
  int v34; // eax
  PKSPIN_LOCK v35; // rax
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // ecx
  unsigned int v39; // eax
  PVOID v40; // rcx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  __int128 v46; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-38h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = 0uLL;
  if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
  {
LABEL_2:
    v7 = 4;
LABEL_3:
    if ( WorkerFactoryInformationLength != v7 )
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
      LODWORD(v46) = *(_DWORD *)WorkerFactoryInformation;
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v46 = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_9;
          v8 = (__int64)WorkerFactoryInformation;
          if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
            v8 = 0x7FFFFFFF0000LL;
          LODWORD(v46) = *(_DWORD *)v8;
          break;
        default:
          __fastfail(0x25u);
      }
    }
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v13 = 0;
        v14 = 1;
        v15 = (PKSPIN_LOCK *)Object;
        v16 = (unsigned __int64 *)*((_QWORD *)Object + 2);
        LockHandle.LockQueue.Lock = v16;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = CurrentIrql;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = SchedulerAssist[5];
            SchedulerAssist[5] = v42 + 1;
            if ( v42 == -1 )
            {
              v10 = *((unsigned __int8 *)SchedulerAssist + 27);
              if ( !*((_BYTE *)SchedulerAssist + 25) && !(_BYTE)v10 )
                KiPerformUnboostKick(CurrentPrcb);
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v16);
        }
        else
        {
          v20 = _InterlockedExchange64((volatile __int64 *)v16, (__int64)&LockHandle);
          if ( v20 )
            KxWaitForLockOwnerShip(&LockHandle);
        }
        if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
        {
          v21 = (char *)Object;
          switch ( (_DWORD)v46 )
          {
            case 0:
              v25 = *((_DWORD *)Object + 32);
              if ( v25 == *((_DWORD *)Object + 33) )
                Thread = -1073741823;
              else
                *((_DWORD *)Object + 32) = v25 + 1;
              goto LABEL_38;
            case 1:
              goto LABEL_73;
            case 2:
              v22 = *((_DWORD *)Object + 32);
              if ( !v22 )
              {
                Thread = -1073741823;
                goto LABEL_34;
              }
              v23 = v22 - 1;
              *((_DWORD *)Object + 32) = v23;
              if ( v23 )
              {
LABEL_34:
                v24 = 0;
                goto LABEL_39;
              }
LABEL_73:
              v13 = 1;
              goto LABEL_34;
          }
          if ( (_DWORD)v46 != 3 )
          {
            Thread = -1073741811;
LABEL_38:
            v24 = 0;
            goto LABEL_39;
          }
          if ( *((_DWORD *)Object + 32) )
          {
            ExpRemoveCurrentThreadFromThreadHistory(Object, v20, v10);
            --*((_DWORD *)v21 + 32);
            --*((_DWORD *)v21 + 33);
            v13 = *((_DWORD *)v21 + 32) == 0;
          }
          else
          {
            Thread = -1073741823;
          }
          v24 = 0;
        }
        else
        {
          v20 = 0x140000000uLL;
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              v20 = v46;
              if ( (__int64)v46 >= 0 )
              {
                Thread = -1073741811;
                v21 = (char *)Object;
              }
              else
              {
                if ( (__int64)v46 > -10000000 )
                {
                  v20 = -10000000LL;
                  *(_QWORD *)&v46 = -10000000LL;
                }
                else if ( (__int64)v46 < -6000000000LL )
                {
                  v20 = -6000000000LL;
                  *(_QWORD *)&v46 = -6000000000LL;
                }
                v21 = (char *)Object;
                *((_QWORD *)Object + 14) = v20;
                v48[0] = 0LL;
                v48[1] = -1LL;
                KeSetTimer2((__int64)(v21 + 168), v20, -v20, (__int64)v48);
              }
              goto LABEL_38;
            case WorkerFactoryBindingCount:
              v21 = (char *)Object;
              v33 = *((_DWORD *)Object + 37);
              v20 = (unsigned int)v46;
              if ( (int)v46 < 0 )
              {
                if ( v33 > -(int)v46 )
                {
                  v34 = v33 + v46;
                  *((_DWORD *)Object + 37) = v33 + v46;
                }
                else
                {
                  *((_DWORD *)Object + 37) = 0;
                  v34 = 0;
                }
              }
              else
              {
                v34 = v33 + v46;
                if ( v33 >= v33 + (unsigned int)v46 )
                  v34 = -1;
                *((_DWORD *)Object + 37) = v34;
              }
              if ( v33 )
              {
                if ( !*((_DWORD *)v21 + 37) && (*((_DWORD *)v21 + 38) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v21);
              }
              else if ( v34 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v21) )
              {
                ExpWorkerFactoryCheckCreate(v21, &LockHandle);
                v14 = 0;
              }
              goto LABEL_38;
            case WorkerFactoryThreadMinimum:
              v21 = (char *)Object;
              if ( *((_BYTE *)v15[2] + 33) )
              {
                Thread = 128;
              }
              else
              {
                v39 = v46;
                v13 = (unsigned int)v46 > *((_DWORD *)Object + 30);
                *((_DWORD *)Object + 30) = v46;
                if ( *((_DWORD *)v21 + 31) < v39 )
                  *((_DWORD *)v21 + 31) = v39;
                if ( v13 )
                {
                  v13 = 0;
                  if ( (*((_DWORD *)v21 + 38) & 0x200) != 0 )
                    ExpLeaveWorkerFactoryAwayMode(v21);
                  if ( (unsigned int)(*((_DWORD *)v21 + 32) + *((_DWORD *)v21 + 34)) < *((_DWORD *)v21 + 30) )
                  {
                    while ( 1 )
                    {
                      ++*((_DWORD *)v21 + 36);
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      __writecr8(LockHandle.OldIrql);
                      Thread = ExpWorkerFactoryCreateThread(v21);
                      KeAcquireInStackQueuedSpinLock(v15[2], &LockHandle);
                      if ( Thread < 0 )
                        break;
                      if ( (unsigned int)(*((_DWORD *)v21 + 32) + *((_DWORD *)v21 + 34)) >= *((_DWORD *)v21 + 30) )
                        goto LABEL_38;
                    }
                    --*((_DWORD *)v21 + 36);
                  }
                }
              }
              goto LABEL_38;
            case WorkerFactoryThreadMaximum:
              v35 = v15[2];
              v21 = (char *)Object;
              if ( *((_BYTE *)v35 + 33) )
              {
                Thread = 128;
                goto LABEL_38;
              }
              v24 = 1;
              v20 = (unsigned int)v46;
              if ( (_DWORD)v46 && (!*((_DWORD *)Object + 31) && *((_DWORD *)v35 + 6) || *(int *)(v35[1] + 4) > 0) )
                v13 = 1;
              *((_DWORD *)Object + 31) = v46;
              if ( (unsigned int)v20 < *((_DWORD *)v21 + 30) )
                *((_DWORD *)v21 + 30) = v20;
              break;
            default:
              __fastfail(0x25u);
          }
        }
LABEL_39:
        if ( v13 )
        {
          v36 = *((_DWORD *)v21 + 32);
          v20 = v36 + *((_DWORD *)v21 + 34);
          if ( *(_BYTE *)(*((_QWORD *)v21 + 2) + 33LL) )
          {
            Thread = 128;
          }
          else
          {
            v37 = *((_DWORD *)v21 + 31);
            if ( v36 >= v37 )
            {
              if ( !v24 )
                Thread = -1073741527;
            }
            else
            {
              v38 = *((_DWORD *)v21 + 36);
              if ( v38 || (unsigned int)v20 >= v37 )
                goto LABEL_84;
              if ( (*((_DWORD *)v21 + 38) & 0x200) != 0 )
              {
                ExpLeaveWorkerFactoryAwayMode(v21);
                v38 = *((_DWORD *)v21 + 36);
              }
              *((_DWORD *)v21 + 36) = v38 + 1;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              __writecr8(LockHandle.OldIrql);
              v14 = 0;
              Thread = ExpWorkerFactoryCreateThread(v21);
              if ( Thread < 0 )
              {
                v14 = 1;
                KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v21 + 2), &LockHandle);
                --*((_DWORD *)v21 + 36);
                if ( v24 )
LABEL_84:
                  Thread = 0;
              }
            }
          }
        }
        if ( !v14 )
          goto LABEL_46;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, v10, v11);
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_44;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v20, v10, v11);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_44:
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        if ( v28 )
        {
          if ( v27->NestingLevel <= 1u )
          {
            v43 = v28[5] - 1;
            v28[5] = v43;
            if ( !v43 && !*((_BYTE *)v28 + 25) && !*((_BYTE *)v28 + 27) )
              KiPerformUnboostKick(v27);
          }
        }
        __writecr8(LockHandle.OldIrql);
        v21 = (char *)Object;
LABEL_46:
        v29 = v21 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo((_DWORD)v29);
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL);
        v31 = v30 <= 1;
        v32 = v30 - 1;
        if ( v31 )
        {
          if ( *((_QWORD *)v29 + 1) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v29[24] ^ (unsigned __int64)BYTE1(v29)],
              (ULONG_PTR)Object,
              1uLL,
              *((_QWORD *)v29 + 1));
          if ( v32 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v32);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v29);
          }
          else
          {
            v44 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v29);
            if ( v44 )
              ObpHandleRevocationBlockRemoveObject(v44);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v29);
            ObpRemoveObjectRoutine(v29, 0LL);
          }
        }
        return Thread;
      }
      v40 = Object;
      v41 = v46;
      if ( !(_DWORD)v46 )
      {
        v41 = KeNumberProcessors_0;
        v40 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v41;
      ObfDereferenceObjectWithTag(v40, 0x746C6644u);
      return 0;
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryIdleTimeout:
        v7 = 8;
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
        v7 = 16;
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
