/*
 * XREFs of KeStartThread @ 0x1401121B8
 * Callers:
 *     KiInitializeIdleThread @ 0x140411BB0 (KiInitializeIdleThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     KeSelectNodeForAffinity @ 0x14001AC28 (KeSelectNodeForAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x14002FE30 (KeFirstGroupAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400433E4 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiFreezeSingleThread @ 0x140072F08 (KiFreezeSingleThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140113B90 (KiUpdateNodeAffinitizedFlag.c)
 *     KiSelectIdealProcessor @ 0x140114150 (KiSelectIdealProcessor.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiExtendProcessAffinity @ 0x1402067B8 (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned __int64 *v4; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  char v8; // r13
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *v10; // rdi
  char BasePriority; // al
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v16; // r14
  int QuantumReset; // ecx
  __int64 v18; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v20; // rax
  __int64 result; // rax
  _LIST_ENTRY **v22; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  char v24; // dl
  char v25; // cl
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-58h] BYREF
  __int64 v31; // [rsp+48h] [rbp-50h]

  v4 = a2;
  if ( !a3 && a2 && *a2 )
  {
    v6 = KeSelectNodeForAffinity((__int64)a2);
    v8 = 0;
    v7 = *(_DWORD *)(v6 + 92);
  }
  else
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 1;
    if ( !a2 )
    {
      v30 = 0LL;
      v31 = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)&v10->0 ^ *(_DWORD *)(a1 + 120)) & 2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v10->ProcessLock);
  BasePriority = v10->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( v4 )
  {
    v26 = *((unsigned __int16 *)v4 + 4);
    v27 = v10->Affinity.Bitmap[v26];
    if ( !v27 || (v27 & *v4) != *v4 )
      KiExtendProcessAffinity(v10, (unsigned __int16)v26);
    if ( !*v4 )
      *v4 = v10->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v10 == CurrentThread->Process )
    {
      LOWORD(v31) = CurrentThread->UserAffinity.Group;
      v30 = v10->Affinity.Bitmap[(unsigned __int16)v31];
    }
    else
    {
      KeFirstGroupAffinityEx(&v30, &v10->Affinity.Count);
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
    v14 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v12 = *((unsigned __int16 *)v4 + 4);
      v7 = v10->ThreadSeed[v12];
      v6 = KeNodeBlock[v10->IdealNode[v12]];
    }
    *v4 &= *(_QWORD *)(v6 + 136);
    v13 = KiSelectIdealProcessor(v6, v7, v4);
    v14 = v13;
    if ( v8 )
      v10->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v13;
  }
  *(_DWORD *)(a1 + 196) = v14;
  p_ThreadListHead = &v10->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v14;
  v16 = KiProcessorBlock[v14];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v10 != (_KPROCESS *)&KiInitialProcess )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v22 = (_LIST_ENTRY **)qword_1403566E8;
    p_ProcessListEntry = &v10->ProcessListEntry;
    if ( *(__int64 **)qword_1403566E8 != &KiProcessListHead )
      __fastfail(3u);
    v10->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_1403566E8;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v22 = p_ProcessListEntry;
    qword_1403566E8 = (__int64)&v10->ProcessListEntry;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (32 * *(_DWORD *)&v10->0)) & 0x80;
  QuantumReset = (unsigned __int8)v10->QuantumReset;
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v18 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
  *(_QWORD *)(a1 + 32) = v18;
  KiAcquireKobjectLockSafe(&v10->Header.Lock);
  Blink = v10->ThreadListHead.Blink;
  v20 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
    __fastfail(3u);
  v20->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v20;
  v10->ThreadListHead.Blink = v20;
  _InterlockedAnd(&v10->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v10->0 & 8) != 0 )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = v10->SchedulingGroup;
  if ( v10->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v16, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1474LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 2) == 0 )
  {
    v24 = *(_BYTE *)(a1 + 195);
    if ( v24 > 0 )
    {
      v25 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v25 >= 16 )
        v25 = 15;
      if ( v25 > v24 )
      {
        *(_BYTE *)(a1 + 564) = (v25 - v24) & 0xF;
        KiUpdateThreadPriority(0LL, a1, (unsigned int)v25, 0LL);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 1504) = v10->ProcessTimerDelay;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v10->ProcessLock);
  __writecr8(CurrentIrql);
  result = (unsigned int)xmmword_1403E4010;
  if ( (xmmword_1403E4010 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v14);
    result = (unsigned int)xmmword_1403E4010;
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v14);
  }
  _InterlockedExchangeAdd(&v10->StackCount.Value, 8u);
  return result;
}
