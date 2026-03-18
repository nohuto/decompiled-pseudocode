/*
 * XREFs of MiInsertLargePageInNodeListHelper @ 0x140122680
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140029290 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002C6E0 (MiCoalesceFreePages.c)
 *     MiConstructNewLargeFreePage @ 0x1400A3550 (MiConstructNewLargeFreePage.c)
 *     MiInsertLargePageInNodeList @ 0x140136628 (MiInsertLargePageInNodeList.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 *     MiFreeLargePageChain @ 0x14026C050 (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x14026C11C (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x14026C284 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x14089A028 (MxCreateFreePfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiIncreaseAvailablePages @ 0x140122A90 (MiIncreaseAvailablePages.c)
 *     MiPageToChannel @ 0x140122B2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiArePageContentsZero @ 0x140264DE4 (MiArePageContentsZero.c)
 */

void __fastcall MiInsertLargePageInNodeListHelper(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // r14
  unsigned __int64 v16; // rcx
  ULONG_PTR v17; // rcx
  unsigned __int64 v18; // r8
  volatile __int64 *v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v24; // rdx
  unsigned __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 Next; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  unsigned __int64 *i; // rax
  unsigned __int64 *v32; // rcx
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v39; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v40; // [rsp+A8h] [rbp+10h]
  unsigned int v41; // [rsp+B0h] [rbp+18h]

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v40 = v7 + 48 * a2;
  v8 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
  v9 = MiFreeZeroPageSizeIndex(v7);
  v10 = v9;
  v41 = v9;
  v11 = MiLargePageSizes[v9];
  v35 = v11;
  if ( (_DWORD)v4 != 1 && (MiFlags & 0x80u) != 0 && (++dword_1403CBEAC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(BugCheckParameter2);
  if ( v11 == 16 )
    v12 = a2 >> 4;
  else
    v12 = a2 / v11;
  MiPageToNode(BugCheckParameter2, 1LL);
  v14 = (unsigned int)MiPageToChannel(BugCheckParameter2);
  v15 = *(_QWORD *)(v8 + 16) + 1984 * v13;
  v16 = MiLargePageSizes[v10];
  if ( v16 == 16 )
    v17 = BugCheckParameter2 >> 4;
  else
    v17 = BugCheckParameter2 / v16;
  v18 = (unsigned int)dword_1403CB6E8[v10];
  if ( v18 == 16 )
    LODWORD(v17) = v17 & 0xF;
  else
    v17 %= v18;
  v39 = v14;
  v19 = (volatile __int64 *)(v15 + 1928);
  v36 = 4 * (v4 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
  v20 = *(_QWORD *)(v15 + 272 * v10 + 8 * (v36 + v14) + 144);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v15 + 1928);
  v21 = v20 + 24LL * (unsigned int)v17;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v33 = SchedulerAssist[5];
      SchedulerAssist[5] = v33 + 1;
      if ( v33 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v19);
  }
  else
  {
    v24 = (_QWORD *)_InterlockedExchange64(v19, (__int64)&LockHandle);
    if ( !v24 )
      goto LABEL_11;
    KxWaitForLockOwnerShip((__int64)&LockHandle, v24);
  }
  v14 = v39;
LABEL_11:
  if ( (MiFlags & 0x30) != 0 )
  {
    *(_BYTE *)(v7 + 34) ^= (v4 ^ *(_BYTE *)(v7 + 34)) & 7;
    v25 = *(unsigned __int64 **)(v21 + 8);
    if ( *v25 != v21 )
      __fastfail(3u);
    *(_QWORD *)v7 = v21;
    *(_QWORD *)(v7 + 8) = v25;
    *v25 = v7;
    *(_QWORD *)(v21 + 8) = v7;
  }
  else if ( v7 < v40 )
  {
    for ( i = *(unsigned __int64 **)(v21 + 8); ; i = v32 )
    {
      v32 = (unsigned __int64 *)v7;
      if ( *i != v21 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = i;
      *(_QWORD *)v7 = v21;
      *i = v7;
      *(_QWORD *)(v21 + 8) = v7;
      v7 += 48 * v35;
      if ( v7 >= v40 )
        break;
    }
  }
  *(_QWORD *)(v21 + 16) += v12;
  v26 = 34LL * v41;
  *(_QWORD *)(v15 + 8 * (v14 + v26 + v36) + 16) += v12;
  *(_QWORD *)(v15 + 8 * (v26 + v4)) += v12;
  v27 = 2176LL;
  if ( (_DWORD)v4 )
    v27 = 2240LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + v8), a2);
  MiIncreaseAvailablePages(v8, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_19;
  }
  _m_prefetchw(&LockHandle);
  Next = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_41;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_41:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_19:
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v34 = v30[5] - 1;
      v30[5] = v34;
      if ( !v34 && !*((_BYTE *)v30 + 25) && !*((_BYTE *)v30 + 27) )
        KiPerformUnboostKick(v29);
    }
  }
  if ( (_DWORD)v4 == 1 && !*(_BYTE *)(v8 + 6296) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4864);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 4864));
    if ( !*(_BYTE *)(v8 + 6296) )
    {
      *(_BYTE *)(v8 + 6296) = 1;
      KeSetEvent((PRKEVENT)(v8 + 6272), 0, 0);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( (a4 & 1) == 0 && v41 && (v41 != 1 || (KeFeatureBits & 0x2000000000LL) != 0) && (MiFlags & 0x30) != 0 )
    MiQueueLargeFreeZeroRebuild(v8, BugCheckParameter2 & ~(MiLargePageSizes[v41 - 1] - 1));
}
