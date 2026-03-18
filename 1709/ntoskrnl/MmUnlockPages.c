/*
 * XREFs of MmUnlockPages @ 0x140074480
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14000CC00 (MiGetWorkingSetInfo.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1401002BC (MiProbeAndLockComplete.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     VslpUnlockPagesForTransfer @ 0x140159CE0 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140159D24 (VslpLockPagesForTransfer.c)
 *     CcMdlWriteAbort @ 0x1401E20B0 (CcMdlWriteAbort.c)
 *     VslFinalizeSecureImageHash @ 0x1401F30F0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1401F35C0 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x14020D3F4 (KiOpPatchCode.c)
 *     PspIumFreePartitionState @ 0x14024F968 (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x140276010 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1402785E0 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x140278680 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1402834C0 (ExpGetLookasideInformation.c)
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14044AD7C (WbMakeUserDataPagesKernelWritable.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 *     CcMdlReadComplete2 @ 0x14053D7C4 (CcMdlReadComplete2.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140575C50 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1405763A4 @ 0x1405763A4 (sub_1405763A4.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405C93B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x1406B1134 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1406B2500 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x1406B3378 (VslCallEnclave.c)
 *     IopCleanupFileObjectIosbRange @ 0x1406B4B00 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     AlpcpFreeCompletionList @ 0x1406DD928 (AlpcpFreeCompletionList.c)
 *     AlpcpInitializeCompletionList @ 0x1406DD984 (AlpcpInitializeCompletionList.c)
 *     MiCopyPagesIntoEnclave @ 0x1406E7BD4 (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x1406E9B24 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x1406EAE50 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1407187FC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140738AC4 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140760720 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140760AE4 (NtStartProfile.c)
 *     NtStopProfile @ 0x140760D44 (NtStopProfile.c)
 * Callees:
 *     MiDereferenceControlAreaProbe @ 0x14001F474 (MiDereferenceControlAreaProbe.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x140215D30 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x140215E5C (MiRetardMdl.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  PMDL v1; // rdi
  CSHORT MdlFlags; // bp
  unsigned __int64 v4; // r12
  int v5; // r15d
  struct _MDL *v6; // r14
  int v7; // r8d
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  __int64 CurrentIrql; // r12
  unsigned __int64 Next; // rdx
  __int64 v12; // r11
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r12
  volatile signed __int64 *v19; // r14
  __int64 *v20; // r9
  __int64 v21; // r10
  __int64 PteShadow; // rbx
  __int64 v23; // rdx
  bool v24; // zf
  __int16 v25; // dx
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // ebp
  unsigned __int64 v29; // rdx
  char v30; // al
  int v31; // ecx
  __int64 v32; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v34; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v36; // eax
  __int64 v37; // rbx
  __int64 v38; // r14
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  int v41; // ebp
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r15
  __int64 v44; // rsi
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  struct _KPRCB *v47; // r8
  __int64 v48; // rdx
  signed __int32 v49; // eax
  int v50; // [rsp+30h] [rbp-98h] BYREF
  __int64 v51; // [rsp+38h] [rbp-90h]
  PMDL v52; // [rsp+40h] [rbp-88h]
  __int64 v53; // [rsp+48h] [rbp-80h]
  struct _MDL *v54; // [rsp+50h] [rbp-78h]
  __int64 v55; // [rsp+58h] [rbp-70h]
  struct _EPROCESS *Process; // [rsp+68h] [rbp-60h]
  unsigned __int64 v57; // [rsp+70h] [rbp-58h]
  CSHORT v59; // [rsp+D8h] [rbp+10h]
  int v60; // [rsp+E0h] [rbp+18h]
  int v61; // [rsp+E8h] [rbp+20h] BYREF

  v1 = MemoryDescriptorList + 1;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  Process = MemoryDescriptorList->Process;
  v59 = MdlFlags;
  v52 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v57 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v5 = 1;
  v55 = 0LL;
  v60 = 1;
  v6 = (PMDL)((char *)v1 + 8 * v4);
  v51 = 0xFFFFFFFFFLL;
  v54 = v6;
  v7 = 1;
  v8 = 0xFFFFFFFFFLL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  __writecr8(2uLL);
  do
  {
    Next = (unsigned __int64)v1->Next;
    v12 = 0x200000000000000LL;
    if ( v1->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > qword_1403885E0
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next, 1LL);
      goto LABEL_84;
    }
    v13 = 48 * Next;
    v14 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v15 = *(_QWORD *)(v14 + 40);
      if ( ((v15 >> 54) & 7) != 1 )
      {
        v16 = v15 & 0xFFFFFFFFFLL;
        if ( v16 != 0xFFFFFFFFDLL && v8 != v16 )
        {
          if ( v8 != 0xFFFFFFFFFLL )
          {
            MiUnlockPageTableCharges(48 * v8 - 0x58000000000LL);
            v12 = 0x200000000000000LL;
          }
          v17 = *(_QWORD *)(v14 + 40);
          v51 = v17 & 0xFFFFFFFFFLL;
          v60 = 2 - ((v17 & 0x200000000000000LL) != 0);
        }
      }
    }
    v18 = 0LL;
    v19 = 0LL;
    v61 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v61);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
      v12 = 0x200000000000000LL;
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      v20 = (__int64 *)(v14 + 16);
      if ( (*(_DWORD *)(v14 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v14 + 34) & 8) == 0 )
      {
        v21 = *v20;
        if ( (*v20 & 4) != 0 )
        {
          PteShadow = *v20;
          if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v14 + 16, v21);
          *v20 = v21 & 0xFFFFFFFFFFFFFFFBuLL;
          v9 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
          v18 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL));
      }
      *(_BYTE *)(v14 + 34) |= 0x10u;
      if ( (v12 & *(_QWORD *)(v14 + 40)) != 0 && (*(_DWORD *)v20 & 0x400LL) != 0 )
        v19 = *(volatile signed __int64 **)MiGetPrototypePteDirect(*v20);
    }
    v23 = *(unsigned __int16 *)(v14 + 32);
    if ( !(_WORD)v23 )
      MiBadRefCount(v13 - 0x58000000000LL, v23);
    v24 = (_WORD)v23 == 1;
    v25 = v23 - 1;
    *(_WORD *)(v14 + 32) = v25;
    if ( v24 && (unsigned int)MiIsPfnFileOnly(v13 - 0x58000000000LL) )
    {
LABEL_78:
      MiPfnReferenceCountIsZero(v13 - 0x58000000000LL, v13 / 48);
      goto LABEL_79;
    }
    v26 = *(_QWORD *)(v14 + 40);
    if ( (v26 & 0x10000000000000LL) == 0 )
    {
      v27 = *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v25 )
      {
        if ( v25 != 1 )
        {
          if ( v25 != 2 || !v27 )
            goto LABEL_79;
          goto LABEL_47;
        }
        if ( !v27 )
        {
LABEL_47:
          if ( (*(_BYTE *)(v14 + 34) & 8) == 0 )
            goto LABEL_79;
        }
        v28 = 0;
      }
      else
      {
        v28 = 1;
      }
      v29 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
      if ( v29 > 0xFFFFF6BFFFFFFF78uLL || v29 < 0xFFFFF68000000000uLL )
      {
        v30 = *(_BYTE *)(v14 + 35);
        if ( (v30 & 0x20) != 0 )
        {
          *(_BYTE *)(v14 + 35) = v30 & 0xDF;
          goto LABEL_77;
        }
      }
      v31 = 0;
      if ( (v26 & v12) != 0 && (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
      {
        v31 = 1;
      }
      else if ( v29 <= 0xFFFFF6BFFFFFFF78uLL && v29 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v14 + 35) & 0x20) != 0 )
      {
        v31 = 1;
      }
      else if ( v28 == 1 && (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0 )
      {
        v31 = 1;
      }
      v32 = *(_QWORD *)(qword_140388AF0 + 8 * ((v26 >> 40) & 0x3FF));
      if ( v31 == 1 )
        MiReturnCommit(v32, 1uLL);
      if ( (ULONG_PTR *)v32 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v34 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v36 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v24 = (_DWORD)CachedResidentAvailable == v36;
              LODWORD(CachedResidentAvailable) = v36;
              if ( v24 )
                break;
              if ( v36 == -1 || (unsigned __int64)(v36 + 1LL) > 0x100 )
                goto LABEL_72;
            }
LABEL_77:
            if ( v28 )
              goto LABEL_78;
            goto LABEL_79;
          }
LABEL_72:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v34 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_14038B840, v34);
        goto LABEL_77;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 6016), 1uLL);
      goto LABEL_77;
    }
LABEL_79:
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 )
    {
      MiReleasePageFileInfo(v18, v9, 1LL);
      v9 = 0LL;
    }
    if ( v19 )
      MiDereferenceControlAreaProbe(v19, 1);
    LOBYTE(CurrentIrql) = v53;
    v6 = v54;
    MdlFlags = v59;
    v8 = v51;
    v1 = v52;
LABEL_84:
    v1 = (PMDL)((char *)v1 + 8);
    v52 = v1;
    if ( (++v55 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v1 >= v6 )
      {
        v7 = v60;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        __writecr8((unsigned __int8)CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v53 = CurrentIrql;
      }
    }
    v7 = v60;
  }
  while ( v1 < v6 );
  if ( v8 != 0xFFFFFFFFFLL )
  {
    v37 = 48 * v8 - 0x58000000000LL;
    if ( 48 * v8 / 48 != 0xFFFFFFFFFLL )
    {
      v38 = 0LL;
      if ( v7 == 2 )
      {
        if ( (*(_BYTE *)(v37 + 34) & 7) != 6
          || (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
          || (v39 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL, v39 < 0xFFFFF68000000000uLL)
          || v39 > 0xFFFFF6FFFFFFFFFFuLL
          || (v40 = (__int64)(v39 << 25) >> 16, v40 < 0xFFFFF68000000000uLL)
          || v40 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v5 = 0;
        }
        v41 = 3;
        if ( !v5 )
LABEL_140:
          KeBugCheckEx(
            0x1Au,
            0x41791uLL,
            48 * v8 - 0x58000000000LL,
            *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL,
            *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      }
      else
      {
        v41 = 1;
        if ( !v7 )
          v41 = 4;
      }
      if ( (*(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
        goto LABEL_140;
      v42 = 0LL;
      v43 = 0LL;
      while ( 1 )
      {
        v44 = *(_QWORD *)(v37 + 40) & 0xFFFFFFFFFLL;
        v50 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v50);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        v45 = *(_QWORD *)(v37 + 24) ^ (*(_QWORD *)(v37 + 24) ^ (*(_QWORD *)(v37 + 24) - 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v37 + 24) = v45;
        v46 = v45 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v46 >= 0x10000 )
          break;
        if ( !v38 )
          v38 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v37 + 40) >> 40) & 0x3FFLL));
        ++v42;
        if ( !v46 && (unsigned int)MiPfnShareCountIsZero(v37, 0LL) != 3 )
          ++v43;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v41 )
          goto LABEL_121;
        v37 = 48 * v44 - 0x58000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_121:
      if ( v42 )
      {
        if ( (ULONG_PTR *)v38 == &MiSystemPartition )
        {
          v47 = KeGetCurrentPrcb();
          v48 = (int)v47->CachedResidentAvailable;
          if ( (_DWORD)v48 != -1 )
          {
            if ( v42 + v48 <= 0x100 )
            {
              do
              {
                if ( v42 >= 0x80000 )
                  break;
                v49 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v47->CachedResidentAvailable,
                        v42 + v48,
                        v48);
                v24 = (_DWORD)v48 == v49;
                LODWORD(v48) = v49;
                if ( v24 )
                  goto LABEL_134;
              }
              while ( v49 != -1 && v42 + v49 <= 0x100 );
            }
            if ( (int)v48 > 192
              && (_DWORD)v48 == _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v47->CachedResidentAvailable,
                                  192,
                                  v48) )
            {
              v42 += (int)v48 - 192;
            }
          }
          _InterlockedExchangeAdd64(&qword_14038B840, v42);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v38 + 6016), v42);
        }
      }
LABEL_134:
      if ( v43 )
        MiReturnCommit(v38, v43);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v57);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
