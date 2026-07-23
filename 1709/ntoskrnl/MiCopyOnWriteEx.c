/*
 * XREFs of MiCopyOnWriteEx @ 0x140059760
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiValidFault @ 0x14003E340 (MiValidFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x1402193DC (MmReplaceImportEntry.c)
 *     MiValidVirtualizationFault @ 0x140228F84 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiUnlockPageTableCharges @ 0x14010CA64 (MiUnlockPageTableCharges.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiWaitForForkToComplete @ 0x14023027C (MiWaitForForkToComplete.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyOnWriteEx(unsigned __int64 a1, __int64 *a2, __int64 Page, unsigned __int8 a4, char a5)
{
  __int64 PteShadow; // r9
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // r11
  __int64 v10; // rsi
  int v11; // r10d
  __int64 v12; // r8
  BOOL v13; // edx
  _KPROCESS *Process; // r13
  int v15; // eax
  int v16; // r15d
  unsigned int v17; // edi
  unsigned __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rax
  ULONG_PTR v23; // r9
  int v24; // edx
  __int64 v25; // r8
  bool v27; // zf
  __int64 v28; // rdx
  __int64 Address; // rax
  unsigned int v30; // ecx
  unsigned int v31; // r13d
  volatile signed __int64 *v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // cl
  char v35; // r15
  int v36; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int16 NodeShiftedColor; // r10
  __int16 v39; // r8
  unsigned int *v40; // rdx
  LONG *v41; // rcx
  LONG *SharedVm; // rbx
  __int64 v43; // rcx
  int v44; // edx
  unsigned __int64 v45; // r13
  __int64 v46; // rax
  int v47; // ebx
  int v48; // r11d
  unsigned int v49; // eax
  __int64 v50; // rbx
  __int16 v51; // r11
  __int64 v52; // rax
  unsigned __int64 v53; // r10
  unsigned __int8 v54; // al
  signed __int64 v55; // rdx
  unsigned __int64 v56; // r8
  signed __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // r11d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // r15d
  unsigned int v62; // r15d
  int v63; // eax
  __int64 v64; // rdx
  unsigned __int64 v65; // rax
  unsigned int v66; // r14d
  __int64 v67; // r8
  __int64 v68; // r9
  bool v69; // cf
  __int64 v70; // r15
  unsigned __int64 v71; // rbx
  __int64 v72; // rbx
  _KPROCESS *v73; // rdx
  _KPROCESS *v74; // rdx
  _KPROCESS *v75; // r13
  char v76; // al
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // r9
  _QWORD *v80; // rcx
  int v81; // [rsp+30h] [rbp-D0h]
  unsigned int v82; // [rsp+34h] [rbp-CCh]
  __int64 AnyMultiplexedVm; // [rsp+38h] [rbp-C8h]
  __int64 v85; // [rsp+50h] [rbp-B0h] BYREF
  int v86; // [rsp+58h] [rbp-A8h] BYREF
  int v87; // [rsp+5Ch] [rbp-A4h]
  int v88; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v89; // [rsp+68h] [rbp-98h]
  unsigned __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  _KPROCESS *v92; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-50h]
  _QWORD v97[3]; // [rsp+B8h] [rbp-48h] BYREF
  int v98; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v99; // [rsp+D4h] [rbp-2Ch]
  __int64 v100; // [rsp+D8h] [rbp-28h]
  __int64 v101; // [rsp+E0h] [rbp-20h]
  __int64 v102; // [rsp+E8h] [rbp-18h]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  PteShadow = *a2;
  v90 = a1;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, PteShadow);
  v85 = PteShadow;
  v94 = MI_GET_PAGE_FRAME_FROM_PTE(&v85);
  v10 = 48 * v94 - 0x58000000000LL;
  v89 = 0LL;
  v11 = 0;
  v12 = *(_QWORD *)(v10 + 8);
  BugCheckParameter3 = v12 | 0x8000000000000000uLL;
  v13 = (v8 & 0x200) == 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v92 = Process;
  if ( v9 >= 0xFFFF800000000000uLL )
  {
    v15 = (unsigned __int8)byte_1403899D0[((v9 >> 39) & 0x1FF) - 256];
    if ( v15 == 1 )
    {
      v16 = 2;
      v81 = 2;
      v17 = v13 | 2;
      v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      AnyMultiplexedVm = v18;
      if ( v12 < 0 )
        v17 = v13;
      goto LABEL_40;
    }
    if ( v15 == 12 )
      goto LABEL_15;
  }
  if ( PsNtosImageBase
    && (v9 >= (unsigned __int64)PsNtosImageBase && v9 < PsNtosImageEnd
     || v9 >= (unsigned __int64)PsHalImageBase && v9 < PsHalImageEnd) )
  {
LABEL_15:
    v16 = 0;
    v81 = 0;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
    v18 = AnyMultiplexedVm;
    v17 = v19;
    if ( v20 >= 0 )
      v17 = v19 | 2;
    goto LABEL_40;
  }
  if ( v9 >= 0xFFFF800000000000uLL )
  {
    v21 = (unsigned __int8)byte_1403899D0[((v9 >> 39) & 0x1FF) - 256];
    switch ( v21 )
    {
      case 9:
      case 15:
        KeBugCheckEx(0x1Au, 0x3300uLL, v9, v8, 2uLL);
      case 6:
        v81 = 0;
        v22 = MiGetAnyMultiplexedVm(2LL);
        AnyMultiplexedVm = v22;
        v17 = v24 | 2;
        if ( v25 < 0 )
          KeBugCheckEx(0x1Au, 0x3300uLL, v9, v23, 0LL);
        v18 = v22;
        v16 = v11;
        goto LABEL_40;
      case 5:
        KeBugCheckEx(0x1Au, 0x3300uLL, v9, v8, 1uLL);
    }
  }
  if ( Process[1].Affinity.Bitmap[10] )
  {
    MiWaitForForkToComplete(Process, a4);
    return 0LL;
  }
  v18 = (unsigned __int64)&Process[1].IdealNode[12];
  v81 = 1;
  AnyMultiplexedVm = (__int64)&Process[1].IdealNode[12];
  v17 = v13 | 2;
  v16 = 1;
  if ( v12 < 0 )
    v17 = v13;
  v27 = ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 0;
  v89 = 0LL;
  if ( v27 )
  {
    v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL)
      && (*(_QWORD *)(v28 + 256) || *(_QWORD *)(v28 + 264) || *(_BYTE *)(v28 + 232) == 1) )
    {
      Address = MiLocateAddress(v9);
      if ( !Address || (v30 = *(_DWORD *)(Address + 48), v89 = Address, (v11 = (v30 >> 8) & 0x3F) != 0) )
      {
        v18 = (unsigned __int64)&Process[1].IdealNode[12];
      }
      else
      {
        v18 = (unsigned __int64)&Process[1].IdealNode[12];
        if ( (v30 & 0x8000) == 0 )
          v11 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
      }
    }
  }
LABEL_40:
  v31 = 0;
  v91 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v18 + 172));
  v87 = *(_DWORD *)v10 & 1;
  v32 = (volatile signed __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v33 = *v32;
  if ( (unsigned __int64)v32 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
    v33 = MiReadPteShadow(v32, *v32);
  if ( (v33 & 1) != 0 )
    v34 = HIBYTE(v33) & 0xF | (16 * ((v33 >> 60) & 7));
  else
    v34 = 10;
  if ( (a5 & 1) == 0 && (v34 & 0xF) != 0xA && ((v34 & 0xF) == 9 || v16 != 1 && (*(_BYTE *)(v10 + 35) & 8) != 0) )
    v34 = v34 & 0xF0 | 0xA;
  v35 = v34 & 0xF;
  if ( (v34 & 0xF) == 0xA )
    goto LABEL_64;
  if ( v35 == 8 && v81 != 2 )
  {
    v31 = 1;
    if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
      v31 = 2;
  }
  v36 = (v34 >> 4) & 7;
  if ( v36 )
  {
    if ( (((unsigned __int64)*v32 >> 4) & 1) != 0 || (*v32 & 8) == 0 )
    {
      if ( (((unsigned __int64)*v32 >> 4) & 1) != 0 )
        v36 |= 8u;
    }
    else
    {
      v36 |= 0x18u;
    }
  }
  if ( !v36 )
LABEL_64:
    v36 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v10 + 16);
  v82 = MmMakeProtectNotWriteCopy[v36];
  if ( Page == -1 )
  {
    if ( v11 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v11 - 1) << byte_140388501;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    v39 = (1 << byte_140388502) - 1;
    v40 = (*(_BYTE *)(v18 + 192) & 7u) >= 2 ? &CurrentPrcb->PageColor : (unsigned int *)v18;
    Page = MiGetPage(v91, NodeShiftedColor | (unsigned int)(unsigned __int16)(v39 & ++*(_WORD *)v40), 0);
    if ( Page == -1 )
    {
      if ( a4 < 2u && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
      {
        MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, a4);
        v41 = &dword_140389780;
        if ( (*(_BYTE *)(AnyMultiplexedVm + 192) & 7) != 2 )
          v41 = (LONG *)(AnyMultiplexedVm + 200);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v41, retaddr);
        else
          *v41 = 0;
        __writecr8(a4);
        MiWaitForFreePage(v91);
        SharedVm = MiGetSharedVm(AnyMultiplexedVm);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      return 0LL;
    }
  }
  if ( v31 )
  {
    if ( v31 >= 2 )
      MiReturnCommit(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)), 1uLL);
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  v43 = v82;
  v44 = 9;
  v45 = v90;
  if ( v82 == 24 )
  {
    v46 = v89;
    v47 = 1;
    v82 = 1;
    if ( !v89 )
    {
      v46 = MiLocateAddress(v90);
      if ( !v46 )
      {
LABEL_96:
        v43 = v82;
        goto LABEL_97;
      }
      v44 = v48 + 8;
    }
    v49 = (*(_DWORD *)(v46 + 48) >> 3) & 0x1F;
    if ( v49 >> 3 == 3 && (v49 & 7) != 0 )
    {
      LOBYTE(v82) = 25;
      v43 = 25LL;
      goto LABEL_97;
    }
    if ( v49 >> 3 == 1 )
      v47 = v44;
    v82 = v47;
    goto LABEL_96;
  }
LABEL_97:
  v50 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v50 + 16) = MiMakeDemandZeroPte(v43);
  if ( v35 != 10 )
  {
    ++*(_QWORD *)(AnyMultiplexedVm + 144);
    if ( v45 < 0xFFFFF68000000000uLL || v45 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(AnyMultiplexedVm + 128);
    v52 = *v32;
    v53 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v32 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
      v52 = MiReadPteShadow(v32, *v32);
    if ( (v52 & 1) != 0 )
      v54 = HIBYTE(v52) & 0xF;
    else
      v54 = 10;
    v55 = *v32;
    v56 = (unsigned __int64)v54 << 56;
    do
    {
      v57 = _InterlockedCompareExchange64(v32, v56 | v55 & 0x80FFFFFFFFFFFFFFuLL, v55);
      v27 = v55 == v57;
      v55 = v57;
    }
    while ( !v27 );
    v58 = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= v53 )
      v58 = MiReadPteShadow(a2, *a2);
    v85 = v58;
  }
  *(_WORD *)(v50 + 32) = v51;
  *(_QWORD *)(v50 + 40) ^= (*(_QWORD *)(v50 + 40) ^ MiGetContainingPageTable(a2)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v62 = (Queue >> 9) & 7;
  }
  else
  {
    v62 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v63 = 2;
      if ( v62 < 2 )
        v63 = v62;
      v62 = v63;
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v17 |= 4u;
  v86 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v86);
      while ( *(__int64 *)(v50 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) );
    v59 = 1;
  }
  if ( v87 )
    *(_QWORD *)v50 |= 1uLL;
  *(_BYTE *)(v50 + 34) |= 0x10u;
  if ( v81 || (*(_BYTE *)(v10 + 35) & 8) == 0 || (a5 & 1) != 0 )
    *(_BYTE *)(v50 + 35) &= ~8u;
  else
    *(_BYTE *)(v50 + 35) |= 8u;
  v64 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( *(unsigned __int8 *)(v50 + 34) >> 6 != (_DWORD)v64 )
    MiChangePageAttribute(v50, v64, v59);
  v65 = *(_QWORD *)(v50 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v50 + 8) = a2;
  *(_QWORD *)(v50 + 24) = v65 | 1;
  *(_BYTE *)(v50 + 35) ^= (*(_BYTE *)(v50 + 35) ^ v62) & 7;
  *(_BYTE *)(v50 + 34) = *(_BYTE *)(v50 + 34) & 0xF8 | 6;
  if ( ((v17 >> 2) & 1) != 0 )
  {
    memset(v95, 0, sizeof(v95));
    v96 = 0LL;
    MiIdentifyPfn((_OWORD *)v50, v95);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((v17 >> 2) & 1) != 0 )
  {
    v96 |= 8uLL;
    v97[0] = v95;
    v97[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v97, 1, 671088641, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v66 = 1;
  if ( (v82 & 2) != 0 )
  {
    if ( (MiFlags & 0x40000) == 0 )
    {
      if ( v45 < 0xFFFF800000000000uLL )
      {
LABEL_141:
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
          v66 |= 0x10u;
        goto LABEL_143;
      }
      v66 = 17;
      if ( (a5 & 0x10) != 0 )
        v66 = 49;
    }
  }
  else
  {
    v66 = 9;
  }
  if ( v45 < 0xFFFF800000000000uLL )
    goto LABEL_141;
LABEL_143:
  MiCopyPage(Page, v94, 0LL, v66);
  if ( dword_140388C68 )
  {
    v69 = v62 < dword_140388C6C;
    v70 = AnyMultiplexedVm;
    if ( !v69 )
      MiLogPageAccess(AnyMultiplexedVm, (unsigned __int64)a2, v67, v68);
  }
  else
  {
    v70 = AnyMultiplexedVm;
  }
  v71 = v85;
  if ( (v17 & 1) == 0 )
  {
    if ( v85 < 0 || v81 != 1 )
      v71 = v85 | 0x42;
    v71 = v71 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v100 = 20LL;
  v72 = (v71 ^ (Page << 12)) & 0xFFFFFFFFF000LL ^ v71;
  v99 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v85 = v72;
  v98 = v81;
  MiInsertTbFlushEntry(&v98, v45 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
  if ( (v66 & 0x20) != 0 || (v72 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(a2);
    MiFlushTbList((__int64)&v98, v74);
  }
  else
  {
    v73 = (_KPROCESS *)(v72 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    *a2 = (__int64)v73;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a2, v73);
    MiFlushTbList((__int64)&v98, v73);
    *a2 = v72;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a2, v72);
  }
  v75 = v92;
  if ( v81 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v92[1].Affinity.Bitmap[13], 1uLL);
  v88 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v88);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( !v81 && (a5 & 1) == 0 )
  {
    v76 = *(_BYTE *)(v10 + 35);
    if ( (v76 & 8) != 0 )
      *(_BYTE *)(v10 + 35) = v76 & 0xF7;
  }
  if ( (*(_BYTE *)(v10 + 34) & 7) != 6 )
    MiBadShareCount(v10);
  v77 = (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ v77) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v77 )
    MiPfnShareCountIsZero(v10, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 )
  {
    v78 = MiDecrementCombinedPte(v70, BugCheckParameter3);
LABEL_189:
    if ( v78 == 3 )
      MiChargeCommit(v91, 1uLL, 4LL, v79);
  }
  else if ( (*(_BYTE *)(v70 + 192) & 7) == 0 )
  {
    v80 = (_QWORD *)v75[1].Affinity.Bitmap[12];
    while ( v80 )
    {
      if ( BugCheckParameter3 > v80[4] )
      {
        v80 = (_QWORD *)v80[1];
      }
      else
      {
        if ( BugCheckParameter3 >= v80[3] )
        {
          v78 = MiDecrementCloneBlockReference((ULONG_PTR)v80, BugCheckParameter3);
          goto LABEL_189;
        }
        v80 = (_QWORD *)*v80;
      }
    }
  }
  return 1LL;
}
