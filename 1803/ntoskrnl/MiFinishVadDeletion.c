/*
 * XREFs of MiFinishVadDeletion @ 0x1400F0F10
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1400D2920 (MiDeleteDeferredCloneDescriptors.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14026B5D8 (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiReturnVadQuota @ 0x14059AFD0 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 *     MiFreeRfgControlStack @ 0x140756F80 (MiFreeRfgControlStack.c)
 */

int __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // r15d
  unsigned int v6; // r10d
  __int64 v9; // rdx
  _KPROCESS *Process; // rbx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // eax
  ULONG_PTR v15; // rsi
  struct _KTHREAD *v16; // rdi
  __int64 SessionId; // rdx
  BOOL v18; // ebp
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rbx
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 **v29; // rsi
  LONG *v30; // rbx
  _KPROCESS *v31; // rbp
  char Flink; // al
  __int64 v33; // rbp
  LONG *v34; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v37; // ebx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v39; // eax
  __int64 *v40; // rcx
  _SLIST_ENTRY *v41; // rdi
  int v42; // esi
  _KPROCESS *v43; // rcx
  struct _KPRCB *v44; // rcx
  unsigned __int8 v45; // bl
  BOOL v46; // r14d
  struct _KTHREAD *v47; // rsi
  struct _KTHREAD *v48; // rdi
  ULONG_PTR v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rbx
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 *v57; // rcx
  signed __int32 v58; // ett
  int v59; // eax
  _QWORD *v60; // r14
  __int64 *v61; // rdx
  int v62; // eax
  _SLIST_ENTRY *Next; // rbx
  __int64 v64; // r8
  _QWORD *v65; // rbx
  _QWORD *v67; // [rsp+30h] [rbp-98h]
  int v68; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int8 v69; // [rsp+48h] [rbp-80h]
  __int64 v70; // [rsp+50h] [rbp-78h]
  __int64 v71; // [rsp+58h] [rbp-70h]
  __int128 v72; // [rsp+60h] [rbp-68h]
  __int64 v73; // [rsp+78h] [rbp-50h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int v75; // [rsp+D0h] [rbp+8h]
  int v76; // [rsp+D8h] [rbp+10h] BYREF
  int v77; // [rsp+E0h] [rbp+18h] BYREF
  int v78; // [rsp+E8h] [rbp+20h]

  v78 = a4;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = P[12];
  v71 = (__int64)CurrentThread;
  v9 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (v6 & 0x20000000) != 0 )
  {
    v11 = 1;
    v75 = 1;
    if ( (v6 & 0x4000) == 0 )
    {
      v12 = P[13];
      LODWORD(v12) = v12 & 0x7FFFFFFF;
      if ( (v12 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL )
        v9 = 1LL;
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
    v75 = 0;
  }
  v73 = a3 - a2 + 1;
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[18] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v6 = P[12];
  }
  v13 = *(_QWORD *)&Process[1].IdealGlobalNode + 48LL;
  v70 = v13;
  if ( (v6 & 7) == 2 && (v6 & 0x8000) != 0 )
    --*(_QWORD *)(*(_QWORD *)&Process[1].IdealGlobalNode + 352LL);
  v72 = 0uLL;
  if ( v11 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 176));
    v14 = P[12];
    if ( (v14 & 0x20000) != 0 )
    {
      if ( (v14 & 0x4000) != 0 )
        --*(_QWORD *)(v13 + 312);
      else
        --*(_QWORD *)(v13 + 320);
    }
    if ( (P[12] & 0x4000) != 0 )
    {
      v57 = (__int64 *)*((_QWORD *)P + 7);
      if ( v57 )
      {
        while ( (v57[8] & 0x100) == 0 )
        {
          v57 = (__int64 *)*v57;
          if ( !v57 )
            goto LABEL_13;
        }
        v72 = *(_OWORD *)(v57 + 1);
      }
    }
LABEL_13:
    MiReturnVadQuota(P, Process, (unsigned int)v9);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v15 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], v9, a3, a4);
  v76 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v16->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount == 1;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v19);
    if ( v20 )
      break;
    v22 = 1 << v21;
    v23 = v21;
    v24 = &v16->LockEntries[v23];
    v19 &= ~v22;
    if ( (v24->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v24->LockState.0 & 1) == 0
      && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
      && v24->LockState.SessionId == (_DWORD)SessionId )
    {
      v24->AcquiredByte &= ~1u;
      if ( v24->LockState.0 )
      {
        if ( v24 )
        {
          v24->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v24->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode, SessionId);
          v76 = 0;
          v76 = v24->BoostBitmap.AllFields & 0x1FFFF;
          v24->BoostBitmap.AllFields &= 0xFFFE0000;
          v24->ThreadLocalFlags &= ~1u;
          v24->LockState.0 = 0LL;
          v25 = 1 << ((char)((_BYTE)v24 - (_BYTE)v16 - 32) / 96);
          if ( v18 )
            v16->AbEntrySummary |= v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, v25);
          goto LABEL_30;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, (unsigned int)SessionId, 0LL);
LABEL_30:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v16, v15, &v76);
  v20 = v16->SpecialApcDisable++ == -1;
  if ( v20 && ($005F0E83B22994B61E86C72E0CE43C71 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  v20 = (*(_WORD *)(v71 + 486))++ == 0xFFFF;
  if ( v20 && *(_QWORD *)(v71 + 152) != v71 + 152 )
    KiCheckForKernelApcDelivery();
  v67 = 0LL;
  if ( v75 == 1 )
  {
    v29 = (__int64 **)(P + 14);
    v67 = 0LL;
    v30 = &dword_1403CCD40;
    v31 = KeGetCurrentThread()->ApcState.Process;
    Flink = (char)v31[2].Header.WaitListHead.Flink;
    v33 = (__int64)&v31[1].IdealNode[12];
    if ( (Flink & 7) == 2 )
      v34 = &dword_1403CCD40;
    else
      v34 = (LONG *)(v33 + 192);
    CurrentIrql = KeGetCurrentIrql();
    v69 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v34, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v37 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v59 = SchedulerAssist[5];
          SchedulerAssist[5] = v59 + 1;
          if ( v59 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v34, 0x1Fu) )
      {
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        v37 = ExpWaitForSpinLockExclusiveAndAcquire(v34, v69);
      }
      v39 = *v34;
      while ( (v39 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v39 & 0x40000000) == 0 )
        {
          v58 = v39;
          v39 = _InterlockedCompareExchange(v34, v39 | 0x40000000, v39);
          if ( v58 != v39 )
            continue;
        }
        if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v37);
        v39 = *v34;
      }
      v30 = &dword_1403CCD40;
    }
    v34[1] = 0;
    v40 = *v29;
    if ( *v29 )
    {
      v60 = 0LL;
      do
      {
        v61 = (__int64 *)*v40;
        if ( (v40[8] & 1) != 0 )
        {
          *v40 = (__int64)v60;
          v60 = v40;
          *v29 = v61;
        }
        else
        {
          v29 = (__int64 **)v40;
        }
        v40 = v61;
      }
      while ( v61 );
      v67 = v60;
      v13 = v70;
    }
    v41 = 0LL;
    v68 = *(_DWORD *)(v33 + 184);
    v42 = 0;
    if ( (v68 & 7) != 2 )
      v30 = (LONG *)(v33 + 192);
    if ( (v68 & 7) == 0 )
    {
      if ( *(_QWORD *)(v33 + 16) )
      {
        v43 = KeGetCurrentThread()->ApcState.Process;
        if ( *(_WORD *)(*(_QWORD *)&v43[1].IdealGlobalNode + 336LL) )
          v41 = MiDeleteDeferredCloneDescriptors((__int64)v43);
      }
    }
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
      v42 = 1;
    MiCheckProcessShadow(v33, 2);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v30, retaddr);
    else
      *v30 = 0;
    v44 = KeGetCurrentPrcb();
    v26 = (__int64)v44->SchedulerAssist;
    if ( v26 )
    {
      if ( v44->NestingLevel <= 1u )
      {
        v62 = *(_DWORD *)(v26 + 20) - 1;
        *(_DWORD *)(v26 + 20) = v62;
        if ( !v62 )
        {
          v27 = *(unsigned __int8 *)(v26 + 27);
          if ( !*(_BYTE *)(v26 + 25) && !(_BYTE)v27 )
            KiPerformUnboostKick(v44);
        }
      }
    }
    v45 = v69;
    __writecr8(v69);
    if ( v41 )
    {
      do
      {
        Next = v41->Next;
        ExFreePoolWithTag(v41, 0);
        v41 = Next;
      }
      while ( Next );
      v45 = v69;
    }
    if ( !v42 && ((v68 & 0x8000000) != 0 || (v68 & 0x4000000) != 0 || (v68 & 0x10000000) != 0) )
    {
      MiLockWorkingSetShared(v33);
      MiUnlockWorkingSetShared(v33, v45, v64);
    }
    *((_QWORD *)P + 2) = -1LL;
    if ( v67 )
      --*(_WORD *)(v71 + 484);
  }
  if ( (v78 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v46 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x20000000) != 0;
    v47 = KeGetCurrentThread();
    LOBYTE(v47[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 5, v26, v27, v28);
    v77 = 0;
    v48 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(P + 10) == 1 )
      v49 = (unsigned int)MmGetSessionIdEx(v48->ApcState.Process);
    else
      v49 = 0xFFFFFFFFLL;
    --v48->SpecialApcDisable;
    if ( ++v48->AbAllocationRegionCount == 1 )
      v5 = 1;
    LODWORD(v50) = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v51, v50);
    if ( v20 )
      goto LABEL_121;
    while ( 1 )
    {
      v52 = 1 << v51;
      v53 = v51;
      v54 = &v48->LockEntries[v53];
      v50 = ~v52 & (unsigned int)v50;
      if ( (v54->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v54->LockState.0 & 1) == 0
        && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && v54->LockState.SessionId == (_DWORD)v49 )
      {
        v54->AcquiredByte &= ~1u;
        if ( v54->LockState.0 )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v51, v50);
      if ( v20 )
        goto LABEL_121;
    }
    if ( !v54 )
    {
LABEL_121:
      if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v48, (ULONG_PTR)(P + 10), v49, 0LL);
    }
    else
    {
      v54->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v54->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v48->LockEntries[v53].TreeNode, v50);
      v77 = 0;
      v77 = v54->BoostBitmap.AllFields & 0x1FFFF;
      v54->BoostBitmap.AllFields &= 0xFFFE0000;
      v54->ThreadLocalFlags &= ~1u;
      v54->LockState.0 = 0LL;
      v55 = ((char *)v54 - (char *)v48 - 800) / 96;
      if ( v5 )
        v48->AbEntrySummary |= 1 << v55;
      else
        _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v55);
    }
    --v48->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v48, P + 10, &v77);
    v20 = v48->SpecialApcDisable++ == -1;
    if ( v20 && ($005F0E83B22994B61E86C72E0CE43C71 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
      KiCheckForKernelApcDelivery();
    v20 = v47->SpecialApcDisable++ == -1;
    if ( v20 && ($005F0E83B22994B61E86C72E0CE43C71 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
      KiCheckForKernelApcDelivery();
    if ( v46 )
      ExFreePoolWithTag(P, 0);
    v13 = v70;
  }
  v56 = v67;
  if ( v67 )
  {
    do
    {
      v65 = (_QWORD *)*v56;
      KeSignalGate((__int64)(v56 + 1), 1);
      v56 = v65;
    }
    while ( v65 );
    LODWORD(v56) = (unsigned int)KeLeaveCriticalRegionThread(v71);
  }
  if ( (_QWORD)v72 )
    LODWORD(v56) = MiFreeRfgControlStack(*((_QWORD *)&v72 + 1), v72, v73);
  if ( v75 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 176), 0xFFFFFFFF) == 1 )
    LODWORD(v56) = KeSetEvent(*(PRKEVENT *)(v13 + 200), 0, 0);
  return (int)v56;
}
