/*
 * XREFs of MiGetWsAndInsertVad @ 0x14009A420
 * Callers:
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiInsertProcessVads @ 0x14049E0E0 (MiInsertProcessVads.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertVad @ 0x1400C1CF0 (MiInsertVad.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetWsAndInsertVad(__int64 a1)
{
  LONG *v1; // r15
  _KPROCESS *Process; // rsi
  LONG *p_ProfileListHead; // r14
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v6; // edx
  __int64 result; // rax
  __int64 *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD *v15; // rbp
  struct _KTHREAD *v16; // rbx
  ULONG_PTR SessionId; // r9
  BOOL v18; // r15d
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rdi
  __int64 v25; // rdx
  __int16 v26; // ax
  signed __int32 v27; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+78h] [rbp+10h] BYREF
  int v31; // [rsp+80h] [rbp+18h]

  v1 = &dword_14036D4C0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 2 )
    p_ProfileListHead = &dword_14036D4C0;
  else
    p_ProfileListHead = (LONG *)&Process[2].ProfileListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_ProfileListHead, CurrentIrql);
  }
  else
  {
    v30 = 0;
    if ( _interlockedbittestandset(p_ProfileListHead, 0x1Fu) )
      v30 = ExpWaitForSpinLockExclusiveAndAcquire(p_ProfileListHead, CurrentIrql);
    v6 = *p_ProfileListHead;
    while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v6 & 0x40000000) == 0 )
      {
        v27 = _InterlockedCompareExchange(p_ProfileListHead, v6 | 0x40000000, v6);
        v20 = v6 == v27;
        v6 = v27;
        if ( !v20 )
          continue;
      }
      KeYieldProcessorEx(&v30);
      v6 = *p_ProfileListHead;
    }
  }
  p_ProfileListHead[1] = 0;
  MiInsertVad(a1, Process);
  MiPreUnlockWorkingSetExclusive(&Process[1].IdealNode[12], CurrentIrql);
  if ( ((__int64)Process[2].Header.WaitListHead.Blink & 7) != 2 )
    v1 = (LONG *)&Process[2].ProfileListHead;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1, retaddr);
  else
    *v1 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v8 = *(__int64 **)(a1 + 72);
    v9 = (_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 112) = (unsigned __int64)Process | 1;
    v10 = *v8;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = v10 + 104;
    ExAcquirePushLockExclusiveEx(v10 + 104, 0LL);
    if ( (*(_DWORD *)(v10 + 56) & 0x400) == 0 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      v14 = (_QWORD *)(v10 + 8);
      if ( *(_QWORD *)(v13 + 8) != v10 + 8 )
        __fastfail(3u);
      *v9 = v13;
      v9[1] = v14;
      *(_QWORD *)(v13 + 8) = v9;
      *v14 = v9;
    }
    v15 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10 + 104);
    v29 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v10 + 104) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v16->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount == 1;
    LODWORD(v19) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v21, v19);
    v31 = v21;
    if ( v20 )
      goto LABEL_37;
    while ( 1 )
    {
      v22 = 1 << v21;
      v23 = v21;
      v24 = &v16->LockEntries[v23];
      v19 = ~v22 & (unsigned int)v19;
      if ( (v24->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v24->LockState.0 & 1) == 0
        && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && v24->LockState.SessionId == (_DWORD)SessionId )
      {
        v24->AcquiredByte &= ~1u;
        if ( v24->LockState.0 )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      v31 = v21;
      if ( v20 )
        goto LABEL_37;
    }
    if ( !v24 )
    {
LABEL_37:
      if ( (*((_DWORD *)&v16->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v12, SessionId, 0LL);
    }
    else
    {
      v24->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v24->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode, v19);
      v29 = 0;
      v29 = v24->BoostBitmap.AllFields & 0x1FFFF;
      v24->BoostBitmap.AllFields &= 0xFFFE0000;
      v24->ThreadLocalFlags &= ~1u;
      v24->LockState.0 = 0LL;
      v25 = ((char *)v24 - (char *)v16 - 800) / 96;
      if ( v18 )
        v16->AbEntrySummary |= 1 << v25;
      else
        _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
    }
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v16, v12, &v29);
    v26 = v16->SpecialApcDisable + 1;
    v16->SpecialApcDisable = v26;
    if ( !v26 && ($69CD3F157F9F39B6F7113F2231989901 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery();
    result = (unsigned int)++v15->SpecialApcDisable;
    if ( !(_WORD)result )
    {
      result = (__int64)&v15->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
