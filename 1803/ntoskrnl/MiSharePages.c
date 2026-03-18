/*
 * XREFs of MiSharePages @ 0x1400326D0
 * Callers:
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiCheckProcessShadow @ 0x14001CFE0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiPageMightBeZero @ 0x140025F10 (MiPageMightBeZero.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiCombineCandidate @ 0x140030060 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x1400323B0 (MiMapArbitraryPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiConfirmPageIsZero @ 0x140053370 (MiConfirmPageIsZero.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiAttachThreadDone @ 0x1400831E4 (MiAttachThreadDone.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     MiReduceWs @ 0x140083CE4 (MiReduceWs.c)
 *     MiForcedTrim @ 0x140084224 (MiForcedTrim.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiPerformCombineScan @ 0x14009EED0 (MiPerformCombineScan.c)
 *     MiComputeHash64 @ 0x14009EF60 (MiComputeHash64.c)
 *     ExReleaseSpinLockShared @ 0x1400A5E30 (ExReleaseSpinLockShared.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiDereferenceCombineBlock @ 0x1400AD0CC (MiDereferenceCombineBlock.c)
 *     KiFlushCurrentTbOnly @ 0x1400ADBA4 (KiFlushCurrentTbOnly.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 *     MiMakeCombineCandidateClean @ 0x1400AE0C0 (MiMakeCombineCandidateClean.c)
 *     MiReleaseArbitraryPage @ 0x1400AE620 (MiReleaseArbitraryPage.c)
 *     MiIncrementCombineMdl @ 0x1400C56C0 (MiIncrementCombineMdl.c)
 *     MiPrepareAttachThread @ 0x1400D4D68 (MiPrepareAttachThread.c)
 *     MiIsStoreProcess @ 0x1400D5C14 (MiIsStoreProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiAllocateCombineProto @ 0x140122E30 (MiAllocateCombineProto.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140159D18 (HvlpFastFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 *     MiUnlockPageTable @ 0x14018626C (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpFlushAddressSpaceTbEx @ 0x14022E6C4 (HvlpFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x14022E7DC (HvlpSlowFlushAddressSpaceTb.c)
 *     MiLockPageAtDpc @ 0x140264C3C (MiLockPageAtDpc.c)
 *     MiHashIsCommon @ 0x14026BD98 (MiHashIsCommon.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiSharePages(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, int a5)
{
  _QWORD *v6; // rdx
  __int64 *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned int *v14; // rsi
  _QWORD *v15; // r13
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int *PoolWithTag; // rax
  __int64 v19; // rbx
  int v20; // edi
  char v21; // di
  char v22; // r15
  unsigned __int8 v23; // dl
  __int64 v24; // r11
  char v25; // cl
  char v26; // bl
  bool v27; // zf
  int v28; // edx
  int IsContended; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // r12
  unsigned __int64 v34; // rcx
  __int64 v35; // r10
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 valid; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int16 v47; // r8
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r14
  char v64; // r13
  int v65; // edi
  char v66; // r10
  __int64 v67; // rcx
  unsigned int v68; // esi
  bool v69; // r13
  __int64 v70; // r13
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r11
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // rsi
  __int64 Address; // rax
  int v82; // ecx
  unsigned int v83; // r15d
  __int64 *v84; // rbx
  unsigned int v85; // edi
  unsigned int v86; // r10d
  char v87; // al
  unsigned __int64 v88; // r8
  __int64 v89; // rcx
  _KPROCESS *Process; // rcx
  __int64 v91; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int64 v95; // rdx
  _QWORD *v96; // rdx
  __int64 v97; // rbx
  int IsZero; // eax
  __int64 *v99; // rcx
  char v100; // al
  __int64 v101; // rdi
  __int64 v102; // rax
  __int64 v103; // r11
  __int64 v104; // rsi
  __int64 v105; // r11
  __int64 v106; // rbx
  __int64 CombineProto; // rax
  __int64 v108; // rax
  _QWORD *v109; // r15
  __int64 v110; // rbx
  __int64 v111; // r14
  _QWORD *v112; // rax
  char v113; // al
  __int64 *v114; // r15
  __int64 v115; // rax
  __int64 v116; // rbx
  volatile LONG *v117; // rdi
  KIRQL v118; // al
  unsigned __int64 v119; // r8
  KIRQL v120; // si
  __int64 *v121; // rbx
  __int64 v122; // rdx
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  char v125; // r12
  _QWORD *v126; // rbx
  unsigned int v127; // r8d
  _QWORD *v128; // rdx
  __int64 *v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // r14
  __int64 v134; // r10
  __int64 v135; // r15
  __int64 v136; // rdi
  __int64 v137; // rax
  __int64 *v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 *v142; // r15
  _QWORD *v143; // r14
  int i; // esi
  _QWORD *v145; // rbx
  int v146; // r14d
  _QWORD *v147; // rdi
  __int64 v148; // rdi
  unsigned int v149; // r10d
  __int64 v150; // r8
  unsigned __int64 v151; // r9
  __int64 v152; // rcx
  _KPROCESS *v153; // rcx
  __int64 v154; // rdx
  int v155; // edx
  struct _KPRCB *v156; // rbx
  __int64 v157; // rcx
  unsigned __int64 v158; // rdx
  unsigned __int8 v159; // di
  int v160; // eax
  volatile LONG *SharedVm; // rbx
  __int64 v162; // rcx
  _QWORD *v163; // rsi
  __int64 v164; // rdi
  unsigned __int64 v165; // rbx
  int v166; // eax
  struct _KTHREAD *v167; // rbx
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rax
  unsigned __int8 v172; // di
  unsigned __int64 v173; // r8
  char v174; // al
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rax
  volatile LONG *v183; // rbx
  __int64 v184; // rcx
  struct _KTHREAD *v185; // rcx
  _QWORD *v186; // rbx
  _QWORD *result; // rax
  char v188; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v189; // [rsp+41h] [rbp-BFh]
  char v190; // [rsp+44h] [rbp-BCh]
  unsigned __int8 v191; // [rsp+48h] [rbp-B8h] BYREF
  char v192[7]; // [rsp+49h] [rbp-B7h] BYREF
  __int64 *v193; // [rsp+50h] [rbp-B0h]
  unsigned int *v194; // [rsp+58h] [rbp-A8h]
  _QWORD *v195; // [rsp+60h] [rbp-A0h]
  int v196; // [rsp+68h] [rbp-98h]
  __int64 v197; // [rsp+70h] [rbp-90h]
  __int64 v198; // [rsp+78h] [rbp-88h]
  unsigned int v199; // [rsp+80h] [rbp-80h]
  __int64 v200; // [rsp+88h] [rbp-78h]
  unsigned int v201; // [rsp+90h] [rbp-70h]
  int v202; // [rsp+94h] [rbp-6Ch]
  int v203; // [rsp+98h] [rbp-68h]
  __int64 v204; // [rsp+A0h] [rbp-60h]
  int v205[2]; // [rsp+A8h] [rbp-58h]
  int v206[2]; // [rsp+B0h] [rbp-50h]
  _QWORD *v207; // [rsp+B8h] [rbp-48h]
  int v208; // [rsp+C0h] [rbp-40h]
  __int64 v209; // [rsp+C8h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-30h]
  _QWORD *v211; // [rsp+D8h] [rbp-28h]
  int v212[2]; // [rsp+E0h] [rbp-20h]
  __int64 v213; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v214; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v215; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v216; // [rsp+100h] [rbp+0h]
  __int64 v217; // [rsp+108h] [rbp+8h]
  __int64 v218; // [rsp+110h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  __int64 v220; // [rsp+120h] [rbp+20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp+28h] BYREF
  char v222[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v223[5]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v224; // [rsp+170h] [rbp+70h] BYREF
  __int16 v225; // [rsp+174h] [rbp+74h]
  __int64 v226; // [rsp+178h] [rbp+78h]
  unsigned __int64 v227; // [rsp+180h] [rbp+80h]
  _QWORD v228[21]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD v229[44]; // [rsp+230h] [rbp+130h] BYREF
  _DWORD v230[44]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v231[48]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v232[208]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _QWORD *v233; // [rsp+490h] [rbp+390h]
  __int64 v234; // [rsp+4B0h] [rbp+3B0h]
  _QWORD v235[4]; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int64 v236; // [rsp+4F0h] [rbp+3F0h] BYREF

  v193 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD **)(a1 + 24);
  v7 = a3;
  v8 = a2[4];
  *(_QWORD *)v212 = *(_QWORD *)(a1 + 16);
  v202 = *(_DWORD *)(a1 + 52);
  v9 = *a4;
  v211 = v6;
  v209 = a1;
  v10 = 0LL;
  *(_QWORD *)v205 = v9;
  v201 = 0;
  v198 = 0LL;
  *(_QWORD *)v206 = v8;
  v11 = MiTbFlushType(v8, 0LL, a1);
  v13 = a2[3];
  v14 = (unsigned int *)v232;
  v15 = (_QWORD *)a2[6];
  v199 = v11;
  v217 = v16 + 56;
  v203 = v12;
  v196 = v12;
  v194 = (unsigned int *)v232;
  if ( v13 <= 0x14 )
  {
    LODWORD(v17) = v13;
  }
  else
  {
    v17 = 509LL;
    if ( v13 < 0x1FD )
      v17 = v13;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v17 + 24, 0x73576D4Du);
    v12 = 0LL;
    v194 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v14 = (unsigned int *)v232;
      v194 = (unsigned int *)v232;
      LODWORD(v17) = 20;
    }
  }
  *v14 = v199;
  v14[3] = v12;
  *((_WORD *)v14 + 2) = 0;
  *((_QWORD *)v14 + 2) = v12;
  v14[2] = v17;
  *((_QWORD *)v14 + 3) = v12;
  v19 = a2[5];
  v220 = v19;
  if ( v19 && (_KPROCESS *)v19 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
    v196 = MiPrepareAttachThread(v19, v19 + 1280);
    v20 = v196;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( !v20 )
      goto LABEL_341;
    KiStackAttachProcess((_KPROCESS *)v19, 1u, (__int64)v231);
    v12 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 1 )
  {
    v21 = 0;
    v233 = (_QWORD *)v12;
    v188 = 0;
    v234 = v12;
    v22 = 0;
    v235[0] = v12;
    v236 = v12;
    v200 = v12;
    v189 = MiLockWorkingSetShared(v8);
    v23 = v189;
    if ( !v19 )
      goto LABEL_16;
    if ( (*(_DWORD *)(v19 + 772) & 0xC00u) < 0xC00 || *(_QWORD *)(v8 + 104) )
      goto LABEL_300;
    if ( (unsigned int)MiIsStoreProcess(v19) )
      break;
LABEL_16:
    while ( 2 )
    {
      v24 = 0LL;
      v25 = v22;
      v26 = 0;
      v27 = v22 == 1;
      v207 = v15;
      v22 = 0;
      v28 = 0;
      if ( !v27 )
        v22 = v25;
      v190 = v22;
      if ( v25 != 1 )
        v28 = v203 + 1;
      v203 = v28;
      if ( v21 )
      {
        v188 = 0;
        v26 = 1;
LABEL_38:
        v31 = v200;
        goto LABEL_39;
      }
      if ( (v28 & 7) != 0 )
      {
        if ( KeShouldYieldProcessor() )
          goto LABEL_36;
        v32 = qword_1403CB708;
        if ( (v14[1] & 2) == 0 && *v14 == 1 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] )
          v32 = -1LL;
        if ( v14[3] >= v14[2] || *((_BYTE *)v14 + 5) || *((_QWORD *)v14 + 2) > v32 )
LABEL_36:
          v26 = 1;
        v24 = 0LL;
        goto LABEL_38;
      }
      IsContended = MiWorkingSetIsContended(v8);
      v31 = v200;
      if ( IsContended )
      {
        v26 = 1;
        goto LABEL_39;
      }
      if ( v200 )
      {
        if ( (unsigned int)MiPageTableLockIsContended(v30, v200) )
          v26 = 1;
        goto LABEL_38;
      }
LABEL_39:
      if ( v15 )
      {
        if ( v26 )
          goto LABEL_239;
        v33 = v15[3];
        v34 = v15[1];
        v35 = *v15;
        v195 = (_QWORD *)v15[2];
        v216 = v34;
        v204 = v35;
        v197 = v33;
        v208 = v33;
        if ( (unsigned int)v33 >= 0x100 )
        {
          v208 = *(_DWORD *)(v33 + 40) & 0x1F;
        }
        else
        {
          v33 = v24;
          v197 = v24;
        }
        v36 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v218 = v36;
        v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v31 != v37 )
        {
          if ( v31 )
          {
            v8 = *(_QWORD *)v206;
            v21 = 1;
            v188 = 1;
            continue;
          }
          v38 = *(_QWORD *)v206;
          valid = MiLockLowestValidPageTable(*(_QWORD *)v206, v36, v222);
          v200 = valid;
          if ( valid != v37 )
          {
            MiUnlockPageTable(v38, valid, v40);
            v200 = 0LL;
            MiDereferenceCombineBlock(v7);
            goto LABEL_237;
          }
          v14 = v194;
        }
        if ( MiPteInShadowRange(v36) && (unsigned int)MiPteHasShadow(v42, v41, v43, v44) )
        {
          if ( (v41 & 1) != 0 )
          {
            if ( (v41 & 0x20) == 0 || (v41 & 0x42) == 0 )
            {
              v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v45 )
              {
                v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)(unsigned int)v36 >> 3) & 0x1FF));
                v47 = v41 | 0x20;
                if ( (v46 & 0x20) == 0 )
                  v47 = v41;
                LOWORD(v41) = v47;
                if ( (v46 & 0x42) != 0 )
                  LOWORD(v41) = v47 | 0x42;
              }
            }
            goto LABEL_60;
          }
LABEL_61:
          if ( (v41 & 0x400) != 0 || (v41 & 0x800) == 0 )
          {
LABEL_86:
            MiDereferenceCombineBlock(v7);
            v21 = v188;
            v15 = v195;
            v8 = *(_QWORD *)v206;
            continue;
          }
        }
        else
        {
LABEL_60:
          if ( (v41 & 1) == 0 )
            goto LABEL_61;
        }
        v48 = *(_QWORD *)v36;
        if ( MiPteInShadowRange(v36)
          && (unsigned int)MiPteHasShadow(v50, v49, v51, v52)
          && (v48 & 1) != 0
          && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
        {
          v53 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 8 * (((unsigned __int64)(unsigned int)v36 >> 3) & 0x1FF));
            v55 = v48 | 0x20;
            if ( (v54 & 0x20) == 0 )
              v55 = v48;
            v48 = v55;
            if ( (v54 & 0x42) != 0 )
              v48 = v55 | 0x42;
          }
        }
        v215 = v48;
        if ( (v48 & 1) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&v215)
            && (unsigned int)MiPteHasShadow(v57, v56, v58, v59)
            && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
          {
            v60 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v60 )
            {
              v61 = *(_QWORD *)(v60 + 8 * (((unsigned __int64)&v215 >> 3) & 0x1FF));
              v56 = v48 | 0x20;
              if ( (v61 & 0x20) == 0 )
                v56 = v48;
              if ( (v61 & 0x42) != 0 )
                v56 |= 0x42uLL;
            }
            else
            {
              v56 = v48;
            }
          }
          if ( !(unsigned int)MiIsPfnInline((v56 >> 12) & 0xFFFFFFFFFLL) )
            goto LABEL_86;
          v63 = 48 * v62 - 0x58000000000LL;
          BugCheckParameter2 = v63;
          MiLockPageAtDpc(v63);
        }
        else
        {
          if ( (v48 & 0x400) != 0 || (v48 & 0x800) == 0 )
            goto LABEL_86;
          BugCheckParameter2 = MiLockTransitionLeafPage(v36);
          v63 = BugCheckParameter2;
          if ( !BugCheckParameter2 )
          {
            v7 = v193;
            MiDereferenceCombineBlock(v193);
            v21 = v188;
            v15 = v195;
            v8 = *(_QWORD *)v206;
            continue;
          }
        }
        v64 = v202;
        v65 = MiCombineCandidate(*(__int64 **)v205, v202, v63);
        if ( !v65 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = v193;
          MiDereferenceCombineBlock(v193);
          v21 = v188;
          v15 = v195;
          v8 = *(_QWORD *)v206;
          continue;
        }
        v66 = *(_BYTE *)(v63 + 34) & 7;
        v67 = v209;
        v68 = (*(_DWORD *)(v63 + 16) >> 5) & 0x1F;
        if ( (v64 & 4) != 0 && !(unsigned int)MiHashIsCommon(v209, v204) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_229:
          v7 = v193;
          MiDereferenceCombineBlock(v193);
          goto LABEL_237;
        }
        if ( *(_QWORD *)(v63 + 40) >> 58 != a5 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v7 = v193;
          MiDereferenceCombineBlock(v193);
          goto LABEL_237;
        }
        v69 = 0;
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v66 == 6 )
        {
          v70 = v218;
          if ( v218 != (*(_QWORD *)(v63 + 8) | 0x8000000000000000uLL) )
            goto LABEL_229;
          v71 = *(_QWORD *)(v63 + 40);
          if ( (v71 & 0x200000000000000LL) != 0
            || (*(_BYTE *)(v63 + 35) & 8) != 0
            || (v71 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            goto LABEL_229;
          }
          if ( MiPteInShadowRange(v218)
            && (unsigned int)MiPteHasShadow(v73, v72, v74, v75)
            && (v72 & 1) != 0
            && ((v72 & 0x20) == 0 || (v72 & 0x42) == 0) )
          {
            v74 = (unsigned int)v70;
            v77 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v77 )
            {
              v78 = *(_QWORD *)(v77 + 8 * (((unsigned __int64)(unsigned int)v70 >> 3) & 0x1FF));
              v74 = v72 | 0x20;
              if ( (v78 & 0x20) == 0 )
                v74 = v72;
              v72 = v74;
              if ( (v78 & 0x42) != 0 )
                v72 = v74 | 0x42;
            }
          }
          v79 = HIBYTE(v72);
          LOBYTE(v79) = v79 & 0xF;
          if ( (_BYTE)v79 == 8 )
            goto LABEL_229;
          if ( *(_WORD *)(v63 + 32) != 1 )
            goto LABEL_229;
          v80 = v216;
          Address = 0LL;
          if ( v65 == 1 )
          {
            Address = MiLocateAddress(v216, v79, v74, v75);
            if ( !Address )
              goto LABEL_229;
            v82 = *(_DWORD *)(Address + 48);
            if ( (v82 & 0x20000) != 0 || ((1 << (v82 & 7)) & 0x55) == 0 )
              goto LABEL_229;
          }
          v83 = (*(_DWORD *)(v63 + 16) >> 5) & 0x1F;
          if ( v83 != v208 )
          {
            v7 = v193;
            MiDereferenceCombineBlock(v193);
            goto LABEL_236;
          }
          if ( (v48 & 0x42) != 0 )
          {
            if ( v201 < 8 )
            {
              v84 = v235;
LABEL_170:
              v95 = v80;
              v14 = v194;
              MiInsertTbFlushEntry((__int64)v194, v95, 1LL, 0);
              v96 = v207;
              v22 = v190;
              v7 = v193;
              v21 = v188;
              v15 = v195;
              v8 = *(_QWORD *)v206;
              v207[2] = *v84;
              *v84 = (__int64)v96;
              continue;
            }
            MiMakeCombineCandidateClean(v70, Address);
            v85 = v199;
            v226 = 1LL;
            v224 = v199;
            v225 = 0;
            v227 = 0LL;
            v228[0] = 0LL;
            MiInsertTbFlushEntry((__int64)&v224, v80, 1LL, 0);
            v86 = HIDWORD(v226);
            if ( !HIDWORD(v226) )
              goto LABEL_164;
            v87 = v225;
            v88 = qword_1403CB708;
            v89 = v224;
            if ( (v225 & 2) != 0 )
            {
              if ( v224 == 1 )
              {
                v91 = 0LL;
                goto LABEL_138;
              }
            }
            else if ( v224 == 1 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process[2].ActiveProcessors.Bitmap[16] || Process->SecureState.SecureHandle )
              {
                v86 = HIDWORD(v226);
                v89 = v224;
                v88 = -1LL;
                v87 = v225;
                v91 = 0LL;
              }
              else
              {
                v86 = HIDWORD(v226);
                v91 = 0LL;
                v87 = v225;
                v89 = v224;
              }
LABEL_138:
              if ( !HIBYTE(v225) && v227 <= v88 )
              {
                if ( (v87 & 1) != 0 )
                  KeFlushMultipleRangeCurrentTb(v86, v228, (unsigned int)v89);
                else
                  KeFlushMultipleRangeTb(v86, v228, (unsigned int)v89, (unsigned int)v91);
LABEL_163:
                LOBYTE(v225) = v225 & 0xF7;
                HIDWORD(v226) = 0;
                v227 = 0LL;
LABEL_164:
                v76 = v204;
LABEL_172:
                if ( v76 == qword_1403CBD10 )
                {
                  v97 = *(_QWORD *)v206;
                  if ( MiPageMightBeZero(*(__int64 *)v206, v63) )
                  {
                    MiLockPageAtDpc(v63);
                    IsZero = MiConfirmPageIsZero(v63);
                    _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    if ( IsZero )
                    {
                      v226 = 1LL;
                      v224 = v85;
                      v225 = 4;
                      v227 = 0LL;
                      v228[0] = 0LL;
                      MiInsertTbFlushEntry((__int64)&v224, v80, 1LL, 0);
                      MiFreeWsleList(v97, (__int64)&v224, 0);
                      v7 = v193;
                      ++v198;
                      v99 = v193;
                      ++v211[1];
                      MiDereferenceCombineBlock(v99);
                      goto LABEL_236;
                    }
                  }
                }
                goto LABEL_176;
              }
              if ( (v87 & 1) != 0 )
              {
                if ( (HvlEnlightenments & 0x800000) == 0 )
                  goto LABEL_150;
                if ( (HvlEnlightenments & 2) != 0 )
                  goto LABEL_153;
                if ( KiFlushPcid )
                  goto LABEL_150;
                if ( KiKvaShadow )
                {
                  v91 = (unsigned int)v89;
                  if ( !(_DWORD)v89 )
                    goto LABEL_150;
                  v91 = (unsigned int)(v89 - 1);
                  if ( (_DWORD)v89 == 2 )
                    goto LABEL_150;
LABEL_153:
                  KiPrepareFlushParameters(v89, &v213, &v191);
                  CurrentPrcb = KeGetCurrentPrcb();
                  v229[0] = 1310721;
                  memset(&v229[1], 0, 0xA4uLL);
                  Group = CurrentPrcb->Group;
                  GroupSetMember = CurrentPrcb->GroupSetMember;
                  if ( CurrentPrcb->Group )
                    LOWORD(v229[0]) = Group + 1;
                  *(_QWORD *)&v229[2 * Group + 2] |= GroupSetMember;
                  if ( (HvlpFlags & 0x80u) == 0 || (unsigned __int16)KiActiveGroups <= 1u )
                  {
                    if ( (HvlEnlightenments & 0x80u) == 0 )
                      HvlpSlowFlushAddressSpaceTb(v213, v229, v191);
                    else
                      HvlpFastFlushAddressSpaceTb(v213, v229, v191);
                  }
                  else
                  {
                    HvlpFlushAddressSpaceTbEx(v213, v229, v191);
                  }
                }
                else
                {
                  if ( !(_DWORD)v89 || (int)v89 > 2 )
                    goto LABEL_153;
LABEL_150:
                  KiFlushCurrentTbOnly(v89, v91, v88, v75);
                }
              }
              else
              {
                KeFlushTb(v89, v91);
              }
              HIBYTE(v225) = 0;
              goto LABEL_163;
            }
            v91 = (unsigned int)((v225 & 8) != 0) + 1;
            goto LABEL_138;
          }
          if ( v76 == qword_1403CBD10 )
          {
            if ( ((*(_DWORD *)(v63 + 16) >> 5) & 0x18) == 0 && (v48 & 0x20) != 0 && v201 < 3 )
            {
              v84 = &v236;
              goto LABEL_170;
            }
            v85 = v199;
            goto LABEL_172;
          }
LABEL_176:
          v100 = v190;
          if ( (v83 & 0x18) != 0 )
            v100 = 1;
          v101 = -1LL;
          v190 = v100;
          if ( v33 )
          {
            v7 = v193;
            LODWORD(v104) = 3;
            goto LABEL_188;
          }
          v102 = MiComputeHash64(v80);
          if ( v102 != v103 )
            goto LABEL_235;
          v104 = (int)MiProtectionToCacheAttribute(v83);
          v106 = *(_QWORD *)(v217 + 8 * v104);
          if ( !v106 || *(_DWORD *)(v106 + 44) >= *(_DWORD *)(v106 + 40) )
            goto LABEL_235;
          CombineProto = MiAllocateCombineProto(*(_QWORD *)v205, v105, v83, 0LL);
          v7 = v193;
          LODWORD(v33) = CombineProto;
          v197 = CombineProto;
          if ( CombineProto )
          {
            v109 = v207;
            v207[3] = CombineProto;
          }
          else
          {
            v33 = *v193;
            v197 = v33;
            v108 = *(_QWORD *)v33;
            if ( *(__int64 **)(v33 + 8) != v193 || *(_QWORD *)(v108 + 8) != v33 )
              __fastfail(3u);
            *v193 = v108;
            *(_QWORD *)(v108 + 8) = v7;
            *(_DWORD *)(v33 + 40) = v83 | *(_DWORD *)(v33 + 40) & 0xFFFFFFE0;
            v101 = *(_QWORD *)(v106 + 8 * ((unsigned __int64)*(unsigned int *)(v106 + 44) >> 12) + 48);
LABEL_188:
            v109 = v207;
          }
          v110 = MiConvertPrivateToProto(v206[0], v70, v33, v75, *(__int64 *)v205, (__int64)v194, v101);
          if ( !v110 )
          {
            MiDereferenceCombineBlock(v7);
            goto LABEL_236;
          }
          ++v211[1];
          if ( v101 == -1 )
          {
            v111 = 0LL;
            ++v198;
          }
          else
          {
            MiIncrementCombineMdl(v209, (unsigned int)v104);
            v111 = v197;
          }
          v112 = v233;
          v109[1] = v110;
          v69 = v101 != -1;
          v109[2] = v112;
          v233 = v109;
LABEL_195:
          if ( !v69 )
            goto LABEL_235;
          v113 = v204;
          v114 = *(__int64 **)v205;
          *(_QWORD *)(v111 + 24) = v204;
          v115 = v113 & 0xF;
          v116 = (unsigned int)v115;
          v117 = (volatile LONG *)&v114[2 * v115 + 13];
          v118 = ExAcquireSpinLockExclusive(v117);
          LOBYTE(v119) = 0;
          v120 = v118;
          v121 = &v114[2 * v116 + 12];
          v122 = *v121;
          if ( !*v121 )
            goto LABEL_234;
          v119 = *(_QWORD *)(v111 + 24);
          while ( 1 )
          {
            v123 = *(_QWORD *)(v122 + 24);
            if ( v119 > v123 || v119 >= v123 && (*(_DWORD *)(v111 + 40) & 0x1Fu) >= (*(_DWORD *)(v122 + 40) & 0x1Fu) )
            {
              v124 = *(_QWORD *)(v122 + 8);
              if ( !v124 )
              {
                LOBYTE(v119) = 1;
LABEL_234:
                RtlAvlInsertNodeEx(v121, v122, v119, v111);
                ExReleaseSpinLockExclusiveFromDpcLevel(v117);
                __writecr8(v120);
LABEL_235:
                v7 = v193;
LABEL_236:
                v22 = v190;
LABEL_237:
                v14 = v194;
                v21 = v188;
                v15 = v195;
                v8 = *(_QWORD *)v206;
                goto LABEL_16;
              }
            }
            else
            {
              v124 = *(_QWORD *)v122;
              if ( !*(_QWORD *)v122 )
              {
                LOBYTE(v119) = 0;
                goto LABEL_234;
              }
            }
            v122 = v124;
          }
        }
        v125 = 0;
        v126 = (_QWORD *)((((unsigned __int64)MiGetUltraMapping(v67 + 200, 3LL, 1LL) >> 9) & 0x7FFFFFFFF8LL)
                        - 0x98000000000LL);
        if ( !v126 )
          goto LABEL_229;
        v127 = v202;
        v128 = *(_QWORD **)v212;
        v129 = *(__int64 **)v205;
        *(_QWORD *)(*(_QWORD *)v212 + 64LL) = v63;
        v128[9] = v126;
        if ( !(unsigned int)MiMapArbitraryPage(v129, v128, v127, v65, 1) )
        {
          *v126 = ZeroPte;
          if ( MiPteInShadowRange((unsigned __int64)v126) )
            MiWritePteShadow(v131, v130);
          goto LABEL_229;
        }
        v132 = v197;
        if ( (v68 & 0x18) != 0 )
          v22 = 1;
        v133 = -1LL;
        v190 = v22;
        if ( v197 )
        {
          LODWORD(v135) = 3;
          goto LABEL_221;
        }
        if ( (unsigned int)MiPerformCombineScan(v209, *(_QWORD *)v212, v223) && v223[0] == v204 )
        {
          v135 = (int)MiProtectionToCacheAttribute(v68);
          v136 = *(_QWORD *)(v217 + 8 * v135);
          if ( v136 && *(_DWORD *)(v136 + 44) < *(_DWORD *)(v136 + 40) )
          {
            v137 = MiAllocateCombineProto(*(_QWORD *)v205, v134, v68, 0LL);
            v197 = v137;
            v132 = v137;
            if ( v137 )
            {
              v207[3] = v137;
            }
            else
            {
              v138 = v193;
              v132 = *v193;
              v197 = v132;
              v139 = *(_QWORD *)v132;
              if ( *(__int64 **)(v132 + 8) != v193 || *(_QWORD *)(v139 + 8) != v132 )
                __fastfail(3u);
              *v193 = v139;
              *(_QWORD *)(v139 + 8) = v138;
              *(_DWORD *)(v132 + 40) = v68 | *(_DWORD *)(v132 + 40) & 0xFFFFFFE0;
              v133 = *(_QWORD *)(v136 + 8 * ((unsigned __int64)*(unsigned int *)(v136 + 44) >> 12) + 48);
            }
LABEL_221:
            if ( (unsigned int)MiConvertStandbyToProto(
                                 v206[0],
                                 v205[0],
                                 v212[0],
                                 v202,
                                 v132,
                                 BugCheckParameter2,
                                 v218,
                                 v133) )
            {
              ++v211[1];
              if ( v133 != -1 )
              {
                MiIncrementCombineMdl(v209, (unsigned int)v135);
                v69 = 1;
                v125 = 1;
                goto LABEL_224;
              }
              v22 = v190;
              v111 = 0LL;
              ++v198;
              v125 = 1;
LABEL_226:
              MiReleaseArbitraryPage(*(_QWORD *)v212);
              *v126 = ZeroPte;
              if ( MiPteInShadowRange((unsigned __int64)v126) )
                MiWritePteShadow(v141, v140);
              if ( !v125 )
                goto LABEL_229;
              goto LABEL_195;
            }
          }
LABEL_224:
          v22 = v190;
        }
        v111 = v197;
        goto LABEL_226;
      }
      break;
    }
    ++v201;
LABEL_239:
    v142 = v193;
    v143 = v235;
    BugCheckParameter2 = (ULONG_PTR)v235;
    for ( i = 2; i <= 3; ++i )
    {
      v145 = (_QWORD *)*v143;
      if ( *v143 )
      {
        v146 = v205[0];
        do
        {
          v147 = (_QWORD *)v145[2];
          if ( (unsigned int)MiCrcStillIntact(v146, v8, v202, (_DWORD)v145, i) )
          {
            v145[2] = v15;
            v15 = v145;
          }
          else if ( (unsigned int)v145[3] >= 0x100 )
          {
            MiDereferenceCombineBlock(v142);
          }
          v145 = v147;
        }
        while ( v147 );
        v143 = (_QWORD *)BugCheckParameter2;
        v24 = 0LL;
      }
      *v143 = v24;
      v143 += 4;
      BugCheckParameter2 = (ULONG_PTR)v143;
    }
    v148 = (__int64)v194;
    v149 = v194[3];
    if ( !v149 )
      goto LABEL_284;
    v150 = *((unsigned __int8 *)v194 + 4);
    v151 = qword_1403CB708;
    if ( (v150 & 2) != 0 )
      goto LABEL_255;
    v152 = *v194;
    if ( (_DWORD)v152 != 1 )
      goto LABEL_257;
    v153 = KeGetCurrentThread()->ApcState.Process;
    if ( v153[2].ActiveProcessors.Bitmap[16] || v153->SecureState.SecureHandle )
      v151 = -1LL;
LABEL_255:
    v152 = *v194;
    if ( (_DWORD)v152 == 1 )
    {
      v154 = (unsigned int)v24;
    }
    else
    {
LABEL_257:
      v155 = v24;
      LOBYTE(v155) = (v150 & 8) != 0;
      v154 = (unsigned int)(v155 + 1);
    }
    if ( *((_BYTE *)v194 + 5) || *((_QWORD *)v194 + 2) > v151 )
    {
      if ( (v150 & 1) != 0 )
      {
        if ( (HvlEnlightenments & 0x800000) == 0 )
          goto LABEL_270;
        if ( (HvlEnlightenments & 2) != 0 )
          goto LABEL_273;
        if ( KiFlushPcid )
          goto LABEL_270;
        if ( KiKvaShadow )
        {
          v154 = (unsigned int)v152;
          if ( !(_DWORD)v152 )
            goto LABEL_270;
          v154 = (unsigned int)(v152 - 1);
          if ( (_DWORD)v152 == 2 )
            goto LABEL_270;
LABEL_273:
          KiPrepareFlushParameters(v152, &v214, v192);
          v156 = KeGetCurrentPrcb();
          v230[0] = 1310721;
          memset(&v230[1], 0, 0xA4uLL);
          v157 = v156->Group;
          v158 = v156->GroupSetMember;
          if ( v156->Group )
            LOWORD(v230[0]) = v157 + 1;
          *(_QWORD *)&v230[2 * v157 + 2] |= v158;
          if ( (HvlpFlags & 0x80u) == 0 || (unsigned __int16)KiActiveGroups <= 1u )
          {
            if ( (HvlEnlightenments & 0x80u) == 0 )
              HvlpSlowFlushAddressSpaceTb(v214, v230, (unsigned __int8)v192[0]);
            else
              HvlpFastFlushAddressSpaceTb(v214, v230, (unsigned __int8)v192[0]);
          }
          else
          {
            HvlpFlushAddressSpaceTbEx(v214, v230, (unsigned __int8)v192[0]);
          }
        }
        else
        {
          if ( !(_DWORD)v152 || (int)v152 > 2 )
            goto LABEL_273;
LABEL_270:
          KiFlushCurrentTbOnly(v152, v154, v150, v151);
        }
      }
      else
      {
        KeFlushTb(v152, v154);
      }
      *(_BYTE *)(v148 + 5) = 0;
      goto LABEL_283;
    }
    if ( (v150 & 1) != 0 )
      KeFlushMultipleRangeCurrentTb(v149, v194 + 6, (unsigned int)v152);
    else
      KeFlushMultipleRangeTb(v149, v194 + 6, (unsigned int)v152, (unsigned int)v154);
LABEL_283:
    *(_BYTE *)(v148 + 4) &= ~8u;
    *(_DWORD *)(v148 + 12) = 0;
    *(_QWORD *)(v148 + 16) = 0LL;
LABEL_284:
    if ( v200 )
      MiUnlockPageTable(v8, v200, v31);
    if ( (*(_BYTE *)(v8 + 184) & 7u) < 6 )
    {
      v160 = HIBYTE(*(_DWORD *)(v8 + 184));
      if ( (*(_DWORD *)(v8 + 184) & 0x8000000) != 0 || (v160 & 4) != 0 || (v160 & 0x10) != 0 )
      {
        v159 = v189;
        MiPreUnlockWorkingSetShared(v8, v189, v31);
      }
      else
      {
        v159 = v189;
      }
      SharedVm = (volatile LONG *)MiGetSharedVm(v8);
      MiCheckProcessShadow(v162, 1);
      ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
    }
    else
    {
      v159 = v189;
    }
    __writecr8(v159);
    v163 = v233;
    if ( v233 )
    {
      do
      {
        v164 = v163[1];
        v165 = (unsigned __int8)MiLockPageInline(v164);
        *(_BYTE *)(v164 + 34) = *(_BYTE *)(v164 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v164);
        _InterlockedAnd64((volatile signed __int64 *)(v164 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v165);
        v163 = (_QWORD *)v163[2];
      }
      while ( v163 );
      v8 = *(_QWORD *)v206;
    }
    if ( !v15 )
    {
      KeLeaveCriticalRegionThread(CurrentThread);
      v14 = v194;
      v7 = v142;
      goto LABEL_340;
    }
    v7 = v142;
    v14 = v194;
    v12 = 0LL;
    v19 = v220;
  }
  v23 = v189;
LABEL_300:
  if ( (*(_BYTE *)(v8 + 184) & 7u) < 6 )
  {
    v166 = *(_DWORD *)(v8 + 184);
    if ( ((v166 & 0x8000000) != 0 || (v166 & 0x4000000) != 0 || (v166 & 0x10000000) != 0)
      && (v167 = KeGetCurrentThread(), (*(_DWORD *)(&v167[1].SwapListEntry + 1) & 0x400000) == 0) )
    {
      if ( (v166 & 0x8000000) != 0 )
      {
        v168 = MiGetSharedVm(v8);
        LOBYTE(v169) = -1;
        v170 = v168 + 40;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v170, v169);
        else
          ExpAcquireSpinLockExclusive(v170, v169);
        *(_BYTE *)(v8 + 187) = HIBYTE(*(_DWORD *)(v8 + 184)) & 0xF7;
        v171 = MiGetSharedVm(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v171 + 40));
        v172 = v189;
        _interlockedbittestandset((volatile signed __int32 *)&v167[1].SwapListEntry + 2, 0x16u);
        if ( !MiForcedTrim(v8, v189) && (*(_BYTE *)(v8 + 184) & 0x40) != 0 )
        {
          v173 = *(_QWORD *)(v8 + 120);
          if ( v173 > *(_QWORD *)(v8 + 152) )
          {
            if ( (*(_DWORD *)(v8 + 4) & 0xF) != 0 )
              MiReduceWs(v8, v189, v173 - 1);
            else
              MiReduceWs(v8, v189, *(_QWORD *)(v8 + 152));
          }
        }
      }
      else
      {
        v172 = v189;
      }
      v174 = *(_BYTE *)(v8 + 187);
      if ( (v174 & 4) != 0 )
      {
        v175 = MiGetSharedVm(v8);
        LOBYTE(v176) = -1;
        v177 = v175 + 40;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v177, v176);
        else
          ExpAcquireSpinLockExclusive(v177, v176);
        *(_BYTE *)(v8 + 187) = HIBYTE(*(_DWORD *)(v8 + 184)) & 0xFB;
        v178 = MiGetSharedVm(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v178 + 40));
        _interlockedbittestandset((volatile signed __int32 *)&v167[1].SwapListEntry + 2, 0x16u);
        MiAgeWorkingSet(
          v8,
          v172,
          5,
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v8 + 174)) + 6768LL)
                              + 2354LL));
        v174 = *(_BYTE *)(v8 + 187);
      }
      if ( (v174 & 0x10) != 0 )
      {
        v179 = MiGetSharedVm(v8);
        LOBYTE(v180) = -1;
        v181 = v179 + 40;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v181, v180);
        else
          ExpAcquireSpinLockExclusive(v181, v180);
        *(_BYTE *)(v8 + 187) = HIBYTE(*(_DWORD *)(v8 + 184)) & 0xEF;
        v182 = MiGetSharedVm(v8);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v182 + 40));
        _interlockedbittestandset((volatile signed __int32 *)&v167[1].SwapListEntry + 2, 0x16u);
        MiReduceWs(v8, v172, *(_QWORD *)(v8 + 152));
      }
      if ( (*(_DWORD *)(&v167[1].SwapListEntry + 1) & 0x400000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v167[1].SwapListEntry + 2, 0x16u);
    }
    else
    {
      v172 = v189;
    }
    v183 = (volatile LONG *)MiGetSharedVm(v8);
    MiCheckProcessShadow(v184, 1);
    ExReleaseSpinLockShared(v183, v172);
  }
  else
  {
    __writecr8(v23);
  }
  v185 = CurrentThread;
  v27 = CurrentThread->KernelApcDisable++ == -1;
  if ( v27
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v185->ApcState.ApcListHead[0].Flink != &v185->152
    && !v185->SpecialApcDisable )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v185) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v185);
    }
    else
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
LABEL_340:
  v20 = v196;
  v10 = v198;
LABEL_341:
  if ( v15 )
  {
    do
    {
      v186 = (_QWORD *)v15[2];
      if ( (unsigned int)v15[3] >= 0x100 )
        MiDereferenceCombineBlock(v7);
      v15 = v186;
    }
    while ( v186 );
  }
  if ( v20 == 1 )
  {
    KiUnstackDetachProcess((__int64)v231, 1LL);
    MiAttachThreadDone(v220 + 1280);
  }
  if ( v14 != (unsigned int *)v232 )
    ExFreePoolWithTag(v14, 0);
  result = v211;
  *v211 += v10;
  return result;
}
