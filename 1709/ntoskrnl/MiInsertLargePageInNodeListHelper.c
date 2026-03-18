/*
 * XREFs of MiInsertLargePageInNodeListHelper @ 0x1400C6B30
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x140050390 (MiCoalesceFreePages.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiAttemptHugePageCoalesce @ 0x1400C59B0 (MiAttemptHugePageCoalesce.c)
 *     MiDeleteClusterSection @ 0x1400CB53C (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiFreeLargePageChain @ 0x140157020 (MiFreeLargePageChain.c)
 *     MiEnableNewPfns @ 0x140214488 (MiEnableNewPfns.c)
 *     MiMoveLargeFreePage @ 0x14023312C (MiMoveLargeFreePage.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 *     MiScrubNodeLargePageList @ 0x140233A64 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     MiAttemptHugePageCoalesce @ 0x1400C59B0 (MiAttemptHugePageCoalesce.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiIncreaseAvailablePages @ 0x1400C72C0 (MiIncreaseAvailablePages.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertLargePageInNodeListHelper(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  unsigned __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 Next; // rax
  unsigned __int64 *v23; // rax
  _BOOL8 v24; // [rsp+20h] [rbp-88h]
  __int64 v25; // [rsp+28h] [rbp-80h]
  unsigned int v26; // [rsp+30h] [rbp-78h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  unsigned __int64 v28; // [rsp+40h] [rbp-68h]
  unsigned __int64 v29; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v34; // [rsp+C8h] [rbp+20h]

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 48 * a1 - 0x58000000000LL;
  v28 = v7 + 48 * a2;
  v8 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL));
  v9 = MiFreeZeroPageSizeIndex(v7);
  v11 = v9;
  v34 = v9;
  v27 = v9;
  v12 = MiLargePageSizes[v9];
  v29 = v12;
  if ( v12 == 16 )
    v13 = v10 >> 4;
  else
    v13 = v10 / v12;
  MiPageToNode(a1, 1LL);
  v15 = (unsigned int)MiPageToChannel(a1);
  v16 = *(_QWORD *)(v8 + 16) + 8256 * v14;
  v25 = v15;
  v24 = a1 < 0x100000;
  if ( (_DWORD)v11 == 2 )
  {
    v26 = ((unsigned int)dword_140388540 >> 4) & (a1 >> 4);
    v17 = 16 * (v15 + 4 * (v4 + 2LL * (a1 < 0x100000))) + v26 + 59LL;
  }
  else
  {
    v26 = 0;
    v17 = v15 + 4 * (v4 + 2 * ((a1 < 0x100000) + 2 * v11)) + 27;
  }
  v18 = v16 + 16 * v17;
  if ( (a4 & 4) == 0 )
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v16 + 8200);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v16 + 8200);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v16 + 8200), (__int64)&LockHandle);
      if ( v19 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v19);
    }
  }
  if ( (MiFlags & 0x30) != 0 )
  {
    *(_BYTE *)(v7 + 34) ^= (v4 ^ *(_BYTE *)(v7 + 34)) & 7;
    if ( !(_DWORD)v4 && v34 == 1 && (a4 & 1) == 0 && (unsigned int)MiAttemptHugePageCoalesce(a1) == 1 )
    {
      MiIncreaseAvailablePages(v8, a2);
      if ( (a4 & 4) == 0 )
        goto LABEL_34;
      return;
    }
    v20 = *(unsigned __int64 **)(v18 + 8);
    if ( *v20 != v18 )
      __fastfail(3u);
    *(_QWORD *)v7 = v18;
    *(_QWORD *)(v7 + 8) = v20;
    *v20 = v7;
    *(_QWORD *)(v18 + 8) = v7;
  }
  else
  {
    for ( ; v7 < v28; v7 += 48 * v29 )
    {
      v23 = *(unsigned __int64 **)(v18 + 8);
      if ( *v23 != v18 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = v23;
      *(_QWORD *)v7 = v18;
      *v23 = v7;
      *(_QWORD *)(v18 + 8) = v7;
    }
  }
  if ( v34 > 1 )
  {
    v21 = v26 + 16 * (v25 + 4 * (v4 + 2 * v24));
    *(_QWORD *)(v16 + 8 * v21 + 5040) += v13;
  }
  *(_QWORD *)(v16 + 8 * (v25 + 4 * (v4 + 2 * (v24 + 2 * v27))) + 48) += v13;
  *(_QWORD *)(v16 + 8 * (v4 + 2 * v27)) += v13;
  if ( (_DWORD)v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2176), a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 2112), a2);
  if ( (a4 & 2) == 0 )
    MiIncreaseAvailablePages(v8, a2);
  if ( (a4 & 4) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_25;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_25;
      Next = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_25:
  if ( (_DWORD)v4 == 1 && !*(_BYTE *)(v8 + 5208) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4800);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v8 + 4800));
    if ( !*(_BYTE *)(v8 + 5208) )
    {
      *(_BYTE *)(v8 + 5208) = 1;
      KeSetEvent((PRKEVENT)(v8 + 5184), 0, 0);
    }
LABEL_34:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
