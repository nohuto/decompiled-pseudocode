/*
 * XREFs of MmUnlockPages @ 0x14010FB60
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 *     CcZeroDataInCache @ 0x1400988F4 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     ExUnlockUserBuffer @ 0x1400B9118 (ExUnlockUserBuffer.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14011FF30 (CcCopyBytesToUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x140138D4C (MiProbeAndLockComplete.c)
 *     MiGetWorkingSetInfo @ 0x140144490 (MiGetWorkingSetInfo.c)
 *     VslpUnlockPagesForTransfer @ 0x14015CF14 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     VslFinalizeSecureImageHash @ 0x14015EE80 (VslFinalizeSecureImageHash.c)
 *     CcLockSystemCacheBuffer @ 0x140220198 (CcLockSystemCacheBuffer.c)
 *     CcMdlWriteAbort @ 0x140220CC0 (CcMdlWriteAbort.c)
 *     VslValidateDynamicCodePages @ 0x140230AF0 (VslValidateDynamicCodePages.c)
 *     KiOpPatchCode @ 0x14024B784 (KiOpPatchCode.c)
 *     PspIumFreePartitionState @ 0x14028542C (PspIumFreePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x1402A90EC (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1402AB520 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1402AB5C0 (VmUnlockPages.c)
 *     ExpGetLookasideInformation @ 0x1402B73E0 (ExpGetLookasideInformation.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x14048AACC (WbMakeUserDataPagesKernelWritable.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     AlpcpInitializeCompletionList @ 0x14052DD94 (AlpcpInitializeCompletionList.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140539770 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_14053AB64 @ 0x14053AB64 (sub_14053AB64.c)
 *     CcMdlReadComplete2 @ 0x140573E28 (CcMdlReadComplete2.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 *     MmRotatePhysicalView @ 0x1405BACA0 (MmRotatePhysicalView.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1405F1F60 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlpFreeMdlChain @ 0x140715C14 (FsRtlpFreeMdlChain.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140716FD0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     VslCallEnclave @ 0x140717FA8 (VslCallEnclave.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     AlpcpFreeCompletionList @ 0x140748648 (AlpcpFreeCompletionList.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 *     MiAllocatePerSessionProtos @ 0x14075472C (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14077C7EC (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x14079BF90 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1407C7A20 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1407C7D2C (NtStartProfile.c)
 *     NtStopProfile @ 0x1407C7F8C (NtStopProfile.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1400A9BA0 (ExReleaseRundownProtectionCacheAware.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x140253C18 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x140253D5C (MiRetardMdl.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  PMDL v1; // rdi
  CSHORT MdlFlags; // bp
  unsigned __int64 v4; // r12
  int v5; // r15d
  struct _MDL *v6; // rsi
  int v7; // r8d
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  __int64 CurrentIrql; // r12
  unsigned __int64 Next; // rdx
  __int64 v12; // r11
  __int64 v13; // r13
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  volatile signed __int64 *v17; // r12
  __int64 v18; // r14
  char v19; // al
  __int64 v20; // r9
  __int64 v21; // r9
  __int16 v22; // dx
  bool v23; // zf
  __int16 v24; // dx
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  int v27; // ebp
  unsigned __int64 v28; // rdx
  char v29; // al
  int v30; // ecx
  __int64 v31; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v33; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v35; // eax
  __int64 v36; // rbx
  __int64 v37; // r14
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  int v40; // ebp
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  struct _KPRCB *v46; // r8
  __int64 v47; // rdx
  signed __int32 v48; // eax
  int v49; // [rsp+30h] [rbp-98h] BYREF
  __int64 v50; // [rsp+38h] [rbp-90h]
  PMDL v51; // [rsp+40h] [rbp-88h]
  __int64 v52; // [rsp+48h] [rbp-80h]
  struct _MDL *v53; // [rsp+50h] [rbp-78h]
  __int64 v54; // [rsp+58h] [rbp-70h]
  struct _EPROCESS *Process; // [rsp+68h] [rbp-60h]
  unsigned __int64 v56; // [rsp+70h] [rbp-58h]
  CSHORT v58; // [rsp+D8h] [rbp+10h]
  int v59; // [rsp+E0h] [rbp+18h]
  int v60; // [rsp+E8h] [rbp+20h] BYREF

  v1 = MemoryDescriptorList + 1;
  MdlFlags = MemoryDescriptorList->MdlFlags;
  Process = MemoryDescriptorList->Process;
  v58 = MdlFlags;
  v51 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v56 = v4;
  if ( (MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v5 = 1;
  v54 = 0LL;
  v59 = 1;
  v6 = (PMDL)((char *)v1 + 8 * v4);
  v50 = 0xFFFFFFFFFLL;
  v53 = v6;
  v7 = 1;
  v8 = 0xFFFFFFFFFLL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  __writecr8(2uLL);
  do
  {
    Next = (unsigned __int64)v1->Next;
    v12 = 0x200000000000000LL;
    if ( v1->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > qword_1403CB780
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next, 1LL);
      goto LABEL_90;
    }
    v13 = 48 * Next;
    v14 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v15 = *(_QWORD *)(v14 + 40);
      if ( ((v15 >> 54) & 7) != 1 && (v15 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL && v8 != (v15 & 0xFFFFFFFFFLL) )
      {
        if ( v8 != 0xFFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * v8 - 0x58000000000LL, v7);
          v15 = *(_QWORD *)(v14 + 40);
          v12 = 0x200000000000000LL;
        }
        v50 = v15 & 0xFFFFFFFFFLL;
        v59 = 2 - ((v15 & 0x200000000000000LL) != 0);
      }
    }
    v16 = 0LL;
    v17 = 0LL;
    v60 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v60);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
      v12 = 0x200000000000000LL;
    }
    v18 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v14 + 40) >> 40) & 0x3FFLL));
    v19 = *(_BYTE *)(v14 + 34);
    if ( (v19 & 0x20) != 0 && (v19 & 8) == 0 && (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v16 = *(_QWORD *)v14 - 32LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v16 + 256));
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( !v16 )
      {
        v20 = *(_QWORD *)(v14 + 16);
        if ( (v20 & 0x400) == 0 && (*(_BYTE *)(v14 + 34) & 8) == 0 )
        {
          if ( (v20 & 4) != 0 )
          {
            v9 = MI_READ_PTE_LOCK_FREE(v14 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
            *(_QWORD *)(v14 + 16) = v21 & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else
          {
            v9 = 0LL;
          }
        }
        *(_BYTE *)(v14 + 34) |= 0x10u;
      }
      if ( (v12 & *(_QWORD *)(v14 + 40)) != 0 && (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
        v17 = *(volatile signed __int64 **)MiGetPrototypePteDirect(*(_QWORD *)(v14 + 16));
    }
    v22 = *(_WORD *)(v14 + 32);
    if ( !v22 )
      MiBadRefCount(v14);
    v23 = v22 == 1;
    v24 = v22 - 1;
    *(_WORD *)(v14 + 32) = v24;
    if ( v23 && (unsigned int)MiIsPfnFileOnly(v14) )
    {
LABEL_82:
      MiPfnReferenceCountIsZero(v14, v13 / 48);
      goto LABEL_83;
    }
    v25 = *(_QWORD *)(v14 + 40);
    if ( (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( ((*(_QWORD *)(v14 + 40) >> 52) & 1) != 0 )
        goto LABEL_83;
    }
    else if ( ((*(_QWORD *)(v14 + 40) >> 52) & 1) != 0 )
    {
      goto LABEL_83;
    }
    v26 = *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        if ( !v26 )
        {
LABEL_51:
          if ( (*(_BYTE *)(v14 + 34) & 8) == 0 )
            goto LABEL_83;
        }
        v27 = 0;
        goto LABEL_54;
      }
      if ( v24 != 2 || !v26 )
        goto LABEL_83;
      goto LABEL_51;
    }
    v27 = 1;
LABEL_54:
    v28 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
    if ( v28 > 0xFFFFF6BFFFFFFF78uLL || v28 < 0xFFFFF68000000000uLL )
    {
      v29 = *(_BYTE *)(v14 + 35);
      if ( (v29 & 0x20) != 0 )
      {
        *(_BYTE *)(v14 + 35) = v29 & 0xDF;
        goto LABEL_81;
      }
    }
    v30 = 0;
    if ( (v25 & v12) != 0 && (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
    {
      v30 = 1;
    }
    else if ( v28 <= 0xFFFFF6BFFFFFFF78uLL && v28 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v14 + 35) & 0x20) != 0 )
    {
      v30 = 1;
    }
    else if ( v27 == 1 && (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0 )
    {
      v30 = 1;
    }
    v31 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v25 >> 40) & 0x3FF));
    if ( v30 == 1 )
      MiReturnCommit(v31, 1uLL);
    if ( (ULONG_PTR *)v31 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v33 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_79;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
      {
LABEL_76:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v33 = (int)CachedResidentAvailable - 192 + 1LL;
        }
LABEL_79:
        _InterlockedExchangeAdd64(&qword_1403CFB00, v33);
        goto LABEL_81;
      }
      while ( 1 )
      {
        v35 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable + 1,
                CachedResidentAvailable);
        v23 = (_DWORD)CachedResidentAvailable == v35;
        LODWORD(CachedResidentAvailable) = v35;
        if ( v23 )
          break;
        if ( v35 == -1 || (unsigned __int64)(v35 + 1LL) > 0x100 )
          goto LABEL_76;
      }
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 7104), 1uLL);
    }
LABEL_81:
    if ( v27 )
      goto LABEL_82;
LABEL_83:
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v9 )
    {
      MiReleasePageFileInfo((struct _KEVENT *)v18, v9, 1);
      v9 = 0LL;
    }
    if ( v17 )
      MiDereferenceControlAreaProbe(v17, 1);
    if ( (ULONG_PTR *)v18 != &MiSystemPartition )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v18 + 2064));
    LOBYTE(CurrentIrql) = v52;
    v6 = v53;
    MdlFlags = v58;
    v8 = v50;
    v1 = v51;
LABEL_90:
    v1 = (PMDL)((char *)v1 + 8);
    v51 = v1;
    if ( (++v54 & 0x3F) == 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      if ( v1 >= v6 )
      {
        v7 = v59;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        __writecr8((unsigned __int8)CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v52 = CurrentIrql;
      }
    }
    v7 = v59;
  }
  while ( v1 < v6 );
  if ( v8 != 0xFFFFFFFFFLL )
  {
    v36 = 48 * v8 - 0x58000000000LL;
    if ( 48 * v8 / 48 != 0xFFFFFFFFFLL )
    {
      v37 = 0LL;
      if ( v7 == 2 )
      {
        if ( (*(_BYTE *)(v36 + 34) & 7) != 6
          || (*(_QWORD *)(v36 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
          || (v38 = *(_QWORD *)(v36 + 8) | 0x8000000000000000uLL, v38 < 0xFFFFF68000000000uLL)
          || v38 > 0xFFFFF6FFFFFFFFFFuLL
          || (v39 = (__int64)(v38 << 25) >> 16, v39 < 0xFFFFF68000000000uLL)
          || v39 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v5 = 0;
        }
        v40 = 3;
        if ( v5 )
          goto LABEL_113;
        goto LABEL_146;
      }
      v40 = 1;
      if ( !v7 )
        v40 = 4;
LABEL_113:
      if ( (*(_QWORD *)(v36 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_146:
        KeBugCheckEx(
          0x1Au,
          0x41791uLL,
          v36,
          *(_QWORD *)(v36 + 8) | 0x8000000000000000uLL,
          *(_QWORD *)(v36 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v41 = 0LL;
      v42 = 0LL;
      while ( 1 )
      {
        v43 = *(_QWORD *)(v36 + 40) & 0xFFFFFFFFFLL;
        v49 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v49);
          while ( *(__int64 *)(v36 + 24) < 0 );
        }
        v44 = *(_QWORD *)(v36 + 24) ^ ((*(_QWORD *)(v36 + 24) - 0x10000LL) ^ *(_QWORD *)(v36 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v36 + 24) = v44;
        v45 = v44 & 0x3FFFFFFFFFFFFFFFLL;
        if ( v45 >= 0x10000 )
          break;
        if ( !v37 )
          v37 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v36 + 40) >> 40) & 0x3FFLL));
        ++v41;
        if ( !v45 && (unsigned int)MiPfnShareCountIsZero(v36, 0LL) != 3 )
          ++v42;
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !--v40 )
          goto LABEL_127;
        v36 = 48 * v43 - 0x58000000000LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_127:
      if ( v41 )
      {
        if ( (ULONG_PTR *)v37 == &MiSystemPartition )
        {
          v46 = KeGetCurrentPrcb();
          v47 = (int)v46->CachedResidentAvailable;
          if ( (_DWORD)v47 != -1 )
          {
            if ( v41 + v47 <= 0x100 )
            {
              do
              {
                if ( v41 >= 0x80000 )
                  break;
                v48 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v46->CachedResidentAvailable,
                        v41 + v47,
                        v47);
                v23 = (_DWORD)v47 == v48;
                LODWORD(v47) = v48;
                if ( v23 )
                  goto LABEL_140;
              }
              while ( v48 != -1 && v41 + v48 <= 0x100 );
            }
            if ( (int)v47 > 192
              && (_DWORD)v47 == _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&v46->CachedResidentAvailable,
                                  192,
                                  v47) )
            {
              v41 += (int)v47 - 192;
            }
          }
          _InterlockedExchangeAdd64(&qword_1403CFB00, v41);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 7104), v41);
        }
      }
LABEL_140:
      if ( v42 )
        MiReturnCommit(v37, v42);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v56);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
