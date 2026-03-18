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
  __int64 SessionId; // r8
  BOOL v17; // r14d
  __int64 v18; // rdx
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
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // rbx
  __int64 v44; // rdx
  _QWORD *v45; // rcx
  __int64 *v46; // rcx
  signed __int32 v47; // eax
  __int64 *v48; // rdx
  _QWORD *v49; // rbx
  int v50; // [rsp+30h] [rbp-88h]
  _QWORD *v51; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *v52; // [rsp+40h] [rbp-78h]
  __int64 v53; // [rsp+48h] [rbp-70h]
  __int64 v54; // [rsp+50h] [rbp-68h]
  __int128 v55; // [rsp+58h] [rbp-60h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v57; // [rsp+C0h] [rbp+8h] BYREF
  int v58; // [rsp+C8h] [rbp+10h] BYREF
  int v59; // [rsp+D0h] [rbp+18h]
  int v60; // [rsp+D8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = P[12];
  v52 = CurrentThread;
  v6 = v4 & 0x80000;
  Process = CurrentThread->ApcState.Process;
  v9 = 0;
  v50 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 && (v4 & 0x8000) == 0 )
  {
    v10 = P[13];
    LODWORD(v10) = v10 & 0x7FFFFFFF;
    v9 = (v10 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFELL;
  }
  v53 = a3 - a2 + 1;
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[18] )
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
  v11 = P[12];
  v12 = *(_QWORD *)&Process[1].IdealGlobalNode + 40LL;
  v54 = v12;
  if ( (P[12] & 7) == 2 && (v11 & 0x10000) != 0 )
    --*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 248LL);
  v55 = 0uLL;
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
      v46 = (__int64 *)*((_QWORD *)P + 7);
      if ( v46 )
      {
        while ( (v46[8] & 0x100) == 0 )
        {
          v46 = (__int64 *)*v46;
          if ( !v46 )
            goto LABEL_10;
        }
        v55 = *(_OWORD *)(v46 + 1);
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
  v57 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v15->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount == 1;
  LODWORD(v18) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = !_BitScanReverse((unsigned int *)&v20, v18);
  v59 = v20;
  if ( v19 )
    goto LABEL_86;
  while ( 1 )
  {
    v21 = 1 << v20;
    v22 = v20;
    v23 = &v15->LockEntries[v22];
    v18 = ~v21 & (unsigned int)v18;
    if ( (v23->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v23->LockState.0 & 1) == 0
      && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
      && v23->LockState.SessionId == (_DWORD)SessionId )
    {
      v23->AcquiredByte &= ~1u;
      if ( v23->LockState.0 )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v59 = v20;
    if ( v19 )
      goto LABEL_86;
  }
  if ( !v23 )
  {
LABEL_86:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, (unsigned int)SessionId, 0LL);
  }
  else
  {
    v23->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v23->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v15->LockEntries[v22], v18, SessionId);
    v57 = 0;
    v57 = v23->BoostBitmap.AllFields & 0x1FFFF;
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
  KiAbThreadRemoveBoosts(v15, v14, &v57);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v25 = 0LL;
  v51 = 0LL;
  if ( v6 )
  {
    v26 = (__int64 **)(P + 14);
    v51 = 0LL;
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
          v47 = _InterlockedCompareExchange(p_ProfileListHead, v31 | 0x40000000, v31);
          v19 = v31 == v47;
          v31 = v47;
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
        v48 = (__int64 *)*v32;
        if ( (v32[8] & 1) != 0 )
        {
          *v32 = (__int64)v25;
          v25 = v32;
          *v26 = v48;
        }
        else
        {
          v26 = (__int64 **)v32;
        }
        v32 = v48;
      }
      while ( v48 );
      v51 = v25;
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
      --v52->KernelApcDisable;
  }
  v33 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0;
  v34 = KeGetCurrentThread();
  LOBYTE(v34[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 10);
  v58 = 0;
  v35 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(P + 10) == 1 )
    v36 = (unsigned int)MmGetSessionIdEx(v35->ApcState.Process);
  else
    v36 = 0xFFFFFFFFLL;
  --v35->SpecialApcDisable;
  v37 = ++v35->AbAllocationRegionCount == 1;
  LODWORD(v38) = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
  v39 = (unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL;
  v19 = !_BitScanReverse((unsigned int *)&v40, v38);
  v60 = v40;
  if ( v19 )
    goto LABEL_99;
  while ( 1 )
  {
    v41 = 1 << v40;
    v42 = v40;
    v43 = &v35->LockEntries[v42];
    v38 = ~v41 & (unsigned int)v38;
    if ( (v43->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v43->LockState.0 & 1) == 0
      && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v39
      && v43->LockState.SessionId == (_DWORD)v36 )
    {
      v43->AcquiredByte &= ~1u;
      if ( v43->LockState.0 )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v40, v38);
    v60 = v40;
    if ( v19 )
      goto LABEL_99;
  }
  if ( !v43 )
  {
LABEL_99:
    if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v35, (ULONG_PTR)(P + 10), v36, 0LL);
  }
  else
  {
    v43->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v43->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v35->LockEntries[v42], v38, v39);
    v58 = 0;
    v58 = v43->BoostBitmap.AllFields & 0x1FFFF;
    v43->BoostBitmap.AllFields &= 0xFFFE0000;
    v43->ThreadLocalFlags &= ~1u;
    v43->LockState.0 = 0LL;
    v44 = ((char *)v43 - (char *)v35 - 800) / 96;
    if ( v37 )
      v35->AbEntrySummary |= 1 << v44;
    else
      _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v44);
  }
  --v35->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v35, P + 10, &v58);
  v19 = v35->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery();
  v19 = v34->SpecialApcDisable++ == -1;
  if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  if ( v33 )
    ExFreePoolWithTag(P, 0);
  v45 = v51;
  if ( v51 )
  {
    do
    {
      v49 = (_QWORD *)*v45;
      KeSignalGate(v45 + 1, 1LL);
      v45 = v49;
    }
    while ( v49 );
    KeLeaveCriticalRegionThread(v52);
  }
  if ( (_QWORD)v55 )
    MiFreeRfgControlStack(*((_QWORD *)&v55 + 1), v55, v53);
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 96), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v54 + 120), 0, 0);
  }
}
