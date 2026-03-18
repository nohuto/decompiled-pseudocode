/*
 * XREFs of MiUnlockPageTableInternal @ 0x140123AD0
 * Callers:
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140003FD0 (MiJumpStackTarget.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiLockPageLeafPageTable @ 0x140021570 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiDeleteKernelStack @ 0x140025C60 (MiDeleteKernelStack.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14003DFCC (MiUnlockNestedPageTableWritePte.c)
 *     MiDirtySystemCachePte @ 0x140046508 (MiDirtySystemCachePte.c)
 *     MiMarkPteDirty @ 0x140048BD0 (MiMarkPteDirty.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiEncodeProtoFill @ 0x14004AAA0 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140059D10 (MiUnlockFaultPageTable.c)
 *     MiInitializeWorkingSetList @ 0x14006A7A0 (MiInitializeWorkingSetList.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiReleaseWalkLocks @ 0x1400B5D98 (MiReleaseWalkLocks.c)
 *     MiConvertAndFlushWsleVas @ 0x1400BAC24 (MiConvertAndFlushWsleVas.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400BDA54 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MiLockPageTableRange @ 0x1400C6CEC (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x1400CE14C (MiUnlockPageTableRange.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiGetNextNonGapPfnPage @ 0x14017A7D8 (MiGetNextNonGapPfnPage.c)
 *     MiInsertViewOfPhysicalSection @ 0x140181AD8 (MiInsertViewOfPhysicalSection.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140185724 (MiGetWsAndMakePageTablesNx.c)
 *     MiUnlockPageTable @ 0x14018626C (MiUnlockPageTable.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiReacquireWalkLocks @ 0x14025382C (MiReacquireWalkLocks.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiDeleteSessionPoolRange @ 0x14025BEE8 (MiDeleteSessionPoolRange.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x140262490 (MiCreatePageTablesForPhysicalRange.c)
 *     MiProtectAweRegion @ 0x14026271C (MiProtectAweRegion.c)
 *     MiRemoveUserPhysicalPagesVad @ 0x1402629CC (MiRemoveUserPhysicalPagesVad.c)
 *     MiWriteAwePtes @ 0x140262D60 (MiWriteAwePtes.c)
 *     NtFreeUserPhysicalPages @ 0x14026303C (NtFreeUserPhysicalPages.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140263814 (MiWorkingSetInfoCheckPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1402649B4 (MiWriteEnclavePte.c)
 *     MiInsertLargeUserMapping @ 0x140268D44 (MiInsertLargeUserMapping.c)
 *     MiScrubAweMappedPage @ 0x140270278 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1402703B8 (MiScrubLargeMappedPage.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  signed __int64 v4; // rdx
  bool v5; // zf
  __int64 result; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v8; // edx
  int v9; // ett
  char v10; // al
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  struct _KPRCB *v12; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  int v19; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (v2 & 7) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v19);
      LODWORD(result) = *PageTableLockBuffer;
      v8 = ~(3 << v19);
      do
      {
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(PageTableLockBuffer, result & v8, result);
      }
      while ( v9 != (_DWORD)result );
    }
    else
    {
      v4 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v4 & 1) != 0
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8 * ((a2 >> 3) & 0x1FF));
          v17 = v4 | 0x20;
          if ( (v16 & 0x20) == 0 )
            v17 = *(_QWORD *)a2;
          v4 = v17;
          if ( (v16 & 0x42) != 0 )
            v4 = v17 | 0x42;
        }
      }
      do
      {
        result = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v4 & 0xCFFFFFFFFFFFFFFFuLL, v4);
        v5 = v4 == result;
        v4 = result;
      }
      while ( !v5 );
    }
    return result;
  }
  v10 = v2 & 7;
  if ( v10 )
  {
    if ( v10 == 7 )
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v10 == 5 )
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
      else
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
    }
  }
  else
  {
    SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
    goto LABEL_23;
  }
  _m_prefetchw(SelfmapLockHandle);
  result = (__int64)SelfmapLockHandle->LockQueue.Next;
  if ( SelfmapLockHandle->LockQueue.Next )
    goto LABEL_29;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
             0LL,
             (signed __int64)SelfmapLockHandle);
  if ( SelfmapLockHandle != (_KLOCK_QUEUE_HANDLE *)result )
  {
    result = KxWaitForLockChainValid((__int64 *)SelfmapLockHandle);
LABEL_29:
    SelfmapLockHandle->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_23:
  v12 = KeGetCurrentPrcb();
  SchedulerAssist = v12->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v12->NestingLevel <= 1u )
    {
      result = (unsigned int)(SchedulerAssist[5] - 1);
      SchedulerAssist[5] = result;
      if ( !(_DWORD)result )
      {
        result = *((unsigned __int8 *)SchedulerAssist + 25);
        if ( !(_BYTE)result && !*((_BYTE *)SchedulerAssist + 27) )
          return KiPerformUnboostKick(v12);
      }
    }
  }
  return result;
}
