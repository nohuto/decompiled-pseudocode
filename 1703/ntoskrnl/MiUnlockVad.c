/*
 * XREFs of MiUnlockVad @ 0x1400403D0
 * Callers:
 *     MiLockAddressSpaceToo @ 0x14003FD5C (MiLockAddressSpaceToo.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14007C6D8 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPages @ 0x14020C108 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14020C398 (MiReleaseOutSwappedProcessCommit.c)
 *     MiWaitForVadDeletion @ 0x1402238D8 (MiWaitForVadDeletion.c)
 *     MiReferenceCfgVad @ 0x14044CB68 (MiReferenceCfgVad.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14047AEF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiUnlockVadRangeHelper @ 0x14054B70C (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x14054B948 (MiLockVadRangeHelper.c)
 *     MiMapLockedPagesInUserSpace @ 0x14056C3D8 (MiMapLockedPagesInUserSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 *     MmIsFileMapped @ 0x1406B81CC (MmIsFileMapped.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbp
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
  int v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h]

  *(_BYTE *)(a1 + 1744) &= ~0x80u;
  v2 = a2 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 40);
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount == 1;
  v7 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v8) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  v9 = !_BitScanReverse((unsigned int *)&v10, v8);
  v18 = v10;
  if ( v9 )
    goto LABEL_25;
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
      goto LABEL_25;
  }
  if ( !v13 )
  {
LABEL_25:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
  }
  else
  {
    v13->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v13->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12], v8, v7);
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
  KiAbThreadRemoveBoosts(CurrentThread, v2, &v17);
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
