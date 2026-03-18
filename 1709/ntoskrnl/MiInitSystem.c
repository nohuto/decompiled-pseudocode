/*
 * XREFs of MiInitSystem @ 0x140828E58
 * Callers:
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiSetPageTablePfnBuddy @ 0x1400B7DD4 (MiSetPageTablePfnBuddy.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiCreateZeroThreadContext @ 0x140137370 (MiCreateZeroThreadContext.c)
 *     MiStoreChargeReservedPages @ 0x140137414 (MiStoreChargeReservedPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140159EF4 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KdSetDbgPrintBufferSize @ 0x140201CA4 (KdSetDbgPrintBufferSize.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x14059F64C (MmConfigurePrefetchSeekThreshold.c)
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 *     MiInitializeMemoryEvents @ 0x1405B1D08 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x1405B2CF0 (MiWriteProtectSystemImages.c)
 *     MiInitializeSystemSpaceMap @ 0x1405B4D5C (MiInitializeSystemSpaceMap.c)
 *     MiAddLoaderHalIoMappings @ 0x1408293B0 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14082955C (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x1408295D8 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140829664 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140829744 (MiInitializeApiSets.c)
 *     MiComputeOptimalZeroPath @ 0x140829810 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 *     MiAllocateDummyPage @ 0x14082C7C0 (MiAllocateDummyPage.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 *     MiInitializeLoadedModuleList @ 0x1408481FC (MiInitializeLoadedModuleList.c)
 *     MiInitializeTbFlushing @ 0x1408493FC (MiInitializeTbFlushing.c)
 *     PsInitializeQuotaSystem @ 0x140850CF8 (PsInitializeQuotaSystem.c)
 *     MiCreateEnclaveRegions @ 0x140850F58 (MiCreateEnclaveRegions.c)
 *     RtlInitializeHistoryTable @ 0x1408524A4 (RtlInitializeHistoryTable.c)
 *     MiSectionInitialization @ 0x14085467C (MiSectionInitialization.c)
 *     MiInitializeRelocations @ 0x140855084 (MiInitializeRelocations.c)
 *     MiInitializeBootProcess @ 0x140855684 (MiInitializeBootProcess.c)
 *     MiInitializeSessionIds @ 0x140856228 (MiInitializeSessionIds.c)
 *     MiInitializeVadSecuring @ 0x140856D5C (MiInitializeVadSecuring.c)
 *     MiInitializeCfg @ 0x140857188 (MiInitializeCfg.c)
 *     MiInitializeKernelCfg @ 0x1408580E8 (MiInitializeKernelCfg.c)
 *     MiMapBBTMemory @ 0x14085826C (MiMapBBTMemory.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  ULONG_PTR v5; // rax
  _KPROCESS *Process; // rbx
  _QWORD *PoolWithTag; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  int v18; // ebx
  PKSTART_ROUTINE *i; // rsi
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-30h] BYREF

  v21[0] = KeBalanceSetManager;
  v21[1] = KeSwapProcessOrStack;
  v21[2] = MiZeroPageThread;
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
          qword_140388A88 = 0LL;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20206D4Du);
          if ( PoolWithTag )
          {
            v9 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)0xFFFFF6FBC0000000LL);
            *PoolWithTag = MiMakeValidPte(v10, v9, 536870913);
            if ( (unsigned __int64)PoolWithTag >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)PoolWithTag <= 0xFFFFF6FB7DBED7F8uLL )
            {
              MiWritePteShadow();
            }
            qword_1403884E8 = (__int64)PoolWithTag;
            v11 = 48 * v9 - 0x58000000000LL;
            MiLockPageInline(v11);
            *(_QWORD *)(v11 + 16) = MiMakeDemandZeroPte(4);
            *(_QWORD *)(v11 + 40) |= 0x200000000000000uLL;
            *(_QWORD *)(v11 + 8) = PoolWithTag;
            _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v12);
            qword_140389308 = (__int64)&qword_140389300;
            qword_140389300 = (__int64)&qword_140389300;
            MiInitializeSessionIds();
            MiInitializeCacheFlushing();
            MiComputeOptimalZeroPath();
            if ( MiInitializeMemoryEvents(&MiSystemPartition) )
            {
              if ( (unsigned int)MiStoreChargeReservedPages(v14, v13, v15, v16) )
              {
                v17 = dword_140400120;
                if ( (unsigned int)dword_140400120 <= 0x40 )
                {
                  if ( !dword_140400120 )
                    v17 = 1;
                }
                else
                {
                  v17 = 64;
                }
                dword_140400120 = v17 << 8;
                if ( (dword_140400114 & 0xFFFFFFFE) != 0 )
                  dword_140400114 = 0;
                qword_14038B560 = (__int64)MiCreateZeroThreadContext(0LL, 0);
                if ( qword_14038B560 )
                {
                  v18 = 0;
                  for ( i = (PKSTART_ROUTINE *)v21;
                        PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                        ++i )
                  {
                    ObCloseHandle(ThreadHandle, 0);
                    if ( (unsigned int)++v18 >= 3 )
                    {
                      if ( !(unsigned int)MiInitializeMirroring() )
                        return 0;
                      qword_1403884A0 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_140389248);
                      return (int)MiInitializeApiSets(a2) >= 0;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          byte_140388C35 = 32;
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_140355400, 0LL, 0LL);
      hProvider = &stru_140355400;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_1403885D8 = (unsigned int)dword_14038852C / 0x30uLL;
    qword_140388B78 = MiReservePtes((__int64)&qword_140389360, 0x20uLL, a3);
    _InterlockedIncrement(&dword_140389248);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
      {
        MiInitializeVadSecuring();
        dword_1403884C8 = 305419896;
        if ( (int)MiInitializeBootProcess() >= 0 )
        {
          KeFlushCurrentTbOnly(3);
          MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
          MiAddLoaderHalIoMappings(qword_140389BA0, qword_140389BA0 + 0x7FFFFFFFFFLL);
          if ( (_DWORD)KdPrintBufferAllocateSize )
            KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
          if ( (unsigned int)MiInitializeDriverImages(a2) )
          {
            v4 = qword_14038B750;
            if ( qword_14038B750 > 0xFFFFFFFF )
              v4 = -1;
            MEMORY[0xFFFFF780000002E8] = v4;
            MEMORY[0xFFFFF78000000244] = 0;
            MiInitializeSystemSpaceMap((__int64)&unk_140388438);
            qword_140388278 = 0LL;
            qword_140388AA0 = 0LL;
            if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
            {
              if ( (int)MiInitializeKernelCfg() >= 0 )
              {
                RtlInitializeHistoryTable();
                qword_14038A4C0[0] = 0LL;
                MmConfigurePrefetchSeekThreshold(32);
                PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                MiEnablePagingTheExecutive();
                ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0);
                qword_140389190 = MiAllocateDummyPage();
                qword_140389198 = (qword_140389190 + 0x58000000000LL) / 48;
                v5 = MiReservePtes((__int64)&qword_140389360, 1uLL, qword_140389190 + 0x58000000000LL);
                MmBadPointer = (PVOID)v5;
                if ( v5 )
                {
                  MmBadPointer = (PVOID)((__int64)(v5 << 25) >> 16);
                  if ( (unsigned int)MiInitializeRelocations() )
                  {
                    MiInitializeTbFlushing();
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
