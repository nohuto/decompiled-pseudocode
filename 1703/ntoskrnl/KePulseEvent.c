/*
 * XREFs of KePulseEvent @ 0x140082D10
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x14012A820 (MmResourcesAvailable.c)
 *     KeBalanceSetManager @ 0x14015E600 (KeBalanceSetManager.c)
 *     MiPulseCommitSignal @ 0x140218078 (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x14021FB98 (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x1404E9A48 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  BOOL v6; // ebx
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // ebp
  struct _LIST_ENTRY *Flink; // r14
  LIST_ENTRY *p_WaitListHead; // rbx
  struct _LIST_ENTRY *v13; // rdx
  char v14; // al
  __int64 v15; // r8
  struct _KEVENT *v16; // rax
  __int64 v17; // rbx
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  char v20; // al
  bool v21; // zf
  __int64 v22; // r14
  unsigned __int8 v23; // al
  __int64 v24; // r9
  _QWORD *v25; // rcx
  int v26; // r8d
  __int64 *v27; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // rdx
  __int64 v30; // r9
  _QWORD *v31; // r8
  __int64 v32; // rcx
  char v33; // al
  int v34; // r10d
  struct _LIST_ENTRY *v35; // r9
  struct _LIST_ENTRY *v36; // [rsp+30h] [rbp-58h]
  struct _KEVENT *v37; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v38; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  struct _KPRCB *v40; // [rsp+90h] [rbp+8h]
  __int64 Blink; // [rsp+90h] [rbp+8h]
  _KTHREAD *v43; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v6 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Event->Header.Lock);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    if ( v6 )
    {
      Flink = Event->Header.WaitListHead.Flink;
      p_WaitListHead = &Event->Header.WaitListHead;
      if ( Flink == &Event->Header.WaitListHead )
      {
LABEL_4:
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        p_WaitListHead->Flink = p_WaitListHead;
        goto LABEL_5;
      }
      while ( 1 )
      {
        v13 = Flink;
        Flink = Flink->Flink;
        v36 = v13;
        v14 = (char)v13[1].Flink;
        if ( v14 == 1 )
        {
          v15 = WORD1(v13[1].Flink);
        }
        else
        {
          if ( v14 == 2 )
          {
            BYTE1(v13[1].Flink) = 5;
            Blink = (__int64)v13[1].Blink;
            v13->Flink = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v38 = KeGetCurrentPrcb();
            CurrentThread = v38->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v38->CurrentThread);
              EtwTraceEnqueueWork(v30, v29, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)Blink);
            v31 = (_QWORD *)(Blink + 8);
            v32 = Blink;
            if ( (_QWORD *)*v31 == v31
              || *(_DWORD *)(Blink + 40) >= *(_DWORD *)(Blink + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)Blink && CurrentThread->WaitReason == 15 )
            {
LABEL_49:
              v34 = *(_DWORD *)(v32 + 4);
              *(_DWORD *)(v32 + 4) = v34 + 1;
              v35 = *(struct _LIST_ENTRY **)(v32 + 32);
              if ( v35->Flink != (struct _LIST_ENTRY *)(v32 + 24) )
                __fastfail(3u);
              v36->Flink = (struct _LIST_ENTRY *)(v32 + 24);
              v36->Blink = v35;
              v35->Flink = v36;
              *(_QWORD *)(v32 + 32) = v36;
              if ( !v34 && (_QWORD *)*v31 != v31 )
              {
                KiWakeOtherQueueWaiters((__int64)v38, v32);
                v32 = Blink;
              }
            }
            else
            {
              v33 = KiWakeQueueWaiter((__int64)v38, Blink, (__int64)v36);
              v32 = Blink;
              if ( !v33 )
              {
                v31 = (_QWORD *)(Blink + 8);
                goto LABEL_49;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
            goto LABEL_11;
          }
          v15 = 256LL;
        }
        KiTryUnwaitThread(CurrentPrcb, v13, v15, 0LL);
LABEL_11:
        if ( Flink == p_WaitListHead )
          goto LABEL_4;
      }
    }
    v16 = (struct _KEVENT *)Event->Header.WaitListHead.Flink;
    if ( v16 != (struct _KEVENT *)&Event->Header.WaitListHead )
    {
      do
      {
        v17 = (__int64)v16;
        v37 = *(struct _KEVENT **)&v16->Header.Lock;
        v18 = *(struct _LIST_ENTRY **)&v16->Header.Lock;
        v19 = v16->Header.WaitListHead.Flink;
        if ( v18->Blink != (struct _LIST_ENTRY *)v17 || v19->Flink != (struct _LIST_ENTRY *)v17 )
          __fastfail(3u);
        v19->Flink = v18;
        v18->Blink = v19;
        v20 = *(_BYTE *)(v17 + 16);
        if ( v20 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), 0LL) )
          {
            v21 = Event->Header.SignalState-- == 1;
            if ( v21 )
              break;
          }
        }
        else
        {
          if ( v20 == 2 )
          {
            *(_BYTE *)(v17 + 17) = 5;
            v22 = *(_QWORD *)(v17 + 24);
            *(_QWORD *)v17 = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v40 = KeGetCurrentPrcb();
            v43 = v40->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v23 = KeIsThreadRunning(v40->CurrentThread);
              EtwTraceEnqueueWork(v24, v17, v23);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v22);
            v25 = (_QWORD *)(v22 + 8);
            if ( (_QWORD *)*v25 == v25
              || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
              || v43->Queue == (_DISPATCHER_HEADER *volatile)v22 && v43->WaitReason == 15 )
            {
LABEL_29:
              v26 = *(_DWORD *)(v22 + 4);
              *(_DWORD *)(v22 + 4) = v26 + 1;
              v27 = *(__int64 **)(v22 + 32);
              if ( *v27 != v22 + 24 )
                __fastfail(3u);
              *(_QWORD *)v17 = v22 + 24;
              *(_QWORD *)(v17 + 8) = v27;
              *v27 = v17;
              *(_QWORD *)(v22 + 32) = v17;
              if ( !v26 && (_QWORD *)*v25 != v25 )
                KiWakeOtherQueueWaiters((__int64)v40, v22);
            }
            else if ( !KiWakeQueueWaiter((__int64)v40, v22, v17) )
            {
              v25 = (_QWORD *)(v22 + 8);
              goto LABEL_29;
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v21 = Event->Header.SignalState-- == 1;
            if ( v21 )
              break;
            goto LABEL_36;
          }
          KiTryUnwaitThread(CurrentPrcb, v17, 256LL, 0LL);
        }
LABEL_36:
        v16 = v37;
      }
      while ( v37 != (struct _KEVENT *)&Event->Header.WaitListHead );
    }
  }
LABEL_5:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( Wait )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, Increment, CurrentIrql);
  return SignalState;
}
