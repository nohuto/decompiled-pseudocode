/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x14012F544
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x140568258 (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 SmpKeyedStoreSetVaRanges(ULONG_PTR BugCheckParameter2, ...)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // r14d
  struct _KTHREAD *v4; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v6; // r15
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rdi
  __int64 v13; // rdx
  __int16 v14; // cx
  $69CD3F157F9F39B6F7113F2231989901 *v15; // rcx
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF
  va_list va1; // [rsp+88h] [rbp+20h]
  va_list va2; // [rsp+90h] [rbp+28h] BYREF

  va_start(va2, BugCheckParameter2);
  va_start(va1, BugCheckParameter2);
  va_start(va, BugCheckParameter2);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v3 = SmpKeyedStoreEntryGet(BugCheckParameter2, (__int64 *)va, 0, 1) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  LODWORD(v20) = 0;
  v4 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v4->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v4->SpecialApcDisable;
  v6 = ++v4->AbAllocationRegionCount;
  v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    LODWORD(v19) = v9;
    if ( v8 )
      break;
    v10 = 1 << v9;
    v11 = v9;
    v12 = &v4->LockEntries[v11];
    v7 &= ~v10;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == (_DWORD)SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
      {
        if ( v12 )
        {
          v12->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v12->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v4->LockEntries[v11].TreeNode, SessionId);
          LODWORD(v20) = 0;
          LODWORD(v20) = v12->BoostBitmap.AllFields & 0x1FFFF;
          v12->BoostBitmap.AllFields &= 0xFFFE0000;
          v12->ThreadLocalFlags &= ~1u;
          v12->LockState.0 = 0LL;
          v13 = ((char *)v12 - (char *)v4 - 800) / 96;
          if ( v6 == 1 )
            v4->AbEntrySummary |= 1 << v13;
          else
            _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v13);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v4->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v4, BugCheckParameter2, (unsigned int)SessionId, 0LL);
LABEL_17:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v4->Header.Lock, BugCheckParameter2, (unsigned int *)va1);
  v14 = v4->SpecialApcDisable + 1;
  v4->SpecialApcDisable = v14;
  if ( !v14 )
  {
    v15 = &v4->152;
    if ( ($69CD3F157F9F39B6F7113F2231989901 *)v15->ApcState.ApcListHead[0].Flink != v15 )
      KiCheckForKernelApcDelivery((__int64)v15);
  }
  KeLeaveCriticalRegion();
  return v3 - 1073741275;
}
