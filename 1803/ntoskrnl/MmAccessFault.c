/*
 * XREFs of MmAccessFault @ 0x14001B320
 * Callers:
 *     MiGetNextPageTablePte @ 0x140011270 (MiGetNextPageTablePte.c)
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiSectionCreated @ 0x14004D194 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x14004DF48 (MiInitializeImageProtos.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiReleaseOutSwapReservations @ 0x14007F5D4 (MiReleaseOutSwapReservations.c)
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiInPageSingleKernelStack @ 0x1400B2E48 (MiInPageSingleKernelStack.c)
 *     MiMakeProtoAddressValid @ 0x1400B4F10 (MiMakeProtoAddressValid.c)
 *     MiFaultInProbeAddress @ 0x1400BA738 (MiFaultInProbeAddress.c)
 *     MiMakeImageReadOnly @ 0x1400C2CC0 (MiMakeImageReadOnly.c)
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MiPurgeImageSection @ 0x14025ACE0 (MiPurgeImageSection.c)
 *     MiBuildFileOnlyProtos @ 0x14025D034 (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x14025D78C (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x14025D860 (MiEnableLargeSubsection.c)
 *     MiDeletePerSessionProtos @ 0x140267E68 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1402681CC (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x1402BC7D0 (ExpSvmServicePageFault.c)
 *     MmVirtualAccessFault @ 0x14074F5E8 (MmVirtualAccessFault.c)
 * Callees:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiRaisedIrqlFault @ 0x1400B5050 (MiRaisedIrqlFault.c)
 *     KeInvalidAccessAllowed @ 0x1400B54F4 (KeInvalidAccessAllowed.c)
 *     MiReleaseFaultCharges @ 0x1400C7D70 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x1400C819C (MiRetainSubsection.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiPageAvailableEx @ 0x1400E7708 (MiPageAvailableEx.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiFreeTransitionPageHeatList @ 0x140258C9C (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x140259210 (MiReplenishTransitionPageHeatList.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 *     MiReleaseFaultSynchronization @ 0x14026207C (MiReleaseFaultSynchronization.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     EtwTracePageFault @ 0x1402AEF04 (EtwTracePageFault.c)
 *     MiHandleEnclaveFault @ 0x14074F594 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 a2,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v4; // r14
  unsigned __int64 v6; // rdi
  unsigned int v8; // r15d
  unsigned int FileExtents; // ebx
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  volatile signed __int64 *v17; // r9
  __int64 v18; // rdi
  signed __int64 v19; // rdx
  bool v20; // zf
  signed __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 Address; // rax
  char v26; // al
  _BYTE *v27; // r14
  __int64 v28; // rbx
  _BYTE *v29; // rax
  char v30; // al
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v34; // eax
  int v35; // edx
  signed __int32 v36; // ett
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  struct _KTHREAD *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  _QWORD v43[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[20]; // [rsp+C0h] [rbp-40h] BYREF
  int v46; // [rsp+170h] [rbp+70h] BYREF

  v4 = BugCheckParameter4;
  v6 = a2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, a2, BugCheckParameter2, BugCheckParameter4);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    v29 = (_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (BugCheckParameter4 & 1) == 0 )
      goto LABEL_84;
    if ( *v29 == 1 )
      return 3221225477LL;
    if ( (BugCheckParameter4 & 1) == 0 )
      goto LABEL_84;
    if ( *v29 == 3 )
      return 3221225477LL;
    if ( (BugCheckParameter4 & 1) == 0 )
    {
LABEL_84:
      if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4) == 1 )
        return 3221225477LL;
    }
    KeBugCheckEx(0x50u, a2, BugCheckParameter2, BugCheckParameter4, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(a2);
    else
      return 3221226658LL;
  }
  memset(v43, 0, 0x78uLL);
  v43[3] = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43[4] = ((v43[3] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43[5] = ((v43[4] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43[1] = BugCheckParameter2;
  v43[6] = ((v43[5] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43[0] = v6;
  LOBYTE(v43[10]) = a3;
  v43[2] = v4;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v43);
  while ( 1 )
  {
    v8 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v13 = MiSystemFault(v43), FileExtents = v13, v13 == 192) )
    {
      FileExtents = MiUserFault(v43);
      if ( FileExtents != -1073741802 )
        goto LABEL_7;
    }
    else if ( v13 != -1073741802 )
    {
      goto LABEL_12;
    }
    FileExtents = MiDispatchFault(v43, &v44);
    if ( FileExtents == -1073741802 )
    {
      v24 = v43[0];
      if ( v43[0] < 0xFFFF800000000000uLL
        && v43[12] != qword_1403CB670
        && (!qword_1403CB678 || v43[12] != qword_1403CB678) )
      {
        Address = v43[11];
        if ( !v43[11] )
        {
          Address = MiLocateAddress(v43[0], v43[0], v14, v15);
          v24 = v43[0];
          v43[11] = Address;
        }
        if ( !MiGetProtoPteAddress(Address, v24 >> 12, 4LL, &v43[13]) )
        {
          MiReleaseFaultSynchronization(v43);
          v43[12] = 0LL;
          FileExtents = -1073741819;
          goto LABEL_46;
        }
        MiRetainSubsection(v43[13]);
      }
      FileExtents = 0;
    }
    else
    {
      v16 = v44;
      if ( v44 )
      {
        v22 = *(_QWORD *)(v44 + 248);
        v8 = *(_DWORD *)(v44 + 304);
        if ( v22 )
          v8 = *(_DWORD *)(v22 + 40);
        if ( a3 == 1 )
          *(_BYTE *)(v44 + 191) |= 2u;
        if ( (*(_BYTE *)(v16 + 188) & 2) != 0 )
        {
          FileExtents = MiFaultGetFileExtents(v43);
          v43[12] = 0LL;
          goto LABEL_7;
        }
        FileExtents = MiIssueHardFault(v43);
      }
      v43[12] = 0LL;
    }
    if ( (v43[10] & 0x2000000000LL) != 0 )
    {
      memset(v45, 0, 0x80uLL);
      *(_OWORD *)&v45[3] = *(_OWORD *)&v43[7];
      v45[5] = v43[9];
      MiUnlockSystemVa(v45);
      HIDWORD(v43[10]) &= ~0x20u;
    }
    else
    {
      v17 = (volatile signed __int64 *)v43[9];
      v18 = v43[7];
      if ( v43[9] )
      {
        if ( v43[9] == 0xFFFFF6FB7DBEDF68uLL )
        {
          v30 = *(_BYTE *)(v43[7] + 184LL) & 7;
          if ( v30 )
          {
            if ( v30 == 7 )
            {
              SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
            }
            else
            {
              CurrentPrcb = KeGetCurrentPrcb();
              if ( v30 == 5 )
                SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
              else
                SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
            }
          }
          else
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
        }
        else if ( (*(_BYTE *)(v43[7] + 184LL) & 7) != 0
               && v43[9] >= 0xFFFFF6FB7DBED000uLL
               && v43[9] <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v43[7], v43[9], &v46);
          v34 = *PageTableLockBuffer;
          v35 = ~(3 << v46);
          do
          {
            v36 = v34;
            v34 = _InterlockedCompareExchange(PageTableLockBuffer, v34 & v35, v34);
          }
          while ( v36 != v34 );
        }
        else
        {
          v19 = *(_QWORD *)v43[9];
          if ( v43[9] >= 0xFFFFF6FB7DBED000uLL
            && v43[9] <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x1800000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            v37 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v37 )
            {
              v38 = *(_QWORD *)(v37 + 8 * ((v43[9] >> 3) & 0x1FFLL));
              v39 = v19 | 0x20;
              if ( (v38 & 0x20) == 0 )
                v39 = *(_QWORD *)v43[9];
              v19 = v39;
              if ( (v38 & 0x42) != 0 )
                v19 = v39 | 0x42;
            }
          }
          do
          {
            v21 = _InterlockedCompareExchange64(v17, v19 & 0xCFFFFFFFFFFFFFFFuLL, v19);
            v20 = v19 == v21;
            v19 = v21;
          }
          while ( !v20 );
        }
        v43[9] = 0LL;
      }
      if ( BYTE1(v43[8]) )
        MiUnlockWorkingSetExclusive(v18, LOBYTE(v43[8]));
      else
        MiUnlockWorkingSetShared(v18, LOBYTE(v43[8]));
    }
LABEL_7:
    if ( (v43[10] & 0x100000000LL) != 0 )
      MiDeprioritizeVad((PVOID)v43[11]);
    if ( v43[14] )
    {
      if ( v43[14] == -1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch();
        MiFreeTransitionPageHeatList((PSLIST_ENTRY)v43[14]);
      }
      v43[14] = 0LL;
    }
    v10 = v43[7];
    if ( (*(_BYTE *)(v43[7] + 184LL) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v43[7] + 4LL) & 0xFFF) != 0 )
        goto LABEL_12;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_12;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 0
        || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        goto LABEL_12;
      }
      v10 = v43[7];
      if ( (__int64)(*(_QWORD *)(v43[7] + 120LL) - *(_QWORD *)(v43[7] + 112LL)) <= 100 )
        goto LABEL_12;
    }
    v23 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v10 + 174));
    if ( v23 && !(unsigned int)MiSufficientAvailablePages(v23, 1056LL) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_12:
    if ( !FileExtents )
      goto LABEL_17;
    if ( FileExtents == -1073740748 )
    {
      FileExtents = 0;
      goto LABEL_17;
    }
    if ( (FileExtents & 0x80000000) == 0 )
    {
LABEL_15:
      if ( !v43[12] && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        if ( (v43[2] & 1) != 0 && *(_BYTE *)(v43[2] & 0xFFFFFFFFFFFFFFFEuLL) == 1
          || (v43[2] & 1) != 0
          && (*(_BYTE *)(v43[2] & 0xFFFFFFFFFFFFFFFEuLL) == 2
           || (v43[2] & 1) != 0
           && (*(_BYTE *)(v43[2] & 0xFFFFFFFFFFFFFFFEuLL) == 4
            || (v43[2] & 1) != 0 && *(_BYTE *)(v43[2] & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
        {
          v43[2] = 0LL;
        }
        EtwTracePageFault(FileExtents, v43[0], LOBYTE(v43[10]));
      }
      goto LABEL_17;
    }
LABEL_46:
    if ( !(unsigned int)MiIsRetryIoStatus(FileExtents, v8) )
      goto LABEL_15;
    v40 = KeGetCurrentThread();
    if ( (*((_DWORD *)&v40[1].SwapListEntry + 3) >> 2) & 3 | (((__int64)v40[1].Queue & 4) != 0) )
    {
      FileExtents = -1073741801;
    }
    else if ( (v43[2] & 1) != 0
           && *(_BYTE *)(v43[2] & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v43[2] & 0xFFFFFFFFFFFFFFFEuLL) + 48) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v41 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v43[7] + 174LL));
      if ( !(unsigned int)MiSufficientAvailablePages(v41, 1056LL) || *(_QWORD *)(v41 + 7104) < 0x400uLL )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v42 = *(_QWORD *)(v41 + 7040);
      if ( v42 )
        --v42;
      if ( !(unsigned int)MiPageAvailableEx(v41, v42, 0LL) )
        MiWaitForFreePage(v41);
      FileExtents = 0;
    }
LABEL_17:
    if ( (v43[10] & 0x400000000LL) != 0 )
      MiCopyOnWriteCheckConditions(v43[7], 3221225495LL);
    if ( (v43[10] & 0x800000000LL) != 0 )
      MiCopyOnWriteCheckConditions(v43[7], 3221226548LL);
    if ( !v43[12] )
      break;
    v26 = v4;
    v27 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v26 & 1) != 0 && (*v27 == 1 || *v27 == 2) )
      v27[1] = 1;
    v28 = v43[13];
    v6 = v43[12];
    memset(v43, 0, 0x78uLL);
    MiFillPteHierarchy(v6, &v43[3]);
    HIDWORD(v43[10]) |= 0x10u;
    v4 = 0LL;
    v43[1] = 2LL;
    v43[0] = v6;
    LOBYTE(v43[10]) = 0;
    v43[2] = 0LL;
    v43[13] = v28;
  }
  if ( v43[13] )
    MiReleaseFaultCharges(v43[13]);
  return FileExtents;
}
