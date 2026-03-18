/*
 * XREFs of MiFinishVadDeletion @ 0x1400DA7D0
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x14051DBE0 (MiReturnVadQuota.c)
 *     MiFreeRfgControlStack @ 0x1406BFE90 (MiFreeRfgControlStack.c)
 */

void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v4; // eax
  int v6; // r15d
  _KPROCESS *Process; // rbx
  BOOL v8; // r9d
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // r13
  unsigned int v12; // eax
  ULONG_PTR v13; // r14
  struct _KTHREAD *v14; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rbx
  __int64 v24; // rdx
  __int16 v25; // ax
  __int16 v26; // ax
  _QWORD *v27; // r12
  LONG *v28; // r14
  __int64 **v29; // r12
  _KPROCESS *v30; // rbx
  LONG *p_ProfileListHead; // rdi
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v33; // edx
  __int64 *v34; // rcx
  struct _KTHREAD *v35; // r14
  struct _KTHREAD *v36; // rdi
  ULONG_PTR v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // rbx
  __int64 v44; // rdx
  __int16 v45; // ax
  __int16 v46; // ax
  __int64 *v47; // rcx
  signed __int32 v48; // eax
  _QWORD *v49; // rdx
  __int64 *v50; // r8
  _QWORD *v51; // rbx
  BOOL v52; // [rsp+38h] [rbp-80h]
  int v53; // [rsp+3Ch] [rbp-7Ch]
  struct _KTHREAD *v54; // [rsp+40h] [rbp-78h]
  __int64 v55; // [rsp+48h] [rbp-70h]
  __int128 v56; // [rsp+50h] [rbp-68h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v58; // [rsp+C0h] [rbp+8h] BYREF
  int v59; // [rsp+C8h] [rbp+10h] BYREF
  int v60; // [rsp+D0h] [rbp+18h] BYREF
  _QWORD *v61; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = P[12];
  v54 = CurrentThread;
  v6 = v4 & 0x80000;
  Process = CurrentThread->ApcState.Process;
  v8 = 0;
  v53 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x8000) == 0 )
  {
    v9 = P[13];
    LODWORD(v9) = v9 & 0x7FFFFFFF;
    v8 = (v9 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFELL;
  }
  v55 = a3 - a2 + 1;
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[18] )
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
  v10 = P[12];
  v11 = *(_QWORD *)&Process[1].IdealGlobalNode;
  if ( (P[12] & 7) == 2 && (v10 & 0x10000) != 0 )
    --*(_QWORD *)(v11 + 248);
  v56 = 0uLL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 136));
    v12 = P[12];
    if ( (v12 & 0x100000) != 0 )
    {
      if ( (v12 & 0x8000) != 0 )
        --*(_QWORD *)(v11 + 256);
      else
        --*(_QWORD *)(v11 + 264);
    }
    if ( (P[12] & 0x8000) != 0 )
    {
      v47 = (__int64 *)*((_QWORD *)P + 7);
      if ( v47 )
      {
        while ( (v47[8] & 0x100) == 0 )
        {
          v47 = (__int64 *)*v47;
          if ( !v47 )
            goto LABEL_10;
        }
        v56 = *(_OWORD *)(v47 + 1);
      }
    }
LABEL_10:
    MiReturnVadQuota(P, Process, v8);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v13 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[7]);
  v58 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount == 1;
  v17 = v13 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v18) = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = !_BitScanReverse((unsigned int *)&v20, v18);
  if ( v19 )
    goto LABEL_85;
  while ( 1 )
  {
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v14->LockEntries[v22];
    v18 = ~v21 & (unsigned int)v18;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v17
      && v23->LockState.SessionId == (_DWORD)SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    if ( v19 )
      goto LABEL_85;
  }
  if ( !v23 )
  {
LABEL_85:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v13, SessionId, 0LL);
  }
  else
  {
    v23->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v23->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree((__int64)&v14->LockEntries[v22], v18, v17);
    v58 = 0;
    v58 = v23->BoostBitmap.AllFields & 0x1FFFF;
    v23->BoostBitmap.AllFields &= 0xFFFE0000;
    v23->ThreadLocalFlags &= ~1u;
    v23->LockState.0 = 0LL;
    v24 = ((char *)v23 - (char *)v14 - 800) / 96;
    if ( v16 )
      v14->AbEntrySummary |= 1 << v24;
    else
      _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v24);
  }
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v14, v13, &v58);
  v25 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v25;
  if ( !v25 && ($69CD3F157F9F39B6F7113F2231989901 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  v26 = v54->SpecialApcDisable + 1;
  v54->SpecialApcDisable = v26;
  if ( !v26 && ($69CD3F157F9F39B6F7113F2231989901 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
    KiCheckForKernelApcDelivery();
  v27 = 0LL;
  if ( v6 )
  {
    v28 = &dword_14036D4C0;
    v61 = 0LL;
    v29 = (__int64 **)(P + 14);
    v30 = KeGetCurrentThread()->ApcState.Process;
    if ( ((__int64)v30[2].Header.WaitListHead.Blink & 7) == 2 )
      p_ProfileListHead = &dword_14036D4C0;
    else
      p_ProfileListHead = (LONG *)&v30[2].ProfileListHead;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, CurrentIrql);
    }
    else
    {
      v60 = 0;
      if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
        v60 = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
      v33 = *p_ProfileListHead;
      while ( (v33 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v33 & 0x40000000) == 0 )
        {
          v48 = _InterlockedCompareExchange(p_ProfileListHead, v33 | 0x40000000, v33);
          v19 = v33 == v48;
          v33 = v48;
          if ( !v19 )
            continue;
        }
        KeYieldProcessorEx(&v60);
        v33 = *p_ProfileListHead;
      }
    }
    p_ProfileListHead[1] = 0;
    v34 = *v29;
    if ( *v29 )
    {
      v49 = v61;
      do
      {
        v50 = (__int64 *)*v34;
        if ( (v34[8] & 1) != 0 )
        {
          *v34 = (__int64)v49;
          v49 = v34;
          *v29 = v50;
        }
        else
        {
          v29 = (__int64 **)v34;
        }
        v34 = v50;
      }
      while ( v50 );
      v61 = v49;
    }
    MiPreUnlockWorkingSetExclusive((__int64)&v30[1].IdealNode[12], CurrentIrql);
    if ( ((__int64)v30[2].Header.WaitListHead.Blink & 7) != 2 )
      v28 = (LONG *)&v30[2].ProfileListHead;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
    else
      *v28 = 0;
    __writecr8(CurrentIrql);
    v27 = v61;
    *((_QWORD *)P + 2) = -1LL;
    if ( v27 )
      --v54->KernelApcDisable;
  }
  LODWORD(v61) = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0;
  v35 = KeGetCurrentThread();
  LOBYTE(v35[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 10);
  v59 = 0;
  v36 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(P + 10) == 1 )
    v37 = (unsigned int)MmGetSessionIdEx(v36->ApcState.Process);
  else
    v37 = 0xFFFFFFFFLL;
  --v36->SpecialApcDisable;
  ++v36->AbAllocationRegionCount;
  LODWORD(v38) = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
  v52 = v36->AbAllocationRegionCount == 1;
  v39 = (unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL;
  v19 = !_BitScanReverse((unsigned int *)&v40, v38);
  if ( v19 )
    goto LABEL_96;
  while ( 1 )
  {
    v41 = 1 << v40;
    v42 = v40;
    v43 = &v36->LockEntries[v42];
    v38 = ~v41 & (unsigned int)v38;
    if ( (v43->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v43->LockState.0 & 1) == 0
      && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v39
      && v43->LockState.SessionId == (_DWORD)v37 )
    {
      v43->AcquiredByte &= ~1u;
      if ( v43->LockState.0 )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v40, v38);
    if ( v19 )
      goto LABEL_96;
  }
  if ( !v43 )
  {
LABEL_96:
    if ( (*((_DWORD *)&v36->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v36, (ULONG_PTR)(P + 10), v37, 0LL);
  }
  else
  {
    v43->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v43->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree((__int64)&v36->LockEntries[v42], v38, v39);
    v59 = 0;
    v59 = v43->BoostBitmap.AllFields & 0x1FFFF;
    v43->BoostBitmap.AllFields &= 0xFFFE0000;
    v43->ThreadLocalFlags &= ~1u;
    v43->LockState.0 = 0LL;
    v44 = ((char *)v43 - (char *)v36 - 800) / 96;
    if ( v52 )
      v36->AbEntrySummary |= 1 << v44;
    else
      _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v44);
  }
  --v36->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v36, P + 10, &v59);
  v45 = v36->SpecialApcDisable + 1;
  v36->SpecialApcDisable = v45;
  if ( !v45 && ($69CD3F157F9F39B6F7113F2231989901 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
    KiCheckForKernelApcDelivery();
  v46 = v35->SpecialApcDisable + 1;
  v35->SpecialApcDisable = v46;
  if ( !v46 && ($69CD3F157F9F39B6F7113F2231989901 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery();
  if ( (_DWORD)v61 == 1 )
    ExFreePoolWithTag(P, 0);
  if ( v27 )
  {
    do
    {
      v51 = (_QWORD *)*v27;
      KeSignalGate((__int64)(v27 + 1), 1);
      v27 = v51;
    }
    while ( v51 );
    KeLeaveCriticalRegionThread(v54);
  }
  if ( (_QWORD)v56 )
    MiFreeRfgControlStack(*((_QWORD *)&v56 + 1), v56, v55);
  if ( v53 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 136), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v11 + 160), 0, 0);
  }
}
