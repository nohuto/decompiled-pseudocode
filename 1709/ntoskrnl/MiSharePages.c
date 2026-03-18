/*
 * XREFs of MiSharePages @ 0x1400E83E0
 * Callers:
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 * Callees:
 *     MiMapArbitraryPage @ 0x140008F00 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1400097B4 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x14000A0A0 (MiReleaseArbitraryPage.c)
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiCombineCandidate @ 0x14005BD10 (MiCombineCandidate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRecheckVaVm @ 0x140066A38 (MiRecheckVaVm.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiAttachThreadDone @ 0x1400CAF78 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400CAFFC (MiPrepareAttachThread.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiDereferenceCombineBlock @ 0x1400E620C (MiDereferenceCombineBlock.c)
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     MiAllocateCombineProto @ 0x1400E6D7C (MiAllocateCombineProto.c)
 *     MiFlushTbListEarly @ 0x1400E94BC (MiFlushTbListEarly.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiMakeCombineCandidateClean @ 0x1400EB5A4 (MiMakeCombineCandidateClean.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiComputeHash64 @ 0x140107500 (MiComputeHash64.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusive @ 0x140110B40 (ExReleaseSpinLockExclusive.c)
 *     MiConvertPrivateToDemandZero @ 0x14011E33C (MiConvertPrivateToDemandZero.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiHashIsCommon @ 0x14023192C (MiHashIsCommon.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, __int64 a2, __int64 *a3, __int64 **a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 *v7; // r13
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // r14d
  _QWORD *v13; // r12
  _DWORD *PoolWithTag; // rax
  __int64 v15; // rbx
  _BYTE *v16; // r14
  _KPROCESS *v17; // rbx
  int v18; // esi
  int v19; // esi
  LONG *SharedVm; // rbx
  KIRQL v21; // al
  __int64 v22; // rdx
  unsigned __int8 v23; // r8
  char v24; // bl
  unsigned __int8 v25; // al
  int v26; // eax
  int v27; // esi
  _KPROCESS *v28; // rdx
  _QWORD *v29; // rsi
  unsigned __int64 v30; // r14
  __int64 v31; // r10
  __int64 v32; // r8
  __int64 v33; // r9
  ULONG_PTR *v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 PteShadow; // rax
  __int64 v37; // r14
  int v38; // r15d
  char v39; // r10
  __int64 v40; // rcx
  unsigned int v41; // r12d
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // rdx
  int v47; // r9d
  __int64 v48; // r10
  __int64 v49; // r11
  __int64 Address; // rax
  int v51; // ecx
  unsigned int v52; // r15d
  __int64 *v53; // rbx
  _KPROCESS *v54; // rdx
  __int64 v55; // r14
  bool v56; // zf
  unsigned __int64 UltraMapping; // rax
  unsigned __int64 v58; // rbx
  unsigned __int64 ValidPte; // rax
  int v60; // r10d
  int v61; // edx
  _KPROCESS *v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // r11
  __int64 v67; // r11
  __int64 v68; // r14
  __int64 CombineProto; // rax
  __int64 v70; // rax
  _QWORD *v71; // r12
  __int64 v72; // rax
  char v73; // cl
  char v74; // r13
  unsigned __int64 v75; // rax
  _QWORD *v76; // rbx
  char v77; // al
  __int64 v78; // r15
  __int64 v79; // rcx
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // eax
  __int64 v84; // r12
  __int64 v85; // r14
  KIRQL v86; // al
  bool v87; // r8
  KIRQL v88; // r15
  unsigned __int64 *v89; // rbx
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // r8
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  _QWORD *v94; // r15
  int v95; // r14d
  _QWORD *v96; // rbx
  _QWORD *v97; // rsi
  _QWORD *i; // r14
  __int64 v99; // rsi
  unsigned __int64 v100; // rbx
  struct _KTHREAD *v101; // r14
  int v102; // eax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rsi
  unsigned int v105; // ebx
  unsigned __int64 v106; // rdx
  unsigned __int64 j; // rsi
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rax
  bool v110; // cc
  char v111; // bl
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  LONG *v114; // rax
  struct _KTHREAD *v115; // rcx
  _QWORD *v116; // rdx
  _QWORD *v117; // rbx
  __int64 result; // rax
  ULONG_PTR v119; // [rsp+28h] [rbp-D8h]
  KIRQL v120; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v121; // [rsp+44h] [rbp-BCh]
  _BYTE *P; // [rsp+48h] [rbp-B8h]
  char v123; // [rsp+50h] [rbp-B0h]
  __int64 v124; // [rsp+58h] [rbp-A8h]
  int v126; // [rsp+68h] [rbp-98h]
  __int64 *v127; // [rsp+70h] [rbp-90h]
  int v128; // [rsp+78h] [rbp-88h]
  unsigned int v129; // [rsp+7Ch] [rbp-84h]
  int v130; // [rsp+80h] [rbp-80h]
  __int64 v131; // [rsp+88h] [rbp-78h]
  __int64 v132; // [rsp+90h] [rbp-70h]
  _QWORD *v133; // [rsp+98h] [rbp-68h]
  int v134; // [rsp+A0h] [rbp-60h]
  __int64 v135; // [rsp+A8h] [rbp-58h]
  _QWORD *v136; // [rsp+A8h] [rbp-58h]
  __int64 v138; // [rsp+B8h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h]
  _QWORD *v140; // [rsp+C8h] [rbp-38h]
  _QWORD *v141; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v142; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v143; // [rsp+E0h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-18h]
  _KPROCESS *v145; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v146; // [rsp+F8h] [rbp-8h]
  _QWORD *v147; // [rsp+100h] [rbp+0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+108h] [rbp+8h] BYREF
  __int64 v149; // [rsp+120h] [rbp+20h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v150; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v151[208]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD *v152; // [rsp+240h] [rbp+140h]
  __int64 v153; // [rsp+260h] [rbp+160h]
  _QWORD v154[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v155; // [rsp+2A0h] [rbp+1A0h] BYREF

  v6 = *(_QWORD *)(a2 + 32);
  v7 = a3;
  v143 = a6;
  v140 = *(_QWORD **)(a1 + 16);
  v128 = *(_DWORD *)(a1 + 52);
  v141 = *(_QWORD **)(a1 + 24);
  v127 = *a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v129 = 0;
  v132 = 0LL;
  v124 = v6;
  v9 = MiTbFlushType(v6);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = v9;
  v13 = *(_QWORD **)(v10 + 48);
  PoolWithTag = v151;
  P = v151;
  v130 = 0;
  v126 = 0;
  if ( v11 <= 0x14 )
  {
    LODWORD(v15) = *(_QWORD *)(v10 + 24);
  }
  else
  {
    v15 = 509LL;
    if ( v11 < 0x1FD )
      v15 = *(_QWORD *)(v10 + 24);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 24, 0x73576D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v151;
      P = v151;
      LODWORD(v15) = 20;
    }
  }
  *PoolWithTag = v12;
  v16 = P;
  PoolWithTag[3] = 0;
  *((_WORD *)P + 2) = 0;
  *((_QWORD *)P + 2) = 0LL;
  *((_DWORD *)P + 2) = v15;
  *((_QWORD *)P + 3) = 0LL;
  v17 = *(_KPROCESS **)(a2 + 40);
  v145 = v17;
  if ( v17 && v17 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
    v126 = MiPrepareAttachThread((__int64)v17, (__int64)&v17[1].IdealNode[12]);
    v18 = v126;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !v18 )
      goto LABEL_209;
    KiStackAttachProcess(v17, 1, (__int64)&v150);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
LABEL_12:
  v19 = v130;
  v152 = 0LL;
  v153 = 0LL;
  v154[0] = 0LL;
  v155 = 0LL;
  SharedVm = MiGetSharedVm(v6);
  v21 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v22 = v21;
  v120 = v21;
  if ( !v145 )
    goto LABEL_16;
  if ( (HIDWORD(v145[1].DirectoryTableBase) & 0xC00u) < 0xC00 || *(_QWORD *)(v6 + 104) )
    goto LABEL_170;
  if ( !(unsigned int)MiIsStoreProcess((__int64)v145) )
  {
LABEL_16:
    v23 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = 0;
            v25 = v23;
            v133 = v13;
            if ( v23 == 1 )
              v25 = 0;
            v121 = v25;
            v26 = v19 + 1;
            v27 = 0;
            if ( v23 != 1 )
              v27 = v26;
            v130 = v27;
            if ( (v27 & 3) == 0 && (unsigned int)MiWorkingSetIsContended(v6)
              || KeShouldYieldProcessor()
              || (unsigned int)MiFlushTbListEarly(v16, 2LL) )
            {
              v24 = 1;
            }
            if ( !v13 )
            {
              ++v129;
LABEL_156:
              v94 = v154;
              v95 = 2;
              v136 = v154;
              do
              {
                v96 = (_QWORD *)*v94;
                if ( *v94 )
                {
                  do
                  {
                    v97 = (_QWORD *)v96[2];
                    if ( (unsigned int)MiCrcStillIntact((_DWORD)v127, v124, v128, (_DWORD)v96, v95) )
                    {
                      v96[2] = v13;
                      v13 = v96;
                    }
                    else
                    {
                      v28 = (_KPROCESS *)v96[3];
                      if ( (unsigned int)v28 >= 0x100 )
                        MiDereferenceCombineBlock(v7, v28);
                    }
                    v96 = v97;
                  }
                  while ( v97 );
                  v94 = v136;
                }
                *v94 = 0LL;
                ++v95;
                v94 += 4;
                v136 = v94;
              }
              while ( v95 <= 3 );
              MiFlushTbList((__int64)P, v28);
              v6 = v124;
              MiUnlockWorkingSetExclusive(v124, v120);
              for ( i = v152; i; i = (_QWORD *)i[2] )
              {
                v99 = i[1];
                v100 = (unsigned __int8)MiLockPageInline(v99);
                *(_BYTE *)(v99 + 34) = *(_BYTE *)(v99 + 34) & 0xF8 | 6;
                MiDecrementShareCount(v99);
                _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v100);
              }
              if ( !v13 )
              {
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
                goto LABEL_208;
              }
              v16 = P;
              goto LABEL_12;
            }
            if ( v24 )
              goto LABEL_156;
            v29 = (_QWORD *)v13[3];
            v30 = v13[1];
            v31 = *v13;
            v147 = (_QWORD *)v13[2];
            v146 = v30;
            v131 = v31;
            if ( (unsigned int)v29 >= 0x100 )
            {
              v134 = v29[5] & 0x1F;
            }
            else
            {
              v134 = (int)v29;
              v29 = 0LL;
            }
            if ( (unsigned int)MiRecheckVaVm(v6, v30) )
              break;
LABEL_42:
            MiDereferenceCombineBlock(v7, v29);
            v23 = v121;
            v16 = P;
            v13 = v147;
            v19 = v130;
          }
          v34 = (ULONG_PTR *)(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          BugCheckParameter2 = (ULONG_PTR)v34;
          v35 = *v34;
          if ( (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v34 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow(v34, *v34);
            v34 = (ULONG_PTR *)BugCheckParameter2;
            v35 = PteShadow;
          }
          v142 = v35;
          if ( (v35 & 1) != 0 )
          {
            v135 = MI_GET_PAGE_FRAME_FROM_PTE(&v142);
            if ( !(unsigned int)MiIsPfnInline(v135) )
              goto LABEL_42;
            v37 = 48 * v135 - 0x58000000000LL;
            MiLockPageAtDpcInline(v37);
          }
          else
          {
            if ( (v35 & 0x400) != 0 )
              goto LABEL_42;
            if ( (v35 & 0x800) == 0 )
              goto LABEL_42;
            v37 = MiLockTransitionLeafPage(v34, 0LL, v32, v33);
            if ( !v37 )
              goto LABEL_42;
            v135 = (v37 + 0x58000000000LL) / 48;
          }
          v38 = MiCombineCandidate(v127, v128, v37);
          if ( !v38
            || (v39 = *(_BYTE *)(v37 + 34) & 7, v40 = a1, v41 = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F, (v128 & 4) != 0)
            && !(unsigned int)MiHashIsCommon(a1, v131)
            || *(_QWORD *)(v37 + 40) >> 58 != a5 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_46;
          }
          v123 = 0;
          v42 = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v39 != 6 )
            break;
          if ( BugCheckParameter2 != (*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL) )
            goto LABEL_56;
          v43 = *(_QWORD *)(v37 + 40);
          if ( (v43 & 0x200000000000000LL) != 0 )
            goto LABEL_56;
          if ( (*(_BYTE *)(v37 + 35) & 8) != 0 )
            goto LABEL_56;
          v44 = v43 & 0xFFFFFFFFFLL;
          if ( v44 == 0xFFFFFFFFDLL )
            goto LABEL_56;
          v45 = v146;
          if ( (MiGetWsleContents(v44, v146) & 0xF) == 8 )
            goto LABEL_56;
          if ( *(_WORD *)(v37 + 32) != 1 )
          {
            v7 = a3;
            goto LABEL_46;
          }
          Address = 0LL;
          if ( v38 == 1 )
          {
            Address = MiLocateAddress(v45);
            if ( !Address )
              goto LABEL_56;
            v51 = *(_DWORD *)(Address + 48);
            if ( (v51 & 0x100000) != 0 )
              goto LABEL_56;
            v46 = (unsigned int)(1 << (v51 & 7));
            if ( (v46 & 0x55) == 0 )
            {
              v7 = a3;
              goto LABEL_46;
            }
          }
          v52 = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F;
          if ( v52 != v134 )
          {
            v7 = a3;
            goto LABEL_46;
          }
          if ( (v35 & 0x42) != 0 )
          {
            if ( v129 < 8 )
            {
              v53 = v154;
              goto LABEL_87;
            }
            MiMakeCombineCandidateClean(v48, Address);
            MiInsertTbFlushEntry((int *)P, v45, 1LL, 0);
            MiFlushTbList((__int64)P, v54);
            v49 = v131;
LABEL_70:
            v55 = v124;
            goto LABEL_71;
          }
          if ( v49 != qword_140388A90 )
            goto LABEL_91;
          if ( ((*(_DWORD *)(v37 + 16) >> 5) & 0x18) != 0 || (v35 & 0x20) == 0 )
            goto LABEL_70;
          if ( v129 >= 3 )
          {
            v61 = v37;
            v55 = v124;
            if ( (unsigned int)MiClearPteAccessed(v124, v61, v48, (_DWORD)P, dword_140388C68, 0) )
            {
              v142 = v35 & 0xFFFFFFFFFFFFFFDFuLL;
              MiFlushTbList((__int64)P, v62);
              v49 = v131;
LABEL_71:
              if ( v49 == qword_140388A90 )
              {
                v56 = (v52 & 0x18) == 0;
                if ( (v52 & 0x18) != 0 )
                  goto LABEL_92;
                UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a1 + 152), 3u, 1LL, 0);
                v58 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) != 0x98000000000LL )
                {
                  ValidPte = MiMakeValidPte(v58, v135, 536870913);
                  *(_QWORD *)v58 = ValidPte;
                  if ( v58 >= 0xFFFFF6FB7DBED000uLL && v58 <= 0xFFFFF6FB7DBED7F8uLL )
                    MiWritePteShadow(v58, ValidPte);
                  v60 = MiConvertPrivateToDemandZero(v55, (__int64)(v58 << 25) >> 16, v45);
                  *(_QWORD *)v58 = 0LL;
                  v46 = 0xFFFFF6FB7DBED000uLL;
                  if ( v58 >= 0xFFFFF6FB7DBED000uLL )
                  {
                    v46 = 0xFFFFF6FB7DBED7F8uLL;
                    if ( v58 <= 0xFFFFF6FB7DBED7F8uLL )
                      MiWritePteShadow(v58, 0LL);
                  }
                  if ( v60 )
                  {
                    ++v132;
                    v7 = a3;
                    ++v141[1];
                    goto LABEL_46;
                  }
                }
              }
LABEL_91:
              v56 = (v52 & 0x18) == 0;
LABEL_92:
              v63 = v121;
              if ( !v56 )
                v63 = 1LL;
              v64 = -1LL;
              v121 = v63;
              if ( v29 )
              {
                v68 = (__int64)v127;
              }
              else
              {
                v65 = MiComputeHash64(v45, v46, v63);
                if ( v65 != v66 )
                  goto LABEL_153;
                v42 = *(_QWORD *)(v143 + 8LL * (int)MiProtectionToCacheAttribute(v52));
                if ( !v42 || *(_DWORD *)(v42 + 44) >= *(_DWORD *)(v42 + 40) )
                  goto LABEL_153;
                v68 = (__int64)v127;
                CombineProto = MiAllocateCombineProto((__int64)v127, v67, v52, 0);
                v29 = (_QWORD *)CombineProto;
                if ( CombineProto )
                {
                  v71 = v133;
                  v133[3] = CombineProto;
                  goto LABEL_105;
                }
                v29 = (_QWORD *)*a3;
                v70 = *(_QWORD *)*a3;
                if ( *(__int64 **)(*a3 + 8) != a3 || *(_QWORD **)(v70 + 8) != v29 )
                  __fastfail(3u);
                *a3 = v70;
                *(_QWORD *)(v70 + 8) = a3;
                *((_DWORD *)v29 + 10) = v52 | v29[5] & 0xFFFFFFE0;
                v64 = *(_QWORD *)(v42 + 8 * ((unsigned __int64)*(unsigned int *)(v42 + 44) >> 12) + 48);
              }
              v71 = v133;
LABEL_105:
              v6 = v124;
              v72 = MiConvertPrivateToProto(v124, BugCheckParameter2, (_DWORD)v29, v47, v68, (__int64)P, v64);
              if ( v72 )
              {
                ++v141[1];
                if ( v64 == -1 )
                {
                  ++v132;
                  v29 = 0LL;
                  v73 = 0;
                }
                else
                {
                  *(_DWORD *)(v42 + 44) += 4096;
                  v73 = 1;
                }
                v71[1] = v72;
                v71[2] = v152;
                v152 = v71;
                goto LABEL_141;
              }
              v7 = a3;
              MiDereferenceCombineBlock(a3, v29);
              v23 = v121;
              v16 = P;
              v13 = v147;
              v19 = v130;
            }
            else
            {
              v7 = a3;
              MiDereferenceCombineBlock(a3, v29);
              v23 = v121;
              v6 = v124;
              v16 = P;
              v13 = v147;
              v19 = v130;
            }
          }
          else
          {
            v53 = &v155;
LABEL_87:
            v16 = P;
            MiInsertTbFlushEntry((int *)P, v45, 1LL, 0);
            v7 = a3;
            v6 = v124;
            v23 = v121;
            v19 = v130;
            v133[2] = *v53;
            *v53 = (__int64)v133;
            v13 = v147;
          }
        }
        v74 = 0;
        v75 = MiGetUltraMapping((unsigned __int64 *)(v40 + 152), 3u, 1LL, 0);
        v76 = (_QWORD *)(((v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( ((v75 >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL )
        {
          v7 = a3;
          goto LABEL_46;
        }
        v140[9] = v76;
        v140[8] = v37;
        if ( (unsigned int)MiMapArbitraryPage((__int64)v127, v140, v128, v38, 1) )
          break;
        *v76 = 0LL;
        if ( (unsigned __int64)v76 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v76 > 0xFFFFF6FB7DBED7F8uLL )
        {
LABEL_56:
          v7 = a3;
          goto LABEL_46;
        }
        MiWritePteShadow(v76, 0LL);
        v7 = a3;
LABEL_46:
        MiDereferenceCombineBlock(v7, v29);
        v23 = v121;
        v6 = v124;
        v16 = P;
        v13 = v147;
        v19 = v130;
      }
      v77 = v121;
      if ( (v41 & 0x18) != 0 )
        v77 = 1;
      v78 = -1LL;
      v121 = v77;
      if ( v29 )
      {
        v84 = 0LL;
      }
      else
      {
        if ( !(unsigned int)MiPerformCombineScan(a1, (__int64)v140)
          || v149 != v131
          || (v79 = *(_QWORD *)(v143 + 8LL * (int)MiProtectionToCacheAttribute(v41)), (v138 = v79) == 0)
          || *(_DWORD *)(v79 + 44) >= *(_DWORD *)(v79 + 40) )
        {
          v68 = (__int64)v127;
          goto LABEL_135;
        }
        v81 = MiAllocateCombineProto((__int64)v127, v80, v41, 0);
        v29 = (_QWORD *)v81;
        if ( v81 )
        {
          v133[3] = v81;
          v84 = v138;
        }
        else
        {
          v29 = (_QWORD *)*a3;
          v82 = *(_QWORD *)*a3;
          if ( *(__int64 **)(*a3 + 8) != a3 || *(_QWORD **)(v82 + 8) != v29 )
            __fastfail(3u);
          *a3 = v82;
          *(_QWORD *)(v82 + 8) = a3;
          v83 = v41 | v29[5] & 0xFFFFFFE0;
          v84 = v138;
          *((_DWORD *)v29 + 10) = v83;
          v78 = *(_QWORD *)(v138 + 8 * ((unsigned __int64)*(unsigned int *)(v138 + 44) >> 12) + 48);
        }
      }
      v119 = v37;
      v68 = (__int64)v127;
      if ( (unsigned int)MiConvertStandbyToProto(
                           v124,
                           (int)v127,
                           (int)v140,
                           v128,
                           (__int64)v29,
                           v119,
                           BugCheckParameter2,
                           v78) )
      {
        v74 = 1;
        ++v141[1];
        if ( v78 == -1 )
        {
          ++v132;
          v29 = 0LL;
        }
        else
        {
          *(_DWORD *)(v84 + 44) += 4096;
          v123 = 1;
        }
      }
LABEL_135:
      MiReleaseArbitraryPage((__int64)v140);
      *v76 = 0LL;
      if ( (unsigned __int64)v76 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v76 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v76, 0LL);
      if ( !v74 )
      {
        v7 = a3;
        goto LABEL_46;
      }
      v73 = v123;
      v6 = v124;
LABEL_141:
      if ( v73 == 1 )
      {
        v29[3] = v131;
        v85 = 16 * (v131 & 0xF) + v68;
        v86 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v85 + 104));
        v87 = 0;
        v88 = v86;
        v89 = (unsigned __int64 *)&v127[2 * (v131 & 0xF) + 12];
        v90 = *v89;
        if ( !*v89 )
          goto LABEL_152;
        v91 = v29[3];
        while ( 1 )
        {
          v92 = *(_QWORD *)(v90 + 24);
          if ( v91 > v92 || v91 >= v92 && ((_DWORD)v29[5] & 0x1Fu) >= (*(_DWORD *)(v90 + 40) & 0x1Fu) )
            break;
          v93 = *(_QWORD *)v90;
          if ( !*(_QWORD *)v90 )
          {
            v87 = 0;
            goto LABEL_152;
          }
LABEL_150:
          v90 = v93;
        }
        v93 = *(_QWORD *)(v90 + 8);
        if ( v93 )
          goto LABEL_150;
        v87 = 1;
LABEL_152:
        RtlAvlInsertNodeEx(v89, v90, v87, (unsigned __int64)v29);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v85 + 104));
        __writecr8(v88);
        v23 = v121;
LABEL_153:
        v7 = a3;
        v6 = v124;
        v16 = P;
        v13 = v147;
        v19 = v130;
      }
      else
      {
        v7 = a3;
        v23 = v121;
        v16 = P;
        v13 = v147;
        v19 = v130;
      }
    }
  }
  v22 = v120;
LABEL_170:
  v101 = KeGetCurrentThread();
  if ( (*(_DWORD *)(&v101[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v102 = HIBYTE(*(_DWORD *)(v6 + 192));
    if ( (v102 & 8) != 0
      && (*(_BYTE *)(v6 + 195) = v102 & 0xF7,
          _interlockedbittestandset((volatile signed __int32 *)&v101[1].SwapListEntry + 2, 0x16u),
          !MiForcedTrim(v6, v22))
      && (*(_BYTE *)(v6 + 192) & 0x40) != 0
      && (v103 = *(_QWORD *)(v6 + 120), v104 = *(_QWORD *)(v6 + 152), v103 > v104) )
    {
      v105 = 7;
      v106 = *(_QWORD *)(v6 + 136);
      if ( (*(_DWORD *)(v6 + 4) & 0xF) != 0 )
      {
        for ( j = v103 - 1; v106 > j; --v105 )
        {
          v108 = v106 - j;
          if ( v105 )
          {
            v109 = v108;
            v110 = *(_QWORD *)(v6 + 8LL * v105 + 40) <= v108;
            v108 = *(_QWORD *)(v6 + 8LL * v105 + 40);
            if ( !v110 )
              v108 = v109;
          }
          if ( v108 )
          {
            MiTrimWorkingSet(v6, v108, v120, v105, 16);
            if ( !v105 )
              break;
          }
          v106 = *(_QWORD *)(v6 + 136);
        }
      }
      else
      {
        for ( ; v106 > v104; --v105 )
        {
          v112 = v106 - v104;
          if ( v105 )
          {
            v113 = v112;
            v110 = *(_QWORD *)(v6 + 8LL * v105 + 40) <= v112;
            v112 = *(_QWORD *)(v6 + 8LL * v105 + 40);
            if ( !v110 )
              v112 = v113;
          }
          if ( v112 )
          {
            MiTrimWorkingSet(v6, v112, v120, v105, 16);
            if ( !v105 )
              break;
          }
          v106 = *(_QWORD *)(v6 + 136);
        }
      }
      v111 = v120;
      MiSimpleAging(v6, v120);
    }
    else
    {
      v111 = v120;
    }
    if ( (*(_BYTE *)(v6 + 195) & 4) != 0 )
    {
      *(_BYTE *)(v6 + 195) = HIBYTE(*(_DWORD *)(v6 + 192)) & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&v101[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        v6,
        v111,
        1,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v6 + 172)) + 5680LL)
                            + 2354LL));
    }
    if ( (*(_BYTE *)(v6 + 195) & 0x10) != 0 )
    {
      *(_BYTE *)(v6 + 195) = HIBYTE(*(_DWORD *)(v6 + 192)) & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&v101[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(v6, v111, *(_QWORD *)(v6 + 152));
    }
    if ( (*(_DWORD *)(&v101[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v101[1].SwapListEntry + 2, 0x16u);
  }
  v114 = MiGetSharedVm(v6);
  ExReleaseSpinLockExclusive(v114, v120);
  v115 = CurrentThread;
  v56 = CurrentThread->KernelApcDisable++ == -1;
  if ( v56
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v115->ApcState.ApcListHead[0].Flink != &v115->152
    && !v115->SpecialApcDisable )
  {
    if ( !KeGetCurrentIrql() )
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
      v16 = P;
      v18 = v126;
      goto LABEL_209;
    }
    LOBYTE(v115) = 1;
    KeGetCurrentThread()->ApcState.KernelApcPending = 1;
    HalRequestSoftwareInterrupt(v115);
  }
LABEL_208:
  v16 = P;
  v18 = v126;
LABEL_209:
  if ( v13 )
  {
    do
    {
      v116 = (_QWORD *)v13[3];
      v117 = (_QWORD *)v13[2];
      if ( (unsigned int)v116 >= 0x100 )
        MiDereferenceCombineBlock(v7, v116);
      v13 = v117;
    }
    while ( v117 );
  }
  if ( v18 == 1 )
  {
    KiUnstackDetachProcess(&v150, 1LL);
    MiAttachThreadDone((__int64)&v145[1].IdealNode[12]);
  }
  if ( v16 != v151 )
    ExFreePoolWithTag(v16, 0);
  result = v132;
  *v141 += v132;
  return result;
}
