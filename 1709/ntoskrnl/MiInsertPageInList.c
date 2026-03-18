/*
 * XREFs of MiInsertPageInList @ 0x140051480
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x140002340 (MiOutSwapWorkingSetCallback.c)
 *     MiHandleForkTransitionPte @ 0x14000E3C0 (MiHandleForkTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MmEnableModifiedWriteOfSection @ 0x140218E50 (MmEnableModifiedWriteOfSection.c)
 *     MiMarkFileOnlyPfnBad @ 0x140223474 (MiMarkFileOnlyPfnBad.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiFreeModifiedReservations @ 0x140225BB0 (MiFreeModifiedReservations.c)
 *     MiTransferPartitionPageRun @ 0x140238208 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x1402385C8 (MiMakePageBad.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     MiInsertDecayClusterTimer @ 0x140117038 (MiInsertDecayClusterTimer.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x140223F0C (MiWakeFileOnlyReaper.c)
 *     MiWakeModifiedPageWriter @ 0x140227290 (MiWakeModifiedPageWriter.c)
 */

void __fastcall MiInsertPageInList(__int64 a1, __int16 a2)
{
  __int64 v2; // r8
  __int16 v3; // r9
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  unsigned __int64 v9; // r8
  __int64 Process; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rbx
  unsigned __int64 v16; // rax
  _KSPIN_LOCK_QUEUE *v17; // r10
  unsigned __int64 *v18; // rbx
  unsigned __int16 v19; // cx
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 *v25; // r10
  unsigned int v26; // edx
  unsigned __int64 *v27; // rdx
  __int64 v28; // rdx
  unsigned int v29; // r9d
  char v30; // al
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  signed __int32 v40[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v41; // [rsp+20h] [rbp-58h]
  unsigned __int64 v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+20h]
  unsigned int v47; // [rsp+A0h] [rbp+28h]
  char v48; // [rsp+A8h] [rbp+30h]
  BOOL v49; // [rsp+B0h] [rbp+38h]
  __int64 v50; // [rsp+B8h] [rbp+40h]
  unsigned __int64 v51; // [rsp+B8h] [rbp+40h]

  v48 = a2;
  v2 = *(_QWORD *)(a1 + 40) >> 40;
  v3 = a2;
  memset(&v44, 0, sizeof(v44));
  v5 = *(_QWORD *)(qword_140388AF0 + 8 * (v2 & 0x3FF));
  if ( (a2 & 4) != 0 )
  {
    v6 = v5 + 2240;
    if ( (*(_BYTE *)(a1 + 35) & 0x40) != 0 && (unsigned int)MiIsPfnFileOnly(a1) )
      v6 = v7;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = v5 + 6336;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    v6 = v5 + 6400;
  }
  else
  {
    v6 = v5 + 4032;
    if ( (a2 & 0x100) == 0 )
      v6 = v5 + 3968;
  }
  v47 = *(_DWORD *)(v6 + 8);
  v41 = (a1 + 0x58000000000LL) / 48;
  _InterlockedOr(v40, 0);
  v50 = 0LL;
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v49 = 0;
  switch ( v47 )
  {
    case 2u:
      v8 = *(_BYTE *)(a1 + 35);
      if ( (v8 & 0x40) != 0 )
      {
        MiRestoreTransitionPte(a1, 0);
        MiInsertPageInList(a1, 32LL);
        return;
      }
      v9 = *(_QWORD *)(a1 + 40);
      Process = 0x10000000000000LL;
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v9 & 0x10000000000000LL) == 0 )
          goto LABEL_16;
      }
      else if ( (v9 & 0x10000000000000LL) == 0 )
      {
LABEL_16:
        v11 = v8;
        LOBYTE(v11) = (v8 & 8) != 0;
        if ( (v8 & 8) != 0 )
          v12 = 5LL;
        else
          v12 = *(_BYTE *)(a1 + 35) & 7;
        v6 = v5 + 8 * (v12 + 4 * (v12 + 72));
        v43 = v6;
        if ( (_BYTE)v11 )
        {
LABEL_36:
          if ( v48 >= 0 )
          {
            Process = v6 + 32;
            v44.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
            v44.LockQueue.Next = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v44, v6 + 32);
            }
            else if ( _InterlockedExchange64((volatile __int64 *)Process, (__int64)&v44) )
            {
              KxWaitForLockOwnerShip(&v44);
            }
          }
          goto LABEL_84;
        }
        Process = 0x200000000000000LL;
        if ( (v9 & 0x200000000000000LL) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4224));
        else
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4928));
        v13 = _InterlockedIncrement64((volatile signed __int64 *)(v5 + 5952));
        v42 = v13;
        if ( v13 <= 0x420 )
        {
          switch ( v13 )
          {
            case 0xA0uLL:
              v14 = 4840LL;
LABEL_32:
              LockHandle.LockQueue.Next = 0LL;
              LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4800);
              v15 = (struct _KEVENT *)(v14 + v5);
              KxAcquireQueuedSpinLock(&LockHandle);
              KeSetEvent(v15, 0, 0);
              ++v15[1].Header.LockNV;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v13 = v42;
              v6 = v43;
              break;
            case 0x420uLL:
              v14 = 4872LL;
              goto LABEL_32;
            case 0x22uLL:
              v14 = 4808LL;
              goto LABEL_32;
          }
        }
        v16 = v13 - 1;
        if ( v16 == *(_QWORD *)(v5 + 4968) || v16 == *(_QWORD *)(v5 + 4976) )
          MiUpdateAvailableEvents(v5, v11);
        goto LABEL_36;
      }
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
      return;
    case 3u:
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4224));
      else
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4928));
      break;
    case 4u:
      v50 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4224));
      else
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4928));
      v44.LockQueue.Next = v17;
      v44.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
      KxAcquireQueuedSpinLock(&v44);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v50 + 72));
      if ( (*(_DWORD *)(v50 + 56) & 8) != 0 )
        goto LABEL_84;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v50 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
      LOBYTE(v3) = v48;
      v47 = 3;
      break;
    default:
      if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
      {
        v44.LockQueue.Next = 0LL;
        v44.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4000);
        KxAcquireQueuedSpinLock(&v44);
      }
      else
      {
        if ( (v3 & 0x100) != 0 )
        {
          v27 = (unsigned __int64 *)(v5 + 4064);
        }
        else
        {
          MiClearPfnImageVerified(a1, 12);
          v27 = (unsigned __int64 *)(v5 + 4000);
        }
        v44.LockQueue.Next = 0LL;
        v44.LockQueue.Lock = v27;
        KxAcquireQueuedSpinLock(&v44);
        *(_QWORD *)(a1 + 8) = -4LL;
      }
      goto LABEL_84;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v5 + 6336));
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v23 = *(unsigned int *)(*(_QWORD *)(v5 + 5680) + 24LL);
    v44.LockQueue.Next = 0LL;
    v6 = v5 + 8 * (v23 + 4 * (v23 + 104));
    v44.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v44, v6 + 32);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v6 + 32), (__int64)&v44) )
    {
      KxWaitForLockOwnerShip(&v44);
    }
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | (((v6 - v5 - 3328) / 40) << 58);
  }
  else
  {
    if ( (v3 & 0x80u) == 0 )
    {
      v18 = (unsigned __int64 *)(v6 + 32);
      v44.LockQueue.Next = 0LL;
      v44.LockQueue.Lock = v18;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v44, v18);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v18, (__int64)&v44) )
      {
        KxWaitForLockOwnerShip(&v44);
      }
    }
    v19 = *(_QWORD *)(a1 + 16);
    v20 = (unsigned __int8)v19 >> 1;
    v21 = v19 >> 12;
    if ( (v20 & 1) != 0 || (_DWORD)v21 == *(_DWORD *)(v5 + 1140) )
      v6 = v5 + 8 * (v21 + 4 * (v21 + 84));
    else
      v6 = v5 + 2624;
    v22 = *(_QWORD *)v6;
    ++*(_QWORD *)(v5 + 6448);
    v49 = v22 == 0;
  }
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  ++*(_DWORD *)(Process + 1568);
  v9 = *(_QWORD *)(v5 + 5952);
  if ( v9 < 0x420 )
  {
    v24 = 0LL;
    v25 = (__int64 *)(v5 + 4072);
    while ( 1 )
    {
      Process = *v25;
      v26 = 0;
      if ( dword_140388544 )
        break;
LABEL_72:
      ++v24;
      ++v25;
      if ( v24 > 1 )
      {
        v51 = *(_QWORD *)(v5 + 6448);
        if ( v51 >= 0x10 )
          MiWakeModifiedPageWriter(v5, -1LL);
        if ( *(_QWORD *)(v5 + 6336) - v51 >= 0x10 )
          KeSetEvent((PRKEVENT)(v5 + 776), 0, 0);
        goto LABEL_77;
      }
    }
    while ( 1 )
    {
      v9 += *(unsigned __int16 *)Process;
      if ( v9 >= 0x420 )
        break;
      ++v26;
      Process += 16LL;
      if ( v26 >= dword_140388544 )
        goto LABEL_72;
    }
  }
LABEL_77:
  v50 = 0LL;
LABEL_84:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    MiInsertDecayClusterTimer(a1);
  else
    ++*(_QWORD *)v6;
  v28 = *(_QWORD *)(v6 + 24);
  v43 = v28;
  if ( v28 == 0xFFFFFFFFFLL )
  {
    v9 = v41;
    *(_QWORD *)(v6 + 16) = v41;
  }
  else
  {
    Process = 48 * v28 - 0x58000000000LL;
    *(_QWORD *)Process ^= (v41 ^ *(_QWORD *)Process) & 0xFFFFFFFFFLL;
  }
  v29 = v47;
  v30 = *(_BYTE *)(a1 + 34);
  if ( (__int64 *)v6 == &qword_140388220 )
  {
    *(_BYTE *)(a1 + 34) = v30 & 0xF8 | 2;
    MiWakeFileOnlyReaper(Process, v28, v9, v47);
    v28 = v43;
    v29 = v47;
  }
  else
  {
    *(_BYTE *)(a1 + 34) ^= (v47 ^ v30) & 7;
  }
  v31 = v41;
  *(_QWORD *)(v6 + 24) = v41;
  v32 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) ^= (v28 ^ v32) & 0xFFFFFFFFFLL;
  if ( v29 == 2 )
  {
    v28 = *(unsigned __int8 *)(a1 + 35);
    if ( (v28 & 8) == 0 )
    {
      v33 = (v28 & 7)
          + 8 * (((*(_QWORD *)(a1 + 40) >> 36) & 3LL) + 43LL * ((unsigned __int8)HIBYTE(*(_QWORD *)(a1 + 40)) >> 2))
          + 297;
      v34 = *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) + 16LL);
      v28 = 3 * v33;
      ++*(_QWORD *)(v34 + 24 * v33);
      v35 = v34 + 24 * v33;
      v36 = *(_QWORD *)(v35 + 16);
      if ( v36 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v35 + 8) = v31;
      }
      else
      {
        v28 = 48 * v36 - 0x58000000000LL;
        v37 = (*(_QWORD *)v28 ^ (v31 << 28)) & 0xFFFFFFFFFLL;
        *(_BYTE *)(v28 + 39) = v31;
        *(_QWORD *)v28 = (v31 << 28) ^ v37;
      }
      *(_WORD *)(a1 + 36) = v36;
      *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
      v38 = (*(_QWORD *)(a1 + 24) ^ (v36 << 20)) & 0xFFFFF000000000LL;
      *(_BYTE *)(a1 + 39) = -1;
      *(_QWORD *)(a1 + 24) ^= v38;
      *(_QWORD *)(v35 + 16) = v31;
    }
  }
  if ( v50 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v50 + 72));
  if ( v48 < 0 )
    goto LABEL_108;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v44, retaddr);
    goto LABEL_108;
  }
  _m_prefetchw(&v44);
  Next = v44.LockQueue.Next;
  if ( !v44.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)v44.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&v44) == &v44 )
      goto LABEL_108;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v44, v28);
  }
  v44.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_108:
  if ( v49 )
    KeSetEvent((PRKEVENT)(v5 + 864), 0, 0);
}
