/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x14007E7BC
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x14052B7A0 (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     SmpKeyedStoreEntryGet @ 0x14008BD28 (SmpKeyedStoreEntryGet.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 SmpKeyedStoreSetVaRanges(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, ...)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  __int64 v18; // rdx
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v6 = SmpKeyedStoreEntryGet(BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v5, v7, v8);
  LODWORD(v20) = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx(v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    if ( v13 )
      break;
    v15 = 1 << v14;
    v16 = v14;
    v17 = &v9->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode);
          LODWORD(v20) = 0;
          LODWORD(v20) = v17->BoostBitmap.AllFields & 0x1FFFF;
          v17->BoostBitmap.AllFields &= 0xFFFE0000;
          v17->ThreadLocalFlags &= ~1u;
          v17->LockState.0 = 0LL;
          v18 = ((char *)v17 - (char *)v9 - 800) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v9, BugCheckParameter2, (__int64 *)va);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($005F0E83B22994B61E86C72E0CE43C71 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery();
  KeLeaveCriticalRegion();
  return v6 - 1073741275;
}
