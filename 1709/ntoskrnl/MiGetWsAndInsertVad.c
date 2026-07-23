/*
 * XREFs of MiGetWsAndInsertVad @ 0x14009FAE0
 * Callers:
 *     MiInsertProcessVads @ 0x14045E7E0 (MiInsertProcessVads.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 * Callees:
 *     MiInsertVad @ 0x14003ECC0 (MiInsertVad.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetWsAndInsertVad(__int64 a1)
{
  LONG *v1; // r14
  __int64 Process; // rsi
  LONG *v4; // r15
  unsigned __int8 CurrentIrql; // bp
  __int64 result; // rax
  __int64 *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _KTHREAD *v14; // rbp
  struct _KTHREAD *v15; // rbx
  ULONG_PTR SessionId; // r9
  BOOL v17; // r15d
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _KLOCK_ENTRY *v23; // rdi
  __int64 v24; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v26; // [rsp+60h] [rbp+8h] BYREF
  int v27; // [rsp+68h] [rbp+10h]

  v1 = &dword_140389780;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  if ( (*(_BYTE *)(Process + 1472) & 7) == 2 )
    v4 = &dword_140389780;
  else
    v4 = (LONG *)(Process + 1480);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v4, CurrentIrql);
  v4[1] = 0;
  MiInsertVad(a1, Process);
  MiPreUnlockWorkingSetExclusive(Process + 1280, CurrentIrql);
  if ( (*(_BYTE *)(Process + 1472) & 7) != 2 )
    v1 = (LONG *)(Process + 1480);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1, retaddr);
  else
    *v1 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v7 = *(__int64 **)(a1 + 72);
    v8 = (_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 112) = Process | 1;
    v9 = *v7;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = v9 + 104;
    ExAcquirePushLockExclusiveEx(v9 + 104, 0LL);
    if ( (*(_DWORD *)(v9 + 56) & 0x400) == 0 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      v13 = (_QWORD *)(v9 + 8);
      if ( *(_QWORD *)(v12 + 8) != v9 + 8 )
        __fastfail(3u);
      *v8 = v12;
      v8[1] = v13;
      *(_QWORD *)(v12 + 8) = v8;
      *v13 = v8;
    }
    v14 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 104);
    v26 = 0;
    v15 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v9 + 104) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v15->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v15->SpecialApcDisable;
    v17 = ++v15->AbAllocationRegionCount == 1;
    v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    v27 = v20;
    if ( v19 )
      goto LABEL_35;
    while ( 1 )
    {
      v21 = 1 << v20;
      v22 = v20;
      v23 = &v15->LockEntries[v22];
      v18 &= ~v21;
      if ( (v23->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v23->LockState.0 & 1) == 0
        && (*(_QWORD *)&v23->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
        && v23->LockState.SessionId == (_DWORD)SessionId )
      {
        v23->AcquiredByte &= ~1u;
        if ( v23->LockState.0 )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v27 = v20;
      if ( v19 )
        goto LABEL_35;
    }
    if ( !v23 )
    {
LABEL_35:
      if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v15, v11, SessionId, 0LL);
    }
    else
    {
      v23->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v23->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v15->LockEntries[v22].TreeNode);
      v26 = 0;
      v26 = v23->BoostBitmap.AllFields & 0x1FFFF;
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
    result = KiAbThreadRemoveBoosts((ULONG_PTR)v15, v11, (unsigned int *)&v26);
    v19 = v15->SpecialApcDisable++ == -1;
    if ( v19 && ($B476B70DB57F76B110DA5B9238C3E934 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      result = KiCheckForKernelApcDelivery();
    v19 = v14->SpecialApcDisable++ == -1;
    if ( v19 )
    {
      result = (__int64)&v14->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
