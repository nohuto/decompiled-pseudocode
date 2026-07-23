/*
 * XREFs of MiInitSystem @ 0x14089C128
 * Callers:
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     PsSetPagePriorityThread @ 0x140043C14 (PsSetPagePriorityThread.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiSetPageTablePfnBuddy @ 0x140071888 (MiSetPageTablePfnBuddy.c)
 *     KeFlushCurrentTbOnly @ 0x1400ADB50 (KeFlushCurrentTbOnly.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiProcessKernelCfgImage @ 0x140161788 (MiProcessKernelCfgImage.c)
 *     MiCreateZeroThreadContext @ 0x14016FEEC (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x14016FFA4 (MiStoreChargeReservedPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140184940 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VslInitializeSecureKernelCfg @ 0x14022FB28 (VslInitializeSecureKernelCfg.c)
 *     KdSetDbgPrintBufferSize @ 0x14023EDF4 (KdSetDbgPrintBufferSize.c)
 *     ExCreateHeap @ 0x1402BD44C (ExCreateHeap.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x140584DC4 (MmConfigurePrefetchSeekThreshold.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 *     MiMarkKernelImageCfgBits @ 0x140605D78 (MiMarkKernelImageCfgBits.c)
 *     MiInitializeSystemSpaceMap @ 0x14060AA9C (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 *     MiWriteProtectSystemImages @ 0x14061C4F0 (MiWriteProtectSystemImages.c)
 *     MiInitializeMemoryEvents @ 0x14061C8B0 (MiInitializeMemoryEvents.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1407541B8 (MiProcessKernelCfgAddressTakenImports.c)
 *     MiAllocateDummyPage @ 0x14089BBF0 (MiAllocateDummyPage.c)
 *     MiAddLoaderHalIoMappings @ 0x14089C610 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14089C6CC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x14089C748 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x14089C7D4 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x14089C8B4 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 *     MiComputeOptimalZeroPath @ 0x14089CFE8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x14089D624 (MiInitializeCfg.c)
 *     MiMapBBTMemory @ 0x14089D6E4 (MiMapBBTMemory.c)
 *     MiInitializeTbFlushing @ 0x14089D730 (MiInitializeTbFlushing.c)
 *     MiInitializeRelocations @ 0x14089DB74 (MiInitializeRelocations.c)
 *     RtlInitializeHistoryTable @ 0x14089DCEC (RtlInitializeHistoryTable.c)
 *     MiInitializeLoadedModuleList @ 0x14089DE40 (MiInitializeLoadedModuleList.c)
 *     MiInitializeBootProcess @ 0x14089E3A8 (MiInitializeBootProcess.c)
 *     MiSectionInitialization @ 0x14089F4C0 (MiSectionInitialization.c)
 *     MiInitializeSessionIds @ 0x14089F6EC (MiInitializeSessionIds.c)
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 *     PsInitializeQuotaSystem @ 0x1408C1AAC (PsInitializeQuotaSystem.c)
 *     MiInitializeSharedUserData @ 0x1408C7258 (MiInitializeSharedUserData.c)
 *     MiInitializeVadSecuring @ 0x1408C8EF4 (MiInitializeVadSecuring.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2)
{
  _KPROCESS *Process; // rbx
  int v4; // eax
  int v5; // r14d
  PKSTART_ROUTINE *i; // r15
  char *AnyMultiplexedVm; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rax
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *v19; // rbx
  PVOID v20; // rcx
  PIMAGE_NT_HEADERS v21; // rax
  HANDLE ThreadHandle; // [rsp+40h] [rbp-68h] BYREF
  __int128 v23; // [rsp+50h] [rbp-58h] BYREF
  __int128 v24; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v25[3]; // [rsp+70h] [rbp-38h] BYREF

  v25[0] = KeBalanceSetManager;
  v25[1] = KeSwapProcessOrStack;
  v25[2] = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      MiSetPageTablePfnBuddy(48 * (Process->DirectoryTableBase >> 12) - 0x58000000000LL, (__int64)Process, 0);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiMapBBTMemory(a2);
      if ( (unsigned int)MiSectionInitialization() && (int)MiInitializeCfg() >= 0 )
      {
        if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_1403CBD08 = 0LL;
          qword_1403CC588 = (__int64)&qword_1403CC580;
          qword_1403CC580 = (__int64)&qword_1403CC580;
          MiInitializeSessionIds();
          MiInitializeCacheFlushing();
          MiComputeOptimalZeroPath();
          if ( MiInitializeMemoryEvents(&MiSystemPartition) && (unsigned int)MiStoreChargeReservedPages() )
          {
            v4 = dword_14044B180;
            if ( (unsigned int)dword_14044B180 > 0x40 )
            {
              v4 = 64;
            }
            else if ( !dword_14044B180 )
            {
              v4 = 1;
            }
            dword_14044B180 = v4 << 8;
            if ( (dword_14044B174 & 0xFFFFFFFE) != 0 )
              dword_14044B174 = 0;
            qword_1403CF820 = (__int64)MiCreateZeroThreadContext(0LL, 0);
            if ( qword_1403CF820 )
            {
              v5 = 0;
              for ( i = (PKSTART_ROUTINE *)v25;
                    PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                    ++i )
              {
                ObCloseHandle(ThreadHandle, 0);
                if ( (unsigned int)++v5 >= 3 )
                {
                  if ( !(unsigned int)MiInitializeMirroring() )
                    return 0;
                  qword_1403CB628 = 0LL;
                  MiWriteProtectSystemImages();
                  _InterlockedAdd(&dword_1403CC4C8, 0xFFFFFFFF);
                  return (int)MiInitializeApiSets(a2) >= 0;
                }
              }
            }
          }
        }
        else
        {
          byte_1403CBED9 = 32;
        }
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_140398560, 0LL, 0LL);
      hProvider = &stru_140398560;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_1403CB778 = (unsigned int)dword_1403CB6C4 / 0x30uLL;
    qword_1403CBE10 = MiReservePtes((__int64)&qword_1403CC5E0, 0x20u);
    _InterlockedIncrement(&dword_1403CC4C8);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( ExpHeapBackedPoolEnabled )
      {
        v23 = xmmword_1403EFA30;
        if ( (int)ExCreateHeap(&v23, 0LL, &qword_1403EFA60) < 0 )
          return 0;
        v24 = xmmword_1403EFA40;
        if ( (int)ExCreateHeap(&v24, 0LL, &qword_1403EFA68) < 0 )
          return 0;
        *(_DWORD *)(qword_1403EFA68 + 504) |= 2u;
        *(_BYTE *)(qword_1403EFA68 + 125) |= 1u;
        *(_BYTE *)(qword_1403EFA68 + 245) |= 1u;
      }
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, 0LL) )
        return 0;
      if ( !(unsigned __int8)PsInitializeQuotaSystem(0LL) )
        return 0;
      MiInitializeVadSecuring();
      Seed = 305419896;
      if ( !(unsigned int)MiInitializeSharedUserData() || (int)MiInitializeBootProcess() < 0 )
        return 0;
      KeFlushCurrentTbOnly(3LL, v9, v10);
      MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
      MiAddLoaderHalIoMappings(qword_1403CD160, qword_1403CD160 + 0x8000000000LL);
      if ( (_DWORD)KdPrintBufferAllocateSize )
        KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
      if ( !(unsigned int)MiInitializeDriverImages(a2) )
        return 0;
      v11 = -1;
      if ( qword_1403CFA10 <= 0xFFFFFFFF )
        v11 = qword_1403CFA10;
      MEMORY[0xFFFFF780000002E8] = v11;
      MEMORY[0xFFFFF78000000244] = 0;
      MiInitializeSystemSpaceMap((__int64)&unk_1403CB5C0);
      qword_1403CB418 = 0LL;
      qword_1403CBD20 = 0LL;
      qword_1403CBD30 = 0LL;
      if ( !(unsigned int)MiInitializeLoadedModuleList(a2) )
        return 0;
      if ( (MiFlags & 0x80000) != 0 )
      {
        v16 = qword_1403CD0F0;
        v17 = MiReservePtes((__int64)&qword_1403CC5E0, 0x20u);
        if ( !v17 )
          return 0;
        if ( VslInitializeSecureKernelCfg(v16, (__int64)(v17 << 25) >> 16) < 0 )
          return 0;
        qword_1403CB4C8 = v16;
        qword_1403CB4C0 = 0x100000000000LL;
        if ( !(unsigned int)MiMakeZeroedPageTables(
                              ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                              (((v16 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                              4u,
                              9) )
          return 0;
        qword_1403CB4D0 = 0LL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
        v19 = (PVOID *)PsLoadedModuleList;
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          do
          {
            if ( ((_DWORD)v19[13] & 0x2000) == 0 )
            {
              v20 = v19[6];
              if ( v20 == PsNtosImageBase )
              {
                v21 = RtlImageNtHeader(v20);
                MiMarkKernelImageCfgBits((__int64)v19, (__int64)v21);
                *((_DWORD *)v19 + 26) |= 0x2000u;
              }
              else
              {
                MiProcessKernelCfgImage((__int64)v19, 0, 0LL);
              }
            }
            v19 = (PVOID *)*v19;
          }
          while ( v19 != &PsLoadedModuleList );
        }
        MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
        ExReleaseResourceLite(&PsLoadedModuleResource);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        guard_icall_bitmap = qword_1403CB4C8 - 0x3FFFE0000000000LL;
      }
      RtlInitializeHistoryTable();
      MiFlags |= 0x2000000u;
      qword_1403CE340[0] = 0LL;
      MmConfigurePrefetchSeekThreshold(32);
      PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
      MiEnablePagingTheExecutive();
      ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
      MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
      qword_1403CC410 = MiAllocateDummyPage(v13, v12, v14, v15);
      qword_1403CC418 = (qword_1403CC410 + 0x58000000000LL) / 48;
      MmBadPointer = (PVOID)MiReservePtes((__int64)&qword_1403CC5E0, 1u);
      if ( MmBadPointer )
      {
        MmBadPointer = (PVOID)((__int64)((_QWORD)MmBadPointer << 25) >> 16);
        if ( (unsigned int)MiInitializeRelocations() )
        {
          MiInitializeTbFlushing();
          return 1;
        }
      }
    }
  }
  return 0;
}
