/*
 * XREFs of MiInsertPageInList @ 0x1400C88B0
 * Callers:
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400C4D40 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     MmEnableModifiedWriteOfSection @ 0x1402115C0 (MmEnableModifiedWriteOfSection.c)
 *     MiFreeModifiedReservations @ 0x14021A050 (MiFreeModifiedReservations.c)
 *     MiTransferPartitionPageRun @ 0x14021EA0C (MiTransferPartitionPageRun.c)
 *     MiHandleForkTransitionPte @ 0x1402232C0 (MiHandleForkTransitionPte.c)
 *     MiMakePageBad @ 0x140225FD8 (MiMakePageBad.c)
 * Callees:
 *     MiInsertDecayClusterTimer @ 0x14001C620 (MiInsertDecayClusterTimer.c)
 *     MiWakeModifiedPageWriter @ 0x14003BB18 (MiWakeModifiedPageWriter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertPageInList(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _KSPIN_LOCK_QUEUE *v17; // r10
  unsigned __int64 *v18; // rbx
  _QWORD *v19; // rdx
  unsigned __int16 v20; // cx
  char v21; // al
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r11
  __int64 v30; // rax
  char v31; // r10
  _QWORD *v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  signed __int32 v38[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v39; // [rsp+20h] [rbp-58h]
  unsigned __int64 v40; // [rsp+28h] [rbp-50h]
  _QWORD *v41; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+20h]
  int v45; // [rsp+A0h] [rbp+28h]
  char v46; // [rsp+A8h] [rbp+30h]
  BOOL v47; // [rsp+B0h] [rbp+38h]
  __int64 v48; // [rsp+B8h] [rbp+40h]
  __int64 v49; // [rsp+B8h] [rbp+40h]
  unsigned __int64 v50; // [rsp+B8h] [rbp+40h]

  v46 = a2;
  v2 = *(_QWORD *)(a1 + 40) >> 40;
  memset(&v42, 0, sizeof(v42));
  v4 = a2;
  v5 = *(_QWORD *)(qword_14036C8F8 + 8 * (v2 & 0x3FF));
  if ( (a2 & 4) != 0 )
  {
    v6 = 2112LL;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = 6144LL;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    v6 = 6208LL;
  }
  else
  {
    v6 = (a2 & 0x100 | 0x3C00uLL) >> 2;
  }
  v7 = (_QWORD *)(v6 + v5);
  v45 = *(_DWORD *)(v6 + v5 + 8);
  v8 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v39 = (a1 + 0x58000000000LL) / 48;
  _InterlockedOr(v38, 0);
  v47 = 0;
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v48 = 0LL;
  if ( v45 != 2 )
  {
    if ( v45 == 3 )
    {
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4096));
      else
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4800));
    }
    else
    {
      if ( v45 != 4 )
      {
        if ( (v4 & 0x100) != 0 )
        {
          v27 = (unsigned __int64 *)(v5 + 3936);
        }
        else
        {
          MiClearPfnImageVerified(a1, 12);
          v27 = (unsigned __int64 *)(v5 + 3872);
        }
        v42.LockQueue.Next = 0LL;
        v42.LockQueue.Lock = v27;
        KxAcquireQueuedSpinLock((__int64)&v42, (volatile __int64 *)v27);
        *(_QWORD *)(a1 + 8) = -4LL;
        goto LABEL_76;
      }
      v48 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), v8, 4LL, v4);
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4096));
      else
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4800));
      v42.LockQueue.Next = v17;
      v42.LockQueue.Lock = v7 + 4;
      KxAcquireQueuedSpinLock((__int64)&v42, v7 + 4);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v48 + 72));
      if ( (*(_DWORD *)(v48 + 56) & 8) != 0 )
        goto LABEL_76;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v48 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
      LOBYTE(v4) = v46;
      v45 = 3;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 6144));
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    {
      v24 = *(unsigned int *)(*(_QWORD *)(v5 + 5544) + 24LL);
      v42.LockQueue.Next = 0LL;
      v7 = (_QWORD *)(40 * v24 + v5 + 3200);
      v49 = 40 * v24;
      v42.LockQueue.Lock = v7 + 4;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v42, v7 + 4);
      }
      else
      {
        v25 = (_QWORD *)_InterlockedExchange64(v7 + 4, (__int64)&v42);
        if ( v25 )
          KxWaitForLockOwnerShip((__int64)&v42, v25);
      }
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((v49 / 40) << 58);
    }
    else
    {
      if ( (v4 & 0x80u) == 0LL )
      {
        v18 = v7 + 4;
        v42.LockQueue.Next = 0LL;
        v42.LockQueue.Lock = v18;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v42, v18);
        }
        else
        {
          v19 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v18, (__int64)&v42);
          if ( v19 )
            KxWaitForLockOwnerShip((__int64)&v42, v19);
        }
      }
      v20 = *(_QWORD *)(a1 + 16);
      v21 = (unsigned __int8)v20 >> 1;
      v22 = v20 >> 12;
      if ( (v21 & 1) != 0 || v22 == *(_DWORD *)(v5 + 1188) )
        v7 = (_QWORD *)(v5 + 40 * (v22 + 64LL));
      else
        v7 = (_QWORD *)(v5 + 2496);
      v23 = *v7;
      ++*(_QWORD *)(v5 + 6256);
      v47 = v23 == 0;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    ++LODWORD(Process[2].Affinity.Bitmap[3]);
    if ( *(_QWORD *)(v5 + 5760) < 0x420uLL )
    {
      v50 = *(_QWORD *)(v5 + 6256);
      if ( v50 >= 0x10 )
        MiWakeModifiedPageWriter(v5, -1LL);
      if ( *(_QWORD *)(v5 + 6144) - v50 >= 0x10 )
        KeSetEvent((PRKEVENT)(v5 + 824), 0, 0);
    }
    v48 = 0LL;
LABEL_76:
    if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
      MiInsertDecayClusterTimer(a1);
    else
      ++*v7;
    v28 = v7[3];
    v29 = v39;
    if ( v28 == 0xFFFFFFFFFLL )
      v7[2] = v39;
    else
      *(_QWORD *)(48 * v28 - 0x58000000000LL) ^= (v39 ^ *(_QWORD *)(48 * v28 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ v45) & 7;
    v7[3] = v29;
    v30 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) ^= (v28 ^ v30) & 0xFFFFFFFFFLL;
    if ( v45 == 2 )
    {
      v31 = *(_BYTE *)(a1 + 35);
      if ( (v31 & 8) == 0 )
      {
        v32 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 48LL)
                       + 24
                       * ((v31 & 7) + 91LL * (*(_QWORD *)(a1 + 40) >> 58) + 8 * ((*(_QWORD *)(a1 + 40) >> 36) & 3LL)));
        ++v32[155];
        v33 = v32[157];
        if ( v33 == 0xFFFFFFFFFLL )
        {
          v32[156] = v29;
        }
        else
        {
          v34 = 48 * v33 - 0x58000000000LL;
          v35 = (*(_QWORD *)v34 ^ (v29 << 28)) & 0xFFFFFFFFFLL;
          *(_BYTE *)(v34 + 39) = v29;
          *(_QWORD *)v34 = (v29 << 28) ^ v35;
        }
        *(_WORD *)(a1 + 36) = v33;
        *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
        v36 = (*(_QWORD *)(a1 + 24) ^ (v33 << 20)) & 0xFFFFF000000000LL;
        *(_BYTE *)(a1 + 39) = -1;
        *(_QWORD *)(a1 + 24) ^= v36;
        v32[157] = v29;
      }
    }
    if ( v48 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v48 + 72));
    if ( v46 < 0 )
      goto LABEL_97;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v42, retaddr);
      goto LABEL_97;
    }
    _m_prefetchw(&v42);
    Next = v42.LockQueue.Next;
    if ( !v42.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v42.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&v42) == &v42 )
        goto LABEL_97;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v42);
    }
    v42.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_97:
    if ( v47 )
      KeSetEvent((PRKEVENT)(v5 + 912), 0, 0);
    return;
  }
  v9 = *(unsigned __int8 *)(a1 + 35);
  if ( (v9 & 0x40) != 0 )
  {
    MiRestoreTransitionPte(a1, 0LL, v9, v4);
    MiInsertPageInList(a1, 32LL);
    return;
  }
  v10 = *(_QWORD *)(a1 + 40);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (v10 & 0x10000000000000LL) == 0 )
      goto LABEL_13;
  }
  else if ( (v10 & 0x10000000000000LL) == 0 )
  {
LABEL_13:
    if ( (v9 & 8) != 0 )
      v11 = 5LL;
    else
      v11 = v9 & 7;
    v7 = (_QWORD *)(v5 + 8 * (v11 + 4 * (v11 + 68)));
    v41 = v7;
    if ( (v9 & 8) != 0 )
    {
LABEL_35:
      if ( v46 >= 0 )
      {
        v42.LockQueue.Lock = v7 + 4;
        v42.LockQueue.Next = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v42, v7 + 4);
        }
        else
        {
          v16 = (_QWORD *)_InterlockedExchange64(v7 + 4, (__int64)&v42);
          if ( v16 )
            KxWaitForLockOwnerShip((__int64)&v42, v16);
        }
      }
      goto LABEL_76;
    }
    if ( (v10 & 0x200000000000000LL) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4096));
    else
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4800));
    v12 = 1;
    v13 = _InterlockedIncrement64((volatile signed __int64 *)(v5 + 5760));
    v40 = v13;
    if ( v13 <= 0x420 )
    {
      switch ( v13 )
      {
        case 0xA0uLL:
LABEL_31:
          v14 = 32LL * v12;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4672);
          LockHandle.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 4672));
          KeSetEvent((PRKEVENT)(v14 + v5 + 4680), 0, 0);
          ++*(_DWORD *)(v14 + v5 + 4704);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v13 = v40;
          v7 = v41;
          break;
        case 0x420uLL:
          v12 = 2;
          goto LABEL_31;
        case 0x22uLL:
          v12 = 0;
          goto LABEL_31;
      }
    }
    v15 = v13 - 1;
    if ( v15 == *(_QWORD *)(v5 + 4840) || v15 == *(_QWORD *)(v5 + 4848) )
      MiUpdateAvailableEvents(v5);
    goto LABEL_35;
  }
  if ( (v10 & 0x200000000000000LL) != 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4096));
  else
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4800));
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
}
