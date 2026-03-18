/*
 * XREFs of KePulseEvent @ 0x140081280
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x1400869F0 (MmResourcesAvailable.c)
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 *     MiPulseCommitSignal @ 0x1402658F0 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x14026B7C0 (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x14052CF50 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14002F920 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140084FB0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400FD2A0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14023FDC4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402AEBAC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  BOOL v6; // ebp
  char CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r12
  LONG SignalState; // r15d
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v13; // rbp
  char v14; // al
  __int64 v15; // r8
  struct _LIST_ENTRY *v16; // rax
  __int64 v17; // rbp
  struct _LIST_ENTRY *v18; // rcx
  char v19; // al
  bool v20; // zf
  unsigned __int8 v21; // al
  __int64 v22; // r9
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  char v25; // al
  int v26; // r9d
  __int64 *v27; // r8
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // r9
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  int v33; // r9d
  __int64 *v34; // r8
  struct _KPRCB *v35; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v36; // [rsp+38h] [rbp-50h]
  _KTHREAD *v37; // [rsp+40h] [rbp-48h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 v39; // [rsp+90h] [rbp+8h]
  __int64 v40; // [rsp+90h] [rbp+8h]
  char v42; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v6 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Event);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( v6 )
    {
      if ( Flink == p_WaitListHead )
      {
LABEL_4:
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        p_WaitListHead->Flink = p_WaitListHead;
LABEL_5:
        CurrentIrql = v42;
        goto LABEL_6;
      }
      while ( 1 )
      {
        v13 = (__int64)Flink;
        Flink = Flink->Flink;
        v14 = *(_BYTE *)(v13 + 16);
        if ( v14 == 1 )
        {
          v15 = *(unsigned __int16 *)(v13 + 18);
        }
        else
        {
          if ( v14 == 2 )
          {
            *(_BYTE *)(v13 + 17) = 5;
            v40 = *(_QWORD *)(v13 + 24);
            *(_QWORD *)v13 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v35 = KeGetCurrentPrcb();
            CurrentThread = v35->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v35->CurrentThread);
              EtwTraceEnqueueWork(v29, v13, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v40);
            v30 = (_QWORD *)(v40 + 8);
            v31 = v40;
            if ( (_QWORD *)*v30 == v30 || *(_DWORD *)(v40 + 40) >= *(_DWORD *)(v40 + 44) )
            {
LABEL_51:
              v33 = *(_DWORD *)(v31 + 4);
              *(_DWORD *)(v31 + 4) = v33 + 1;
              v34 = *(__int64 **)(v31 + 32);
              if ( *v34 != v31 + 24 )
                __fastfail(3u);
              *(_QWORD *)v13 = v31 + 24;
              *(_QWORD *)(v13 + 8) = v34;
              *v34 = v13;
              *(_QWORD *)(v31 + 32) = v13;
              if ( !v33 && (_QWORD *)*v30 != v30 )
              {
                KiWakeOtherQueueWaiters(v35, v31);
                v31 = v40;
              }
            }
            else
            {
              if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v40 && CurrentThread->WaitReason == 15 )
              {
                v30 = (_QWORD *)(v40 + 8);
                goto LABEL_51;
              }
              v32 = KiWakeQueueWaiter((__int64)v35, v40, v13);
              v31 = v40;
              if ( !v32 )
              {
                v30 = (_QWORD *)(v40 + 8);
                goto LABEL_51;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
            goto LABEL_12;
          }
          v15 = 256LL;
        }
        KiTryUnwaitThread(CurrentPrcb, v13, v15, 0LL);
LABEL_12:
        if ( Flink == p_WaitListHead )
          goto LABEL_4;
      }
    }
    if ( Flink == p_WaitListHead )
      goto LABEL_5;
    while ( 1 )
    {
      v16 = Flink->Flink;
      v17 = (__int64)Flink;
      Flink = v16;
      v18 = *(struct _LIST_ENTRY **)(v17 + 8);
      if ( v16->Blink != (struct _LIST_ENTRY *)v17 || v18->Flink != (struct _LIST_ENTRY *)v17 )
        __fastfail(3u);
      v18->Flink = v16;
      v16->Blink = v18;
      v19 = *(_BYTE *)(v17 + 16);
      if ( v19 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), 0LL) )
        {
          v20 = Event->Header.SignalState-- == 1;
          if ( v20 )
            goto LABEL_5;
        }
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v39 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v36 = KeGetCurrentPrcb();
          v37 = v36->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v21 = KeIsThreadRunning(v36->CurrentThread);
            EtwTraceEnqueueWork(v22, v17, v21);
          }
          KiAcquireKobjectLockSafe(v39);
          v23 = (_QWORD *)(v39 + 8);
          v24 = v39;
          if ( (_QWORD *)*v23 == v23
            || *(_DWORD *)(v39 + 40) >= *(_DWORD *)(v39 + 44)
            || v37->Queue == (_DISPATCHER_HEADER *volatile)v39 && v37->WaitReason == 15 )
          {
LABEL_30:
            v26 = *(_DWORD *)(v24 + 4);
            *(_DWORD *)(v24 + 4) = v26 + 1;
            v27 = *(__int64 **)(v24 + 32);
            if ( *v27 != v24 + 24 )
              __fastfail(3u);
            *(_QWORD *)v17 = v24 + 24;
            *(_QWORD *)(v17 + 8) = v27;
            *v27 = v17;
            *(_QWORD *)(v24 + 32) = v17;
            if ( !v26 && (_QWORD *)*v23 != v23 )
            {
              KiWakeOtherQueueWaiters(v36, v24);
              v24 = v39;
            }
          }
          else
          {
            v25 = KiWakeQueueWaiter((__int64)v36, v39, v17);
            v24 = v39;
            if ( !v25 )
            {
              v23 = (_QWORD *)(v39 + 8);
              goto LABEL_30;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v24, 0xFFFFFF7F);
          v20 = Event->Header.SignalState-- == 1;
          if ( v20 )
            goto LABEL_5;
          goto LABEL_37;
        }
        KiTryUnwaitThread(CurrentPrcb, v17, 256LL, 0LL);
      }
LABEL_37:
      if ( Flink == p_WaitListHead )
        goto LABEL_5;
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( Wait )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, Increment, CurrentIrql);
  return SignalState;
}
