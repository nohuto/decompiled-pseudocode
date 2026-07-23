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
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rbx
  __int64 v23; // rdx
  __int16 v24; // ax
  __int16 v25; // ax
  _QWORD *v26; // r12
  LONG *v27; // r14
  __int64 **v28; // r12
  _KPROCESS *v29; // rbx
  LONG *p_ProfileListHead; // rdi
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v32; // edx
  __int64 *v33; // rcx
  struct _KTHREAD *v34; // r14
  struct _KTHREAD *v35; // rdi
  ULONG_PTR v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  _KLOCK_ENTRY *v41; // rbx
  __int64 v42; // rdx
  __int16 v43; // ax
  __int16 v44; // ax
  __int64 *v45; // rcx
  signed __int32 v46; // eax
  _QWORD *v47; // rdx
  __int64 *v48; // r8
  _QWORD *v49; // rbx
  BOOL v50; // [rsp+38h] [rbp-80h]
  int v51; // [rsp+3Ch] [rbp-7Ch]
  struct _KTHREAD *v52; // [rsp+40h] [rbp-78h]
  __int64 v53; // [rsp+48h] [rbp-70h]
  __int128 v54; // [rsp+50h] [rbp-68h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v56; // [rsp+C0h] [rbp+8h] BYREF
  int v57; // [rsp+C8h] [rbp+10h] BYREF
  int v58; // [rsp+D0h] [rbp+18h] BYREF
  _QWORD *v59; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = P[12];
  v52 = CurrentThread;
  v6 = v4 & 0x80000;
  Process = CurrentThread->ApcState.Process;
  v8 = 0;
  v51 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x8000) == 0 )
  {
    v9 = P[13];
    LODWORD(v9) = v9 & 0x7FFFFFFF;
    v8 = (v9 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFELL;
  }
  v53 = a3 - a2 + 1;
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[18] )
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
  v10 = P[12];
  v11 = *(_QWORD *)&Process[1].IdealGlobalNode;
  if ( (P[12] & 7) == 2 && (v10 & 0x10000) != 0 )
    --*(_QWORD *)(v11 + 248);
  v54 = 0uLL;
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
      v45 = (__int64 *)*((_QWORD *)P + 7);
      if ( v45 )
      {
        while ( (v45[8] & 0x100) == 0 )
        {
          v45 = (__int64 *)*v45;
          if ( !v45 )
            goto LABEL_10;
        }
        v54 = *(_OWORD *)(v45 + 1);
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
  v56 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v14->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount == 1;
  LODWORD(v17) = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  v18 = !_BitScanReverse((unsigned int *)&v19, v17);
  if ( v18 )
    goto LABEL_85;
  while ( 1 )
  {
    v20 = 1 << v19;
    v21 = v19;
    v22 = &v14->LockEntries[v21];
    v17 = ~v20 & (unsigned int)v17;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == (_DWORD)SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
    v18 = !_BitScanReverse((unsigned int *)&v19, v17);
    if ( v18 )
      goto LABEL_85;
  }
  if ( !v22 )
  {
LABEL_85:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v13, SessionId, 0LL);
  }
  else
  {
    v22->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v22->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v14->LockEntries[v21].TreeNode, v17);
    v56 = 0;
    v56 = v22->BoostBitmap.AllFields & 0x1FFFF;
    v22->BoostBitmap.AllFields &= 0xFFFE0000;
    v22->ThreadLocalFlags &= ~1u;
    v22->LockState.0 = 0LL;
    v23 = ((char *)v22 - (char *)v14 - 800) / 96;
    if ( v16 )
      v14->AbEntrySummary |= 1 << v23;
    else
      _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
  }
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v14, v13, &v56);
  v24 = v14->SpecialApcDisable + 1;
  v14->SpecialApcDisable = v24;
  if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  v25 = v52->SpecialApcDisable + 1;
  v52->SpecialApcDisable = v25;
  if ( !v25 && ($69CD3F157F9F39B6F7113F2231989901 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
    KiCheckForKernelApcDelivery();
  v26 = 0LL;
  if ( v6 )
  {
    v27 = &dword_14036D4C0;
    v59 = 0LL;
    v28 = (__int64 **)(P + 14);
    v29 = KeGetCurrentThread()->ApcState.Process;
    if ( ((__int64)v29[2].Header.WaitListHead.Blink & 7) == 2 )
      p_ProfileListHead = &dword_14036D4C0;
    else
      p_ProfileListHead = (LONG *)&v29[2].ProfileListHead;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, CurrentIrql);
    }
    else
    {
      v58 = 0;
      if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
        v58 = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
      v32 = *p_ProfileListHead;
      while ( (v32 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v32 & 0x40000000) == 0 )
        {
          v46 = _InterlockedCompareExchange(p_ProfileListHead, v32 | 0x40000000, v32);
          v18 = v32 == v46;
          v32 = v46;
          if ( !v18 )
            continue;
        }
        KeYieldProcessorEx(&v58);
        v32 = *p_ProfileListHead;
      }
    }
    p_ProfileListHead[1] = 0;
    v33 = *v28;
    if ( *v28 )
    {
      v47 = v59;
      do
      {
        v48 = (__int64 *)*v33;
        if ( (v33[8] & 1) != 0 )
        {
          *v33 = (__int64)v47;
          v47 = v33;
          *v28 = v48;
        }
        else
        {
          v28 = (__int64 **)v33;
        }
        v33 = v48;
      }
      while ( v48 );
      v59 = v47;
    }
    MiPreUnlockWorkingSetExclusive((__int64)&v29[1].IdealNode[12], CurrentIrql);
    if ( ((__int64)v29[2].Header.WaitListHead.Blink & 7) != 2 )
      v27 = (LONG *)&v29[2].ProfileListHead;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
    else
      *v27 = 0;
    __writecr8(CurrentIrql);
    v26 = v59;
    *((_QWORD *)P + 2) = -1LL;
    if ( v26 )
      --v52->KernelApcDisable;
  }
  LODWORD(v59) = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0;
  v34 = KeGetCurrentThread();
  LOBYTE(v34[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 10);
  v57 = 0;
  v35 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(P + 10) == 1 )
    v36 = (unsigned int)MmGetSessionIdEx(v35->ApcState.Process);
  else
    v36 = 0xFFFFFFFFLL;
  --v35->SpecialApcDisable;
  ++v35->AbAllocationRegionCount;
  LODWORD(v37) = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
  v50 = v35->AbAllocationRegionCount == 1;
  v18 = !_BitScanReverse((unsigned int *)&v38, v37);
  if ( v18 )
    goto LABEL_96;
  while ( 1 )
  {
    v39 = 1 << v38;
    v40 = v38;
    v41 = &v35->LockEntries[v40];
    v37 = ~v39 & (unsigned int)v37;
    if ( (v41->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v41->LockState.0 & 1) == 0
      && (*(_QWORD *)&v41->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
      && v41->LockState.SessionId == (_DWORD)v36 )
    {
      v41->AcquiredByte &= ~1u;
      if ( v41->LockState.0 )
        break;
    }
    v18 = !_BitScanReverse((unsigned int *)&v38, v37);
    if ( v18 )
      goto LABEL_96;
  }
  if ( !v41 )
  {
LABEL_96:
    if ( (*((_DWORD *)&v35->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)(P + 10), v36, 0LL);
  }
  else
  {
    v41->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v41->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v35->LockEntries[v40].TreeNode, v37);
    v57 = 0;
    v57 = v41->BoostBitmap.AllFields & 0x1FFFF;
    v41->BoostBitmap.AllFields &= 0xFFFE0000;
    v41->ThreadLocalFlags &= ~1u;
    v41->LockState.0 = 0LL;
    v42 = ((char *)v41 - (char *)v35 - 800) / 96;
    if ( v50 )
      v35->AbEntrySummary |= 1 << v42;
    else
      _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v42);
  }
  --v35->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v35, P + 10, &v57);
  v43 = v35->SpecialApcDisable + 1;
  v35->SpecialApcDisable = v43;
  if ( !v43 && ($69CD3F157F9F39B6F7113F2231989901 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery();
  v44 = v34->SpecialApcDisable + 1;
  v34->SpecialApcDisable = v44;
  if ( !v44 && ($69CD3F157F9F39B6F7113F2231989901 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  if ( (_DWORD)v59 == 1 )
    ExFreePoolWithTag(P, 0);
  if ( v26 )
  {
    do
    {
      v49 = (_QWORD *)*v26;
      KeSignalGate((__int64)(v26 + 1), 1);
      v26 = v49;
    }
    while ( v49 );
    KeLeaveCriticalRegionThread(v52);
  }
  if ( (_QWORD)v54 )
    MiFreeRfgControlStack(*((_QWORD *)&v54 + 1), v54, v53);
  if ( v51 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 136), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v11 + 160), 0, 0);
  }
}
