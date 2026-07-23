/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x140004A3C
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x140444AF0 (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 SmpKeyedStoreSetVaRanges(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ...)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebp
  struct _KTHREAD *v6; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // r14
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  __int64 v15; // rdx
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v5 = SmpKeyedStoreEntryGet(BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  LODWORD(v17) = 0;
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx(v6->ApcState.Process);
  else
    SessionId = -1;
  --v6->SpecialApcDisable;
  v8 = ++v6->AbAllocationRegionCount;
  v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v10 = !_BitScanReverse((unsigned int *)&v11, v9);
    if ( v10 )
      break;
    v12 = 1 << v11;
    v13 = v11;
    v14 = &v6->LockEntries[v13];
    v9 &= ~v12;
    if ( (v14->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v14->LockState.0 & 1) == 0
      && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v14->LockState.SessionId == SessionId )
    {
      v14->AcquiredByte &= ~1u;
      if ( v14->LockState.0 )
      {
        if ( v14 )
        {
          v14->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v14->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v6->LockEntries[v13].TreeNode);
          LODWORD(v17) = 0;
          LODWORD(v17) = v14->BoostBitmap.AllFields & 0x1FFFF;
          v14->BoostBitmap.AllFields &= 0xFFFE0000;
          v14->ThreadLocalFlags &= ~1u;
          v14->LockState.0 = 0LL;
          v15 = ((char *)v14 - (char *)v6 - 800) / 96;
          if ( v8 == 1 )
            v6->AbEntrySummary |= 1 << v15;
          else
            _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v15);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v6, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v6, BugCheckParameter2, (__int64 *)va);
  v10 = v6->SpecialApcDisable++ == -1;
  if ( v10 && ($B476B70DB57F76B110DA5B9238C3E934 *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
  return v5 - 1073741275;
}
