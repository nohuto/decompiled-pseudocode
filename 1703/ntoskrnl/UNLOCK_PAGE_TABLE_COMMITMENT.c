/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14009A810
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v6; // r14d
  __int64 v7; // r8
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rbx
  __int64 v14; // rdx
  __int16 v15; // ax
  __int64 result; // rax
  int v17; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+70h] [rbp+18h]

  v3 = a2 + 880;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 880);
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount == 1;
  v7 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v8) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  v9 = !_BitScanReverse((unsigned int *)&v10, v8);
  v18 = v10;
  if ( v9 )
    goto LABEL_23;
  while ( 1 )
  {
    v11 = 1 << v10;
    v12 = v10;
    v13 = &CurrentThread->LockEntries[v12];
    v8 = ~v11 & (unsigned int)v8;
    if ( (v13->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v13->LockState.0 & 1) == 0
      && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v7
      && v13->LockState.SessionId == (_DWORD)SessionId )
    {
      v13->AcquiredByte &= ~1u;
      if ( v13->LockState.0 )
        break;
    }
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v18 = v10;
    if ( v9 )
      goto LABEL_23;
  }
  if ( !v13 )
  {
LABEL_23:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
  }
  else
  {
    v13->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v13->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree((__int64)&CurrentThread->LockEntries[v12], v8, v7);
    v17 = 0;
    v17 = v13->BoostBitmap.AllFields & 0x1FFFF;
    v13->BoostBitmap.AllFields &= 0xFFFE0000;
    v13->ThreadLocalFlags &= ~1u;
    v13->LockState.0 = 0LL;
    v14 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
    if ( v6 )
      CurrentThread->AbEntrySummary |= 1 << v14;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
  }
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v3, &v17);
  v15 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v15;
  if ( !v15 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
