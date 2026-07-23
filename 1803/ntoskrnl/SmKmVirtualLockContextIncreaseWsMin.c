/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x1402A79AC
 * Callers:
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

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rax
  struct _KTHREAD *v16; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v18; // r15
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  bool v23; // zf
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v27; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  char v33; // [rsp+A0h] [rbp+40h] BYREF
  int v34; // [rsp+B0h] [rbp+50h] BYREF
  int v35; // [rsp+B8h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( a3 >= *(_QWORD *)(BugCheckParameter2 + 16) )
  {
    do
    {
      v10 = MmQueryWorkingSetInformation(&v32, &v31, &v30, &v28, &v29, &v27);
      if ( v10 < 0 )
        break;
      v11 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v12 = v11 + v28;
      if ( v11 + v28 <= v28 )
      {
        v10 = -1073741675;
        break;
      }
      v13 = v29;
      v28 += v11;
      if ( v12 > v29 )
        v13 = v12;
      v29 = v13;
      v14 = MmAdjustWorkingSetSizeEx(v12, v13, 0, 1, 0, &v33);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v15 = *(_QWORD *)(BugCheckParameter2 + 16);
        if ( v15 + v11 > v15 )
          *(_QWORD *)(BugCheckParameter2 + 16) = v15 + v11;
        v10 = 0;
        break;
      }
    }
    while ( v14 == -1073741748 );
  }
  else
  {
    v10 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v7, v8, v9);
  v34 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v23 = !_BitScanReverse((unsigned int *)&v24, v19);
    v35 = v24;
    if ( v23 )
      goto LABEL_26;
    v20 = 1 << v24;
    v21 = v24;
    v22 = &v16->LockEntries[v21];
    v19 &= ~v20;
    if ( (v22->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v22->LockState.0 & 1) == 0
      && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v22->LockState.SessionId == (_DWORD)SessionId )
    {
      v22->AcquiredByte &= ~1u;
      if ( v22->LockState.0 )
        break;
    }
  }
  if ( !v22 )
  {
LABEL_26:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, BugCheckParameter2, (unsigned int)SessionId, 0LL);
    goto LABEL_33;
  }
  v22->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v22->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v21].TreeNode, SessionId);
  v34 = 0;
  v34 = v22->BoostBitmap.AllFields & 0x1FFFF;
  v22->BoostBitmap.AllFields &= 0xFFFE0000;
  v22->ThreadLocalFlags &= ~1u;
  v22->LockState.0 = 0LL;
  v25 = ((char *)v22 - (char *)v16 - 800) / 96;
  if ( v18 == 1 )
    v16->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
LABEL_33:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, BugCheckParameter2, (__int64)&v34);
  v23 = v16->SpecialApcDisable++ == -1;
  if ( v23 && ($005F0E83B22994B61E86C72E0CE43C71 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
