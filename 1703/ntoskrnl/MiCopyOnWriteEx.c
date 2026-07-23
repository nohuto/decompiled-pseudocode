/*
 * XREFs of MiCopyOnWriteEx @ 0x1400FB340
 * Callers:
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
 *     MiLockHotPatchPages @ 0x140211784 (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 *     MiValidVirtualizationFault @ 0x14021C39C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     MiUnlockPageTableCharges @ 0x14001769C (MiUnlockPageTableCharges.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x1400FBF20 (MiGetWsleProtection.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     MiWaitForForkToComplete @ 0x140223828 (MiWaitForForkToComplete.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyOnWriteEx(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, unsigned __int8 a4, char a5)
{
  __int64 v7; // rsi
  __int16 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // edi
  _KPROCESS *Process; // rbx
  char *AnyMultiplexedVm; // r13
  int v13; // r11d
  __int64 v14; // r8
  ULONG_PTR v15; // rdx
  char *v16; // rax
  ULONG_PTR BugCheckParameter4; // r9
  int v18; // r11d
  __int64 v19; // r8
  bool v21; // zf
  __int64 v22; // rdx
  unsigned __int64 Address; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned __int8 WsleContents; // al
  int v27; // r9d
  unsigned int v28; // r11d
  char v29; // r15
  int WsleProtection; // eax
  int v31; // r10d
  unsigned __int8 v32; // r11
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 NodeShiftedColor; // r10
  __int16 v35; // dx
  _WORD *p_PageColor; // rax
  LONG *v37; // rcx
  LONG *SharedVm; // rbx
  __int64 v39; // rcx
  int v40; // edx
  unsigned __int64 v41; // rax
  int v42; // ebx
  int v43; // r10d
  unsigned int v44; // eax
  ULONG_PTR v45; // rbx
  __int16 v46; // r10
  unsigned __int64 v47; // rax
  volatile signed __int64 *v48; // r9
  char v49; // cl
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // r10d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // r12d
  unsigned int PagePriorityThread; // r12d
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  char v61; // r9
  ULONG_PTR v62; // r15
  bool v63; // cf
  ULONG_PTR *v64; // r12
  ULONG_PTR v65; // rbx
  ULONG_PTR v66; // rbx
  __int64 v67; // r8
  _KPROCESS *v68; // rdx
  __int64 v69; // rcx
  int v70; // r14d
  __int64 v71; // rdx
  __int64 v72; // r8
  _KPROCESS *v73; // rdx
  __int64 v74; // rbx
  char v75; // al
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  int v78; // eax
  _QWORD *v79; // rcx
  int v80; // [rsp+30h] [rbp-D0h]
  unsigned int v81; // [rsp+34h] [rbp-CCh]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR *v83; // [rsp+40h] [rbp-C0h]
  ULONG_PTR Page; // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+50h] [rbp-B0h] BYREF
  int v86; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v87; // [rsp+58h] [rbp-A8h]
  _KPROCESS *v88; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v89; // [rsp+68h] [rbp-98h]
  ULONG_PTR v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  ULONG_PTR v92; // [rsp+80h] [rbp-80h]
  __int64 v93[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-60h]
  _QWORD v95[3]; // [rsp+A8h] [rbp-58h] BYREF
  int v96; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v97; // [rsp+C4h] [rbp-3Ch]
  __int64 v98; // [rsp+C8h] [rbp-38h]
  __int64 v99; // [rsp+D0h] [rbp-30h]
  __int64 v100; // [rsp+D8h] [rbp-28h]
  void *retaddr; // [rsp+1D8h] [rbp+D8h]
  int v102; // [rsp+200h] [rbp+100h]

  Page = a3;
  v83 = (ULONG_PTR *)a2;
  BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
  v92 = MI_GET_PAGE_FRAME_FROM_PTE(&BugCheckParameter3);
  v7 = 48 * v92 - 0x58000000000LL;
  v87 = 0LL;
  v9 = *(_QWORD *)(v7 + 8);
  v10 = (v8 & 0x200) == 0LL;
  v90 = v9 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v88 = Process;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    if ( byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    {
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
      if ( (v9 & 0x8000000000000000uLL) == 0 )
        v10 |= 2u;
      v80 = 2;
      goto LABEL_32;
    }
    if ( byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 12 )
      goto LABEL_12;
  }
  if ( PsNtosImageBase
    && (BugCheckParameter2 >= (unsigned __int64)PsNtosImageBase && BugCheckParameter2 < PsNtosImageEnd
     || BugCheckParameter2 >= (unsigned __int64)PsHalImageBase && BugCheckParameter2 < PsHalImageEnd) )
  {
LABEL_12:
    v80 = 0;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( (v14 & 0x8000000000000000uLL) == 0 )
      v10 |= v13;
    goto LABEL_32;
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    v15 = BugCheckParameter2 >> 39;
    if ( byte_14036D700[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 9 )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, BugCheckParameter3, 2uLL);
    if ( byte_14036D700[(v15 & 0x1FF) - 256] == 6 )
    {
      v80 = 0;
      v16 = MiGetAnyMultiplexedVm(2);
      v10 |= v18;
      AnyMultiplexedVm = v16;
      if ( v19 < 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
      goto LABEL_32;
    }
    if ( byte_14036D700[(v15 & 0x1FF) - 256] == 5 )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, BugCheckParameter3, 1uLL);
  }
  if ( Process[1].Affinity.Bitmap[10] )
  {
    MiWaitForForkToComplete(Process, a4);
    return 0LL;
  }
  v80 = 1;
  AnyMultiplexedVm = (char *)&Process[1].IdealNode[12];
  if ( (v9 & 0x8000000000000000uLL) == 0 )
    v10 |= 2u;
  v21 = ((__int64)Process[2].Header.WaitListHead.Blink & 7) == 0;
  v87 = 0LL;
  if ( v21 )
  {
    v22 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL)
      && (*(_QWORD *)(v22 + 256) || *(_QWORD *)(v22 + 264) || *(_BYTE *)(v22 + 232) == 1) )
    {
      Address = MiLocateAddress(BugCheckParameter2);
      if ( Address )
        v87 = Address;
    }
  }
LABEL_32:
  v24 = *((unsigned __int16 *)AnyMultiplexedVm + 86);
  v25 = 0;
  v89 = *(_QWORD *)(qword_14036C8F8 + 8 * v24);
  v91 = *(_QWORD *)v7;
  WsleContents = MiGetWsleContents(v24, BugCheckParameter2);
  v102 = a5 & 1;
  if ( !v102 && (WsleContents & 0xF) != 0xA && ((WsleContents & 0xF) == 9 || v27 != 1 && (*(_BYTE *)(v7 + 35) & 8) != 0) )
    WsleContents = WsleContents & 0xF0 | 0xA;
  v29 = WsleContents & 0xF;
  if ( (WsleContents & 0xF) == 0xA )
    goto LABEL_44;
  if ( v29 == 8 && v27 != v28 )
  {
    v25 = 1;
    if ( (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      v25 = v28;
  }
  WsleProtection = MiGetWsleProtection(BugCheckParameter2, WsleContents);
  if ( !WsleProtection )
LABEL_44:
    WsleProtection = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v7 + 16);
  v81 = MmMakeProtectNotWriteCopy[WsleProtection];
  if ( Page == -1LL )
  {
    if ( v31 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v31 - 1) << byte_14036C1B9;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    v35 = (1 << byte_14036C1BA) - 1;
    p_PageColor = AnyMultiplexedVm;
    if ( (unsigned __int8)(AnyMultiplexedVm[192] & 7) >= v32 )
      p_PageColor = &CurrentPrcb->PageColor;
    Page = MiGetPage(v89, NodeShiftedColor | (unsigned int)(unsigned __int16)(++*p_PageColor & v35), 0);
    if ( Page == -1LL )
    {
      if ( a4 < 2u && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
      {
        MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, a4);
        v37 = &dword_14036D4C0;
        if ( (AnyMultiplexedVm[192] & 7) != 2 )
          v37 = (LONG *)(AnyMultiplexedVm + 200);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v37, retaddr);
        else
          *v37 = 0;
        __writecr8(a4);
        MiWaitForFreePage(v89);
        SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      return 0LL;
    }
  }
  if ( v25 )
  {
    if ( v25 >= 2 )
      MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v7 + 40) >> 40) & 0x3FFLL)), 1uLL);
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
  }
  v39 = v81;
  v40 = 9;
  if ( v81 == 24 )
  {
    v41 = v87;
    v42 = 1;
    v81 = 1;
    if ( !v87 )
    {
      v41 = MiLocateAddress(BugCheckParameter2);
      if ( !v41 )
      {
LABEL_75:
        v39 = v81;
        goto LABEL_76;
      }
      v40 = v43 + 8;
    }
    v44 = (*(_DWORD *)(v41 + 48) >> 3) & 0x1F;
    if ( v44 >> 3 == 3 )
    {
      if ( (v44 & 7) != 0 )
      {
        LOBYTE(v81) = 25;
        v39 = 25LL;
        goto LABEL_76;
      }
    }
    else
    {
      if ( v44 >> 3 == 1 )
        v42 = v40;
      v81 = v42;
    }
    goto LABEL_75;
  }
LABEL_76:
  v45 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v45 + 16) = MiMakeDemandZeroPte(v39);
  if ( v29 == 10 )
  {
    v52 = (__int64)v83;
  }
  else
  {
    ++*((_QWORD *)AnyMultiplexedVm + 18);
    if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*((_QWORD *)AnyMultiplexedVm + 16);
    v47 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v47 & 1) != 0 )
      v49 = HIBYTE(v47) & 0xF | (16 * ((v47 >> 60) & 7));
    else
      v49 = 10;
    v50 = *v48;
    do
    {
      v51 = v50;
      v50 = _InterlockedCompareExchange64(v48, ((unsigned __int64)(v49 & 0xF) << 56) | v50 & 0x80FFFFFFFFFFFFFFuLL, v50);
    }
    while ( v51 != v50 );
    v52 = (__int64)v83;
    BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v83);
  }
  v53 = (v91 ^ *(_QWORD *)v45) & 0xFFFFFFFFFLL;
  *(_WORD *)(v45 + 32) = v46;
  *(_QWORD *)v45 ^= v53;
  *(_QWORD *)(v45 + 40) ^= (*(_QWORD *)(v45 + 40) ^ MiGetContainingPageTable(v52)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v10 |= 4u;
  v85 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v85);
      while ( (*(_QWORD *)(v45 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) );
    v52 = (__int64)v83;
    v55 = 1;
  }
  *(_BYTE *)(v45 + 34) |= 0x10u;
  if ( v80 || (*(_BYTE *)(v7 + 35) & 8) == 0 || v102 )
    *(_BYTE *)(v45 + 35) &= ~8u;
  else
    *(_BYTE *)(v45 + 35) |= 8u;
  v59 = *(unsigned __int8 *)(v7 + 34) >> 6;
  if ( *(unsigned __int8 *)(v45 + 34) >> 6 != (_DWORD)v59 )
    MiChangePageAttribute(v45, v59, v55);
  v60 = *(_QWORD *)(v45 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v45 + 8) = v52;
  *(_QWORD *)(v45 + 24) = v60 | 1;
  *(_BYTE *)(v45 + 35) ^= (*(_BYTE *)(v45 + 35) ^ PagePriorityThread) & 7;
  *(_BYTE *)(v45 + 34) = *(_BYTE *)(v45 + 34) & 0xF8 | 6;
  if ( ((v10 >> 2) & 1) != 0 )
  {
    memset(v93, 0, sizeof(v93));
    v94 = 0LL;
    MiIdentifyPfn((_OWORD *)v45, v93, v54);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((v10 >> 2) & 1) != 0 )
  {
    v94 |= 8uLL;
    v95[0] = v93;
    v95[1] = 32LL;
    EtwTraceKernelEvent((int)v95, 1, 0x28000001u, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v61 = 1;
  if ( (v81 & 2) != 0 )
  {
    if ( (MiFlags & 0x40000) == 0 )
    {
      if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
      {
LABEL_110:
        if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
          v61 |= 0x10u;
        goto LABEL_112;
      }
      v61 = 17;
    }
  }
  else
  {
    v61 = 9;
  }
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
    goto LABEL_110;
LABEL_112:
  v62 = Page;
  MiCopyPage(Page, v92, 0LL, v61);
  if ( dword_14036CA68 )
  {
    v63 = PagePriorityThread < dword_14036CA6C;
    v64 = v83;
    if ( !v63 )
      MiLogPageAccess((__int64)AnyMultiplexedVm, (__int64)v83);
  }
  else
  {
    v64 = v83;
  }
  v65 = BugCheckParameter3;
  if ( (v10 & 1) == 0 )
    v65 = BugCheckParameter3 & 0xFFFFFFFFFFFFF59DuLL | 0x862;
  v98 = 20LL;
  v66 = (v65 ^ (v62 << 12)) & 0xFFFFFFFFF000LL ^ v65;
  v97 = 0;
  v99 = 0LL;
  v100 = 0LL;
  BugCheckParameter3 = v66;
  v96 = v80;
  MiInsertTbFlushEntry((__int64)&v96, BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v66 & 0x42) != 0 )
  {
    *v64 = v66 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    v70 = MiPteInShadowRange(v64);
    if ( v70 )
      MiWritePteShadow(v69);
    MiFlushTbList((__int64)&v96, v68);
    *v64 = v66;
    if ( v70 )
      MiWritePteShadow(v64);
  }
  else
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v64, v66, v67);
    MiFlushTbList((__int64)&v96, v73);
  }
  v74 = (__int64)v88;
  if ( v80 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v88[1].Affinity.Bitmap[13], 1uLL);
  v86 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v86);
      while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
    v74 = (__int64)v88;
  }
  if ( !v80 && !v102 )
  {
    v75 = *(_BYTE *)(v7 + 35);
    if ( (v75 & 8) != 0 )
      *(_BYTE *)(v7 + 35) = v75 & 0xF7;
  }
  if ( (*(_BYTE *)(v7 + 34) & 7) != 6 )
    MiBadShareCount(v7, v71, v72);
  v76 = *(_QWORD *)(v7 + 24);
  v77 = (v76 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v7 + 24) = v76 ^ (v77 ^ v76) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v76 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v7, v77);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 )
  {
    v78 = MiDecrementCombinedPte(v90);
LABEL_151:
    if ( v78 == 3 )
      MiChargeCommit(v89, 1uLL, 4uLL);
  }
  else if ( (AnyMultiplexedVm[192] & 7) == 0 )
  {
    v79 = *(_QWORD **)(v74 + 912);
    while ( v79 )
    {
      if ( v90 > v79[4] )
      {
        v79 = (_QWORD *)v79[1];
      }
      else
      {
        if ( v90 >= v79[3] )
        {
          v78 = MiDecrementCloneBlockReference((ULONG_PTR)v79, v90, v74);
          goto LABEL_151;
        }
        v79 = (_QWORD *)*v79;
      }
    }
  }
  return 1LL;
}
