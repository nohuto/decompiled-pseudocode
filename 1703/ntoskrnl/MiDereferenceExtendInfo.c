/*
 * XREFs of MiDereferenceExtendInfo @ 0x14013109C
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r15
  void *v5; // r14
  unsigned int SessionId; // ebp
  struct _KTHREAD *v7; // rbx
  unsigned __int8 v8; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  SessionId = -1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v5 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  v19 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx(v7->ApcState.Process);
  --v7->SpecialApcDisable;
  v8 = ++v7->AbAllocationRegionCount;
  v9 = (unsigned __int64)&BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v10) = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    v20 = v12;
    if ( v11 )
      break;
    v13 = 1 << v12;
    v14 = v12;
    v15 = &v7->LockEntries[v14];
    v10 = ~v13 & (unsigned int)v10;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == v9
      && v15->LockState.SessionId == SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
      {
        if ( v15 )
        {
          v15->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v15->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree((__int64)&v7->LockEntries[v14], v10, v9);
          v19 = 0;
          v19 = v15->BoostBitmap.AllFields & 0x1FFFF;
          v15->BoostBitmap.AllFields &= 0xFFFE0000;
          v15->ThreadLocalFlags &= ~1u;
          v15->LockState.0 = 0LL;
          v16 = ((char *)v15 - (char *)v7 - 800) / 96;
          if ( v8 == 1 )
            v7->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x8000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&BugCheckParameter2, SessionId, 0LL);
LABEL_19:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v7->Header.Lock, (__int64)&BugCheckParameter2, (unsigned int *)&v19);
  v18 = v7->SpecialApcDisable + 1;
  v7->SpecialApcDisable = v18;
  if ( !v18 && ($69CD3F157F9F39B6F7113F2231989901 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v17);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
