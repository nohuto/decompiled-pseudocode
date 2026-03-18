/*
 * XREFs of MiInsertLargePageInNodeListHelper @ 0x1400B7240
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiAttemptHugePageCoalesce @ 0x1400B58B0 (MiAttemptHugePageCoalesce.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400C77B0 (MiCoalesceFreePages.c)
 *     MiDeleteClusterSection @ 0x14010A950 (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiEnableNewPfns @ 0x14020D3DC (MiEnableNewPfns.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x140221A88 (MiInsertUnusedLargePageInNodeList.c)
 *     MiFreeLargePageChain @ 0x140224000 (MiFreeLargePageChain.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 *     MiMoveLargeFreePage @ 0x1402244C0 (MiMoveLargeFreePage.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x140800A20 (MxCreateFreePfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiAttemptHugePageCoalesce @ 0x1400B58B0 (MiAttemptHugePageCoalesce.c)
 *     MiIncreaseAvailablePages @ 0x1400B6F40 (MiIncreaseAvailablePages.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400B7220 (MiPageToChannel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertLargePageInNodeListHelper(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // r12
  unsigned __int64 v7; // rbx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned int v16; // eax
  char v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r13
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // r14
  _QWORD *v24; // rdx
  unsigned __int64 *v25; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  _QWORD *v27; // rdx
  unsigned __int64 *v28; // rax
  __int64 v29; // [rsp+20h] [rbp-78h]
  unsigned __int64 v30; // [rsp+28h] [rbp-70h]
  unsigned __int64 v31; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = 0;
  v9 = v7 + 48 * a2;
  v10 = *(_QWORD *)(v7 + 40);
  v30 = v9;
  v11 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v10 >> 40) & 0x3FF));
  v12 = v10 & 0xFFFFFFFFFLL;
  v13 = &MiLargePageContainingFrames;
  while ( v12 != *v13 )
  {
    ++v8;
    ++v13;
    if ( v8 >= 3 )
    {
      v8 = -1;
      break;
    }
  }
  v14 = MiLargePageSizes[v8];
  v31 = v14;
  if ( v14 == 16 )
    v15 = a2 >> 4;
  else
    v15 = a2 / v14;
  MiPageToNode(a1, 1LL);
  v16 = MiPageToChannel(a1);
  v17 = a4;
  v18 = 2LL * v8;
  v20 = *(_QWORD *)(v11 + 48) + 2184 * v19;
  v21 = v4;
  v22 = v16 + 4 * (v4 + 2 * ((a1 < 0x100000) + v18));
  v29 = v22;
  v23 = v20 + 16 * (v22 + 3);
  if ( (a4 & 4) == 0 )
  {
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v20 + 2176);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v20 + 2176);
      v22 = v29;
      v21 = v4;
      v18 = 2LL * v8;
      v17 = a4;
    }
    else
    {
      v24 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v20 + 2176), (__int64)&LockHandle);
      if ( v24 )
      {
        KxWaitForLockOwnerShip((__int64)&LockHandle, v24);
        v22 = v29;
        v21 = v4;
        v18 = 2LL * v8;
        v17 = a4;
      }
    }
  }
  if ( (MiFlags & 0x30) == 0 )
  {
    for ( ; v7 < v30; v7 += 48 * v31 )
    {
      v28 = *(unsigned __int64 **)(v23 + 8);
      if ( *v28 != v23 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = v28;
      *(_QWORD *)v7 = v23;
      *v28 = v7;
      *(_QWORD *)(v23 + 8) = v7;
    }
LABEL_17:
    *(_QWORD *)(v20 + 8 * v22 + 816) += v15;
    *(_QWORD *)(v20 + 8 * (v21 + v18)) += v15;
    if ( (_DWORD)v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 2048), a2);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 1984), a2);
    if ( (v17 & 2) == 0 )
      MiIncreaseAvailablePages(v11, a2);
    if ( (a4 & 4) == 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_25;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_25;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
LABEL_25:
    if ( (_DWORD)v4 == 1 && !*(_BYTE *)(v11 + 5080) )
    {
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 4672);
      LockHandle.LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11 + 4672);
      }
      else
      {
        v27 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v11 + 4672), (__int64)&LockHandle);
        if ( v27 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v27);
      }
      if ( !*(_BYTE *)(v11 + 5080) )
      {
        *(_BYTE *)(v11 + 5080) = 1;
        KeSetEvent((PRKEVENT)(v11 + 5056), 0, 0);
      }
      goto LABEL_34;
    }
    return;
  }
  *(_BYTE *)(v7 + 34) ^= (v4 ^ *(_BYTE *)(v7 + 34)) & 7;
  if ( (_DWORD)v4 || v8 != 1 || (v17 & 1) != 0 )
  {
LABEL_15:
    v25 = *(unsigned __int64 **)(v23 + 8);
    if ( *v25 != v23 )
      __fastfail(3u);
    *(_QWORD *)v7 = v23;
    *(_QWORD *)(v7 + 8) = v25;
    *v25 = v7;
    *(_QWORD *)(v23 + 8) = v7;
    goto LABEL_17;
  }
  if ( (unsigned int)MiAttemptHugePageCoalesce(a1) != 1 )
  {
    v17 = a4;
    v21 = v4;
    v18 = 2LL * v8;
    v22 = v29;
    goto LABEL_15;
  }
  MiIncreaseAvailablePages(v11, a2);
  if ( (a4 & 4) == 0 )
LABEL_34:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
