/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x1400CE4E0
 * Callers:
 *     NtResetWriteWatch @ 0x14001DB40 (NtResetWriteWatch.c)
 *     MiCleanCfg @ 0x14002F780 (MiCleanCfg.c)
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiObtainReferencedSecureVad @ 0x140099160 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140130E08 (MiUnmapLockedPagesInUserSpace.c)
 *     MiWaitForRotateToComplete @ 0x140131EBC (MiWaitForRotateToComplete.c)
 *     MmSecureVirtualMemory @ 0x14043F030 (MmSecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404543B0 (MmStoreAllocateVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14047ABC0 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x14047AE9C (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B908 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     MiCfgMarkValidEntries @ 0x14049AE2C (MiCfgMarkValidEntries.c)
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MmFlushVirtualMemory @ 0x1404C6968 (MmFlushVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404C9C9C (MiSetPriorityVaRanges.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     NtFreeVirtualMemory @ 0x14051A3B0 (NtFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiLockVadRange @ 0x14054B808 (MiLockVadRange.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1406BBAD0 (MiInitializeEnclave.c)
 *     MiScrubProcesses @ 0x1406C0060 (MiScrubProcesses.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  BOOL v2; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v4; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v6; // r13d
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rbx
  __int64 v13; // rdx
  __int16 v14; // ax
  __int16 v15; // ax
  int v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+78h] [rbp+10h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
    && (*((_DWORD *)P + 12) & 0x80000) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  v16 = 0;
  v4 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(P + 40) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v4->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v4->SpecialApcDisable;
  v6 = ++v4->AbAllocationRegionCount == 1;
  LODWORD(v7) = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
  v8 = !_BitScanReverse((unsigned int *)&v9, v7);
  v17 = v9;
  if ( v8 )
    goto LABEL_30;
  while ( 1 )
  {
    v10 = 1 << v9;
    v11 = v9;
    v12 = &v4->LockEntries[v11];
    v7 = ~v10 & (unsigned int)v7;
    if ( (v12->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v12->LockState.0 & 1) == 0
      && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && v12->LockState.SessionId == (_DWORD)SessionId )
    {
      v12->AcquiredByte &= ~1u;
      if ( v12->LockState.0 )
        break;
    }
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    v17 = v9;
    if ( v8 )
      goto LABEL_30;
  }
  if ( !v12 )
  {
LABEL_30:
    if ( (*((_DWORD *)&v4->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)(P + 40), SessionId, 0LL);
  }
  else
  {
    v12->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v12->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v4->LockEntries[v11].TreeNode, v7);
    v16 = 0;
    v16 = v12->BoostBitmap.AllFields & 0x1FFFF;
    v12->BoostBitmap.AllFields &= 0xFFFE0000;
    v12->ThreadLocalFlags &= ~1u;
    v12->LockState.0 = 0LL;
    v13 = ((char *)v12 - (char *)v4 - 800) / 96;
    if ( v6 )
      v4->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v13);
  }
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(v4, P + 40, &v16);
  v14 = v4->SpecialApcDisable + 1;
  v4->SpecialApcDisable = v14;
  if ( !v14 && ($69CD3F157F9F39B6F7113F2231989901 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery();
  v15 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v15;
  if ( !v15 && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
