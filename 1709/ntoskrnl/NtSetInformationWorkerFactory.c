/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1400B1CE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400B252C (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400B2954 (ExpWorkerFactoryCreateThread.c)
 *     KeTimeOutQueueWaiters @ 0x1400B2AC0 (KeTimeOutQueueWaiters.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400E28E4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1401092D0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1401259B0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ObpRemoveObjectRoutine @ 0x1404A3C00 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140568710 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406F10E4 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  NTSTATUS Thread; // r12d
  bool v11; // r13
  char *v12; // rdi
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
  __int64 Next; // rax
  char *v25; // rdi
  signed __int64 v26; // rbx
  bool v27; // cc
  signed __int64 v28; // rbx
  unsigned int v29; // ecx
  PKSPIN_LOCK v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  PKSPIN_LOCK *v34; // rbx
  PVOID v35; // rcx
  __int64 v36; // rax
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  __int128 v38; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  PKSPIN_LOCK *v40; // [rsp+70h] [rbp-48h]
  _QWORD v41[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = 0uLL;
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
          *(_QWORD *)&v38 = *(_QWORD *)WorkerFactoryInformation;
          v7 = v38;
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
    LODWORD(v38) = v7;
LABEL_23:
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v11 = 0;
        v12 = (char *)Object;
        v13 = (PKSPIN_LOCK *)((char *)Object + 16);
        v40 = (PKSPIN_LOCK *)((char *)Object + 16);
        v14 = (unsigned __int64 *)*((_QWORD *)Object + 2);
        LockHandle.LockQueue.Lock = v14;
        LockHandle.LockQueue.Next = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v14);
          v13 = v40;
        }
        else
        {
          v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v14, (__int64)&LockHandle);
          if ( v16 )
          {
            KxWaitForLockOwnerShip((__int64)&LockHandle, v16);
            v13 = v40;
          }
          v12 = (char *)Object;
          v7 = v38;
        }
        if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
        {
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              if ( (__int64)v38 >= 0 )
                goto LABEL_125;
              if ( (__int64)v38 > -10000000 )
              {
                *(_QWORD *)&v38 = -10000000LL;
              }
              else if ( (__int64)v38 < -6000000000LL )
              {
                *(_QWORD *)&v38 = -6000000000LL;
              }
              v31 = v38;
              *((_QWORD *)v12 + 14) = v38;
              v41[0] = 0LL;
              v41[1] = -1LL;
              KeSetTimer2((__int64)(v12 + 168), v31, -v31, (__int64)v41);
              goto LABEL_40;
            case WorkerFactoryBindingCount:
              v29 = *((_DWORD *)v12 + 37);
              if ( (v7 & 0x80000000) != 0 )
              {
                if ( v29 > -v7 )
                  *((_DWORD *)v12 + 37) = v29 + v7;
                else
                  *((_DWORD *)v12 + 37) = 0;
              }
              else if ( v29 >= v29 + v7 )
              {
                *((_DWORD *)v12 + 37) = -1;
              }
              else
              {
                *((_DWORD *)v12 + 37) = v29 + v7;
              }
              if ( v29 )
              {
                if ( !*((_DWORD *)v12 + 37) && (*((_DWORD *)v12 + 38) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v12);
              }
              else if ( *((_DWORD *)v12 + 37) && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v12) )
              {
                ExpWorkerFactoryCheckCreate(v12, &LockHandle, 0);
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
                v11 = v7 > *((_DWORD *)v12 + 30);
                *((_DWORD *)v12 + 30) = v7;
                if ( *((_DWORD *)v12 + 31) < v7 )
                  *((_DWORD *)v12 + 31) = v7;
                if ( !v11 )
                {
                  v22 = 1;
                  goto LABEL_41;
                }
                v11 = 0;
                if ( (*((_DWORD *)v12 + 38) & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v12);
                if ( (unsigned int)(*((_DWORD *)v12 + 32) + *((_DWORD *)v12 + 34)) < *((_DWORD *)v12 + 30) )
                {
                  v34 = v40;
                  while ( 1 )
                  {
                    ++*((_DWORD *)v12 + 36);
                    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                    __writecr8(LockHandle.OldIrql);
                    Thread = ExpWorkerFactoryCreateThread(v12);
                    KeAcquireInStackQueuedSpinLock(*v34, &LockHandle);
                    if ( Thread < 0 )
                      break;
                    if ( (unsigned int)(*((_DWORD *)v12 + 32) + *((_DWORD *)v12 + 34)) >= *((_DWORD *)v12 + 30) )
                      goto LABEL_40;
                  }
                  --*((_DWORD *)v12 + 36);
                }
              }
              goto LABEL_40;
            case WorkerFactoryThreadMaximum:
              v30 = *v13;
              if ( *((_BYTE *)*v13 + 33) )
              {
                Thread = 128;
                goto LABEL_40;
              }
              v21 = 1;
              if ( v7 && (!*((_DWORD *)v12 + 31) && *((_DWORD *)v30 + 6) || *(int *)(v30[1] + 4) > 0) )
                v11 = 1;
              *((_DWORD *)v12 + 31) = v7;
              if ( v7 < *((_DWORD *)v12 + 30) )
              {
                *((_DWORD *)v12 + 30) = v7;
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
            v11 = 1;
            v21 = 0;
            v22 = 1;
            goto LABEL_42;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            v19 = *((_DWORD *)v12 + 32);
            if ( v19 )
            {
              v20 = v19 - 1;
              *((_DWORD *)v12 + 32) = v20;
              if ( !v20 )
                v11 = 1;
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
            if ( *((_DWORD *)v12 + 32) )
            {
              ExpRemoveCurrentThreadFromThreadHistory(v12);
              --*((_DWORD *)v12 + 32);
              --*((_DWORD *)v12 + 33);
              v11 = *((_DWORD *)v12 + 32) == 0;
            }
            else
            {
              Thread = -1073741823;
            }
            v21 = 0;
            v22 = 1;
            goto LABEL_42;
          }
LABEL_125:
          Thread = -1073741811;
        }
        else
        {
          v23 = *((_DWORD *)v12 + 32);
          if ( v23 == *((_DWORD *)v12 + 33) )
            Thread = -1073741823;
          else
            *((_DWORD *)v12 + 32) = v23 + 1;
        }
LABEL_40:
        v22 = 1;
LABEL_41:
        v21 = 0;
LABEL_42:
        if ( v11 )
        {
          v32 = *((_DWORD *)v12 + 32);
          if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 33LL) )
          {
            Thread = 128;
          }
          else
          {
            v33 = *((_DWORD *)v12 + 31);
            if ( v32 >= v33 )
            {
              if ( !v21 )
                Thread = -1073741527;
            }
            else
            {
              if ( *((_DWORD *)v12 + 36) || v32 + *((_DWORD *)v12 + 34) >= v33 )
                goto LABEL_97;
              if ( (*((_DWORD *)v12 + 38) & 0x200) != 0 )
                ExpLeaveWorkerFactoryAwayMode(v12);
              ++*((_DWORD *)v12 + 36);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              __writecr8(LockHandle.OldIrql);
              v22 = 0;
              Thread = ExpWorkerFactoryCreateThread(v12);
              if ( Thread < 0 )
              {
                v22 = 1;
                KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v12 + 2), &LockHandle);
                --*((_DWORD *)v12 + 36);
                if ( v21 )
LABEL_97:
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
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
          {
LABEL_47:
            v12 = (char *)Object;
LABEL_48:
            __writecr8(LockHandle.OldIrql);
LABEL_49:
            v25 = v12 - 48;
            if ( ObpTraceFlags )
              ObpPushStackInfo((_DWORD)v25);
            v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL);
            v27 = v26 <= 1;
            v28 = v26 - 1;
            if ( v27 )
            {
              if ( *((_QWORD *)v25 + 1) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v25[24] ^ (unsigned __int64)BYTE1(v25)],
                  (ULONG_PTR)Object,
                  1uLL,
                  *((_QWORD *)v25 + 1));
              if ( v28 < 0 )
                KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v28);
              if ( KeAreAllApcsDisabled() )
              {
                ObpDeferObjectDeletion(v25);
              }
              else
              {
                v36 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v25);
                if ( v36 )
                  ObpHandleRevocationBlockRemoveObject(v36);
                if ( ObpTraceFlags )
                  ObpDeregisterObject(v25);
                ObpRemoveObjectRoutine(v25, 0LL);
              }
            }
            return Thread;
          }
          Next = KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_47;
      }
      v35 = Object;
      if ( !v7 )
      {
        v7 = KeNumberProcessors_0;
        v35 = Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v7;
      ObfDereferenceObjectWithTag(v35, 0x746C6644u);
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
