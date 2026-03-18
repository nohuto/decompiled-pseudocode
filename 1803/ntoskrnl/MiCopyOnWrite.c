/*
 * XREFs of MiCopyOnWrite @ 0x140126BA0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x14018630C (MiFaultInPagedPool.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 *     MiLockHotPatchPages @ 0x140255CEC (MiLockHotPatchPages.c)
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 *     MiValidVirtualizationFault @ 0x140262110 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableCharges @ 0x14004ECC4 (MiUnlockPageTableCharges.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     MiGetWsleProtection @ 0x140128180 (MiGetWsleProtection.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, ULONG_PTR Page, char a4)
{
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // r9
  __int64 v12; // r14
  __int64 v13; // r8
  BOOL v14; // edx
  _KPROCESS *Process; // rsi
  int v16; // eax
  unsigned __int64 SessionVm; // rax
  unsigned int v18; // edx
  __int64 v19; // r8
  int v20; // r11d
  unsigned int v21; // edi
  unsigned __int16 *v22; // r9
  unsigned int v23; // esi
  volatile signed __int64 *v24; // r12
  unsigned __int64 v25; // rdx
  unsigned int v26; // r11d
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int8 v30; // cl
  int v31; // eax
  ULONG_PTR v32; // r9
  int v33; // edx
  int v34; // r11d
  __int64 v35; // r8
  bool v37; // zf
  __int64 v38; // rdx
  unsigned __int64 Address; // rax
  unsigned int v40; // ecx
  char v41; // r15
  int WsleProtection; // eax
  __int64 v43; // r9
  int v44; // r10d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r10
  unsigned int *p_PageColor; // rax
  volatile signed __int32 *v48; // rdx
  unsigned __int16 v49; // r8
  unsigned int v50; // edx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  int v53; // esi
  unsigned int v54; // eax
  __int64 v55; // rsi
  __int64 v56; // rdx
  LONG *v57; // r15
  volatile signed __int32 *v58; // rcx
  struct _KPRCB *v59; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v61; // eax
  char v62; // rdx^7
  char v63; // dl
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  char v66; // r8^7
  signed __int64 v67; // rax
  signed __int64 v68; // rtt
  __int64 v69; // rdx
  unsigned __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // r8
  unsigned int v73; // r10d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // r12d
  unsigned int PagePriorityThread; // r12d
  unsigned __int8 v77; // cl
  char v78; // dl
  int v79; // r9d
  __int64 v80; // rax
  char v81; // si
  ULONG_PTR v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // r8
  unsigned __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // rsi
  char v91; // al
  __int64 v92; // rdx
  int v93; // eax
  _QWORD *v94; // rcx
  int v95; // [rsp+30h] [rbp-D0h]
  unsigned int v96; // [rsp+34h] [rbp-CCh]
  __int64 v97; // [rsp+38h] [rbp-C8h]
  __int64 v100; // [rsp+50h] [rbp-B0h] BYREF
  BOOL v101; // [rsp+58h] [rbp-A8h]
  int v102; // [rsp+5Ch] [rbp-A4h] BYREF
  int v103; // [rsp+60h] [rbp-A0h]
  int v104; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 v105; // [rsp+68h] [rbp-98h]
  _KPROCESS *v106; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-88h]
  __int64 v108; // [rsp+80h] [rbp-80h]
  ULONG_PTR v109; // [rsp+88h] [rbp-78h]
  unsigned __int64 v110[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-58h]
  _QWORD v112[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v113; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v114; // [rsp+C4h] [rbp-3Ch]
  __int64 v115; // [rsp+C8h] [rbp-38h]
  __int64 v116; // [rsp+D0h] [rbp-30h]
  __int64 v117; // [rsp+D8h] [rbp-28h]
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  v101 = MiPteInShadowRange(a2);
  if ( v101 && (unsigned int)MiPteHasShadow() && (v7 & 1) != 0 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8 * (((unsigned __int64)(unsigned int)a2 >> 3) & 0x1FF));
      v10 = v7 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v7;
      v7 = v10;
      if ( (v9 & 0x42) != 0 )
        v7 = v10 | 0x42;
    }
  }
  v100 = v7;
  v109 = MI_GET_PAGE_FRAME_FROM_PTE(&v100);
  v12 = 48 * v109 - 0x58000000000LL;
  v105 = 0LL;
  v13 = *(_QWORD *)(v12 + 8);
  BugCheckParameter3 = v13 | 0x8000000000000000uLL;
  v14 = (v11 & 0x200) == 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v106 = Process;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
  {
    v16 = (unsigned __int8)byte_1403CCF90[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
    switch ( v16 )
    {
      case 1:
        SessionVm = MiGetSessionVm();
        v97 = SessionVm;
        v95 = v20;
        goto LABEL_14;
      case 12:
        v95 = 0;
        SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
        v97 = SessionVm;
LABEL_14:
        v21 = v20 | v18;
        if ( v19 < 0 )
          v21 = v18;
LABEL_16:
        v22 = (unsigned __int16 *)SessionVm;
        goto LABEL_17;
      case 9:
      case 15:
        KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v11, 2uLL);
      case 6:
        v95 = 0;
        SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(2);
        v97 = SessionVm;
        v21 = v34 | v33;
        if ( v35 < 0 )
          KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v32, 0LL);
        goto LABEL_16;
    }
    if ( (_BYTE)v16 == 5 )
      KeBugCheckEx(0x1Au, 0x3300uLL, BugCheckParameter2, v11, 1uLL);
  }
  if ( Process[1].Affinity.Bitmap[10] )
    return 3221226548LL;
  v95 = 1;
  v22 = &Process[1].IdealNode[12];
  v97 = (__int64)&Process[1].IdealNode[12];
  v21 = v14 | 2;
  if ( v13 < 0 )
    v21 = v14;
  v37 = ((__int64)Process[2].Header.WaitListHead.Flink & 7) == 0;
  v105 = 0LL;
  if ( v37 )
  {
    v38 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL)
      && (*(_QWORD *)(v38 + 360) || *(_QWORD *)(v38 + 368) || *(_BYTE *)(v38 + 320) == 1) )
    {
      Address = MiLocateAddress(BugCheckParameter2);
      if ( !Address || (v40 = *(_DWORD *)(Address + 48), v105 = Address, ((v40 >> 8) & 0x3F) != 0) )
        v22 = &Process[1].IdealNode[12];
      else
        v22 = &Process[1].IdealNode[12];
    }
  }
LABEL_17:
  v23 = 0;
  v108 = *(_QWORD *)(qword_1403CBD88 + 8LL * v22[87]);
  v103 = *(_DWORD *)v12 & 1;
  v24 = (volatile signed __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MiPteInShadowRange((unsigned __int64)v24)
    && (unsigned int)MiPteHasShadow()
    && (v25 & 1) != 0
    && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
  {
    v27 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 8 * (((unsigned __int64)(unsigned int)v24 >> 3) & 0x1FF));
      v29 = v25 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v29 = v25;
      v25 = v29;
      if ( (v28 & 0x42) != 0 )
        v25 = v29 | 0x42;
    }
  }
  v30 = HIBYTE(v25) & 0xF | (16 * ((v25 >> 60) & 7));
  if ( (a4 & 1) != 0 || (HIBYTE(v25) & 0xF) == 0xA )
  {
    v31 = v95;
  }
  else
  {
    v31 = v95;
    if ( (HIBYTE(v25) & 0xF) == 9 )
    {
      v30 = (16 * ((v25 >> 60) & 7)) | 0xA;
    }
    else if ( v95 != 1 && (*(_BYTE *)(v12 + 35) & 8) != 0 )
    {
      v30 = (16 * ((v25 >> 60) & 7)) | 0xA;
    }
  }
  v41 = v30 & 0xF;
  if ( (v30 & 0xF) == 0xA )
    goto LABEL_63;
  if ( v41 == 8 && v31 != v26 )
  {
    v23 = 1;
    if ( (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
      v23 = v26;
  }
  WsleProtection = MiGetWsleProtection(BugCheckParameter2, v30);
  if ( !WsleProtection )
LABEL_63:
    WsleProtection = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v12 + 16);
  v96 = MmMakeProtectNotWriteCopy[WsleProtection];
  if ( Page == -1LL )
  {
    if ( v44 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      NodeShiftedColor = ((_WORD)v44 - 1) << byte_1403CB699;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
      NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    }
    p_PageColor = &CurrentPrcb->PageColor;
    v48 = (volatile signed __int32 *)v43;
    if ( (*(_BYTE *)(v43 + 184) & 7u) >= 2 )
      v48 = (volatile signed __int32 *)p_PageColor;
    v49 = (1 << byte_1403CB69A) - 1;
    v50 = v49 & _InterlockedExchangeAdd(v48, 1u) | NodeShiftedColor;
    Page = MiGetPage(v108, v50, 0);
    if ( Page == -1LL )
      return 3221225495LL;
  }
  if ( v23 )
  {
    if ( v23 >= 2 )
      MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v12 + 40) >> 40) & 0x3FFLL)), 1uLL);
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1);
  }
  v51 = v96;
  if ( v96 == 24 )
  {
    v52 = v105;
    v53 = 1;
    v96 = 1;
    if ( v105 || (v52 = MiLocateAddress(BugCheckParameter2)) != 0 )
    {
      v54 = (*(_DWORD *)(v52 + 48) >> 3) & 0x1F;
      if ( v54 >> 3 == 3 && (v54 & 7) != 0 )
      {
        LOBYTE(v96) = 25;
        v51 = 25LL;
        goto LABEL_86;
      }
      if ( v54 >> 3 == 1 )
        v53 = 9;
      v96 = v53;
    }
    v51 = v96;
  }
LABEL_86:
  v55 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v55 + 16) = MiMakeDemandZeroPte(v51);
  if ( v41 != 10 )
  {
    v57 = &dword_1403CCD68;
    if ( (*(_BYTE *)(v97 + 184) & 7) == 2 )
      v58 = &dword_1403CCD68;
    else
      v58 = (volatile signed __int32 *)(v97 + 232);
    LOBYTE(v56) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v58, v56);
    else
      ExpAcquireSpinLockExclusive(v58, 0xFFu);
    ++*(_QWORD *)(v97 + 144);
    if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(v97 + 128);
    if ( (*(_BYTE *)(v97 + 184) & 7) != 2 )
      v57 = (LONG *)(v97 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v57, retaddr);
    else
      *v57 = 0;
    v59 = KeGetCurrentPrcb();
    SchedulerAssist = v59->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v59->NestingLevel <= 1u )
      {
        v61 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v61;
        if ( !v61 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v59);
      }
    }
    if ( MiPteInShadowRange((unsigned __int64)v24)
      && (unsigned int)MiPteHasShadow()
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v64 )
      {
        v65 = *(_QWORD *)(v64 + 8 * (((unsigned __int64)(unsigned int)v24 >> 3) & 0x1FF));
        v66 = v62;
        if ( (v65 & 0x20) == 0 )
          v66 = v62;
        v62 = v66;
        if ( (v65 & 0x42) != 0 )
          v62 = v66;
      }
    }
    v67 = *v24;
    do
    {
      v68 = v67;
      v67 = _InterlockedCompareExchange64(v24, ((unsigned __int64)(v62 & 0xF) << 56) | v67 & 0x80FFFFFFFFFFFFFFuLL, v67);
    }
    while ( v68 != v67 );
    v69 = *(_QWORD *)a2;
    if ( v101 && (unsigned int)MiPteHasShadow() && (v69 & 1) != 0 && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
    {
      v70 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v70 )
      {
        v71 = *(_QWORD *)(v70 + 8 * ((a2 >> 3) & 0x1FF));
        v72 = v69 | 0x20;
        if ( (v71 & 0x20) == 0 )
          v72 = v69;
        v69 = v72;
        if ( (v71 & 0x42) != 0 )
          v69 = v72 | 0x42;
      }
    }
    v100 = v69;
  }
  *(_WORD *)(v55 + 32) = 1;
  *(_QWORD *)(v55 + 40) ^= (*(_QWORD *)(v55 + 40) ^ MiGetContainingPageTable(a2)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (Queue >> 9) & 7;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v21 |= 4u;
  v102 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v102);
      while ( *(__int64 *)(v55 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) );
    v73 = 1;
  }
  if ( v103 )
    *(_QWORD *)v55 |= 1uLL;
  *(_BYTE *)(v55 + 34) |= 0x10u;
  if ( v95 || (*(_BYTE *)(v12 + 35) & 8) == 0 || (a4 & 1) != 0 )
    *(_BYTE *)(v55 + 35) &= ~8u;
  else
    *(_BYTE *)(v55 + 35) |= 8u;
  v77 = *(_BYTE *)(v55 + 34);
  v78 = *(_BYTE *)(v55 + 35);
  v79 = *(unsigned __int8 *)(v12 + 34) >> 6;
  if ( v77 >> 6 != v79 )
  {
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v79, v73);
    v78 = *(_BYTE *)(v55 + 35);
    v77 = *(_BYTE *)(v55 + 34);
  }
  v80 = *(_QWORD *)(v55 + 24);
  *(_QWORD *)(v55 + 8) = a2;
  *(_QWORD *)(v55 + 24) = v80 & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v55 + 35) = v78 ^ (v78 ^ PagePriorityThread) & 7;
  *(_BYTE *)(v55 + 34) = v77 & 0xF8 | 6;
  if ( ((v21 >> 2) & 1) != 0 )
  {
    memset(v110, 0, sizeof(v110));
    v111 = 0LL;
    MiIdentifyPfn(48 * Page - 0x58000000000LL, v110);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( ((v21 >> 2) & 1) != 0 )
  {
    v111 |= 8uLL;
    v112[0] = v110;
    v112[1] = 32LL;
    EtwTraceKernelEvent((int)v112, 1, 0x28000001u, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v81 = 1;
  if ( (v96 & 2) == 0 )
  {
    v81 = 9;
LABEL_154:
    v82 = BugCheckParameter2;
    goto LABEL_155;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_154;
  v82 = BugCheckParameter2;
  if ( BugCheckParameter2 < 0xFFFF800000000000uLL )
  {
LABEL_156:
    if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
      v81 |= 0x10u;
    goto LABEL_158;
  }
  v81 = 17;
  if ( (a4 & 0x10) != 0 )
    v81 = 49;
LABEL_155:
  if ( v82 < 0xFFFF800000000000uLL )
    goto LABEL_156;
LABEL_158:
  MiCopyPage(Page, v109, 0LL, v81);
  if ( dword_1403CBF28 && PagePriorityThread >= dword_1403CBF2C )
    MiLogPageAccess(v97, a2);
  v83 = v100;
  if ( (v21 & 1) == 0 )
  {
    if ( v100 < 0 || v95 != 1 )
      v83 = v100 | 0x42;
    v83 = v83 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v115 = 20LL;
  v84 = v83 ^ (v83 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v113 = v95;
  v114 = 0;
  v116 = 0LL;
  v117 = 0LL;
  v100 = v84;
  MiInsertTbFlushEntry((__int64)&v113, BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v81 & 0x20) != 0 || (v84 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)a2, v84);
    MiFlushTbList((__int64)&v113, v88, v89);
  }
  else
  {
    v86 = v84 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    *(_QWORD *)a2 = v86;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a2, v86, v85);
    MiFlushTbList((__int64)&v113, v86, v85);
    *(_QWORD *)a2 = v84;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a2, v84, v87);
  }
  v90 = (__int64)v106;
  if ( v95 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v106[1].Affinity.Bitmap[13], 1uLL);
  v104 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v104);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  if ( !v95 && (a4 & 1) == 0 )
  {
    v91 = *(_BYTE *)(v12 + 35);
    if ( (v91 & 8) != 0 )
      *(_BYTE *)(v12 + 35) = v91 & 0xF7;
  }
  if ( (*(_BYTE *)(v12 + 34) & 7) != 6 )
    MiBadShareCount(v12);
  v92 = (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ v92) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v92 )
    MiPfnShareCountIsZero(v12, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v21 & 2) != 0 )
  {
    v93 = MiDecrementCombinedPte(v97, BugCheckParameter3);
LABEL_203:
    if ( v93 == 3 )
      MiChargeCommit(v108, 1uLL, 4u);
  }
  else if ( (*(_BYTE *)(v97 + 184) & 7) == 0 )
  {
    v94 = *(_QWORD **)(v90 + 912);
    while ( v94 )
    {
      if ( BugCheckParameter3 > v94[4] )
      {
        v94 = (_QWORD *)v94[1];
      }
      else
      {
        if ( BugCheckParameter3 >= v94[3] )
        {
          v93 = MiDecrementCloneBlockReference((ULONG_PTR)v94, (volatile signed __int64 *)BugCheckParameter3, v90);
          goto LABEL_203;
        }
        v94 = (_QWORD *)*v94;
      }
    }
  }
  return 0LL;
}
