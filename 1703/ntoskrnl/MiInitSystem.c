/*
 * XREFs of MiInitSystem @ 0x1408032EC
 * Callers:
 *     MmInitSystem @ 0x140803254 (MmInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     PsSetPagePriorityThread @ 0x140044894 (PsSetPagePriorityThread.c)
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiStoreChargeReservedPages @ 0x140154858 (MiStoreChargeReservedPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140166550 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KdSetDbgPrintBufferSize @ 0x1401FBF90 (KdSetDbgPrintBufferSize.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x14045EF9C (MmConfigurePrefetchSeekThreshold.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 *     MiInitializeSystemSpaceMap @ 0x14057E4D0 (MiInitializeSystemSpaceMap.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 *     MiWriteProtectSystemImages @ 0x1405A2234 (MiWriteProtectSystemImages.c)
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 *     MiInitializeSessionIds @ 0x1407FF8DC (MiInitializeSessionIds.c)
 *     MiInitializePartitions @ 0x1407FFA0C (MiInitializePartitions.c)
 *     MiAllocateDummyPage @ 0x14080276C (MiAllocateDummyPage.c)
 *     MiInitializeRelocations @ 0x140802B04 (MiInitializeRelocations.c)
 *     MiInitializeTbFlushing @ 0x140802C7C (MiInitializeTbFlushing.c)
 *     MiMapBBTMemory @ 0x14080308C (MiMapBBTMemory.c)
 *     MiAddLoaderHalIoMappings @ 0x14080384C (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1408039CC (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x140803A48 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140803AD0 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x140803BB0 (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 *     MiComputeOptimalZeroPath @ 0x1408043E0 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 *     MiCreateEnclaveRegions @ 0x14080480C (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x140804A04 (MiInitializeCfg.c)
 *     MiSectionInitialization @ 0x140804AC4 (MiSectionInitialization.c)
 *     MiInitializeDriverImages @ 0x140814868 (MiInitializeDriverImages.c)
 *     MiInitializeLoadedModuleList @ 0x140818184 (MiInitializeLoadedModuleList.c)
 *     PsInitializeQuotaSystem @ 0x14081FDD4 (PsInitializeQuotaSystem.c)
 *     RtlInitializeHistoryTable @ 0x140820C2C (RtlInitializeHistoryTable.c)
 *     MiInitializeBootProcess @ 0x1408244AC (MiInitializeBootProcess.c)
 *     MiInitializeKernelCfg @ 0x14082694C (MiInitializeKernelCfg.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  ULONG_PTR v6; // rax
  _KPROCESS *Process; // rdx
  _QWORD *PoolWithTag; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  int v14; // eax
  int v15; // ebx
  PKSTART_ROUTINE *i; // r15
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-30h] BYREF

  v18[0] = KeBalanceSetManager;
  v18[1] = KeSwapProcessOrStack;
  v18[2] = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(48 * (Process->DirectoryTableBase >> 12) - 0x58000000000LL) = Process;
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiMapBBTMemory(a2);
      if ( (unsigned int)MiSectionInitialization() && (int)MiInitializeCfg() >= 0 )
      {
        if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_14036C708 = 0LL;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20206D4Du);
          if ( PoolWithTag )
          {
            v10 = MI_GET_PAGE_FRAME_FROM_PTE(0xFFFFF6FBC0000000uLL);
            *PoolWithTag = MiMakeValidPte(v11, v10, 536870913);
            if ( MiPteInShadowRange((unsigned __int64)PoolWithTag) )
              MiWritePteShadow();
            qword_14036C1A8 = (__int64)PoolWithTag;
            v12 = 48 * v10 - 0x58000000000LL;
            MiLockPageInline(v12);
            *(_QWORD *)(v12 + 16) = MiMakeDemandZeroPte(4);
            *(_QWORD *)(v12 + 40) |= 0x200000000000000uLL;
            *(_QWORD *)(v12 + 8) = PoolWithTag;
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v13);
            qword_14036D048 = (__int64)&qword_14036D040;
            qword_14036D040 = (__int64)&qword_14036D040;
            MiInitializeSessionIds();
            if ( MiInitializePartitions(1) )
            {
              MiInitializeCacheFlushing();
              MiComputeOptimalZeroPath();
              if ( MiInitializeMemoryEvents(&MiSystemPartition) )
              {
                if ( (unsigned int)MiStoreChargeReservedPages() )
                {
                  v14 = dword_1403E3124;
                  if ( (unsigned int)dword_1403E3124 <= 0x40 )
                  {
                    if ( !dword_1403E3124 )
                      v14 = 1;
                  }
                  else
                  {
                    v14 = 64;
                  }
                  dword_1403E3124 = v14 << 8;
                  if ( (dword_1403E3114 & 0xFFFFFFFE) != 0 )
                    dword_1403E3114 = 0;
                  v15 = 0;
                  for ( i = (PKSTART_ROUTINE *)v18;
                        PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, &MiSystemPartition) >= 0;
                        ++i )
                  {
                    ObCloseHandle(ThreadHandle, 0);
                    if ( (unsigned int)++v15 >= 3 )
                    {
                      if ( !(unsigned int)MiInitializeMirroring() )
                        return 0;
                      qword_14036C160 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_14036CF88);
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
          byte_14036CA3D = 32;
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_14033CBD0, 0LL, 0LL);
      qword_14036CFD8 = &stru_14033CBD0;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_14036C288 = (unsigned int)dword_14036C1E4 / 0x30uLL;
    qword_14036C980 = MiReservePtes((__int64)&qword_14036D0A0, 0x20uLL, a3);
    _InterlockedIncrement(&dword_14036CF88);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)&MiSystemPartition) )
    {
      if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
      {
        dword_14036C188 = 305419896;
        if ( (int)MiInitializeBootProcess() >= 0 )
        {
          KeFlushCurrentTbOnly(3);
          MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
          MiAddLoaderHalIoMappings(qword_14036D8C0, qword_14036D8C0 + 0x8000000000LL);
          if ( (_DWORD)KdPrintBufferAllocateSize )
            KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
          if ( (unsigned int)MiInitializeDriverImages(a2) )
          {
            v5 = qword_1403817D0;
            if ( qword_1403817D0 > 0xFFFFFFFF )
              v5 = -1;
            MEMORY[0xFFFFF780000002E8] = v5;
            MEMORY[0xFFFFF78000000244] = 0;
            MiInitializeSystemSpaceMap((__int64)&unk_14036C0F8, v4);
            qword_14036BF58 = 0LL;
            qword_14036C8A8 = 0LL;
            if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
            {
              if ( (int)MiInitializeKernelCfg() >= 0 )
              {
                RtlInitializeHistoryTable();
                qword_140380630[0] = 0LL;
                MmConfigurePrefetchSeekThreshold(32);
                PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                MiEnablePagingTheExecutive();
                ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                if ( dword_1403E3120 )
                {
                  if ( (unsigned int)dword_1403E3120 >= 5 )
                  {
                    if ( (unsigned int)dword_1403E3120 > 0x64 )
                      dword_1403E3120 = 100;
                  }
                  else
                  {
                    dword_1403E3120 = 5;
                  }
                }
                else
                {
                  dword_1403E3120 = 80;
                }
                qword_14036CED0 = MiAllocateDummyPage();
                qword_14036CED8 = (qword_14036CED0 + 0x58000000000LL) / 48;
                v6 = MiReservePtes((__int64)&qword_14036D0A0, 1uLL, qword_14036CED0 + 0x58000000000LL);
                MmBadPointer = (PVOID)v6;
                if ( v6 )
                {
                  MmBadPointer = (PVOID)((__int64)(v6 << 25) >> 16);
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
