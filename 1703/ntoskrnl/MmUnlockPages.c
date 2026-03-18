/*
 * XREFs of MmUnlockPages @ 0x1400A1940
 * Callers:
 *     MiProbeAndLockComplete @ 0x1400268F8 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140036100 (CcMdlWriteComplete2.c)
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     CcMdlWriteAbort @ 0x1401DE3F0 (CcMdlWriteAbort.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 *     KiOpPatchCode @ 0x140206A50 (KiOpPatchCode.c)
 *     SmPrepareForFatalPageError @ 0x14024F9EC (SmPrepareForFatalPageError.c)
 *     ExpGetLookasideInformation @ 0x1402598CC (ExpGetLookasideInformation.c)
 *     VslFinalizeSecureImageHash @ 0x14026A1D0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x14026A750 (VslValidateDynamicCodePages.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14043EF34 (WbMakeUserExecutablePagesKernelWritable.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     CcMdlReadComplete2 @ 0x140543FDC (CcMdlReadComplete2.c)
 *     sub_140547D68 @ 0x140547D68 (sub_140547D68.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1405493C8 (WbMakeUserDataPagesKernelWritable.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x14055CBF0 (MmRotatePhysicalView.c)
 *     AlpcpInitializeCompletionList @ 0x14056B364 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14056C968 (AlpcpFreeCompletionList.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x1405C25B4 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     FsRtlpFreeMdlChain @ 0x140685D14 (FsRtlpFreeMdlChain.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140687044 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x1406BAD94 (MiCopyPagesIntoEnclave.c)
 *     MiAllocatePerSessionProtos @ 0x1406BDAA4 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140700C58 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1407208B0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     NtStopProfile @ 0x140720E4C (NtStopProfile.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiDereferenceControlAreaProbe @ 0x140118FA8 (MiDereferenceControlAreaProbe.c)
 *     MiZeroAndFlushPtes @ 0x140123AB4 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140130E08 (MiUnmapLockedPagesInUserSpace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x14020E5B4 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x14020E700 (MiRetardMdl.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemovePteTracker @ 0x140225B70 (MiRemovePteTracker.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // r15
  PMDL v2; // rdi
  struct _EPROCESS *Process; // rax
  unsigned __int64 v5; // rsi
  char *MappedSystemVa; // rbx
  int v7; // ecx
  char *v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // r10d
  char v12; // al
  unsigned __int64 v13; // r9
  int v14; // r11d
  struct _MDL *v15; // rbp
  int v16; // r14d
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 CurrentPrcb; // r8
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 Next; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // r13
  unsigned __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // r15
  __int64 v31; // r11
  __int64 v32; // r10
  __int64 v33; // rdx
  bool v34; // zf
  __int16 v35; // dx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r9
  __int64 v38; // rax
  int v39; // ebp
  unsigned __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rdx
  signed __int32 v44; // eax
  __int64 v45; // rbx
  __int64 v46; // rbp
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  int v49; // r12d
  unsigned __int64 v50; // rdi
  __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rdx
  unsigned __int64 v54; // rdx
  struct _KPRCB *v55; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v57; // eax
  CSHORT v58; // [rsp+30h] [rbp-A8h]
  unsigned int v59; // [rsp+34h] [rbp-A4h]
  PMDL v60; // [rsp+40h] [rbp-98h]
  unsigned __int8 v61; // [rsp+48h] [rbp-90h]
  int v62; // [rsp+50h] [rbp-88h] BYREF
  int v63; // [rsp+54h] [rbp-84h] BYREF
  __int64 v64; // [rsp+58h] [rbp-80h]
  struct _MDL *v65; // [rsp+60h] [rbp-78h]
  __int64 v66; // [rsp+68h] [rbp-70h]
  unsigned __int64 v67; // [rsp+70h] [rbp-68h]
  struct _EPROCESS *v68; // [rsp+78h] [rbp-60h]
  PMDL v69; // [rsp+80h] [rbp-58h]
  unsigned __int64 v70; // [rsp+88h] [rbp-50h]
  unsigned __int64 v71; // [rsp+90h] [rbp-48h]
  __int64 v72; // [rsp+98h] [rbp-40h]

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  v69 = MemoryDescriptorList;
  v68 = Process;
  v58 = MdlFlags;
  v60 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v5 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v67 = v5;
  if ( (MdlFlags & 1) != 0 )
  {
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
    v7 = 0;
    if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
      v7 = MiRetardMdl(MemoryDescriptorList);
    if ( (unsigned __int64)MappedSystemVa > 0x7FFFFFFEFFFFLL )
    {
      v8 = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
      v9 = (unsigned __int64)&MappedSystemVa[-v7];
      v10 = (((LOWORD(MemoryDescriptorList->StartVa) + (unsigned __int16)MemoryDescriptorList->ByteOffset) & 0xFFF)
           + (unsigned __int64)MemoryDescriptorList->ByteCount
           + 4095) >> 12;
      MemoryDescriptorList->MdlFlags &= 0xFFDEu;
      if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
        MemoryDescriptorList->MappedSystemVa = v8;
      v70 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v71 = ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = 3;
      v72 = ((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v12 = MI_READ_PTE_LOCK_FREE(*(&v70 + (unsigned int)(v11 - 1)));
        if ( (v12 & 1) == 0 )
          break;
        if ( v12 < 0 )
        {
          for ( ; v14; --v14 )
            v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          break;
        }
      }
      while ( v11 );
      if ( (MI_READ_PTE_LOCK_FREE(v13) & 0x200) != 0 )
        MiZeroAndFlushPtes(v9, v10);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v10) = v10 + 1;
      if ( (dword_1403E310C & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
      MiReleasePtes(&qword_14036D0A0, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v10);
      v2 = v60;
      v5 = v67;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace(MappedSystemVa, MemoryDescriptorList, 0xFFFFF68000000000uLL);
    }
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v15 = (PMDL)((char *)v2 + 8 * v5);
  v66 = 0LL;
  v16 = 1;
  v65 = v15;
  v17 = 0xFFFFFFFFFLL;
  v59 = 1;
  v64 = 0xFFFFFFFFFLL;
  v18 = 0LL;
  CurrentPrcb = 1LL;
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  do
  {
    Next = (unsigned __int64)v2->Next;
    v22 = 0xFFFFFA8000000028uLL;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > qword_14036C290
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next, 1LL, 0xFFFFFA8000000028uLL);
      goto LABEL_100;
    }
    v23 = 3 * Next;
    v24 = 0xFFFFFA8000000000uLL;
    v25 = 16 * v23;
    v26 = v25 - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v27 = *(_QWORD *)(v26 + 40);
      if ( ((v27 >> 54) & 7) != 1 )
      {
        v28 = v27 & 0xFFFFFFFFFLL;
        if ( v28 != 0xFFFFFFFFDLL && v17 != v28 )
        {
          if ( v17 != 0xFFFFFFFFFLL )
            MiUnlockPageTableCharges(48 * v17 - 0x58000000000LL, CurrentPrcb);
          CurrentPrcb = 2 - (unsigned int)((*(_QWORD *)(v26 + 40) & 0x200000000000000LL) != 0);
          v59 = 2 - ((*(_QWORD *)(v26 + 40) & 0x200000000000000LL) != 0);
          v64 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
        }
      }
    }
    v29 = 0LL;
    v30 = 0LL;
    v62 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v62);
        while ( (*(_QWORD *)(v26 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
      v16 = 1;
    }
    v31 = qword_14036C8F8;
    if ( (v58 & 0x80u) != 0 )
    {
      if ( (*(_DWORD *)(v26 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v26 + 34) & 8) == 0 )
      {
        if ( (*(_QWORD *)(v26 + 16) & 4) != 0 )
        {
          v18 = MI_READ_PTE_LOCK_FREE(v26 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
          *(_QWORD *)(v26 + 16) = v32 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          v18 = 0LL;
        }
        if ( v18 )
          v29 = *(_QWORD *)(v31 + 8 * ((*(_QWORD *)(v26 + 40) >> 40) & 0x3FFLL));
      }
      *(_BYTE *)(v26 + 34) |= 0x10u;
      if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v26 + 16) & 0x400LL) != 0 )
        v30 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v26 + 16), v24, CurrentPrcb, v22);
    }
    v33 = *(unsigned __int16 *)(v26 + 32);
    if ( !(_WORD)v33 )
      MiBadRefCount(v25 - 0x58000000000LL, v33, CurrentPrcb, v22);
    v34 = (_WORD)v33 == 1;
    v35 = v33 - 1;
    *(_WORD *)(v26 + 32) = v35;
    if ( v34 && (unsigned int)MiIsPfnFileOnly(v25 - 0x58000000000LL) )
    {
LABEL_94:
      MiPfnReferenceCountIsZero(v25 - 0x58000000000LL, v25 / 48, CurrentPrcb);
      goto LABEL_95;
    }
    v36 = *(_QWORD *)(v26 + 40);
    v37 = (*(_QWORD *)(v26 + 24) >> 62) & 1LL;
    if ( (v36 & 0x10000000000000LL) == 0 )
    {
      v38 = *(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v35 )
      {
        if ( v35 != 1 )
        {
          if ( v35 != 2 || !v38 )
            goto LABEL_95;
          goto LABEL_63;
        }
        if ( !v38 )
        {
LABEL_63:
          if ( (*(_BYTE *)(v26 + 34) & 8) == 0 )
            goto LABEL_95;
        }
        v39 = 0;
      }
      else
      {
        v39 = 1;
      }
      CurrentPrcb = 0xFFFFF6BFFFFFFF78uLL;
      v40 = *(_QWORD *)(v26 + 8) | 0x8000000000000000uLL;
      if ( (v40 > 0xFFFFF6BFFFFFFF78uLL || v40 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(v26 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v26 + 35) &= ~0x20u;
        goto LABEL_93;
      }
      v41 = 0;
      if ( (v36 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v26 + 16) & 0x400LL) != 0 )
      {
        v41 = 1;
      }
      else if ( v40 <= 0xFFFFF6BFFFFFFF78uLL
             && v40 >= 0xFFFFF68000000000uLL
             && ((*(unsigned __int8 *)(v26 + 35) >> 5) & 1) != 0 )
      {
        v41 = 1;
      }
      else if ( v39 == 1 && (_DWORD)v37 )
      {
        v41 = 1;
      }
      v42 = *(_QWORD *)(v31 + 8 * ((v36 >> 40) & 0x3FF));
      if ( v41 == 1 )
        MiReturnCommit(v42, 1LL);
      if ( (ULONG_PTR *)v42 == &MiSystemPartition )
      {
        CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
        v37 = 1LL;
        v43 = *(int *)(CurrentPrcb + 24764);
        if ( (_DWORD)v43 != -1 )
        {
          if ( (unsigned __int64)(v43 + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v44 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24764), v43 + 1, v43);
              v34 = (_DWORD)v43 == v44;
              LODWORD(v43) = v44;
              if ( v34 )
                break;
              if ( v44 == -1 || (unsigned __int64)(v44 + 1LL) > 0x100 )
                goto LABEL_88;
            }
LABEL_93:
            if ( v39 )
              goto LABEL_94;
            goto LABEL_95;
          }
LABEL_88:
          if ( (int)v43 > 192
            && (_DWORD)v43 == _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24764), 192, v43) )
          {
            v37 = (int)v43 - 192 + 1LL;
          }
        }
        v37 = _InterlockedExchangeAdd64(&qword_1403818C0, v37);
        goto LABEL_93;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v42 + 5824), 1uLL);
      goto LABEL_93;
    }
LABEL_95:
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v18 )
    {
      MiReleasePageFileInfo(v29, v18, 1LL);
      v18 = 0LL;
    }
    if ( v30 )
      MiDereferenceControlAreaProbe(v30, 1LL, CurrentPrcb, v37);
    CurrentIrql = v61;
    MdlFlags = v58;
    v15 = v65;
    v2 = v60;
    v17 = v64;
LABEL_100:
    v2 = (PMDL)((char *)v2 + 8);
    v60 = v2;
    if ( (++v66 & 0x3F) == 0 && CurrentIrql < 2u )
    {
      if ( v2 >= v15 )
      {
        LODWORD(CurrentPrcb) = v59;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v61 = CurrentIrql;
      }
    }
    CurrentPrcb = v59;
  }
  while ( v2 < v15 );
  if ( v17 != 0xFFFFFFFFFLL )
  {
    v45 = 48 * v17 - 0x58000000000LL;
    if ( 48 * v17 / 48 != 0xFFFFFFFFFLL )
    {
      v46 = 0LL;
      if ( (_DWORD)CurrentPrcb == 2 )
      {
        if ( (*(_BYTE *)(v45 + 34) & 7) != 6
          || (*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
          || (v47 = *(_QWORD *)(v45 + 8) | 0x8000000000000000uLL, v47 < 0xFFFFF68000000000uLL)
          || v47 > 0xFFFFF6FFFFFFFFFFuLL
          || (v48 = (__int64)(v47 << 25) >> 16, v48 < 0xFFFFF68000000000uLL)
          || v48 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v16 = 0;
        }
        if ( v16 )
        {
          v49 = 3;
          goto LABEL_123;
        }
        goto LABEL_157;
      }
      v49 = 1;
      if ( !(_DWORD)CurrentPrcb )
        v49 = 4;
LABEL_123:
      if ( (*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_157:
        KeBugCheckEx(
          0x1Au,
          0x41791uLL,
          48 * v17 - 0x58000000000LL,
          *(_QWORD *)(v45 + 8) | 0x8000000000000000uLL,
          *(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v50 = 0LL;
      v51 = 0LL;
      while ( 1 )
      {
        v52 = *(_QWORD *)(v45 + 40) & 0xFFFFFFFFFLL;
        v63 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v63);
            while ( (*(_QWORD *)(v45 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) );
          CurrentIrql = v61;
        }
        v53 = *(_QWORD *)(v45 + 24) ^ (((*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000) ^ *(_QWORD *)(v45 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v45 + 24) = v53;
        v54 = v53 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v54 >= 0x10000 )
          break;
        if ( !v46 )
          v46 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v45 + 40) >> 40) & 0x3FFLL));
        ++v50;
        if ( !v54 && (unsigned int)MiPfnShareCountIsZero(v45) != 3 )
          ++v51;
        _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v49 )
          goto LABEL_138;
        v45 = 48 * v52 - 0x58000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_138:
      if ( v50 )
      {
        if ( (ULONG_PTR *)v46 == &MiSystemPartition )
        {
          v55 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v55->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( v50 + CachedResidentAvailable <= 0x100 )
            {
              do
              {
                if ( v50 >= 0x80000 )
                  break;
                v57 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v55->CachedResidentAvailable,
                        v50 + CachedResidentAvailable,
                        CachedResidentAvailable);
                v34 = (_DWORD)CachedResidentAvailable == v57;
                LODWORD(CachedResidentAvailable) = v57;
                if ( v34 )
                  goto LABEL_151;
              }
              while ( v57 != -1 && v50 + v57 <= 0x100 );
            }
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v55->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v50 += (int)CachedResidentAvailable - 192;
            }
          }
          _InterlockedExchangeAdd64(&qword_1403818C0, v50);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 5824), v50);
        }
      }
LABEL_151:
      if ( v51 )
        MiReturnCommit(v46, v51);
    }
  }
  __writecr8(CurrentIrql);
  if ( v68 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v68->NumberOfLockedPages, -(__int64)v67);
  v69->MdlFlags &= 0xF6FDu;
}
