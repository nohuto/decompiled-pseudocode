/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14006BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     AlpciSendDeferredMessageBeforeWait @ 0x14006AB80 (AlpciSendDeferredMessageBeforeWait.c)
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400E28E4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1401092D0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1401259B0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x140126968 (ExpWorkerFactoryWantsToCreate.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtAlpcSendWaitReceivePort @ 0x14049E130 (NtAlpcSendWaitReceivePort.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObpRemoveObjectRoutine @ 0x1404A3C00 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     AlpciDestroyDeferredMessageContext @ 0x140561170 (AlpciDestroyDeferredMessageContext.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140568710 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406F10E4 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v5; // r15d
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  int v9; // r14d
  char *v10; // rsi
  unsigned __int64 *volatile *v11; // r12
  unsigned __int64 *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  _DWORD *v14; // rdi
  _DWORD *v15; // rax
  __int64 v16; // rax
  volatile __int64 *v17; // r8
  unsigned __int8 v18; // cl
  struct _KTHREAD *v19; // r15
  unsigned int v20; // ecx
  _QWORD *v21; // rbx
  struct _KTHREAD **v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edi
  PVOID *v25; // rbx
  int v26; // ecx
  unsigned __int64 *volatile v27; // rbx
  __int64 Next; // rax
  ULONG_PTR v29; // rbx
  signed __int64 v30; // rax
  bool v31; // cc
  signed __int64 v32; // rax
  int v34; // edx
  bool v35; // zf
  __int64 v36; // rax
  PVOID *Object; // [rsp+20h] [rbp-188h]
  unsigned __int8 v38; // [rsp+40h] [rbp-168h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-160h] BYREF
  _DWORD *v40; // [rsp+60h] [rbp-148h]
  PVOID v41; // [rsp+68h] [rbp-140h] BYREF
  ULONG v42; // [rsp+70h] [rbp-138h] BYREF
  PULONG v43; // [rsp+78h] [rbp-130h]
  PVOID P; // [rsp+80h] [rbp-128h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-120h]
  _DWORD *v46; // [rsp+90h] [rbp-118h]
  PULONG v47; // [rsp+98h] [rbp-110h]
  HANDLE v48[2]; // [rsp+A0h] [rbp-108h] BYREF
  HANDLE PortHandle[2]; // [rsp+B0h] [rbp-F8h]
  ULONG Flags[2]; // [rsp+C0h] [rbp-E8h]
  PFILE_IO_COMPLETION_INFORMATION v51; // [rsp+C8h] [rbp-E0h]
  PFILE_IO_COMPLETION_INFORMATION v52; // [rsp+D0h] [rbp-D8h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp-D0h]
  _BYTE v54[128]; // [rsp+E0h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v43 = PacketsReturned;
  v5 = Count;
  v51 = MiniPackets;
  v46 = WorkerFactoryHandle;
  v52 = MiniPackets;
  LODWORD(v40) = Count;
  v47 = PacketsReturned;
  v42 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v38 = PreviousMode;
  P = v54;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v9 = -1073741811;
    goto LABEL_54;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v8 = (__int64)v43;
    if ( (unsigned __int64)v43 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)PortHandle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)PortHandle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  v9 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &v41, 0LL);
  v10 = (char *)v41;
  BugCheckParameter2 = (ULONG_PTR)v41;
  if ( v9 >= 0 )
  {
    if ( v5 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v5, 0x656E6F4Eu);
      if ( !P )
      {
        v5 = 16;
        P = v54;
      }
    }
    v11 = (unsigned __int64 *volatile *)(v10 + 16);
    v12 = (unsigned __int64 *)*((_QWORD *)v10 + 2);
    LockHandle.LockQueue.Lock = v12;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12);
    }
    else
    {
      if ( _InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle) )
        KxWaitForLockOwnerShip(&LockHandle);
      v10 = (char *)v41;
    }
    if ( *((_BYTE *)*v11 + 33) )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      v9 = 128;
      goto LABEL_54;
    }
    v14 = v10 + 152;
    v47 = (PULONG)(v10 + 152);
    if ( (*((_DWORD *)v10 + 38) & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(v10);
    ++*((_DWORD *)*v11 + 7);
    v46 = v10 + 124;
    v15 = v10 + 128;
    v40 = v10 + 128;
    while ( 1 )
    {
      if ( *v46 < *v15 || *((_BYTE *)*v11 + 33) )
      {
        v9 = 258;
LABEL_37:
        --*((_DWORD *)*v11 + 7);
        if ( v9 == 258 )
        {
          --*v40;
          --*((_DWORD *)v10 + 33);
          ExpRemoveCurrentThreadFromThreadHistory(v10);
        }
        else if ( (*v14 & 7) != 4 )
        {
          v19 = KeGetCurrentThread();
          v20 = 0;
          v10 = (char *)v41;
          v21 = (char *)v41 + 72;
          v22 = (struct _KTHREAD **)((char *)v41 + 72);
          while ( *v22 != v19 )
          {
            ++v20;
            ++v22;
            if ( v20 >= 4 )
            {
              ObfReferenceObjectWithTag(v19, 0x746C6644u);
              v23 = 0LL;
              while ( *v21 )
              {
                v23 = (unsigned int)(v23 + 1);
                ++v21;
                if ( (unsigned int)v23 >= 4 )
                {
                  v24 = *v14 & 7;
                  v25 = (PVOID *)&v10[8 * v24];
                  ObfDereferenceObjectWithTag(v25[9], 0x746C6644u);
                  v25[9] = v19;
                  v26 = ((_BYTE)v24 + 1) & 3;
                  v14 = v47;
                  *v47 = *v47 & 0xFFFFFFF8 | v26;
                  goto LABEL_46;
                }
              }
              *(_QWORD *)&v10[8 * v23 + 72] = v19;
              break;
            }
          }
        }
LABEL_46:
        v27 = *v11;
        if ( *v40 >= *v46 || *((_DWORD *)v27 + 7) )
        {
LABEL_48:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          }
          else
          {
            _m_prefetchw(&LockHandle);
            Next = (__int64)LockHandle.LockQueue.Next;
            if ( !LockHandle.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&LockHandle) == &LockHandle )
                goto LABEL_51;
              Next = KxWaitForLockChainValid(&LockHandle);
            }
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          }
LABEL_51:
          __writecr8(LockHandle.OldIrql);
        }
        else
        {
          if ( *((_DWORD *)v10 + 37) )
          {
            v34 = *v14 | 0x200;
            *v14 = v34;
            if ( !*(_DWORD *)(v27[1] + 4) )
            {
              if ( (v34 & 0x400) == 0 )
              {
                *v14 = v34 | 0x400;
                ObfReferenceObjectWithTag(v10, 0x746C6644u);
                KeRegisterObjectNotification(v27[1], &ExpWorkerFactoryManagerQueue, v10 + 360);
              }
              goto LABEL_48;
            }
          }
          ExpWorkerFactoryCheckCreate(v10, &LockHandle);
        }
        if ( !v9 )
          *v43 = v42;
        goto LABEL_54;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        break;
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_28:
      __writecr8(LockHandle.OldIrql);
      if ( (Flags[1] & 1) != 0 )
        AlpciSendDeferredMessageBeforeWait(v48, PortHandle[1], Flags[0], (__int64)PortHandle[0], (int)Object, v38);
      Object = (PVOID *)&v42;
      v9 = IoRemoveIoCompletion(*((_QWORD *)*v11 + 1), v51, P, v5);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(v48);
        Flags[1] &= ~1u;
      }
      v17 = (volatile __int64 *)*v11;
      LockHandle.LockQueue.Lock = *v11;
      LockHandle.LockQueue.Next = 0LL;
      v18 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v18;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
      }
      else
      {
        if ( _InterlockedExchange64(v17, (__int64)&LockHandle) )
          KxWaitForLockOwnerShip(&LockHandle);
        v10 = (char *)v41;
      }
      if ( v9 != 258 )
        goto LABEL_37;
      v35 = (unsigned __int8)ExpWorkerFactoryWantsToCreate(v10, 1LL) == 0;
      v15 = v40;
      if ( v35 )
      {
        if ( *v40 > *((_DWORD *)v10 + 30)
          && *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber == (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
        {
          goto LABEL_37;
        }
        v15 = v40;
      }
    }
    _m_prefetchw(&LockHandle);
    v16 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_27:
        v10 = (char *)v41;
        goto LABEL_28;
      }
      v16 = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
    goto LABEL_27;
  }
LABEL_54:
  if ( P != v54 )
    ExFreePoolWithTag(P, 0);
  if ( BugCheckParameter2 )
  {
    v29 = BugCheckParameter2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48);
    v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL);
    v31 = v30 <= 1;
    v32 = v30 - 1;
    if ( v31 )
    {
      if ( *(_QWORD *)(v29 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v29 + 24) ^ (unsigned __int64)BYTE1(v29)],
          BugCheckParameter2,
          1uLL,
          *(_QWORD *)(v29 + 8));
      if ( v32 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v32);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v29);
      }
      else
      {
        v36 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v29);
        if ( v36 )
          ObpHandleRevocationBlockRemoveObject(v36);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v29);
        ObpRemoveObjectRoutine(v29, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(PortHandle[1], Flags[0], (PPORT_MESSAGE)PortHandle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v9;
}
