/*
 * XREFs of MiSharePages @ 0x1400A3D30
 * Callers:
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiReleaseArbitraryPage @ 0x140016B60 (MiReleaseArbitraryPage.c)
 *     ExReleaseSpinLockExclusive @ 0x14001DF40 (ExReleaseSpinLockExclusive.c)
 *     MiPrepareAttachThread @ 0x140022D6C (MiPrepareAttachThread.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     MiDereferenceCombineBlock @ 0x140078BAC (MiDereferenceCombineBlock.c)
 *     MiAllocateCombineProto @ 0x140078CA0 (MiAllocateCombineProto.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiConvertPrivateToDemandZero @ 0x14007F8B0 (MiConvertPrivateToDemandZero.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     MiAttemptCoalesce @ 0x1400849D0 (MiAttemptCoalesce.c)
 *     MiPerformCombineScan @ 0x14008B370 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x14008B400 (MiComputeHash64.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiInsertCachedPte @ 0x1400A2790 (MiInsertCachedPte.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x1400A39B0 (MiMapArbitraryPage.c)
 *     MiRecheckVaVm @ 0x1400A5790 (MiRecheckVaVm.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAttachThreadDone @ 0x1400AD5BC (MiAttachThreadDone.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400F9880 (RtlInterlockedSetClearRunEx.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 *     MiMakeCombineCandidateClean @ 0x140100A60 (MiMakeCombineCandidateClean.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiProtectionToCacheAttribute @ 0x140107AC8 (MiProtectionToCacheAttribute.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckPteRelease @ 0x140220610 (MiCheckPteRelease.c)
 *     MiHashIsCommon @ 0x140223CB0 (MiHashIsCommon.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 *v6; // r13
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _BYTE *v12; // r15
  _QWORD *v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbx
  _KPROCESS *v16; // rsi
  __int64 v17; // rsi
  __int64 SharedVm; // rbx
  KIRQL v19; // al
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // bl
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rbx
  __int64 v27; // r10
  int v28; // r12d
  _QWORD *v29; // rdx
  __int64 v30; // rax
  ULONG_PTR v31; // r9
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // rdx
  int v39; // r14d
  _QWORD *v40; // rdx
  char v41; // r10
  unsigned int v42; // ebx
  __int64 v43; // r13
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // r11
  char v48; // cl
  __int64 Address; // rax
  int v50; // ecx
  unsigned int v51; // r13d
  unsigned __int64 v52; // rbx
  __int64 v53; // rbx
  _QWORD *v54; // rcx
  __int64 v55; // rbx
  int v56; // edx
  __int64 v57; // r12
  bool v58; // zf
  unsigned __int64 *v59; // rax
  __int64 *v60; // rbx
  __int64 v61; // rcx
  int v62; // r15d
  __int64 v63; // r11
  unsigned __int64 BugCheckParameter4; // rsi
  unsigned __int64 v65; // r14
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r10
  volatile signed __int32 *v72; // r8
  int v73; // eax
  unsigned __int64 v74; // rdx
  __int64 v75; // r15
  __int64 v76; // rbx
  unsigned __int64 v77; // rax
  __int64 v78; // r11
  __int64 v79; // rsi
  unsigned __int64 v80; // r11
  __int64 *v81; // r12
  __int64 CombineProto; // rax
  __int64 *v83; // rcx
  __int64 v84; // rax
  _QWORD *v85; // r14
  __int64 v86; // rax
  char v87; // cl
  char v88; // r12
  __int64 v89; // r15
  __int64 *v90; // rcx
  _QWORD *v91; // rdx
  unsigned __int64 v92; // r14
  ULONG_PTR v93; // rsi
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  ULONG_PTR v98; // r10
  unsigned __int64 v99; // r9
  volatile signed __int32 *v100; // r8
  int v101; // eax
  unsigned __int64 v102; // rdx
  __int64 v103; // r15
  __int64 v104; // r13
  __int64 v105; // rcx
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rsi
  __int64 v108; // r14
  unsigned __int64 v109; // r9
  _QWORD *v110; // rax
  __int64 v111; // r8
  _QWORD *v112; // rax
  __int64 v113; // rdx
  int v114; // eax
  __int64 v115; // r14
  unsigned __int64 v116; // r10
  __int64 v117; // rax
  __int64 *v118; // rcx
  __int64 v119; // rax
  unsigned __int64 v120; // rsi
  unsigned __int64 v121; // r14
  __int64 v122; // rcx
  __int64 v123; // r11
  __int64 v124; // rbx
  __int64 v125; // r15
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  unsigned __int64 v129; // r10
  unsigned __int64 v130; // r9
  volatile signed __int32 *v131; // r8
  int v132; // eax
  unsigned __int64 v133; // rdx
  char v134; // r14
  __int64 v135; // r14
  KIRQL v136; // al
  bool v137; // r8
  KIRQL v138; // si
  unsigned __int64 v139; // rdx
  unsigned __int64 v140; // rcx
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rax
  _QWORD *v143; // r15
  int v144; // r14d
  _QWORD *v145; // rbx
  __int64 v146; // rdi
  __int64 *v147; // r15
  _QWORD *v148; // rsi
  _QWORD *v149; // rdx
  unsigned __int64 v150; // rbx
  volatile LONG *v151; // rax
  __int64 v152; // rsi
  unsigned __int64 v153; // rbx
  _QWORD *v154; // rdx
  _QWORD *v155; // rbx
  __int64 result; // rax
  char v157; // al
  unsigned __int64 v158; // r8
  unsigned __int8 v159; // bl
  volatile LONG *v160; // rax
  struct _KTHREAD *v161; // rcx
  __int16 v162; // ax
  signed __int32 v163[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v164; // [rsp+40h] [rbp-C0h]
  int v165; // [rsp+44h] [rbp-BCh]
  char v166; // [rsp+48h] [rbp-B8h]
  int v167[2]; // [rsp+50h] [rbp-B0h]
  _BYTE *PoolWithTag; // [rsp+58h] [rbp-A8h]
  __int64 *v169; // [rsp+60h] [rbp-A0h]
  int v170[2]; // [rsp+68h] [rbp-98h]
  int v171; // [rsp+70h] [rbp-90h]
  unsigned int v172; // [rsp+74h] [rbp-8Ch]
  __int64 v173; // [rsp+78h] [rbp-88h]
  int v174[2]; // [rsp+80h] [rbp-80h]
  int v175; // [rsp+88h] [rbp-78h]
  __int64 v176; // [rsp+90h] [rbp-70h]
  _KPROCESS *v177; // [rsp+98h] [rbp-68h]
  _QWORD *v178; // [rsp+A0h] [rbp-60h]
  __int64 v179; // [rsp+A8h] [rbp-58h]
  __int64 v180; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v181; // [rsp+B8h] [rbp-48h] BYREF
  __int64 updated; // [rsp+C0h] [rbp-40h] BYREF
  int v183[2]; // [rsp+C8h] [rbp-38h]
  _QWORD *v184; // [rsp+D0h] [rbp-30h]
  int v185; // [rsp+D8h] [rbp-28h] BYREF
  int v186; // [rsp+DCh] [rbp-24h]
  unsigned __int64 v187; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v188; // [rsp+E8h] [rbp-18h]
  int v189; // [rsp+F0h] [rbp-10h]
  __int64 v190; // [rsp+F8h] [rbp-8h]
  __int64 v191; // [rsp+100h] [rbp+0h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  _QWORD *v193; // [rsp+118h] [rbp+18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+120h] [rbp+20h] BYREF
  __int64 v195; // [rsp+138h] [rbp+38h]
  int v196; // [rsp+160h] [rbp+60h] BYREF
  __int16 v197; // [rsp+164h] [rbp+64h]
  __int64 v198; // [rsp+168h] [rbp+68h]
  __int64 v199; // [rsp+170h] [rbp+70h]
  __int64 v200; // [rsp+178h] [rbp+78h]
  int v201; // [rsp+220h] [rbp+120h] BYREF
  __int16 v202; // [rsp+224h] [rbp+124h]
  __int64 v203; // [rsp+228h] [rbp+128h]
  __int64 v204; // [rsp+230h] [rbp+130h]
  __int64 v205; // [rsp+238h] [rbp+138h]
  int v206; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int16 v207; // [rsp+2E4h] [rbp+1E4h]
  __int64 v208; // [rsp+2E8h] [rbp+1E8h]
  __int64 v209; // [rsp+2F0h] [rbp+1F0h]
  __int64 v210; // [rsp+2F8h] [rbp+1F8h]
  char v211[48]; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v212[208]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _QWORD v213[8]; // [rsp+4A0h] [rbp+3A0h]
  _QWORD v214[6]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v191 = a6;
  v6 = a3;
  v190 = a1;
  *(_QWORD *)v183 = *(_QWORD *)(a1 + 16);
  v186 = *(_DWORD *)(a1 + 52);
  v184 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)v174 = *a4;
  v8 = *(_QWORD *)(a2 + 32);
  v169 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v172 = 0;
  v176 = 0LL;
  *(_QWORD *)v167 = v8;
  v9 = MiTbFlushType(v8);
  v11 = *(_QWORD *)(v10 + 24);
  v12 = v212;
  v13 = *(_QWORD **)(v10 + 48);
  LODWORD(v14) = v9;
  v175 = 0;
  v171 = 0;
  PoolWithTag = v212;
  if ( v11 <= 0x14 )
  {
    LODWORD(v15) = v11;
  }
  else
  {
    v15 = 509LL;
    if ( v11 < 0x1FD )
      v15 = v11;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 24, 0x73576D4Du);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = v212;
      PoolWithTag = v212;
      LODWORD(v15) = 20;
    }
  }
  *((_DWORD *)v12 + 2) = v15;
  *((_DWORD *)v12 + 3) = 0;
  *(_DWORD *)v12 = v14;
  *((_WORD *)v12 + 2) = 0;
  *((_QWORD *)v12 + 2) = 0LL;
  *((_QWORD *)v12 + 3) = 0LL;
  v16 = *(_KPROCESS **)(a2 + 40);
  v177 = v16;
  if ( v16 && v16 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
    v171 = MiPrepareAttachThread((__int64)v16, (__int64)&v16[1].IdealNode[12]);
    LODWORD(v14) = v171;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !(_DWORD)v14 )
      goto LABEL_269;
    KiStackAttachProcess((ULONG_PTR)v16);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = *(_QWORD *)v167;
LABEL_12:
  LOBYTE(v14) = 0;
  v213[0] = 0LL;
  v165 = v14;
  v213[4] = 0LL;
  v214[0] = 0LL;
  v214[4] = 0LL;
  SharedVm = MiGetSharedVm(v17);
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  v20 = v19;
  v164 = v19;
  v21 = (__int64)v177;
  *(_DWORD *)(SharedVm + 4) = 0;
  if ( !v21 )
  {
    while ( 1 )
    {
LABEL_16:
      v22 = 0;
      v178 = v13;
      if ( (_BYTE)v14 == 1 )
      {
        LOBYTE(v14) = 0;
        v23 = 0;
        v165 = v14;
      }
      else
      {
        v23 = v175 + 1;
      }
      v175 = v23;
      if ( (v23 & 3) == 0 && (unsigned int)MiWorkingSetIsContended(v17) || KeShouldYieldProcessor() )
        goto LABEL_28;
      v24 = qword_14036C218;
      if ( (v12[4] & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[13] )
        v24 = -1LL;
      if ( *((_DWORD *)v12 + 3) >= *((_DWORD *)v12 + 2) || v12[5] || *((_QWORD *)v12 + 2) > v24 )
LABEL_28:
        v22 = 1;
      if ( !v13 )
      {
        ++v172;
LABEL_253:
        v143 = v214;
        v144 = 2;
        v179 = (__int64)v214;
        do
        {
          v145 = (_QWORD *)*v143;
          if ( *v143 )
          {
            v146 = *(_QWORD *)v167;
            v147 = *(__int64 **)v174;
            do
            {
              v148 = (_QWORD *)v145[2];
              if ( (unsigned int)MiCrcStillIntact(v147, v146, v145, (unsigned int)v144) )
              {
                v145[2] = v13;
                v13 = v145;
              }
              else
              {
                v149 = (_QWORD *)v145[3];
                if ( (unsigned int)v149 >= 0x100 )
                  MiDereferenceCombineBlock(v6, v149);
              }
              v145 = v148;
            }
            while ( v148 );
            v143 = (_QWORD *)v179;
          }
          *v143 = 0LL;
          ++v144;
          v143 += 4;
          v179 = (__int64)v143;
        }
        while ( v144 <= 3 );
        v12 = PoolWithTag;
        MiFlushTbList(PoolWithTag);
        v150 = v164;
        v17 = *(_QWORD *)v167;
        MiPreUnlockWorkingSetExclusive(*(_QWORD *)v167, v164);
        v151 = (volatile LONG *)MiGetSharedVm(v17);
        ExReleaseSpinLockExclusiveFromDpcLevel(v151);
        __writecr8(v150);
        v14 = v213[0];
        if ( v213[0] )
        {
          do
          {
            v152 = *(_QWORD *)(v14 + 8);
            v153 = (unsigned __int8)MiLockPageInline(v152);
            *(_BYTE *)(v152 + 34) = *(_BYTE *)(v152 + 34) & 0xF8 | 6;
            MiDecrementShareCount(v152);
            _InterlockedAnd64((volatile signed __int64 *)(v152 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v153);
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( v14 );
          v17 = *(_QWORD *)v167;
        }
        if ( !v13 )
        {
          KiLeaveCriticalRegionUnsafe(CurrentThread);
          goto LABEL_268;
        }
        goto LABEL_12;
      }
      if ( v22 )
        goto LABEL_253;
      v25 = v13[3];
      v26 = v13[1];
      v27 = *v13;
      v193 = (_QWORD *)v13[2];
      v188 = v26;
      v173 = v27;
      *(_QWORD *)v170 = v25;
      if ( (unsigned int)v25 >= 0x100 )
      {
        v28 = *(_DWORD *)(v25 + 40);
      }
      else
      {
        v28 = v25;
        *(_QWORD *)v170 = 0LL;
        v25 = 0LL;
      }
      if ( !(unsigned int)MiRecheckVaVm(v17, v26) )
      {
LABEL_35:
        v29 = (_QWORD *)v25;
        v6 = v169;
        MiDereferenceCombineBlock(v169, v29);
        v13 = v193;
        continue;
      }
      v179 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v30 = MI_READ_PTE_LOCK_FREE(v179);
      v187 = v30;
      if ( (v30 & 1) != 0 )
      {
        v32 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v187) >> 12) & 0xFFFFFFFFFLL;
        if ( !(unsigned int)MiIsPfnInline(v32, v33, v34, v35) )
        {
          v36 = (_QWORD *)v25;
          v6 = v169;
          MiDereferenceCombineBlock(v169, v36);
          v12 = PoolWithTag;
          v13 = v193;
          continue;
        }
        v37 = 48 * v32 - 0x58000000000LL;
        v185 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v185);
          while ( (*(_QWORD *)(v37 + 24) & 0x8000000000000000uLL) != 0 );
        }
      }
      else
      {
        if ( (v30 & 0x400) != 0 || (v30 & 0x800) == 0 )
          goto LABEL_35;
        v37 = MiLockTransitionLeafPage(v31, 0LL);
        if ( !v37 )
        {
          v38 = (_QWORD *)v25;
          v6 = v169;
          MiDereferenceCombineBlock(v169, v38);
          v17 = *(_QWORD *)v167;
          v13 = v193;
          continue;
        }
        v32 = (v37 + 0x58000000000LL) / 48;
      }
      v39 = MiCombineCandidate(*(__int64 **)v174, v37);
      if ( !v39
        || (v41 = *(_BYTE *)(v37 + 34) & 7, v42 = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F, (v186 & 4) != 0)
        && !(unsigned int)MiHashIsCommon(v190, v173)
        || (unsigned __int8)HIBYTE(*(_QWORD *)(v37 + 40)) >> 2 != a5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_50:
        v40 = (_QWORD *)v25;
LABEL_51:
        v6 = v169;
        MiDereferenceCombineBlock(v169, v40);
        LODWORD(v14) = v165;
        v17 = *(_QWORD *)v167;
        v12 = PoolWithTag;
        v13 = v193;
        continue;
      }
      v166 = 0;
      v43 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v41 == 6 )
      {
        if ( v179 != (*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL)
          || (v44 = *(_QWORD *)(v37 + 40), (v44 & 0x200000000000000LL) != 0)
          || (*(_BYTE *)(v37 + 35) & 8) != 0
          || (v44 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
          || ((v45 = MI_READ_PTE_LOCK_FREE(v179), (v45 & 1) != 0)
            ? (v48 = HIBYTE(v45) & 0xF | (16 * ((v45 >> 60) & 7)))
            : (v48 = 10),
              (v48 & 0xF) == 8) )
        {
LABEL_64:
          v40 = *(_QWORD **)v170;
          goto LABEL_51;
        }
        if ( *(_WORD *)(v37 + 32) != 1 )
        {
          v40 = *(_QWORD **)v170;
          goto LABEL_51;
        }
        v58 = v39 == 1;
        Address = 0LL;
        v14 = v188;
        if ( v58 )
        {
          Address = MiLocateAddress(v188);
          if ( !Address )
            goto LABEL_64;
          v50 = *(_DWORD *)(Address + 48);
          if ( (v50 & 0x100000) != 0 )
            goto LABEL_64;
          if ( ((1 << (v50 & 7)) & 0x55) == 0 )
          {
            v40 = *(_QWORD **)v170;
            goto LABEL_51;
          }
        }
        v51 = (*(_DWORD *)(v37 + 16) >> 5) & 0x1F;
        if ( v51 != v28 )
        {
          v40 = *(_QWORD **)v170;
          goto LABEL_51;
        }
        v52 = v187;
        if ( (v187 & 0x42) != 0 )
        {
          if ( v172 < 8 )
          {
            v53 = 2LL;
LABEL_83:
            v12 = PoolWithTag;
            MiInsertTbFlushEntry(PoolWithTag, v14, 1LL, 0LL);
            v54 = v178;
            v6 = v169;
            v17 = *(_QWORD *)v167;
            LODWORD(v14) = v165;
            v13 = v193;
            v55 = 4 * v53;
            v178[2] = v213[v55];
            v213[v55] = v54;
            continue;
          }
          MiMakeCombineCandidateClean(v46, Address);
          MiInsertTbFlushEntry(PoolWithTag, v14, 1LL, 0LL);
          MiFlushTbList(PoolWithTag);
          v47 = v173;
LABEL_87:
          v17 = *(_QWORD *)v167;
          goto LABEL_88;
        }
        if ( v47 != qword_14036C710 )
          goto LABEL_123;
        if ( ((*(_DWORD *)(v37 + 16) >> 5) & 0x18) != 0 || (v187 & 0x20) == 0 )
          goto LABEL_87;
        if ( v172 < 3 )
        {
          v53 = 3LL;
          goto LABEL_83;
        }
        v56 = v37;
        v17 = *(_QWORD *)v167;
        v57 = (__int64)PoolWithTag;
        if ( !(unsigned int)MiClearPteAccessed(v167[0], v56, v46, (_DWORD)PoolWithTag, dword_14036CA68) )
        {
          v6 = v169;
          MiDereferenceCombineBlock(v169, *(_QWORD **)v170);
          LODWORD(v14) = v165;
          v12 = (_BYTE *)v57;
          v13 = v193;
          continue;
        }
        v187 = v52 & 0xFFFFFFFFFFFFFFDFuLL;
        MiFlushTbList(v57);
        v47 = v173;
LABEL_88:
        if ( v47 != qword_14036C710 )
          goto LABEL_123;
        v58 = (v51 & 0x18) == 0;
        if ( (v51 & 0x18) == 0 )
        {
          v59 = (unsigned __int64 *)MiReservePtes(&qword_14036D0A0, 1LL);
          v60 = (__int64 *)v59;
          if ( v59 )
          {
            *v59 = MiMakeValidPte((unsigned __int64)v59, v32, 536870913);
            v62 = MiPteInShadowRange(v60);
            if ( v62 )
              MiWritePteShadow(v61);
            v189 = MiConvertPrivateToDemandZero(v17, (__int64)((_QWORD)v60 << 25) >> 16, v14);
            if ( (dword_1403E310C & 2) != 0 )
              MiCheckPteRelease(v60, 1LL);
            v63 = 1LL;
            BugCheckParameter4 = ((__int64)v60 - qword_14036D0B0) >> 3;
            v65 = 1LL;
            if ( (dword_14036D0B8 & 4) != 0 )
            {
              BugCheckParameter4 >>= 4;
              v65 = 0LL;
            }
            if ( v65 + BugCheckParameter4 - 1 >= qword_14036D0A0
              || v65 != 1
              || !_bittest64((const signed __int64 *)qword_14036D0A8, BugCheckParameter4) )
            {
              KeBugCheckEx(0xDAu, 0x302uLL, (__int64)((_QWORD)v60 << 25) >> 16, 1uLL, BugCheckParameter4);
            }
            *v60 = 0LL;
            if ( v62 )
              MiWritePteShadow(v60);
            v66 = v63;
            if ( ((unsigned __int8)dword_14036D0B8 & (unsigned __int8)v63) == 0
              || (unsigned int)MiInsertCachedPte((__int64)&qword_14036D0A0, v60, v63) != (_DWORD)v63 )
            {
              updated = 0LL;
              v67 = MI_READ_PTE_LOCK_FREE(&updated);
              _InterlockedOr(v163, 0);
              updated = MiUpdatePageFileHighInPte(v67, (unsigned int)KiTbFlushTimeStamp);
              if ( (unsigned int)MiPteInShadowRange(&updated) )
                MiWritePteShadow(&updated);
              *v60 = updated;
              if ( (unsigned int)MiPteInShadowRange(v60) )
                MiWritePteShadow(v69);
              if ( !MiGetPteTimeStamp(v68) )
              {
                v196 = ~(_BYTE)dword_14036D0B8 & 2;
                v198 = 20LL;
                v197 = 0;
                v199 = 0LL;
                v200 = 0LL;
                MiInsertTbFlushEntry(&v196, (__int64)((_QWORD)v60 << 25) >> 16, v66, 0LL);
                MiFlushTbList(&v196);
              }
              v70 = BugCheckParameter4 & 0x1F;
              v71 = v65;
              v72 = (volatile signed __int32 *)(qword_14036D0A8 + 4 * (BugCheckParameter4 >> 5));
              if ( v65 + v70 <= 0x20 )
              {
                v73 = (((_DWORD)v66 << v65) - 1) << v70;
                goto LABEL_119;
              }
              if ( (BugCheckParameter4 & 0x1F) != 0 )
              {
                _InterlockedAnd(v72, ~((((_DWORD)v66 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v70));
                v71 = v65 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
                ++v72;
              }
              if ( v71 >= 0x20 )
              {
                v74 = v71 >> 5;
                v71 += -32LL * (v71 >> 5);
                do
                {
                  *v72++ = 0;
                  --v74;
                }
                while ( v74 );
              }
              if ( v71 )
              {
                v73 = ((_DWORD)v66 << v71) - 1;
LABEL_119:
                _InterlockedAnd(v72, ~v73);
              }
              _InterlockedExchangeAdd64(&qword_14036D100, v65);
              MiAttemptCoalesce((__int64)&qword_14036D0A0, BugCheckParameter4, v65);
            }
            if ( v189 )
            {
              ++v176;
              v40 = *(_QWORD **)v170;
              ++v184[1];
              goto LABEL_51;
            }
          }
LABEL_123:
          v58 = (v51 & 0x18) == 0;
        }
        v75 = *(_QWORD *)v170;
        LODWORD(v14) = (unsigned __int8)v165;
        if ( !v58 )
          LODWORD(v14) = 1;
        v76 = -1LL;
        v165 = v14;
        if ( !*(_QWORD *)v170 )
        {
          v77 = MiComputeHash64(v188);
          if ( v77 != v78 )
            goto LABEL_251;
          v79 = *(_QWORD *)(v191 + 8LL * (int)MiProtectionToCacheAttribute(v51));
          if ( !v79 || *(_DWORD *)(v79 + 44) >= *(_DWORD *)(v79 + 40) )
            goto LABEL_251;
          v81 = *(__int64 **)v174;
          CombineProto = MiAllocateCombineProto(*(_QWORD **)v174, v80, v51, 0);
          *(_QWORD *)v170 = CombineProto;
          v75 = CombineProto;
          if ( CombineProto )
          {
            v85 = v178;
            v178[3] = CombineProto;
          }
          else
          {
            v83 = v169;
            v75 = *v169;
            *(_QWORD *)v170 = v75;
            v84 = *(_QWORD *)v75;
            if ( *(__int64 **)(v75 + 8) != v169 || *(_QWORD *)(v84 + 8) != v75 )
              __fastfail(3u);
            *v169 = v84;
            *(_QWORD *)(v84 + 8) = v83;
            *(_DWORD *)(v75 + 40) = v51;
            v76 = *(_QWORD *)(v79 + 8 * ((unsigned __int64)*(unsigned int *)(v79 + 44) >> 12) + 48);
LABEL_136:
            v85 = v178;
          }
          v86 = MiConvertPrivateToProto(v167[0], v179, (int)v75 + 48, (_DWORD)v81, (__int64)PoolWithTag, v76);
          if ( !v86 )
          {
            v40 = (_QWORD *)v75;
            goto LABEL_51;
          }
          ++v184[1];
          if ( v76 == -1 )
          {
            ++v176;
            v25 = 0LL;
            v87 = v166;
          }
          else
          {
            *(_DWORD *)(v79 + 44) += 4096;
            v87 = 1;
            v25 = *(_QWORD *)v170;
          }
          v85[1] = v86;
          v85[2] = v213[0];
          v213[0] = v85;
          goto LABEL_238;
        }
        v81 = *(__int64 **)v174;
        v79 = 0LL;
        goto LABEL_136;
      }
      v88 = 0;
      v89 = MiReservePtes(&qword_14036D0A0, 1LL);
      if ( !v89 )
      {
        v40 = *(_QWORD **)v170;
        goto LABEL_51;
      }
      v90 = *(__int64 **)v174;
      v91 = *(_QWORD **)v183;
      *(_QWORD *)(*(_QWORD *)v183 + 72LL) = v89;
      v91[8] = v37;
      if ( !(unsigned int)MiMapArbitraryPage(v90, v91, v39, 1) )
      {
        if ( (dword_1403E310C & 2) != 0 )
          MiCheckPteRelease(v89, 1LL);
        v92 = 1LL;
        v93 = (v89 - qword_14036D0B0) >> 3;
        if ( (dword_14036D0B8 & 4) != 0 )
        {
          v93 >>= 4;
          v92 = 0LL;
        }
        if ( v92 + v93 - 1 >= qword_14036D0A0 || v92 != 1 || !_bittest64((const signed __int64 *)qword_14036D0A8, v93) )
          KeBugCheckEx(0xDAu, 0x302uLL, v89 << 25 >> 16, 1uLL, v93);
        *(_QWORD *)v89 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v89) )
          MiWritePteShadow(v94);
        if ( (dword_14036D0B8 & 1) != 0
          && (unsigned int)MiInsertCachedPte((__int64)&qword_14036D0A0, (_QWORD *)v89, 1u) == 1 )
        {
          goto LABEL_189;
        }
        v180 = 0LL;
        v95 = MI_READ_PTE_LOCK_FREE(&v180);
        _InterlockedOr(v163, 0);
        v180 = MiUpdatePageFileHighInPte(v95, (unsigned int)KiTbFlushTimeStamp);
        if ( (unsigned int)MiPteInShadowRange(&v180) )
          MiWritePteShadow(&v180);
        *(_QWORD *)v89 = v180;
        if ( (unsigned int)MiPteInShadowRange(v89) )
          MiWritePteShadow(v97);
        if ( !MiGetPteTimeStamp(v96) )
        {
          v203 = 20LL;
          v202 = 0;
          v201 = ~(_BYTE)dword_14036D0B8 & 2;
          v204 = 0LL;
          v205 = 0LL;
          MiInsertTbFlushEntry(&v201, v89 << 25 >> 16, 1LL, 0LL);
          MiFlushTbList(&v201);
        }
        v98 = v93 & 0x1F;
        v99 = 1LL;
        v100 = (volatile signed __int32 *)(qword_14036D0A8 + 4 * (v93 >> 5));
        if ( v98 + 1 <= 0x20 )
        {
          v101 = 1 << v98;
          goto LABEL_172;
        }
        if ( (v93 & 0x1F) != 0 )
        {
          _InterlockedAnd(v100, ~(((1 << (32 - (v93 & 0x1F))) - 1) << v98));
          v99 = 1LL - (32 - (unsigned int)(v93 & 0x1F));
          ++v100;
        }
        if ( v99 >= 0x20 )
        {
          v102 = v99 >> 5;
          v99 += -32LL * (v99 >> 5);
          do
          {
            *v100++ = 0;
            --v102;
          }
          while ( v102 );
        }
        if ( v99 )
        {
          v101 = (1 << v99) - 1;
LABEL_172:
          _InterlockedAnd(v100, ~v101);
        }
        _InterlockedExchangeAdd64(&qword_14036D100, v92);
        v103 = 512LL;
        if ( (dword_14036D0B8 & 4) != 0 )
          v103 = 32LL;
        v104 = v103 - 1;
        v105 = ~(v103 - 1);
        v106 = v105 & v93;
        v107 = (v105 & (v103 + v92 + v93 - 1)) - (v105 & v93);
        if ( !v107 )
        {
LABEL_189:
          v40 = *(_QWORD **)v170;
          goto LABEL_51;
        }
        v108 = -(__int64)v106;
        while ( 2 )
        {
          v109 = v106 + v104;
          if ( v106 + v104 < qword_14036D0A0 )
          {
            v110 = (_QWORD *)(qword_14036D0A8 + 8 * (v106 >> 6));
            v111 = qword_14036D0A8 + 8 * (v109 >> 6);
            if ( v110 == (_QWORD *)v111 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v103) << v106) & *v110) != 0 )
                goto LABEL_188;
LABEL_186:
              if ( (unsigned int)RtlInterlockedSetClearRunEx(&qword_14036D0A0, v106, v103) == 1 )
                MiReturnSystemPtes((__int64)&qword_14036D0A0, v106, v103, 0);
            }
            else
            {
              if ( ((-1LL << v106) & *v110) != 0 )
                goto LABEL_188;
              v112 = v110 + 1;
              if ( v112 == (_QWORD *)v111 )
              {
LABEL_185:
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v109)) & *v112) != 0 )
                  goto LABEL_188;
                goto LABEL_186;
              }
              while ( !*v112 )
              {
                if ( ++v112 == (_QWORD *)v111 )
                  goto LABEL_185;
              }
            }
          }
LABEL_188:
          v106 += v103;
          if ( v108 + v106 >= v107 )
            goto LABEL_189;
          continue;
        }
      }
      LODWORD(v113) = v170[0];
      v114 = (unsigned __int8)v165;
      if ( (v42 & 0x18) != 0 )
        v114 = 1;
      v115 = -1LL;
      v165 = v114;
      if ( !*(_QWORD *)v170 )
      {
        if ( !(unsigned int)MiPerformCombineScan(v190, *(__int64 *)v183) )
          goto LABEL_205;
        if ( v195 != v173 )
          goto LABEL_205;
        v43 = *(_QWORD *)(v191 + 8LL * (int)MiProtectionToCacheAttribute(v42));
        if ( !v43 || *(_DWORD *)(v43 + 44) >= *(_DWORD *)(v43 + 40) )
          goto LABEL_205;
        v117 = MiAllocateCombineProto(*(_QWORD **)v174, v116, v42, 0);
        *(_QWORD *)v170 = v117;
        LODWORD(v113) = v117;
        if ( v117 )
        {
          v178[3] = v117;
        }
        else
        {
          v118 = v169;
          v113 = *v169;
          *(_QWORD *)v170 = v113;
          v119 = *(_QWORD *)v113;
          if ( *(__int64 **)(v113 + 8) != v169 || *(_QWORD *)(v119 + 8) != v113 )
            __fastfail(3u);
          *v169 = v119;
          *(_QWORD *)(v119 + 8) = v118;
          *(_DWORD *)(v113 + 40) = v42;
          v115 = *(_QWORD *)(v43 + 8 * ((unsigned __int64)*(unsigned int *)(v43 + 44) >> 12) + 48);
        }
      }
      if ( !(unsigned int)MiConvertStandbyToProto(v167[0], v174[0], v183[0], v113, v37, v179, v115) )
        goto LABEL_205;
      v88 = 1;
      ++v184[1];
      if ( v115 != -1 )
      {
        *(_DWORD *)(v43 + 44) += 4096;
        v166 = 1;
LABEL_205:
        v25 = *(_QWORD *)v170;
        goto LABEL_206;
      }
      ++v176;
      v25 = 0LL;
LABEL_206:
      MiReleaseArbitraryPage(*(__int64 *)v183);
      if ( (dword_1403E310C & 2) != 0 )
        MiCheckPteRelease(v89, 1LL);
      v120 = (v89 - qword_14036D0B0) >> 3;
      v121 = 1LL;
      if ( (dword_14036D0B8 & 4) != 0 )
      {
        v120 >>= 4;
        v121 = 0LL;
      }
      if ( v121 + v120 - 1 >= qword_14036D0A0 || v121 != 1 || !_bittest64((const signed __int64 *)qword_14036D0A8, v120) )
        KeBugCheckEx(0xDAu, 0x302uLL, v89 << 25 >> 16, 1uLL, v120);
      *(_QWORD *)v89 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v89) )
        MiWritePteShadow(v122);
      v124 = v89;
      v125 = v123;
      if ( ((unsigned __int8)dword_14036D0B8 & (unsigned __int8)v123) != 0
        && (unsigned int)MiInsertCachedPte((__int64)&qword_14036D0A0, (_QWORD *)v124, v123) == (_DWORD)v123 )
      {
        goto LABEL_236;
      }
      v181 = 0LL;
      v126 = MI_READ_PTE_LOCK_FREE(&v181);
      _InterlockedOr(v163, 0);
      v181 = MiUpdatePageFileHighInPte(v126, (unsigned int)KiTbFlushTimeStamp);
      if ( (unsigned int)MiPteInShadowRange(&v181) )
        MiWritePteShadow(&v181);
      *(_QWORD *)v124 = v181;
      if ( (unsigned int)MiPteInShadowRange(v124) )
        MiWritePteShadow(v128);
      if ( !MiGetPteTimeStamp(v127) )
      {
        v208 = 20LL;
        v207 = 0;
        v206 = ~(_BYTE)dword_14036D0B8 & 2;
        v209 = 0LL;
        v210 = 0LL;
        MiInsertTbFlushEntry(&v206, v124 << 25 >> 16, v125, 0LL);
        MiFlushTbList(&v206);
      }
      v129 = v120 & 0x1F;
      v130 = v121;
      v131 = (volatile signed __int32 *)(qword_14036D0A8 + 4 * (v120 >> 5));
      if ( v121 + v129 > 0x20 )
      {
        if ( (v120 & 0x1F) != 0 )
        {
          _InterlockedAnd(v131, ~((((_DWORD)v125 << (32 - (v120 & 0x1F))) - 1) << v129));
          v130 = v121 - (32 - (unsigned int)(v120 & 0x1F));
          ++v131;
        }
        if ( v130 >= 0x20 )
        {
          v133 = v130 >> 5;
          v130 += -32LL * (v130 >> 5);
          do
          {
            *v131++ = 0;
            --v133;
          }
          while ( v133 );
        }
        if ( !v130 )
          goto LABEL_235;
        v132 = ((_DWORD)v125 << v130) - 1;
      }
      else
      {
        v132 = (((_DWORD)v125 << v121) - 1) << v129;
      }
      _InterlockedAnd(v131, ~v132);
LABEL_235:
      _InterlockedExchangeAdd64(&qword_14036D100, v121);
      MiAttemptCoalesce((__int64)&qword_14036D0A0, v120, v121);
LABEL_236:
      if ( !v88 )
        goto LABEL_50;
      v87 = v166;
      v81 = *(__int64 **)v174;
LABEL_238:
      if ( v87 != 1 )
        goto LABEL_250;
      v134 = v173;
      *(_QWORD *)(v25 + 24) = v173;
      v135 = v134 & 0xF;
      v136 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&v81[2 * (unsigned int)v135 + 13]);
      v137 = 0;
      v138 = v136;
      v139 = v81[2 * v135 + 12];
      if ( !v139 )
        goto LABEL_249;
      v140 = *(_QWORD *)(v25 + 24);
      while ( 1 )
      {
        v141 = *(_QWORD *)(v139 + 24);
        if ( v140 > v141 || v140 >= v141 && *(_DWORD *)(v25 + 40) >= *(_DWORD *)(v139 + 40) )
          break;
        v142 = *(_QWORD *)v139;
        if ( !*(_QWORD *)v139 )
        {
          v137 = 0;
          goto LABEL_249;
        }
LABEL_247:
        v139 = v142;
      }
      v142 = *(_QWORD *)(v139 + 8);
      if ( v142 )
        goto LABEL_247;
      v137 = 1;
LABEL_249:
      RtlAvlInsertNodeEx((unsigned __int64 *)&v81[2 * v135 + 12], v139, v137, v25);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v81[2 * (unsigned int)v135 + 13]);
      __writecr8(v138);
LABEL_250:
      LODWORD(v14) = v165;
LABEL_251:
      v6 = v169;
      v17 = *(_QWORD *)v167;
      v12 = PoolWithTag;
      v13 = v193;
    }
  }
  if ( (*(_DWORD *)(v21 + 772) & 0xC00u) >= 0xC00 && !*(_QWORD *)(v17 + 104) )
  {
    if ( !(unsigned int)MiIsStoreProcess(v21) )
      goto LABEL_16;
    v20 = v164;
  }
  v157 = *(_BYTE *)(v17 + 195);
  if ( (v157 & 0x10) != 0 )
  {
    v159 = v164;
  }
  else
  {
    if ( (v157 & 8) != 0
      && (*(_BYTE *)(v17 + 195) = HIBYTE(*(_DWORD *)(v17 + 192)) & 0xE7 | 0x10,
          ((MiForcedTrim(v17, v20) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0)
      && (*(_BYTE *)(v17 + 192) & 0x40) != 0
      && (v158 = *(_QWORD *)(v17 + 120), v158 > *(_QWORD *)(v17 + 152)) )
    {
      v159 = v164;
      if ( (*(_DWORD *)(v17 + 4) & 0xF) != 0 )
        MiReduceWs(v17, v164, v158 - 1);
      else
        MiReduceWs(v17, v164, *(_QWORD *)(v17 + 152));
    }
    else
    {
      v159 = v164;
    }
    if ( (*(_BYTE *)(v17 + 195) & 4) != 0 )
    {
      *(_BYTE *)(v17 + 195) = HIBYTE(*(_DWORD *)(v17 + 192)) & 0xEB | 0x10;
      MiAgeWorkingSet(
        v17,
        v159,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v17 + 172)) + 5544LL)
                            + 2354LL));
    }
    if ( (*(_BYTE *)(v17 + 195) & 0x20) != 0 )
    {
      *(_BYTE *)(v17 + 195) = HIBYTE(*(_DWORD *)(v17 + 192)) & 0xCF | 0x10;
      MiReduceWs(v17, v159, *(_QWORD *)(v17 + 152));
    }
    if ( (*(_BYTE *)(v17 + 195) & 0x10) != 0 )
      *(_BYTE *)(v17 + 195) = HIBYTE(*(_DWORD *)(v17 + 192)) & 0xEF;
  }
  v160 = (volatile LONG *)MiGetSharedVm(v17);
  ExReleaseSpinLockExclusive(v160, v159);
  v161 = CurrentThread;
  v162 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v162;
  if ( !v162
    && ($69CD3F157F9F39B6F7113F2231989901 *)v161->ApcState.ApcListHead[0].Flink != &v161->152
    && !v161->SpecialApcDisable )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v161) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v161);
    }
    else
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
LABEL_268:
  LODWORD(v14) = v171;
  v16 = v177;
LABEL_269:
  if ( v13 )
  {
    do
    {
      v154 = (_QWORD *)v13[3];
      v155 = (_QWORD *)v13[2];
      if ( (unsigned int)v154 >= 0x100 )
        MiDereferenceCombineBlock(v6, v154);
      v13 = v155;
    }
    while ( v155 );
  }
  if ( (_DWORD)v14 == 1 )
  {
    KiUnstackDetachProcess(v211, 1LL);
    MiAttachThreadDone(&v16[1].IdealNode[12]);
  }
  if ( v12 != v212 )
    ExFreePoolWithTag(v12, 0);
  result = v176;
  *v184 += v176;
  return result;
}
