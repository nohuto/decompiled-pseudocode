/*
 * XREFs of MiFinishVadDeletion @ 0x140037A20
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiReturnVadQuota @ 0x140495B20 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 *     MiFreeRfgControlStack @ 0x1406EDAF0 (MiFreeRfgControlStack.c)
 */

void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v4; // eax
  int v6; // r12d
  _KPROCESS *Process; // rbx
  BOOL v9; // edx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // eax
  ULONG_PTR v14; // rbp
  struct _KTHREAD *v15; // rdi
  unsigned int SessionId; // r8d
  BOOL v17; // r14d
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rbx
  __int64 **v26; // r13
  LONG *v27; // r14
  _KPROCESS *v28; // rbp
  LONG *p_ProfileListHead; // rdi
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v31; // edx
  __int64 *v32; // rcx
  BOOL v33; // r12d
  struct _KTHREAD *v34; // rbp
  struct _KTHREAD *v35; // rdi
  ULONG_PTR v36; // r9
  BOOL v37; // r13d
  unsigned int v38; // edx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  _KLOCK_ENTRY *v42; // rbx
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 *v45; // rcx
  signed __int32 v46; // eax
  __int64 *v47; // rdx
  _QWORD *v48; // rbx
  int v49; // [rsp+30h] [rbp-88h]
  _QWORD *v50; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *v51; // [rsp+40h] [rbp-78h]
  __int64 v52; // [rsp+48h] [rbp-70h]
  __int64 v53; // [rsp+50h] [rbp-68h]
  __int128 v54; // [rsp+58h] [rbp-60h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v56; // [rsp+C0h] [rbp+8h] BYREF
  int v57; // [rsp+C8h] [rbp+10h] BYREF
  int v58; // [rsp+D0h] [rbp+18h]
  int v59; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = P[12];
  v51 = CurrentThread;
  v6 = v4 & 0x80000;
  Process = CurrentThread->ApcState.Process;
  v9 = 0;
  v49 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x8000) == 0 )
  {
    v10 = P[13];
    LODWORD(v10) = v10 & 0x7FFFFFFF;
    v9 = (v10 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFELL;
  }
  v52 = a3 - a2 + 1;
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[18] )
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
  v11 = P[12];
  v12 = *(_QWORD *)&Process[1].IdealGlobalNode + 40LL;
  v53 = v12;
  if ( (P[12] & 7) == 2 && (v11 & 0x10000) != 0 )
    --*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 248LL);
  v54 = 0uLL;
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = P[12];
    if ( (v13 & 0x100000) != 0 )
    {
      if ( (v13 & 0x8000) != 0 )
        --*(_QWORD *)(v12 + 216);
      else
        --*(_QWORD *)(v12 + 224);
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
    MiReturnVadQuota(P, Process, v9);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v14 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[7]);
  v56 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = MmGetSessionIdEx(v15->ApcState.Process);
  else
    SessionId = -1;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount == 1;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = !_BitScanReverse((unsigned int *)&v20, v18);
  v58 = v20;
  if ( v19 )
    goto LABEL_86;
  while ( 1 )
  {
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v15->LockEntries[v22];
    v18 &= ~v21;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v58 = v20;
    if ( v19 )
      goto LABEL_86;
  }
  if ( !v23 )
  {
LABEL_86:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
  }
  else
  {
    v23->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v23->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v15->LockEntries[v22].TreeNode);
    v56 = 0;
    v56 = v23->BoostBitmap.AllFields & 0x1FFFF;
    v23->BoostBitmap.AllFields &= 0xFFFE0000;
    v23->ThreadLocalFlags &= ~1u;
    v23->LockState.0 = 0LL;
    v24 = ((char *)v23 - (char *)v15 - 800) / 96;
    if ( v17 )
      v15->AbEntrySummary |= 1 << v24;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, 1 << v24);
  }
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v15, v14, &v56);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v25 = 0LL;
  v50 = 0LL;
  if ( v6 )
  {
    v26 = (__int64 **)(P + 14);
    v50 = 0LL;
    v27 = &dword_140389780;
    v28 = KeGetCurrentThread()->ApcState.Process;
    if ( ((__int64)v28[2].Header.WaitListHead.Blink & 7) == 2 )
      p_ProfileListHead = &dword_140389780;
    else
      p_ProfileListHead = (LONG *)&v28[2].ProfileListHead;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, CurrentIrql);
    }
    else
    {
      if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
        LODWORD(v25) = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
      v31 = *p_ProfileListHead;
      while ( (v31 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v31 & 0x40000000) == 0 )
        {
          v46 = _InterlockedCompareExchange(p_ProfileListHead, v31 | 0x40000000, v31);
          v19 = v31 == v46;
          v31 = v46;
          if ( !v19 )
            continue;
        }
        LODWORD(v25) = (_DWORD)v25 + 1;
        if ( ((unsigned int)v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait((unsigned int)v25);
        v31 = *p_ProfileListHead;
      }
      v25 = 0LL;
    }
    p_ProfileListHead[1] = 0;
    v32 = *v26;
    if ( *v26 )
    {
      do
      {
        v47 = (__int64 *)*v32;
        if ( (v32[8] & 1) != 0 )
        {
          *v32 = (__int64)v25;
          v25 = v32;
          *v26 = v47;
        }
        else
        {
          v26 = (__int64 **)v32;
        }
        v32 = v47;
      }
      while ( v47 );
      v50 = v25;
    }
    MiPreUnlockWorkingSetExclusive(&v28[1].IdealNode[12], CurrentIrql);
    if ( ((__int64)v28[2].Header.WaitListHead.Blink & 7) != 2 )
      v27 = (LONG *)&v28[2].ProfileListHead;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
    else
      *v27 = 0;
    __writecr8(CurrentIrql);
    *((_QWORD *)P + 2) = -1LL;
    if ( v25 )
      --v51->KernelApcDisable;
  }
  v33 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0;
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
  v37 = ++v35->AbAllocationRegionCount == 1;
  v38 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = !_BitScanReverse((unsigned int *)&v39, v38);
  v59 = v39;
  if ( v19 )
    goto LABEL_99;
  while ( 1 )
  {
    v40 = 1 << v39;
    v41 = v39;
    v42 = &v35->LockEntries[v41];
    v38 &= ~v40;
    if ( (v42->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v42->LockState.0 & 1) == 0
      && (*(_QWORD *)&v42->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
      && v42->LockState.SessionId == (_DWORD)v36 )
    {
      v42->AcquiredByte &= ~1u;
      if ( v42->LockState.0 )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v39, v38);
    v59 = v39;
    if ( v19 )
      goto LABEL_99;
  }
  if ( !v42 )
  {
LABEL_99:
    if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)(P + 10), v36, 0LL);
  }
  else
  {
    v42->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v42->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v35->LockEntries[v41].TreeNode);
    v57 = 0;
    v57 = v42->BoostBitmap.AllFields & 0x1FFFF;
    v42->BoostBitmap.AllFields &= 0xFFFE0000;
    v42->ThreadLocalFlags &= ~1u;
    v42->LockState.0 = 0LL;
    v43 = ((char *)v42 - (char *)v35 - 800) / 96;
    if ( v37 )
      v35->AbEntrySummary |= 1 << v43;
    else
      _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v43);
  }
  --v35->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v35, P + 10, &v57);
  v19 = v35->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery();
  v19 = v34->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  if ( v33 )
    ExFreePoolWithTag(P, 0);
  v44 = v50;
  if ( v50 )
  {
    do
    {
      v48 = (_QWORD *)*v44;
      KeSignalGate(v44 + 1, 1LL);
      v44 = v48;
    }
    while ( v48 );
    KeLeaveCriticalRegionThread(v51);
  }
  if ( (_QWORD)v54 )
    MiFreeRfgControlStack(*((_QWORD *)&v54 + 1), v54, v52);
  if ( v49 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 96), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v53 + 120), 0, 0);
  }
}
