/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140054A70
 * Callers:
 *     MiDeleteRotateAndStopFaults @ 0x140009FDC (MiDeleteRotateAndStopFaults.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiDeleteFinalPageTables @ 0x1400B7F8C (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MiUnmapFrameBuffer @ 0x140009B04 (MiUnmapFrameBuffer.c)
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400E3424 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiDecrementCloneBlockReference @ 0x1400E4E0C (MiDecrementCloneBlockReference.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140112EA0 (MiCompressTbFlushList.c)
 *     MiDecayPfnFullyInitialized @ 0x140115284 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     MiLockSetPfnPriority @ 0x14011AF94 (MiLockSetPfnPriority.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiFreeLargePages @ 0x14022E560 (MiFreeLargePages.c)
 *     EtwTraceShouldYieldProcessor @ 0x14027B8F8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDeleteVirtualAddresses(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int8 a4,
        __int64 a5)
{
  __int64 v5; // r15
  unsigned __int8 v6; // r13
  _KPROCESS *Process; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  LONG *v13; // r12
  unsigned __int64 NextPageTable; // r13
  __int64 v15; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v17; // r9
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  unsigned __int16 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  char v26; // cl
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  unsigned __int64 v32; // r15
  __int64 *v33; // r12
  __int64 v34; // r9
  unsigned int v35; // r11d
  __int64 *v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r10
  __int64 v41; // rsi
  ULONG_PTR v42; // rbx
  unsigned __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  LONG *v53; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  int v58; // edx
  unsigned int v59; // ebx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned int PfnPriority; // eax
  int v68; // r12d
  unsigned __int64 *v69; // r14
  _BYTE *v70; // rax
  unsigned __int64 v71; // r10
  _BYTE *v72; // r9
  int v73; // r15d
  unsigned __int8 WsleContents; // r11
  unsigned __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r8
  bool v81; // zf
  __int64 *v82; // r9
  __int64 v83; // rax
  __int64 v84; // r9
  unsigned __int64 *v85; // r10
  unsigned __int64 v86; // r11
  __int64 v87; // rdi
  unsigned __int64 v88; // r9
  __int64 v89; // rax
  unsigned __int64 *v90; // rcx
  unsigned __int64 v91; // rax
  unsigned __int64 v92; // rax
  unsigned __int8 v93; // al
  char v94; // cl
  int v95; // edx
  __int64 v96; // rsi
  char v97; // r11
  unsigned __int64 v98; // r14
  unsigned __int64 i; // rcx
  unsigned int v100; // r8d
  char v101; // r11
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // r9
  unsigned __int64 v104; // rbx
  __int64 v105; // rax
  unsigned __int64 v106; // rcx
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  int IsPrototypePteVadLookup; // eax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v115; // rdx
  __int64 v116; // rax
  __int16 v117; // ax
  _KTHREAD *NextThread; // rax
  __int64 v119; // rbx
  ULONG_PTR v120; // rbx
  ULONG_PTR v121; // r9
  LONG *v122; // rax
  unsigned __int64 v123; // r13
  __int64 v124; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 v126; // rbx
  LONG *v127; // rbx
  unsigned int v128; // eax
  int v129; // esi
  int v130; // ebx
  LONG v131; // eax
  unsigned __int8 CurrentIrql; // cl
  unsigned int v133; // ebx
  signed __int32 j; // edx
  signed __int32 v135; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned int v139; // [rsp+34h] [rbp-CCh]
  unsigned __int16 *v141; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v142; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v143; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v144; // [rsp+58h] [rbp-A8h]
  int v145; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v146; // [rsp+68h] [rbp-98h] BYREF
  __int64 v147; // [rsp+70h] [rbp-90h]
  unsigned __int64 v148; // [rsp+78h] [rbp-88h]
  __int64 v149; // [rsp+80h] [rbp-80h]
  int v150; // [rsp+88h] [rbp-78h]
  int v151; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v152; // [rsp+90h] [rbp-70h]
  ULONG_PTR DecayPfn; // [rsp+98h] [rbp-68h]
  unsigned __int64 v154; // [rsp+A0h] [rbp-60h]
  __int64 *v155; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v157; // [rsp+B8h] [rbp-48h]
  int v158; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v159; // [rsp+C8h] [rbp-38h]
  _KPROCESS *v160; // [rsp+D0h] [rbp-30h]
  __int64 v161; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v162; // [rsp+E0h] [rbp-20h]
  __int64 v163; // [rsp+E8h] [rbp-18h] BYREF
  int v164; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v165; // [rsp+F4h] [rbp-Ch]
  __int64 v166; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v167; // [rsp+100h] [rbp+0h]
  _QWORD Base[21]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v169[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  void *retaddr; // [rsp+218h] [rbp+118h]

  v5 = a5;
  v157 = a2;
  v6 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v9 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 2);
  v10 = (__int64)&Process[1].IdealNode[12];
  v160 = Process;
  v149 = a5;
  v162 = *(_QWORD *)(qword_140388AF0 + 8 * v9);
  v141 = &Process[1].IdealNode[12];
  DecayPfn = 0LL;
  v154 = 0LL;
  v166 = 20LL;
  v164 = 1;
  v165 = 0;
  v167 = 0LL;
  Base[0] = 0LL;
  v11 = v8 - 0x98000000000LL;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = &dword_140389780;
  v157 = v12;
  if ( v11 > v12 )
    goto LABEL_285;
  do
  {
    NextPageTable = MiGetNextPageTable(v11, v12, (__int64)&v164, v6, 0x14u, &v143);
    if ( !NextPageTable )
      break;
    if ( v143 )
    {
      v15 = v143;
      do
      {
        NextPageTable = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v15;
      }
      while ( v15 );
      PteShadow = *(_QWORD *)NextPageTable;
      if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(NextPageTable, *(_QWORD *)NextPageTable);
      v142 = PteShadow;
      v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v142);
      if ( NextPageTable < v19 || NextPageTable > 0xFFFFF6FB7DBEDFFFuLL )
      {
        BugCheckParameter2 = MiGetUsedPtesHandle((__int64)(NextPageTable << 25) >> 16);
        v20 = 1;
      }
      else
      {
        BugCheckParameter2 = 0LL;
        v20 = 0;
      }
      *(_QWORD *)NextPageTable = 0LL;
      if ( NextPageTable >= v19 && NextPageTable <= v17 )
        MiWritePteShadow(NextPageTable, 0LL);
      v21 = 48 * v18 - 0x58000000000LL;
      MiInsertLargeTbFlushEntry(&v164, v143, NextPageTable, v17);
      v25 = 0x200000000000000LL;
      if ( (*(_QWORD *)(v21 + 40) & 0x200000000000000LL) == 0 )
      {
        MiLockPageAtDpcInline(v21);
        v22 = 0xFFFFFFFFFFELL;
        v26 = *(_BYTE *)(v21 + 34) & 7;
        *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0xF8 | 5;
        *(_QWORD *)v21 ^= (*(_QWORD *)v21 ^ (v154 >> 3)) & 0xFFFFFFFFFFELL;
        *(_BYTE *)(v21 + 34) ^= (v26 ^ *(_BYTE *)(v21 + 34)) & 7;
        v27 = *(_QWORD *)(v21 + 40);
        if ( v143 == 1 )
        {
          v28 = v27 & 0xFFFFFFFFFFFFFFFEuLL;
          v25 = 0xFFFFFFFFELL;
        }
        else
        {
          v28 = v27 & 0xFFFFFFFFFFFFFFFBuLL;
          v25 = 0xFFFFFFFFBLL;
        }
        *(_QWORD *)(v21 + 40) = v25 | v28;
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v154 = v21;
      }
      v29 = v143;
      v30 = NextPageTable + 8;
      v145 = 0;
      if ( v143 )
      {
        v25 = 0LL;
        do
        {
          v30 = v30 << 25 >> 16;
          --v29;
        }
        while ( v29 );
      }
      v31 = v30 - 8;
      goto LABEL_260;
    }
    if ( (a3 & 2) == 0 || (*(_BYTE *)(v10 + 195) & 1) != 0 || (v150 = 1, !dword_140388C68) )
      v150 = 0;
    v145 = 0;
    v147 = 0LL;
    v32 = (__int64)(NextPageTable << 25) >> 16;
    v144 = v32;
    v33 = 0LL;
    BugCheckParameter2 = MiGetUsedPtesHandle(v32);
    v36 = 0LL;
    v155 = 0LL;
    v37 = *(unsigned int *)(BugCheckParameter2 + 16);
    v159 = 0LL;
    v38 = (v37 >> 16) & 0x3FF;
    v152 = v38;
    if ( (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v157 )
      v12 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v39 = v35 >> 4;
    LOWORD(v39) = (v35 & 0x10) != 0;
    v148 = v12;
    v139 = v39;
    if ( NextPageTable > v12 )
      goto LABEL_255;
    v40 = v12;
    while ( 1 )
    {
      v41 = *(_QWORD *)NextPageTable;
      v42 = *(_QWORD *)NextPageTable;
      v43 = 0xFFFFF6FB7DBED7F8uLL;
      if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v44 = MiReadPteShadow(NextPageTable, *(_QWORD *)NextPageTable);
        LOWORD(v38) = v152;
        v42 = v44;
        v39 = v139;
        v43 = 0xFFFFF6FB7DBED7F8uLL;
      }
      v142 = v42;
      if ( v42 )
        break;
LABEL_251:
      v32 += 4096LL;
      NextPageTable += 8LL;
      v144 = v32;
      if ( NextPageTable > v40 )
        goto LABEL_254;
      v10 = (__int64)v141;
    }
    LOWORD(v39) = v39 + 1;
    v139 = v39;
    if ( (unsigned __int16)v39 > (unsigned __int16)v38 )
      KeBugCheckEx(0x1Au, 0x41793uLL, NextPageTable, (unsigned __int16)v39, (unsigned __int16)v38);
    if ( (v42 & 1) != 0 )
    {
      if ( (v35 & 0x20) != 0 )
      {
        v45 = MI_GET_PAGE_FRAME_FROM_PTE(&v142);
        if ( (unsigned int)MiIsPfnInline(v45) )
        {
          v142 = 0LL;
          v49 = MI_GET_PFN_FROM_PTE(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v46, v47, v48);
          MiLockPageAtDpcInline(v49);
          *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v50 = v142;
        }
        else
        {
          v50 = v42 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v142 = v50;
        }
        *(_QWORD *)NextPageTable = v50;
        if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(NextPageTable, v50);
        MiInsertTbFlushEntry(&v164, v32, 1LL, 0LL);
        goto LABEL_50;
      }
      if ( (v35 & 8) != 0 )
      {
        if ( MiRotatedToFrameBuffer((__int64 *)NextPageTable) )
        {
          MiUnmapFrameBuffer((__int64 *)NextPageTable, 3, 0, &v163);
          MiInsertTbFlushEntry(&v164, v32, 1LL, 0LL);
          goto LABEL_50;
        }
        v34 = v147;
      }
      if ( v150 )
      {
        v43 = (__int64)((NextPageTable << 25) - v34) >> 16;
        if ( v43 >= 0xFFFFF68000000000uLL && v43 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_88;
        v43 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v60 = *(_QWORD *)v43;
        if ( v43 >= 0xFFFFF6FB7DBED000uLL && v43 <= 0xFFFFF6FB7DBED7F8uLL )
          v60 = MiReadPteShadow(v43, *(_QWORD *)v43);
        if ( (v60 & 1) != 0 )
          v61 = HIBYTE(v60);
        else
          LOBYTE(v61) = 10;
        if ( (v61 & 0xF) != 7 )
        {
LABEL_88:
          if ( (v41 & 0x20) != 0 )
            MiLogPageAccess(v10, NextPageTable, v43, v34);
        }
      }
      v63 = MI_GET_PFN_FROM_PTE(&v142, v39, v43, v34);
      if ( (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        if ( (a3 & 1) != 0 && (unsigned int)MiGetPfnPriority(v63) - 3 <= 2 )
          MiLockSetPfnPriority(v66, 2LL);
        if ( (a3 & 4) != 0
          && !DecayPfn
          && (v42 & 0x42) == 0
          && (*(_QWORD *)(v63 + 40) & 0x200000000000000LL) != 0
          && (*(_BYTE *)(v63 + 34) & 0x10) == 0 )
        {
          PfnPriority = MiGetPfnPriority(v63);
          if ( PfnPriority < 5 )
            DecayPfn = MiCreateDecayPfn(PfnPriority);
        }
      }
      v68 = 0;
      v69 = (unsigned __int64 *)(((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v70 = (_BYTE *)MI_GET_PFN_FROM_PTE(v69, v62, v64, v65);
      v72 = v70;
      if ( v32 < v71 || v32 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v75 = *v69;
        v73 = 1;
        if ( (unsigned __int64)v69 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v69 <= 0xFFFFF6FB7DBED7F8uLL )
          v75 = MiReadPteShadow(v69, *v69);
        if ( (v75 & 1) != 0 )
          WsleContents = HIBYTE(v75) & 0xF | (16 * ((v75 >> 60) & 7));
        else
          WsleContents = 10;
        v76 = (*((_QWORD *)v72 + 5) >> 57) & 1LL;
        if ( (WsleContents & 0xF) == 8 )
        {
          MiUnlockWsle(v141, v144, v72);
          WsleContents = MiGetWsleContents(v77, v144);
          v71 = 0xFFFFF68000000000uLL;
        }
        if ( (_DWORD)v76 )
        {
          v78 = v144;
          goto LABEL_117;
        }
      }
      else
      {
        v73 = 0;
        WsleContents = (*v70 >> 1) & 7;
      }
      --*((_QWORD *)v141 + 18);
      v78 = v144;
      if ( v144 < v71 || v144 > 0xFFFFF6FFFFFFFFFFuLL )
        --*((_QWORD *)v141 + 16);
LABEL_117:
      v79 = *v69;
      v80 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v69 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v69 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v79) )
      {
        LOBYTE(v79) = v79 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v79) = 32;
      }
      else if ( (MiFlags & 0x2000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v79 & 0x20) != 0 )
      {
        *v69 = 0LL;
        if ( (unsigned __int64)v69 >= v80 && (unsigned __int64)v69 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v69, 0LL);
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v69) & 0x20) == 0 )
      {
LABEL_132:
        v10 = (__int64)v141;
        MiRemoveWsle(v141, v78, WsleContents, 10LL, BugCheckParameter4);
        v81 = v73 == 0;
        v32 = v144;
        if ( !v81 )
        {
          v82 = (__int64 *)(((v144 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          v83 = *v82;
          if ( (unsigned __int64)v82 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v82 <= 0xFFFFF6FB7DBED7F8uLL )
            v83 = MiReadPteShadow(((v144 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v82);
          v161 = v83;
          v85 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v161) - 0x58000000000LL);
          if ( ((*(_DWORD *)v85 >> 4) & 0x3FF) == 0 )
          {
            v87 = v147;
            v88 = ((v84 << 25) - v147) >> 16;
            memset(v169, 0, sizeof(v169));
            do
            {
              v89 = *(_QWORD *)v88;
              if ( v88 >= 0xFFFFF6FB7DBED000uLL && v88 <= v86 )
                LOBYTE(v89) = MiReadPteShadow(v88, *(_QWORD *)v88);
              if ( (v89 & 1) != 0 )
              {
                v90 = (unsigned __int64 *)((((unsigned __int64)((__int64)((v88 << 25) - v87) >> 16) >> 9) & 0x7FFFFFFFF8LL)
                                         - 0x98000000000LL);
                v91 = *v90;
                if ( (unsigned __int64)v90 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v90 <= v86 )
                  v91 = MiReadPteShadow(v90, *v90);
                if ( (v91 & 1) != 0 )
                  v92 = HIBYTE(v91);
                else
                  LOBYTE(v92) = 10;
                v93 = v92 & 0xF;
                if ( v93 != 10 && v93 != 9 && v93 != 8 )
                  ++*((_DWORD *)v169 + v93);
              }
              v88 += 8LL;
            }
            while ( (v88 & 0xFFF) != 0 );
            v32 = v144;
            v10 = (__int64)v141;
            v94 = 8;
            while ( 1 )
            {
              v95 = *((_DWORD *)v169 + (unsigned __int8)--v94);
              if ( v95 )
                break;
              if ( !v94 )
                goto LABEL_158;
            }
            *v85 = *v85 & 0xFFFFFFFFFFFE000FuLL | (16 * (v95 & 0x3FF | ((unsigned __int64)(v94 & 7) << 10)));
          }
        }
LABEL_158:
        if ( !v68 )
          goto LABEL_176;
        v96 = 1LL;
        v97 = v165;
        v98 = v32;
        if ( v164 != 1 )
        {
          if ( (v165 & 8) == 0 && v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v97 = v165 | 8;
            LOBYTE(v165) = v165 | 8;
          }
          if ( v164 )
          {
            for ( i = v32; i >= 0xFFFFF68000000000uLL; i = (__int64)((i << 25) - v147) >> 16 )
            {
              if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                break;
            }
          }
        }
        v100 = HIDWORD(v166);
        if ( HIDWORD(v166) )
        {
          v101 = v97 & 4;
          if ( !v101 )
          {
            v102 = Base[HIDWORD(v166) - 1];
            if ( (v102 & 0xC00) == 0 )
            {
              v103 = Base[HIDWORD(v166) - 1] & 0x3FFLL;
              if ( (v102 & 0xFFFFFFFFFFFFF000uLL) + ((v103 + 1) << 12) == v32 && v103 + 1 >= v103 && v103 + 1 <= 0x3FF )
              {
                ++v167;
                Base[HIDWORD(v166) - 1] = ((unsigned __int16)v102 ^ (unsigned __int16)(v102 + 1)) & 0x3FF ^ v102;
                goto LABEL_175;
              }
            }
          }
          if ( !v101 )
          {
            v105 = Base[HIDWORD(v166) - 1];
            if ( (v105 & 0xC00) == 0 && (v105 & 0xFFFFFFFFFFFFF000uLL) == v32 + 4096 )
            {
              v106 = Base[HIDWORD(v166) - 1] & 0x3FFLL;
              if ( v106 + 1 >= v106 && v106 + 1 <= 0x3FF )
              {
                ++v167;
                Base[HIDWORD(v166) - 1] = ((unsigned __int16)(v105 - 4096) ^ (unsigned __int16)(v105 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v105 - 4096);
                goto LABEL_175;
              }
            }
          }
        }
        if ( HIDWORD(v166) < (unsigned int)v166 )
        {
          while ( 1 )
          {
            v107 = 1024LL;
            if ( (unsigned __int64)(v96 - 1) <= 0x3FF )
              v107 = v96;
            v96 -= v107;
            v108 = v98 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v107 - 1) & 0x3FF;
            v98 += v107 << 12;
            Base[v100] = v108;
            v167 += v107;
            v100 = HIDWORD(v166) + 1;
            HIDWORD(v166) = v100;
            if ( v100 == (_DWORD)v166 && (v165 & 4) == 0 )
            {
              qsort(Base, v100, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v164);
              v100 = HIDWORD(v166);
              if ( HIDWORD(v166) == (_DWORD)v166 )
                break;
            }
            if ( !v96 )
              goto LABEL_175;
          }
          v10 = (__int64)v141;
          if ( v96 )
          {
            HIBYTE(v165) = 1;
            v167 = HIDWORD(v166);
          }
          goto LABEL_176;
        }
        HIBYTE(v165) = 1;
LABEL_175:
        v10 = (__int64)v141;
LABEL_176:
        v104 = v42 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v142 = v104;
        *(_QWORD *)NextPageTable = v104;
        if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(NextPageTable, v104);
        v33 = v155;
        goto LABEL_50;
      }
      v68 = 1;
      goto LABEL_132;
    }
    if ( (v42 & 0x400) != 0 )
    {
      MiGetPrototypePteDirect(v42);
      IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v42);
      if ( IsPrototypePteVadLookup || (v42 & 0x800) == 0 )
      {
        if ( !v160[1].Affinity.Bitmap[12] )
          goto LABEL_209;
        if ( IsPrototypePteVadLookup )
          goto LABEL_209;
        CloneAddress = MiLocateCloneAddress(v160, v110, v111, v112);
        if ( !CloneAddress )
          goto LABEL_209;
        v113 = MiDecrementCloneBlockReference(CloneAddress, v115);
      }
      else
      {
        v113 = MiDecrementCombinedPte(v10, v110);
      }
      if ( v113 == 3 )
      {
        ++*(_QWORD *)(v149 + 8);
      }
      else if ( v113 == 5 )
      {
        ++*(_QWORD *)(v149 + 16);
      }
LABEL_209:
      *(_QWORD *)NextPageTable = 0LL;
      if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_211;
      goto LABEL_50;
    }
    if ( (v42 & 0x800) != 0 )
      goto LABEL_50;
    if ( (v42 & 0x3E0) == 0 )
      KeBugCheckEx(0x1Au, 0x41792uLL, NextPageTable, v42, 0LL);
    v146 = v42;
    if ( (v42 & 4) != 0 )
    {
      v116 = v42;
      v39 = (unsigned __int64)&v146;
      if ( (unsigned __int64)&v146 >= 0xFFFFF6FB7DBED000uLL )
      {
        v39 = (unsigned __int64)&v146;
        if ( (unsigned __int64)&v146 <= 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_217;
      }
    }
    else if ( (v42 & 2) != 0 )
    {
      v116 = v42;
      v39 = (unsigned __int64)&v146;
      if ( (unsigned __int64)&v146 >= 0xFFFFF6FB7DBED000uLL )
      {
        v39 = (unsigned __int64)&v146;
        if ( (unsigned __int64)&v146 <= 0xFFFFF6FB7DBED7F8uLL )
LABEL_217:
          v116 = MiReadPteShadow(&v146, v42);
      }
    }
    else
    {
      v116 = 0LL;
    }
    v146 = v116;
    if ( v116 )
      MiReleasePageFileInfo(v162, v116, 0LL);
    v117 = MiReverseSwizzleInvalidPte(v42, v39, v43);
    if ( (v117 & 0x400) != 0 || (v117 & 0x800) != 0 || (v117 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v160[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
    *(_QWORD *)NextPageTable = 0LL;
    if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
LABEL_211:
      MiWritePteShadow(NextPageTable, 0LL);
LABEL_50:
    v51 = qword_140388568;
    if ( (v165 & 2) == 0 && v164 == 1 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] )
      v51 = -1LL;
    if ( (HIDWORD(v166) >= (unsigned int)v166 || HIBYTE(v165) || v167 > v51) && v51 >= 0x400 && !HIBYTE(v165) )
      MiFlushTbList(&v164);
    v52 = *(_QWORD *)NextPageTable;
    if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
      v52 = MiReadPteShadow(NextPageTable, *(_QWORD *)NextPageTable);
    v142 = v52;
    if ( v52 )
    {
      v159 = (__int64 *)NextPageTable;
      if ( !v33 )
        v33 = (__int64 *)NextPageTable;
      v155 = v33;
    }
    LOWORD(v38) = v152;
    v39 = v139;
    if ( NextPageTable == v148 || (_WORD)v139 == (_WORD)v152 )
      goto LABEL_250;
    if ( (((_BYTE)NextPageTable + 8) & 0x78) != 0 )
      goto LABEL_73;
    v53 = &dword_140389780;
    if ( (*(_BYTE *)(v10 + 192) & 7) != 2 )
      v53 = (LONG *)(v10 + 200);
    if ( (*v53 & 0x40000000) == 0 )
    {
LABEL_73:
      CurrentPrcb = KeGetCurrentPrcb();
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v58 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v59 = 1;
LABEL_246:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
              EtwTraceShouldYieldProcessor(v59, DpcWatchdogCount, DpcTimeCount);
            if ( v59 )
              goto LABEL_253;
LABEL_249:
            v39 = v139;
            LOWORD(v38) = v152;
LABEL_250:
            LOBYTE(v35) = a3;
            v40 = v148;
            v34 = v147;
            goto LABEL_251;
          }
LABEL_241:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v59 = 5;
            goto LABEL_246;
          }
          if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
          {
            v59 = 6;
            goto LABEL_246;
          }
LABEL_245:
          _disable();
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          v59 = 0;
          goto LABEL_246;
        }
      }
      else
      {
        v58 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v59 = 2;
          goto LABEL_246;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v59 = 3;
          goto LABEL_246;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v59 = 4;
          goto LABEL_246;
        }
      }
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_249;
      if ( v58 )
        goto LABEL_241;
      goto LABEL_245;
    }
LABEL_253:
    v145 = 2;
    NextPageTable += 8LL;
LABEL_254:
    v36 = v159;
LABEL_255:
    MiFlushTbList(&v164);
    if ( v33 )
      MiDeletePteRun(v33, v36, (unsigned __int64)v160, DecayPfn, v149);
    if ( DecayPfn )
    {
      MiDecayPfnFullyInitialized(DecayPfn);
      DecayPfn = 0LL;
    }
    v10 = (__int64)v141;
    v31 = NextPageTable - 8;
    v20 = v139;
    v13 = &dword_140389780;
    NextPageTable -= 8LL;
LABEL_260:
    if ( (a3 & 0x10) != 0 )
    {
      v119 = MI_GET_PFN_FROM_PTE(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v22, v23, v24);
      MiLockPageAtDpcInline(v119);
      v25 = *(_QWORD *)(v119 + 24);
      *(_QWORD *)(v119 + 24) = v25 ^ (v25 ^ (v25 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v119 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v120 = BugCheckParameter2;
    if ( v20 )
    {
      v121 = HIWORD(*(_DWORD *)(BugCheckParameter2 + 16)) & 0x3FF;
      if ( v121 < v20 )
        KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v121, v20);
      v158 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v158);
          while ( *(__int64 *)(v120 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v120 + 24), 0x3FuLL) );
      }
      v25 = *(_QWORD *)(v120 + 16) ^ ((unsigned int)*(_QWORD *)(v120 + 16) ^ ((unsigned __int16)(WORD1(*(_QWORD *)(v120 + 16))
                                                                                               - v20) << 16)) & 0x3FF0000;
      *(_QWORD *)(v120 + 16) = v25;
      _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v120 && (*(_DWORD *)(v120 + 16) & 0x3FF0000) == 0 )
      MiDeletePageTableHierarchy(v25, NextPageTable);
    if ( v145 == 2 )
      goto LABEL_276;
    v122 = &dword_140389780;
    if ( (*(_BYTE *)(v10 + 192) & 7) != 2 )
      v122 = (LONG *)(v10 + 200);
    if ( (*v122 & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
LABEL_276:
      MiFlushTbList(&v164);
      v123 = v154;
      if ( !v154 )
      {
        v6 = a4;
        MiRelockWorkingSetExclusive(v10, a4);
        goto LABEL_280;
      }
      MiUnlockWorkingSetExclusive(v10, a4);
      v124 = MiFreeLargePages(v123);
      v5 = v149;
      v154 = 0LL;
      *(_QWORD *)(v149 + 8) += v124;
      SharedVm = MiGetSharedVm(v10);
      ExAcquireSpinLockExclusive(SharedVm);
      v6 = a4;
      SharedVm[1] = 0;
    }
    else
    {
      v6 = a4;
LABEL_280:
      v5 = v149;
    }
    v12 = v157;
    v11 = v31 + 8;
  }
  while ( v11 <= v157 );
  v126 = v154;
  if ( v154 )
  {
    MiFlushTbList(&v164);
    MiUnlockWorkingSetExclusive(v10, a4);
    *(_QWORD *)(v5 + 8) += MiFreeLargePages(v126);
    v127 = MiGetSharedVm(v10);
    LOBYTE(v128) = ExAcquireSpinLockExclusive(v127);
    v127[1] = 0;
    return v128;
  }
  v6 = a4;
LABEL_285:
  MiPreUnlockWorkingSetExclusive(v10, v6);
  if ( (*(_BYTE *)(v10 + 192) & 7) != 2 )
    v13 = (LONG *)(v10 + 200);
  v129 = 0;
  if ( (*v13 & 0x40000000) != 0 )
  {
    v130 = 1;
    v13[1] = 1;
  }
  else
  {
    v130 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
  else
    *v13 = 0;
  __writecr8(v6);
  if ( v130 )
  {
    v131 = v13[1];
    v151 = 0;
    if ( v131 )
    {
      while ( 1 )
      {
        KeYieldProcessorEx(&v151);
        if ( (v151 & 0x3F) == 0 )
          break;
        if ( !v13[1] )
          goto LABEL_299;
      }
      v129 = 1;
    }
  }
LABEL_299:
  CurrentIrql = KeGetCurrentIrql();
  LOBYTE(v128) = 2;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v128) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13, CurrentIrql);
  }
  else
  {
    v133 = 0;
    if ( _interlockedbittestandset(v13, 0x1Fu) )
    {
      v128 = ExpWaitForSpinLockExclusiveAndAcquire(v13, CurrentIrql);
      v133 = v128;
    }
    for ( j = *v13; (j & 0xBFFFFFFF) != 0x80000000; LOBYTE(v128) = j )
    {
      if ( (j & 0x40000000) == 0 )
      {
        v135 = _InterlockedCompareExchange(v13, j | 0x40000000, j);
        v81 = j == v135;
        j = v135;
        if ( !v81 )
          continue;
      }
      if ( (++v133 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v133);
      j = *v13;
    }
  }
  if ( !v129 )
    v13[1] = 0;
  return v128;
}
