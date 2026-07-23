/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x140274394
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14027384C (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140274274 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14000ABF8 (MmAdjustWorkingSetSizeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     MmQueryWorkingSetInformation @ 0x1400A66B4 (MmQueryWorkingSetInformation.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  struct _KTHREAD *v10; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rsi
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  __int64 v24; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-18h] BYREF
  char v26; // [rsp+A0h] [rbp+38h] BYREF
  int v27; // [rsp+A8h] [rbp+40h] BYREF
  int v28; // [rsp+B0h] [rbp+48h]
  int v29; // [rsp+B8h] [rbp+50h] BYREF

  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    v7 = *(_QWORD *)(BugCheckParameter2 + 16) - v6;
    if ( (v7 >= 0x800000 || !v6 && *(_QWORD *)(BugCheckParameter2 + 16))
      && (int)MmQueryWorkingSetInformation(v25, &v24, &v23, &v21, &v22, &v29) >= 0 )
    {
      v8 = v21;
      v9 = v7 & 0xFFFFFFFFFFC00000uLL;
      *(_QWORD *)(BugCheckParameter2 + 16) -= v9;
      if ( v8 >= v9 )
      {
        v21 = v8 - v9;
        MmAdjustWorkingSetSizeEx(v8 - v9, v22, 0, 0, 0, &v26);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    v27 = 0;
    v10 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    --v10->SpecialApcDisable;
    v12 = ++v10->AbAllocationRegionCount;
    v13 = ((char)v10->AbEntrySummary | (char)v10->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v17 = !_BitScanReverse((unsigned int *)&v18, v13);
      v28 = v18;
      if ( v17 )
        goto LABEL_22;
      v14 = 1 << v18;
      v15 = v18;
      v16 = &v10->LockEntries[v15];
      v13 &= ~v14;
      if ( (v16->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v16->LockState.0 & 1) == 0
        && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v16->LockState.SessionId == SessionId )
      {
        v16->AcquiredByte &= ~1u;
        if ( v16->LockState.0 )
          break;
      }
    }
    if ( !v16 )
    {
LABEL_22:
      if ( (*((_DWORD *)&v10->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, BugCheckParameter2, SessionId, 0LL);
      goto LABEL_29;
    }
    v16->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v16->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v10->LockEntries[v15].TreeNode);
    v27 = 0;
    v27 = v16->BoostBitmap.AllFields & 0x1FFFF;
    v16->BoostBitmap.AllFields &= 0xFFFE0000;
    v16->ThreadLocalFlags &= ~1u;
    v16->LockState.0 = 0LL;
    v19 = ((char *)v16 - (char *)v10 - 800) / 96;
    if ( v12 == 1 )
      v10->AbEntrySummary |= 1 << v19;
    else
      _InterlockedOr8((volatile signed __int8 *)&v10->AbOrphanedEntrySummary, 1 << v19);
LABEL_29:
    --v10->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v10, BugCheckParameter2, (unsigned int *)&v27);
    v17 = v10->SpecialApcDisable++ == -1;
    if ( v17 && ($B476B70DB57F76B110DA5B9238C3E934 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery(v20);
    KeLeaveCriticalRegion();
  }
}
