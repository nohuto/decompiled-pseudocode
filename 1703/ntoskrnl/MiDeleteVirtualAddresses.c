/*
 * XREFs of MiDeleteVirtualAddresses @ 0x1400D3840
 * Callers:
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x140122914 (MiDeleteRotateAndStopFaults.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x1400036F4 (MiDecrementCloneBlockReference.c)
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x14000D778 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiCompressTbFlushList @ 0x1400182F0 (MiCompressTbFlushList.c)
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400344A8 (MiInsertLargeTbFlushEntry.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockSetPfnPriority @ 0x140075EE0 (MiLockSetPfnPriority.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiGetNextPageTable @ 0x1400D2560 (MiGetNextPageTable.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiDeletePageTableHierarchy @ 0x1401052C0 (MiDeletePageTableHierarchy.c)
 *     MiUnmapFrameBuffer @ 0x140122FFC (MiUnmapFrameBuffer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     MiPteHasShadow @ 0x14017C9F0 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeLargePages @ 0x1402216DC (MiFreeLargePages.c)
 *     EtwTraceShouldYieldProcessor @ 0x140253C08 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDeleteVirtualAddresses(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  char v6; // si
  unsigned __int64 v7; // r14
  _KPROCESS *Process; // rax
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  LONG *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 NextPageTable; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR UsedPtesHandle; // r12
  unsigned __int16 v23; // si
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // r13d
  __int64 v36; // r14
  __int64 v37; // r14
  unsigned __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int16 v40; // r9
  char *v41; // rbx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // rax
  char *v44; // rsi
  ULONG_PTR v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int64 v49; // r10
  __int16 v50; // r11
  ULONG_PTR v51; // rbx
  unsigned __int16 v52; // r11
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  char v62; // al
  __int64 v63; // rsi
  __int64 v64; // r8
  char v65; // dl
  __int64 v66; // rcx
  unsigned int PfnPriority; // eax
  _DWORD *v68; // rax
  __int64 v69; // r9
  unsigned __int64 v70; // r11
  unsigned __int8 WsleContents; // dl
  unsigned __int64 v72; // rax
  __int64 v73; // r10
  char v74; // al
  BOOL v75; // esi
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  LONG *v82; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v84; // ebx
  unsigned int DpcWatchdogCount; // r14d
  __int64 DpcRequestSummary; // r9
  unsigned int DpcTimeCount; // esi
  int v88; // edx
  __int64 v89; // rbx
  char v90; // r10
  unsigned __int64 v91; // rsi
  unsigned __int64 i; // rax
  unsigned int v93; // r8d
  char v94; // r10
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // r9
  __int64 v97; // rax
  unsigned __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v102; // rdx
  int v103; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rcx
  unsigned __int64 v108; // rax
  __int16 v109; // ax
  _KTHREAD *NextThread; // rax
  __int64 v111; // rbx
  LONG *v112; // rax
  LONG *v113; // rsi
  int v114; // r15d
  int v115; // ebx
  unsigned int v116; // ebx
  unsigned __int8 CurrentIrql; // cl
  unsigned int v118; // ebx
  signed __int32 v119; // edx
  bool v120; // zf
  signed __int32 v121; // eax
  unsigned __int8 v122; // si
  __int64 v123; // rax
  LONG *SharedVm; // rbx
  LONG *v125; // rbx
  int v126; // eax
  int v127; // esi
  int v128; // ebx
  LONG v129; // eax
  unsigned __int8 v130; // cl
  signed __int32 j; // edx
  signed __int32 v132; // eax
  unsigned __int8 v134; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v135; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v137; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v139; // [rsp+50h] [rbp-B0h]
  unsigned int v140; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v141; // [rsp+60h] [rbp-A0h]
  BOOL v142; // [rsp+68h] [rbp-98h]
  int v143; // [rsp+70h] [rbp-90h] BYREF
  int v144; // [rsp+74h] [rbp-8Ch] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+78h] [rbp-88h]
  unsigned __int64 v146; // [rsp+80h] [rbp-80h]
  __int64 v147; // [rsp+88h] [rbp-78h]
  int v148; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v149; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v150; // [rsp+A0h] [rbp-60h]
  char *v151; // [rsp+A8h] [rbp-58h]
  _KPROCESS *v152; // [rsp+B0h] [rbp-50h]
  __int64 v153; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v154; // [rsp+C0h] [rbp-40h]
  struct _KEVENT *v155; // [rsp+C8h] [rbp-38h]
  char v156[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v157; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v158; // [rsp+E4h] [rbp-1Ch]
  __int64 v159; // [rsp+E8h] [rbp-18h]
  __int64 v160; // [rsp+F0h] [rbp-10h]
  _QWORD Base[21]; // [rsp+F8h] [rbp-8h] BYREF
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v5 = a5;
  v6 = a3;
  v7 = a1 >> 9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = 0LL;
  v10 = WORD2(Process[1].SecurePid);
  v11 = (__int64)&Process[1].IdealNode[12];
  v152 = Process;
  v134 = a4;
  v141 = a5;
  v139 = &Process[1].IdealNode[12];
  v155 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * v10);
  v157 = 1;
  ListEntry = 0LL;
  v147 = 0LL;
  v159 = 20LL;
  v158 = 0;
  v160 = 0LL;
  Base[0] = 0LL;
  v12 = (v7 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = &dword_14036D4C0;
  v154 = v13;
  if ( v12 <= v13 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v12, v13, (__int64)&v157, a4, 4, &v140);
      if ( !NextPageTable )
        break;
      if ( v140 )
      {
        v18 = v140;
        do
        {
          NextPageTable = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v18;
        }
        while ( v18 );
        v137 = MI_READ_PTE_LOCK_FREE(NextPageTable);
        MI_GET_PAGE_FRAME_FROM_PTE(&v137);
        if ( NextPageTable < 0xFFFFF6FB7DBED000uLL || NextPageTable > 0xFFFFF6FB7DBEDFFFuLL )
        {
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)((NextPageTable << 25) - (v21 << 25)) >> 16, v19, v20, v21);
          v23 = 1;
        }
        else
        {
          UsedPtesHandle = 0LL;
          v23 = 0;
        }
        *(_QWORD *)NextPageTable = 0LL;
        if ( (unsigned int)MiPteInShadowRange(NextPageTable) )
          MiWritePteShadow(v24);
        v26 = 48 * v25 - 0x58000000000LL;
        MiInsertLargeTbFlushEntry((__int64)&v157, v140, NextPageTable);
        v30 = 0x200000000000000LL;
        if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) == 0 )
        {
          *(_QWORD *)v26 = v9;
          MiLockPageAtDpcInline(v26);
          v31 = *(_QWORD *)(v26 + 40);
          if ( v140 == 1 )
          {
            v32 = v31 & 0xFFFFFFFFFFFFFFFEuLL;
            v30 = 0xFFFFFFFFELL;
          }
          else
          {
            v32 = v31 & 0xFFFFFFFFFFFFFFFBuLL;
            v30 = 0xFFFFFFFFBLL;
          }
          *(_QWORD *)(v26 + 40) = v30 | v32;
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v147 = v26;
        }
        v33 = v140;
        v34 = NextPageTable + 8;
        v35 = 0;
        if ( v140 )
        {
          v30 = 0LL;
          do
          {
            v34 = v34 << 25 >> 16;
            --v33;
          }
          while ( v33 );
        }
        v36 = v34 - 8;
        goto LABEL_190;
      }
      v142 = (v6 & 2) != 0 && (*(_BYTE *)(v11 + 195) & 1) == 0 && dword_14036CA68;
      v37 = 0LL;
      v153 = 0LL;
      v38 = (__int64)(NextPageTable << 25) >> 16;
      v39 = MiGetUsedPtesHandle(v38, v15, v16, 1LL);
      UsedPtesHandle = v39;
      v135 = 0;
      if ( (v6 & 0x10) != 0 )
        v135 = v40;
      v41 = 0LL;
      v42 = (unsigned __int64)*(unsigned int *)(v39 + 16) >> 16;
      BugCheckParameter2 = 0LL;
      v43 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v151 = 0LL;
      v44 = 0LL;
      v146 = v42 & 0x3FF;
      if ( v43 > v154 )
        v43 = v154;
      v150 = v43;
      if ( NextPageTable <= v43 )
      {
        while ( 1 )
        {
          v45 = MI_READ_PTE_LOCK_FREE(NextPageTable);
          v137 = v45;
          v51 = v45;
          if ( v45 )
            break;
LABEL_181:
          v44 = (char *)BugCheckParameter2;
          NextPageTable += 8LL;
          v38 += 4096LL;
          if ( NextPageTable > v49 )
          {
            v41 = v151;
            v35 = 0;
            goto LABEL_185;
          }
        }
        v52 = v50 + 1;
        v135 = v52;
        if ( v52 > (unsigned __int16)v48 )
          KeBugCheckEx(0x1Au, 0x41793uLL, NextPageTable, v52, (unsigned __int16)v48);
        if ( (v45 & 1) != 0 )
        {
          if ( (a3 & 0x20) != 0 )
          {
            v53 = MI_GET_PAGE_FRAME_FROM_PTE(&v137);
            if ( MiIsPfnInline(v53) )
            {
              v137 = 0LL;
              v57 = MI_GET_PFN_FROM_PTE(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v54, v55, v56);
              MiLockPageAtDpcInline(v57);
              *(_QWORD *)(v57 + 24) ^= (((*(_QWORD *)(v57 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ *(_QWORD *)(v57 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v58 = v137;
            }
            else
            {
              v58 = v51 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              v137 = v58;
            }
            *(_QWORD *)NextPageTable = v58;
            if ( (unsigned int)MiPteInShadowRange(NextPageTable) )
              MiWritePteShadow(v59);
            MiInsertTbFlushEntry(&v157, v38, 1LL, 0LL);
            goto LABEL_87;
          }
          if ( (a3 & 8) != 0 && MiRotatedToFrameBuffer(NextPageTable) )
          {
            MiUnmapFrameBuffer(NextPageTable, 3LL, 0LL, v156);
            MiInsertTbFlushEntry(&v157, v38, 1LL, 0LL);
            goto LABEL_87;
          }
          if ( v142 )
          {
            if ( (v46 = 0xFFFFF68000000000uLL,
                  v60 = (__int64)((NextPageTable << 25) - v37) >> 16,
                  v60 >= 0xFFFFF68000000000uLL)
              && v60 <= 0xFFFFF6FFFFFFFFFFuLL
              || ((v61 = MI_READ_PTE_LOCK_FREE(((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), (v61 & 1) != 0)
                ? (v62 = HIBYTE(v61) & 0xF ^ (HIBYTE(v61) & 0xF ^ (16 * (v61 >> 60))) & 0x70)
                : (v62 = 10),
                  (v62 & 0xF) != 7) )
            {
              if ( (*(_BYTE *)NextPageTable & 0x20) != 0 )
                MiLogPageAccess(v139, NextPageTable);
            }
          }
          v63 = MI_GET_PFN_FROM_PTE(&v137, v46, v47, v48);
          if ( (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            v65 = a3;
            if ( (a3 & 1) != 0 && (unsigned int)MiGetPfnPriority(v63) - 3 <= 2 )
            {
              MiLockSetPfnPriority(v66, 2);
              v65 = a3;
            }
            if ( (v65 & 4) != 0
              && !ListEntry
              && (v51 & 0x42) == 0
              && (*(_QWORD *)(v63 + 40) & 0x200000000000000LL) != 0
              && (*(_BYTE *)(v63 + 34) & 0x10) == 0 )
            {
              PfnPriority = MiGetPfnPriority(v63);
              if ( PfnPriority < 5 )
                ListEntry = MiCreateDecayPfn(PfnPriority);
            }
          }
          v68 = (_DWORD *)MI_GET_PFN_FROM_PTE(
                            ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                            (v38 >> 9) & 0x7FFFFFFFF8LL,
                            v64,
                            ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( v38 >= v70 && v38 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            WsleContents = (*v68 >> 2) & 7;
            goto LABEL_73;
          }
          v72 = MI_READ_PTE_LOCK_FREE(v69);
          if ( (v72 & 1) != 0 )
            v74 = HIBYTE(v72) & 0xF ^ (HIBYTE(v72) & 0xF ^ (16 * (v72 >> 60))) & 0x70;
          else
            v74 = 10;
          WsleContents = v74;
          v75 = (*(_QWORD *)(v73 + 40) & 0x200000000000000LL) != 0;
          if ( (v74 & 0xF) == 8 )
          {
            MiUnlockWsle((__int64)v139, v38, v73);
            WsleContents = MiGetWsleContents(v76, v38);
            v70 = 0xFFFFF68000000000uLL;
          }
          if ( v75 )
          {
            v77 = (__int64)v139;
          }
          else
          {
LABEL_73:
            v77 = (__int64)v139;
            --*((_QWORD *)v139 + 18);
            if ( v38 < v70 || v38 > 0xFFFFF6FFFFFFFFFFuLL )
              --*(_QWORD *)(v77 + 128);
          }
          MiRemoveWsle(v77, v38, WsleContents, 10LL);
          v137 = v51 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v78 = MiPteInShadowRange(NextPageTable);
          v81 = v78;
          if ( v78 && (unsigned int)MiPteHasShadow(v80, v79, v78) )
            LOBYTE(v79) = v79 | 0x20;
          if ( (MiFlags & 0x800) != 0 )
          {
            LOBYTE(v79) = v79 | 0x20;
          }
          else if ( (MiFlags & 0x2000000) != 0 )
          {
            _mm_lfence();
          }
          if ( (v79 & 0x20) != 0 )
          {
            *(_QWORD *)NextPageTable = v137;
            if ( (_DWORD)v81 )
              MiWritePteShadow(NextPageTable);
          }
          else if ( (MI_INTERLOCKED_EXCHANGE_PTE(NextPageTable, v137, v81) & 0x20) == 0 )
          {
LABEL_86:
            v44 = (char *)BugCheckParameter2;
            goto LABEL_87;
          }
          v89 = 1LL;
          v90 = v158;
          v91 = v38;
          if ( v157 != 1 )
          {
            if ( (v158 & 8) == 0 && v38 >= 0xFFFFF68000000000uLL && v38 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v90 = v158 | 8;
              LOBYTE(v158) = v158 | 8;
            }
            if ( v157 )
            {
              for ( i = v38; i >= 0xFFFFF68000000000uLL; i = (__int64)((i << 25) - v37) >> 16 )
              {
                if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
              }
            }
          }
          v93 = HIDWORD(v159);
          if ( HIDWORD(v159) )
          {
            v94 = v90 & 4;
            if ( !v94 )
            {
              v95 = Base[HIDWORD(v159) - 1];
              if ( (v95 & 0xC00) == 0 )
              {
                v96 = Base[HIDWORD(v159) - 1] & 0x3FFLL;
                if ( (v95 & 0xFFFFFFFFFFFFF000uLL) + ((v96 + 1) << 12) == v38 && v96 + 1 >= v96 && v96 + 1 <= 0x3FF )
                {
                  ++v160;
                  Base[HIDWORD(v159) - 1] = ((unsigned __int16)v95 ^ (unsigned __int16)(v95 + 1)) & 0x3FF ^ v95;
                  goto LABEL_86;
                }
              }
            }
            if ( !v94 )
            {
              v97 = Base[HIDWORD(v159) - 1];
              if ( (v97 & 0xC00) == 0 && (v97 & 0xFFFFFFFFFFFFF000uLL) == v38 + 4096 )
              {
                v98 = Base[HIDWORD(v159) - 1] & 0x3FFLL;
                if ( v98 + 1 >= v98 && v98 + 1 <= 0x3FF )
                {
                  ++v160;
                  Base[HIDWORD(v159) - 1] = ((unsigned __int16)(v97 - 4096) ^ (unsigned __int16)(v97 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v97 - 4096);
                  goto LABEL_86;
                }
              }
            }
          }
          if ( HIDWORD(v159) >= (unsigned int)v159 )
          {
            HIBYTE(v158) = 1;
            goto LABEL_86;
          }
          while ( 1 )
          {
            v99 = 1024LL;
            if ( (unsigned __int64)(v89 - 1) <= 0x3FF )
              v99 = v89;
            v89 -= v99;
            v100 = v91 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v99 - 1) & 0x3FF;
            v91 += v99 << 12;
            Base[v93] = v100;
            v160 += v99;
            v93 = HIDWORD(v159) + 1;
            HIDWORD(v159) = v93;
            if ( v93 == (_DWORD)v159 && (v158 & 4) == 0 )
            {
              qsort(Base, v93, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
              MiCompressTbFlushList((__int64)&v157);
              v93 = HIDWORD(v159);
              if ( HIDWORD(v159) == (_DWORD)v159 )
                break;
            }
            if ( !v89 )
              goto LABEL_86;
          }
          v44 = (char *)BugCheckParameter2;
          if ( v89 )
          {
            HIBYTE(v158) = 1;
            v160 = HIDWORD(v159);
          }
LABEL_87:
          v137 = MI_READ_PTE_LOCK_FREE(NextPageTable);
          if ( v137 )
          {
            v151 = (char *)NextPageTable;
            if ( !v44 )
              v44 = (char *)NextPageTable;
            BugCheckParameter2 = (ULONG_PTR)v44;
          }
          v49 = v150;
          if ( NextPageTable == v150 || v135 == (_WORD)v146 )
            goto LABEL_181;
          if ( (((_BYTE)NextPageTable + 8) & 0x78) == 0 )
          {
            v82 = &dword_14036D4C0;
            if ( (v139[96] & 7) != 2 )
              v82 = (LONG *)(v139 + 100);
            if ( (*v82 & 0x40000000) != 0 )
            {
LABEL_183:
              v44 = (char *)BugCheckParameter2;
              v35 = 2;
              v41 = v151;
              NextPageTable += 8LL;
              goto LABEL_185;
            }
          }
          CurrentPrcb = KeGetCurrentPrcb();
          v84 = 1;
          DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
          DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
          DpcTimeCount = CurrentPrcb->DpcTimeCount;
          if ( (DpcRequestSummary & 1) != 0 )
          {
            v88 = 1;
            if ( DpcTimeCount > 7 )
            {
              if ( CurrentPrcb->QuantumEnd )
              {
LABEL_176:
                if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                  EtwTraceShouldYieldProcessor(v84, DpcWatchdogCount, DpcTimeCount, DpcRequestSummary);
                if ( v84 )
                  goto LABEL_183;
                v49 = v150;
                goto LABEL_180;
              }
              goto LABEL_171;
            }
          }
          else
          {
            v88 = 0;
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v84 = 2;
              goto LABEL_176;
            }
            if ( CurrentPrcb->QuantumEnd )
            {
              v84 = 3;
              goto LABEL_176;
            }
            NextThread = CurrentPrcb->NextThread;
            if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
            {
              v84 = 4;
              goto LABEL_176;
            }
          }
          if ( DpcWatchdogCount <= 7 )
          {
LABEL_180:
            v37 = v153;
            goto LABEL_181;
          }
          if ( v88 )
          {
LABEL_171:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v84 = 5;
              goto LABEL_176;
            }
            if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
            {
              v84 = 6;
              goto LABEL_176;
            }
          }
          _disable();
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
          _enable();
          v84 = 0;
          goto LABEL_176;
        }
        if ( (v45 & 0x400) != 0 )
        {
          MiGetPrototypePteDirect(v45, v46, v47, v48);
          IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v51);
          if ( IsPrototypePteVadLookup || (v51 & 0x800) == 0 )
          {
            if ( v152[1].Affinity.Bitmap[12] )
            {
              if ( !IsPrototypePteVadLookup )
              {
                CloneAddress = MiLocateCloneAddress((__int64)v152, v102);
                if ( CloneAddress )
                {
                  v103 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v105, v106);
                  goto LABEL_144;
                }
              }
            }
          }
          else
          {
            v103 = MiDecrementCombinedPte(v102);
LABEL_144:
            if ( v103 == 3 )
            {
              ++*(_QWORD *)(v141 + 8);
            }
            else if ( v103 == 5 )
            {
              ++*(_QWORD *)(v141 + 16);
            }
          }
        }
        else
        {
          if ( (v45 & 0x800) != 0 )
            goto LABEL_87;
          if ( (v45 & 0x3E0) == 0 )
            KeBugCheckEx(0x1Au, 0x41792uLL, NextPageTable, v45, 0LL);
          v149 = v45;
          if ( (v45 & 4) != 0 || (v45 & 2) != 0 )
            v108 = MI_READ_PTE_LOCK_FREE(&v149);
          else
            v108 = 0LL;
          v149 = v108;
          if ( v108 )
            MiReleasePageFileInfo(v155, v108, 0);
          v109 = MiReverseSwizzleInvalidPte(v51, v46, v47, v48);
          if ( (v109 & 0x400) != 0 || (v109 & 0x800) != 0 || (v109 & 4) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v152[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
        }
        *(_QWORD *)NextPageTable = 0LL;
        if ( (unsigned int)MiPteInShadowRange(NextPageTable) )
          MiWritePteShadow(v107);
        goto LABEL_87;
      }
      v35 = 0;
LABEL_185:
      MiFlushTbList(&v157);
      if ( v44 )
        MiDeletePteRun(v44, v41, (__int64)v152, (__int64)ListEntry, v141);
      if ( ListEntry )
      {
        MiDecayPfnFullyInitialized(ListEntry);
        ListEntry = 0LL;
      }
      v23 = v135;
      v36 = NextPageTable - 8;
      NextPageTable -= 8LL;
LABEL_190:
      if ( (a3 & 0x10) != 0 )
      {
        v111 = MI_GET_PFN_FROM_PTE(((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v27, v28, v29);
        MiLockPageAtDpcInline(v111);
        v30 = *(_QWORD *)(v111 + 24);
        *(_QWORD *)(v111 + 24) = v30 ^ (v30 ^ (v30 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v111 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( v23 )
      {
        if ( (HIWORD(*(_DWORD *)(UsedPtesHandle + 16)) & 0x3FFu) < (unsigned __int64)v23 )
          KeBugCheckEx(0x1Au, 0x41790uLL, UsedPtesHandle, HIWORD(*(_DWORD *)(UsedPtesHandle + 16)) & 0x3FF, v23);
        v148 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v148);
          while ( (*(_QWORD *)(UsedPtesHandle + 24) & 0x8000000000000000uLL) != 0 );
        }
        v30 = *(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned __int16)(WORD1(*(_QWORD *)(UsedPtesHandle + 16)) - v23) << 16)) & 0x3FF0000;
        *(_QWORD *)(UsedPtesHandle + 16) = v30;
        _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( UsedPtesHandle && (*(_DWORD *)(UsedPtesHandle + 16) & 0x3FF0000) == 0 )
        MiDeletePageTableHierarchy(v30, NextPageTable);
      v11 = (__int64)v139;
      if ( v35 == 2 )
        goto LABEL_206;
      v112 = &dword_14036D4C0;
      if ( (v139[96] & 7) != 2 )
        v112 = (LONG *)(v139 + 100);
      if ( (*v112 & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
LABEL_206:
        MiFlushTbList(&v157);
        v9 = v147;
        if ( v147 )
        {
          v122 = v134;
          MiUnlockWorkingSetExclusive(v11, v134);
          v123 = MiFreeLargePages(v9);
          v5 = v141;
          v9 = 0LL;
          v147 = 0LL;
          *(_QWORD *)(v141 + 8) += v123;
          SharedVm = MiGetSharedVm(v11);
          ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
          v11 = (__int64)v139;
          goto LABEL_243;
        }
        MiPreUnlockWorkingSetExclusive(v11, v134);
        v113 = &dword_14036D4C0;
        if ( (*(_BYTE *)(v11 + 192) & 7) != 2 )
          v113 = (LONG *)(v11 + 200);
        v114 = 0;
        if ( (*v113 & 0x40000000) != 0 )
        {
          v115 = 1;
          v113[1] = 1;
        }
        else
        {
          v115 = 0;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v113, retaddr);
        else
          *v113 = 0;
        __writecr8(v134);
        if ( v115 )
        {
          v116 = 0;
          if ( v113[1] )
          {
            while ( 1 )
            {
              if ( (++v116 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v116);
              if ( (v116 & 0x3F) == 0 )
                break;
              if ( !v113[1] )
                goto LABEL_225;
            }
            v114 = 1;
          }
        }
LABEL_225:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v113, CurrentIrql);
        }
        else
        {
          v118 = 0;
          if ( _interlockedbittestandset(v113, 0x1Fu) )
            v118 = ExpWaitForSpinLockExclusiveAndAcquire(v113, CurrentIrql);
          v119 = *v113;
          while ( (v119 & 0xBFFFFFFF) != 0x80000000 )
          {
            if ( (v119 & 0x40000000) == 0 )
            {
              v121 = _InterlockedCompareExchange(v113, v119 | 0x40000000, v119);
              v120 = v119 == v121;
              v119 = v121;
              if ( !v120 )
                continue;
            }
            if ( (++v118 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v118);
            v119 = *v113;
          }
        }
        v11 = (__int64)v139;
        v5 = v141;
        if ( !v114 )
          v113[1] = 0;
      }
      else
      {
        v5 = v141;
        v9 = v147;
      }
      v122 = v134;
LABEL_243:
      v13 = v154;
      v12 = v36 + 8;
      if ( v12 > v154 )
        goto LABEL_246;
      v6 = a3;
      a4 = v134;
    }
    v122 = v134;
LABEL_246:
    if ( v9 )
    {
      MiFlushTbList(&v157);
      MiUnlockWorkingSetExclusive(v11, v122);
      *(_QWORD *)(v5 + 8) += MiFreeLargePages(v9);
      v125 = MiGetSharedVm(v11);
      LOBYTE(v126) = ExAcquireSpinLockExclusive(v125);
      v125[1] = 0;
      return v126;
    }
    LOBYTE(a4) = v134;
    v14 = &dword_14036D4C0;
  }
  MiPreUnlockWorkingSetExclusive(v11, (unsigned __int8)a4);
  if ( (*(_BYTE *)(v11 + 192) & 7) != 2 )
    v14 = (LONG *)(v11 + 200);
  v127 = 0;
  if ( (*v14 & 0x40000000) != 0 )
  {
    v128 = 1;
    v14[1] = 1;
  }
  else
  {
    v128 = 0;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
  else
    *v14 = 0;
  __writecr8(v134);
  if ( v128 )
  {
    v129 = v14[1];
    v143 = 0;
    if ( v129 )
    {
      while ( 1 )
      {
        KeYieldProcessorEx(&v143);
        if ( (v143 & 0x3F) == 0 )
          break;
        if ( !v14[1] )
          goto LABEL_263;
      }
      v127 = 1;
    }
  }
LABEL_263:
  v130 = KeGetCurrentIrql();
  LOBYTE(v126) = 2;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v126) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v14, v130);
  }
  else
  {
    v144 = 0;
    if ( _interlockedbittestandset(v14, 0x1Fu) )
    {
      v126 = ExpWaitForSpinLockExclusiveAndAcquire(v14, v130);
      v144 = v126;
    }
    for ( j = *v14; (j & 0xBFFFFFFF) != 0x80000000; LOBYTE(v126) = j )
    {
      if ( (j & 0x40000000) == 0 )
      {
        v132 = _InterlockedCompareExchange(v14, j | 0x40000000, j);
        v120 = j == v132;
        j = v132;
        if ( !v120 )
          continue;
      }
      KeYieldProcessorEx(&v144);
      j = *v14;
    }
  }
  if ( !v127 )
    v14[1] = 0;
  return v126;
}
