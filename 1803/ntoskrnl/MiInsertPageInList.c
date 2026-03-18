/*
 * XREFs of MiInsertPageInList @ 0x14002D9F0
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x14000E4B0 (MiOutSwapWorkingSetPte.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14002E460 (MiInsertAndUnlockStandbyPages.c)
 *     MiWriteCompletePfn @ 0x14002F710 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140253170 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14025E0C4 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x14025F79C (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x14026FE30 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x1402701E8 (MiMakePageBad.c)
 * Callees:
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiRestoreTransitionPte @ 0x140053D40 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiWakeModifiedPageWriter @ 0x140081C4C (MiWakeModifiedPageWriter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     MiInsertDecayClusterTimer @ 0x1400B7F38 (MiInsertDecayClusterTimer.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateAvailableEvents @ 0x1401700A4 (MiUpdateAvailableEvents.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiWakeFileOnlyReaper @ 0x14025EC20 (MiWakeFileOnlyReaper.c)
 *     MiSetPfnInPageError @ 0x1402654C8 (MiSetPfnInPageError.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  struct _KEVENT *v15; // rbx
  unsigned __int64 v16; // rax
  volatile __int64 *v17; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v20; // eax
  _KSPIN_LOCK_QUEUE *v21; // r10
  __int64 v22; // rax
  unsigned __int64 *v23; // rbx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  unsigned __int16 v27; // cx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rcx
  volatile __int64 *v33; // r10
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // eax
  _KPROCESS *Process; // rcx
  unsigned __int64 v38; // r8
  unsigned __int16 **v39; // r10
  __int64 v40; // r11
  unsigned __int16 *v41; // rcx
  unsigned __int64 *v42; // rdx
  __int64 v43; // r8
  char v44; // cl
  __int64 v45; // rdx
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v53; // rcx
  _DWORD *v54; // rdx
  int v55; // eax
  signed __int32 v56[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v57; // [rsp+20h] [rbp-58h]
  unsigned __int64 v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v60; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+20h]
  unsigned int v63; // [rsp+A0h] [rbp+28h]
  BOOL v65; // [rsp+B0h] [rbp+38h]
  __int64 v66; // [rsp+B8h] [rbp+40h]
  unsigned __int64 v67; // [rsp+B8h] [rbp+40h]

  v2 = *(_QWORD *)(a1 + 40) >> 40;
  v3 = a2;
  memset(&v60, 0, sizeof(v60));
  v5 = *(_QWORD *)(qword_1403CBD88 + 8 * (v2 & 0x3FF));
  if ( (a2 & 4) != 0 )
  {
    v6 = v5 + 2304;
    if ( (*(_BYTE *)(a1 + 35) & 0x40) != 0 && (unsigned int)MiIsPfnFileOnly(a1) )
      v6 = v7;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = v5 + 7424;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    v6 = v5 + 7488;
  }
  else
  {
    v6 = v5 + 4096;
    if ( (a2 & 0x100) == 0 )
      v6 = v5 + 4032;
  }
  v63 = *(_DWORD *)(v6 + 8);
  v57 = (__int64)(a1 + 0x58000000000LL) / 48;
  _InterlockedOr(v56, 0);
  v65 = 0;
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v66 = 0LL;
  if ( v63 == 2 )
  {
    v8 = *(_BYTE *)(a1 + 35);
    if ( (v8 & 0x40) != 0 )
    {
      MiRestoreTransitionPte(a1);
      MiInsertPageInList(a1, 32LL);
      return;
    }
    v9 = *(_QWORD *)(a1 + 40);
    if ( ((v9 >> 52) & 1) != 0 )
    {
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
      return;
    }
    v10 = v8;
    LOBYTE(v10) = (v8 & 8) != 0;
    if ( (v8 & 8) != 0 )
      v11 = 5LL;
    else
      v11 = v8 & 7;
    v6 = v5 + 2368 + 40 * v11;
    v59 = v6;
    if ( (v8 & 8) != 0 )
      goto LABEL_33;
    v12 = 4288LL;
    if ( (v9 & 0x200000000000000LL) == 0 )
      v12 = 4992LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v12 + v5));
    v13 = _InterlockedIncrement64((volatile signed __int64 *)(v5 + 7040));
    v58 = v13;
    if ( v13 <= 0x420 )
    {
      switch ( v13 )
      {
        case 0xA0uLL:
          v14 = 4904LL;
LABEL_29:
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4864);
          v15 = (struct _KEVENT *)(v14 + v5);
          KxAcquireQueuedSpinLock(&LockHandle, v5 + 4864);
          KeSetEvent(v15, 0, 0);
          ++v15[1].Header.LockNV;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v13 = v58;
          v6 = v59;
          break;
        case 0x420uLL:
          v14 = 4936LL;
          goto LABEL_29;
        case 0x22uLL:
          v14 = 4872LL;
          goto LABEL_29;
      }
    }
    v16 = v13 - 1;
    if ( v16 == *(_QWORD *)(v5 + 6120) || v16 == *(_QWORD *)(v5 + 6128) )
      MiUpdateAvailableEvents(v5, v10);
LABEL_33:
    if ( (a2 & 0x80u) == 0 )
    {
      v17 = (volatile __int64 *)(v6 + 32);
      v60.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
      v60.LockQueue.Next = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = SchedulerAssist[5];
          SchedulerAssist[5] = v20 + 1;
          if ( v20 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v60, v17);
      }
      else if ( _InterlockedExchange64(v17, (__int64)&v60) )
      {
        KxWaitForLockOwnerShip(&v60);
      }
    }
    goto LABEL_98;
  }
  if ( v63 == 3 )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4288));
    else
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 4992));
    goto LABEL_53;
  }
  if ( v63 != 4 )
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
    {
      v60.LockQueue.Next = 0LL;
      v60.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 4064);
      KxAcquireQueuedSpinLock(&v60, v5 + 4064);
    }
    else
    {
      if ( (v3 & 0x100) != 0 )
      {
        v42 = (unsigned __int64 *)(v5 + 4128);
      }
      else
      {
        MiClearPfnImageVerified(a1);
        v42 = (unsigned __int64 *)(v5 + 4064);
      }
      v60.LockQueue.Next = 0LL;
      v60.LockQueue.Lock = v42;
      KxAcquireQueuedSpinLock(&v60, v42);
      *(_QWORD *)(a1 + 8) = -4LL;
    }
    goto LABEL_98;
  }
  v66 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  v22 = 4288LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
    v22 = 4992LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v22 + v5));
  v60.LockQueue.Next = v21;
  v60.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
  KxAcquireQueuedSpinLock(&v60, v6 + 32);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v66 + 72));
  if ( (*(_DWORD *)(v66 + 56) & 8) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v66 + 72));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v60);
    v3 = a2;
    v63 = 3;
LABEL_53:
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 7424));
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    {
      v32 = *(unsigned int *)(*(_QWORD *)(v5 + 6768) + 24LL);
      v6 = v5 + 8 * (v32 + 424 + 4 * v32);
      v60.LockQueue.Next = 0LL;
      v33 = (volatile __int64 *)(v6 + 32);
      v60.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 32);
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v36 = v35[5];
          v35[5] = v36 + 1;
          if ( v36 == -1 && !*((_BYTE *)v35 + 25) && !*((_BYTE *)v35 + 27) )
            KiPerformUnboostKick(v34);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v60, v33);
      }
      else if ( _InterlockedExchange64(v33, (__int64)&v60) )
      {
        KxWaitForLockOwnerShip(&v60);
      }
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | (((v6 - v5 - 3392) / 40) << 58);
      v31 = 0;
    }
    else
    {
      if ( (v3 & 0x80u) == 0LL )
      {
        v23 = (unsigned __int64 *)(v6 + 32);
        v60.LockQueue.Next = 0LL;
        v60.LockQueue.Lock = v23;
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v26 = v25[5];
            v25[5] = v26 + 1;
            if ( v26 == -1 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
              KiPerformUnboostKick(v24);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v60, v23);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)v23, (__int64)&v60) )
        {
          KxWaitForLockOwnerShip(&v60);
        }
      }
      v27 = *(_QWORD *)(a1 + 16);
      v28 = (unsigned __int8)v27 >> 1;
      v29 = v27 >> 12;
      if ( (v28 & 1) != 0 || (_DWORD)v29 == *(_DWORD *)(v5 + 1140) )
        v6 = v5 + 8 * (v29 + 4 * (v29 + 86));
      else
        v6 = v5 + 2688;
      v30 = *(_QWORD *)v6;
      v31 = 0;
      ++*(_QWORD *)(v5 + 7536);
      v65 = v30 == 0;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    ++LODWORD(Process[2].Affinity.Bitmap[3]);
    v38 = *(_QWORD *)(v5 + 7040);
    if ( v38 < 0x420 )
    {
      v3 = (unsigned int)dword_1403CB6DC;
      v39 = (unsigned __int16 **)(v5 + 4136);
      v40 = 0LL;
      while ( 1 )
      {
        v41 = *v39;
        if ( dword_1403CB6DC )
          break;
LABEL_86:
        ++v40;
        ++v39;
        v31 = 0;
        if ( v40 > 1 )
        {
          v67 = *(_QWORD *)(v5 + 7536);
          if ( v67 >= 0x10 )
            MiWakeModifiedPageWriter(v5, -1LL);
          if ( *(_QWORD *)(v5 + 7424) - v67 >= 0x10 )
            KeSetEvent((PRKEVENT)(v5 + 776), 0, 0);
          goto LABEL_91;
        }
      }
      while ( 1 )
      {
        v38 += *v41;
        if ( v38 >= 0x420 )
          break;
        ++v31;
        v41 += 8;
        if ( v31 >= dword_1403CB6DC )
          goto LABEL_86;
      }
    }
LABEL_91:
    v66 = 0LL;
  }
LABEL_98:
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    MiInsertDecayClusterTimer(a1);
  else
    ++*(_QWORD *)v6;
  v43 = *(_QWORD *)(v6 + 24);
  v59 = v43;
  if ( v43 == 0xFFFFFFFFFLL )
    *(_QWORD *)(v6 + 16) = v57;
  else
    *(_QWORD *)(48 * v43 - 0x58000000000LL) ^= (*(_QWORD *)(48 * v43 - 0x58000000000LL) ^ v57) & 0xFFFFFFFFFLL;
  v44 = *(_BYTE *)(a1 + 34);
  if ( (__int64 *)v6 == &qword_1403CB3C0 )
  {
    *(_BYTE *)(a1 + 34) = v44 & 0xF8 | 2;
    MiSetPfnInPageError(a1, 1LL);
    MiWakeFileOnlyReaper();
    v43 = v59;
    v45 = v63;
  }
  else
  {
    v45 = v63;
    *(_BYTE *)(a1 + 34) = v44 ^ (v63 ^ v44) & 7;
  }
  v46 = v57;
  v47 = v43 & 0xFFFFFFFFFLL;
  *(_QWORD *)(v6 + 24) = v57;
  v48 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) = v47 | v48 & 0xFFFFFFF000000000uLL;
  if ( (_DWORD)v45 == 2 )
  {
    v3 = *(unsigned __int8 *)(a1 + 35);
    if ( (v3 & 8) == 0 )
    {
      v49 = *(_QWORD *)(a1 + 40);
      v45 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v49 >> 40) & 0x3FF)) + 16LL) + 1984 * (v49 >> 58);
      v3 = v45 + 24 * ((v3 & 7) + 8 * ((v49 >> 36) & 3));
      ++*(_QWORD *)(v3 + 856);
      v50 = *(_QWORD *)(v3 + 872);
      if ( v50 == 0xFFFFFFFFFLL )
      {
        *(_QWORD *)(v3 + 864) = v46;
      }
      else
      {
        v45 = 48 * v50 - 0x58000000000LL;
        v51 = (*(_QWORD *)v45 ^ (v46 << 28)) & 0xFFFFFFFFFLL;
        *(_BYTE *)(v45 + 39) = v46;
        *(_QWORD *)v45 = (v46 << 28) ^ v51;
      }
      *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
      *(_WORD *)(a1 + 36) = v50;
      v47 = (*(_QWORD *)(a1 + 24) ^ (v50 >> 16 << 36)) & 0xFFFFF000000000LL;
      *(_BYTE *)(a1 + 39) = -1;
      *(_QWORD *)(a1 + 24) ^= v47;
      *(_QWORD *)(v3 + 872) = v46;
    }
  }
  if ( v66 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v66 + 72));
  if ( (a2 & 0x80u) != 0 )
    goto LABEL_128;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v60);
    Next = v60.LockQueue.Next;
    if ( !v60.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v60.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&v60) == &v60 )
        goto LABEL_122;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v60, v45, v47, v3);
    }
    v60.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_122;
  }
  KiReleaseQueuedSpinLockInstrumented(&v60, retaddr, v47, v3);
LABEL_122:
  v53 = KeGetCurrentPrcb();
  v54 = v53->SchedulerAssist;
  if ( v54 )
  {
    if ( v53->NestingLevel <= 1u )
    {
      v55 = v54[5] - 1;
      v54[5] = v55;
      if ( !v55 && !*((_BYTE *)v54 + 25) && !*((_BYTE *)v54 + 27) )
        KiPerformUnboostKick(v53);
    }
  }
LABEL_128:
  if ( v65 )
    KeSetEvent((PRKEVENT)(v5 + 864), 0, 0);
}
