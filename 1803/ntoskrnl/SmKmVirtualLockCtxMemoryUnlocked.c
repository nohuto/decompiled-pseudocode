/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x1402A7D90
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140096ABC (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1402A7C70 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MmQueryWorkingSetInformation @ 0x14006CEF8 (MmQueryWorkingSetInformation.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  struct _KTHREAD *v13; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // r14
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rsi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+50h] [rbp-18h] BYREF
  char v28; // [rsp+A0h] [rbp+38h] BYREF
  int v29; // [rsp+A8h] [rbp+40h] BYREF
  int v30; // [rsp+B0h] [rbp+48h]
  int v31; // [rsp+B8h] [rbp+50h] BYREF

  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v3 = *(_QWORD *)(BugCheckParameter2 + 8);
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v3 < v4 && (!v3 || v4 - v3 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v9 = *(_QWORD *)(BugCheckParameter2 + 8);
    v10 = *(_QWORD *)(BugCheckParameter2 + 16) - v9;
    if ( (v10 >= 0x800000 || !v9 && *(_QWORD *)(BugCheckParameter2 + 16))
      && (int)MmQueryWorkingSetInformation(v27, &v26, &v25, &v23, &v24, &v31) >= 0 )
    {
      v11 = v23;
      v12 = v10 & 0xFFFFFFFFFFC00000uLL;
      *(_QWORD *)(BugCheckParameter2 + 16) -= v12;
      if ( v11 >= v12 )
      {
        v23 = v11 - v12;
        MmAdjustWorkingSetSizeEx(v11 - v12, v24, 0, 0, 0, &v28);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v6, v7, v8);
    v29 = 0;
    v13 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v13->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v13->SpecialApcDisable;
    v15 = ++v13->AbAllocationRegionCount;
    v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v16);
      v30 = v21;
      if ( v20 )
        goto LABEL_22;
      v17 = 1 << v21;
      v18 = v21;
      v19 = &v13->LockEntries[v18];
      v16 &= ~v17;
      if ( (v19->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v19->LockState.0 & 1) == 0
        && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v19->LockState.SessionId == (_DWORD)SessionId )
      {
        v19->AcquiredByte &= ~1u;
        if ( v19->LockState.0 )
          break;
      }
    }
    if ( !v19 )
    {
LABEL_22:
      if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, (unsigned int)SessionId, 0LL);
      goto LABEL_29;
    }
    v19->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v19->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v13->LockEntries[v18].TreeNode, SessionId);
    v29 = 0;
    v29 = v19->BoostBitmap.AllFields & 0x1FFFF;
    v19->BoostBitmap.AllFields &= 0xFFFE0000;
    v19->ThreadLocalFlags &= ~1u;
    v19->LockState.0 = 0LL;
    v22 = ((char *)v19 - (char *)v13 - 800) / 96;
    if ( v15 == 1 )
      v13->AbEntrySummary |= 1 << v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_29:
    --v13->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v13, BugCheckParameter2, (__int64)&v29);
    v20 = v13->SpecialApcDisable++ == -1;
    if ( v20 && ($005F0E83B22994B61E86C72E0CE43C71 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
}
