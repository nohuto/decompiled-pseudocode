/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x140117340
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1400C2218 (MiUnmapLockedPagesInUserSpace.c)
 *     MiCleanCfg @ 0x1400C6198 (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x1400D0B30 (MiWaitForRotateToComplete.c)
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MmGetEnclaveModuleList @ 0x140264A80 (MmGetEnclaveModuleList.c)
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x1404AF9A0 (NtResetWriteWatch.c)
 *     MiCfgMarkValidEntries @ 0x1404B3738 (MiCfgMarkValidEntries.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1404D5D60 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiCfgInitializeProcess @ 0x1404E95B8 (MiCfgInitializeProcess.c)
 *     MmSecureVirtualMemoryEx @ 0x140557158 (MmSecureVirtualMemoryEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405749A8 (MmStoreAllocateVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140575908 (MiProcessVaRangesInfoClass.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x140595928 (MmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x140595BD8 (MiCleanVad.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405F1D00 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x140749798 (MmGetFileNameForAddress.c)
 *     MiHandleEnclaveFault @ 0x14074F594 (MiHandleEnclaveFault.c)
 *     MiCreateEnclave @ 0x140751C18 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1407523EC (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140752E40 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140753BEC (NtTerminateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1407550B8 (MiFinishPlaceholderVadReplacement.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  BOOL v6; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v8; // rdi
  ULONG_PTR SessionId; // r9
  BOOL v10; // r13d
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _KLOCK_ENTRY *v16; // rbx
  __int64 v17; // rdx
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h]

  v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF);
  v6 = (_DWORD)v5 == 1 && (*((_DWORD *)P + 12) & 0x20000000) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5, v5, a3, a4);
  v18 = 0;
  v8 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)P + 40) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v8->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v8->SpecialApcDisable;
  v10 = ++v8->AbAllocationRegionCount == 1;
  LODWORD(v11) = ((char)v8->AbEntrySummary | (char)v8->AbOrphanedEntrySummary) ^ 0x3F;
  v12 = !_BitScanReverse((unsigned int *)&v13, v11);
  v19 = v13;
  if ( v12 )
    goto LABEL_30;
  while ( 1 )
  {
    v14 = 1 << v13;
    v15 = v13;
    v16 = &v8->LockEntries[v15];
    v11 = ~v14 & (unsigned int)v11;
    if ( (v16->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v16->LockState.0 & 1) == 0
      && (*(_QWORD *)&v16->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (((unsigned __int64)P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && v16->LockState.SessionId == (_DWORD)SessionId )
    {
      v16->AcquiredByte &= ~1u;
      if ( v16->LockState.0 )
        break;
    }
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    v19 = v13;
    if ( v12 )
      goto LABEL_30;
  }
  if ( !v16 )
  {
LABEL_30:
    if ( (*((_DWORD *)&v8->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v8, (ULONG_PTR)P + 40, SessionId, 0LL);
  }
  else
  {
    v16->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v16->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v8->LockEntries[v15].TreeNode, v11);
    v18 = 0;
    v18 = v16->BoostBitmap.AllFields & 0x1FFFF;
    v16->BoostBitmap.AllFields &= 0xFFFE0000;
    v16->ThreadLocalFlags &= ~1u;
    v16->LockState.0 = 0LL;
    v17 = ((char *)v16 - (char *)v8 - 800) / 96;
    if ( v10 )
      v8->AbEntrySummary |= 1 << v17;
    else
      _InterlockedOr8((volatile signed __int8 *)&v8->AbOrphanedEntrySummary, 1 << v17);
  }
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, (__int64)P + 40, (__int64)&v18);
  v12 = v8->SpecialApcDisable++ == -1;
  if ( v12 && ($005F0E83B22994B61E86C72E0CE43C71 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery();
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v6 )
    ExFreePoolWithTag(P, 0);
}
