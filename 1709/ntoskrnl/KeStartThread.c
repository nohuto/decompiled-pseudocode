/*
 * XREFs of KeStartThread @ 0x1400A6890
 * Callers:
 *     KiInitializeIdleThread @ 0x1404263CC (KiInitializeIdleThread.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400A88E8 (KiUpdateNodeAffinitizedFlag.c)
 *     KiSelectIdealProcessor @ 0x1400A9210 (KiSelectIdealProcessor.c)
 *     KiFreezeSingleThread @ 0x1400AC524 (KiFreezeSingleThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KeFirstGroupAffinityEx @ 0x140126920 (KeFirstGroupAffinityEx.c)
 *     KeSelectNodeForAffinity @ 0x140128DE0 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiExtendProcessAffinity @ 0x14020D0D0 (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v9; // rdi
  char BasePriority; // al
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ebp
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v15; // r14
  int QuantumReset; // ecx
  __int64 v17; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v19; // rax
  __int64 result; // rax
  _LIST_ENTRY **v21; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  char v23; // dl
  char v24; // cl
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  char v27; // [rsp+20h] [rbp-78h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-50h] BYREF
  __int64 v31; // [rsp+50h] [rbp-48h]

  v4 = a2;
  if ( !a3 && a2 && *a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v27 = 0;
    v7 = *(_DWORD *)(v6 + 92);
  }
  else
  {
    v6 = 0LL;
    v27 = 1;
    v7 = 0;
    if ( !a2 )
    {
      v30 = 0LL;
      v31 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v9->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  BasePriority = v9->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( v4 )
  {
    v25 = *((unsigned __int16 *)v4 + 4);
    v26 = v9->Affinity.Bitmap[v25];
    if ( !v26 || (v26 & *v4) != *v4 )
      KiExtendProcessAffinity(v9, (unsigned __int16)v25);
    if ( !*v4 )
      *v4 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v9 == CurrentThread->Process )
    {
      LOWORD(v31) = CurrentThread->UserAffinity.Group;
      v30 = v9->Affinity.Bitmap[(unsigned __int16)v31];
    }
    else
    {
      KeFirstGroupAffinityEx(&v30, &v9->Affinity);
    }
    v4 = &v30;
  }
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *v4;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v13 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v11 = *((unsigned __int16 *)v4 + 4);
      v7 = v9->ThreadSeed[v11];
      v6 = KeNodeBlock[v9->IdealNode[v11]];
    }
    *v4 &= *(_QWORD *)(v6 + 136);
    v12 = KiSelectIdealProcessor(v6, v7, v4);
    v13 = v12;
    if ( v27 )
      v9->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v12;
  }
  *(_DWORD *)(a1 + 196) = v13;
  p_ThreadListHead = &v9->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v13;
  v15 = KiProcessorBlock[v13];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v9 != (_KPROCESS *)&KiInitialProcess )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v21 = (_LIST_ENTRY **)qword_1403711F8;
    p_ProcessListEntry = &v9->ProcessListEntry;
    if ( *(__int64 **)qword_1403711F8 != &KiProcessListHead )
      __fastfail(3u);
    v9->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_1403711F8;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v21 = p_ProcessListEntry;
    qword_1403711F8 = (__int64)&v9->ProcessListEntry;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v9->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v9->QuantumReset;
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v17 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v17;
  KiAcquireKobjectLockSafe(v9);
  Blink = v9->ThreadListHead.Blink;
  v19 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
    __fastfail(3u);
  v19->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v19;
  v9->ThreadListHead.Blink = v19;
  _InterlockedAnd(&v9->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v9->0 & 8) != 0 )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = v9->SchedulingGroup;
  if ( v9->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v15, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1474LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
  {
    v23 = *(_BYTE *)(a1 + 195);
    if ( v23 > 0 )
    {
      v24 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v24 >= 16 )
        v24 = 15;
      if ( v24 > v23 )
      {
        *(_BYTE *)(a1 + 564) = (v24 - v23) & 0xF;
        KiUpdateThreadPriority(0LL, a1, v24, 0);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 1504) = v9->ProcessTimerDelay;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (xmmword_140401150 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v13);
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v13);
  }
  _InterlockedExchangeAdd(&v9->StackCount.Value, 8u);
  return result;
}
