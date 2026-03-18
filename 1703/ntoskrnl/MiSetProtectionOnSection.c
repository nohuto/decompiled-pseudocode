/*
 * XREFs of MiSetProtectionOnSection @ 0x1400CEFC0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140441870 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x140549FD0 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiCompressTbFlushList @ 0x1400182F0 (MiCompressTbFlushList.c)
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiPteNeedsCommitCharge @ 0x14001DF70 (MiPteNeedsCommitCharge.c)
 *     MiMakeProtoLeafValid @ 0x1400293F8 (MiMakeProtoLeafValid.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14002CA88 (MiCaptureWriteWatchDirtyBit.c)
 *     KiIpiWaitForRequestBarrier @ 0x140040C60 (KiIpiWaitForRequestBarrier.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiSetProtectionOnTransitionPte @ 0x140078AD0 (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x14007A1EC (MiTryDeleteTransitionPte.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14007C3EC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KiFlushRangeWorker @ 0x1400D6990 (KiFlushRangeWorker.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiDecreaseUsedPtesCount @ 0x1401057E0 (MiDecreaseUsedPtesCount.c)
 *     MiSanitizePfnProtection @ 0x1401071F0 (MiSanitizePfnProtection.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KiIpiSendRequest @ 0x140120590 (KiIpiSendRequest.c)
 *     MiUnlockVa @ 0x140134DC8 (MiUnlockVa.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v8; // rsi
  char v12; // al
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // r13d
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  LONG *SharedVm; // rbx
  KIRQL v22; // al
  int v23; // r8d
  KIRQL v24; // si
  LONG *v25; // rax
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  unsigned __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  int v35; // ebx
  __int64 *v36; // rax
  __int64 v37; // rax
  volatile signed __int64 *v38; // rbx
  int v39; // r14d
  __int64 v40; // rbx
  LONG *v41; // rbx
  __int64 CurrentIrql; // rsi
  signed __int32 v43; // edx
  signed __int32 v44; // eax
  __int64 v45; // r9
  ULONG_PTR ProtoLeafValid; // r14
  ULONG_PTR v47; // rcx
  KIRQL v48; // r12
  unsigned __int64 i; // rcx
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // r9
  __int64 v52; // rbx
  ULONG_PTR v53; // r15
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rbx
  __int64 v59; // r9
  __int64 v60; // r10
  __int64 v61; // r12
  __int64 v62; // r11
  __int64 v63; // r13
  __int64 v64; // r14
  unsigned __int64 v65; // rdi
  _QWORD *CloneAddress; // rbx
  __int64 v67; // rcx
  int v68; // r15d
  unsigned __int64 v69; // rax
  _QWORD *v70; // r10
  unsigned __int8 v71; // al
  __int64 v72; // r8
  unsigned int v73; // eax
  __int64 v74; // rdx
  _KPROCESS *Process; // rcx
  int v76; // r14d
  unsigned int v77; // r8d
  unsigned int v78; // r8d
  int v79; // r8d
  int v80; // eax
  unsigned __int64 v81; // rax
  volatile signed __int64 *v82; // r10
  char v83; // r9
  signed __int64 v84; // rdx
  signed __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdi
  __int64 v88; // rax
  unsigned int v89; // eax
  unsigned int v90; // eax
  int v91; // eax
  unsigned int v92; // eax
  __int64 v93; // r15
  unsigned __int64 v94; // rbx
  unsigned __int64 v95; // r12
  signed __int64 v96; // rbx
  ULONG_PTR v97; // r14
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // r9
  unsigned __int64 v101; // r10
  __int64 v102; // rbx
  unsigned __int64 v103; // r15
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  unsigned int v109; // r14d
  __int64 v110; // rdi
  unsigned __int64 v111; // rax
  struct _KEVENT *v112; // rbx
  ULONG_PTR v113; // r14
  char v114; // bl
  ULONG_PTR v115; // rdi
  unsigned __int64 v116; // rsi
  int v117; // r9d
  __int64 v118; // r10
  __int64 v119; // r11
  __int64 v120; // r13
  unsigned int v121; // r14d
  unsigned __int64 v122; // rdx
  unsigned int v123; // edi
  __int64 ProtoPteAddress; // rax
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v128; // rdx
  __int64 v129; // r9
  unsigned int v130; // ebx
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned int v133; // eax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // r9
  char v137; // di
  ULONG_PTR v138; // rax
  __int64 UsedPtesHandle; // rbx
  __int64 v140; // rax
  unsigned int v141; // r15d
  unsigned __int8 v142; // bl
  int p_ActiveProcessors; // edx
  unsigned int v144; // r11d
  unsigned __int8 v145; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *v147; // rax
  volatile _KAFFINITY_EX *v148; // rdx
  unsigned __int16 Count; // r8
  _WORD *v150; // r10
  unsigned int v151; // r9d
  __int64 v152; // rcx
  unsigned __int16 v153; // dx
  unsigned __int64 v154; // r9
  unsigned __int64 v155; // rcx
  unsigned __int8 v156; // bl
  __int64 v157; // rdi
  struct _KTHREAD *v158; // rcx
  __int16 v159; // ax
  __int64 v160; // rsi
  unsigned __int64 v161; // rax
  __int64 v162; // r14
  __int64 v163; // rbx
  __int64 v164; // rdx
  __int64 v165; // rax
  unsigned __int64 v166; // r8
  signed __int32 v167[8]; // [rsp+0h] [rbp-100h] BYREF
  int v168[2]; // [rsp+20h] [rbp-E0h]
  char *v169; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  char v171[4]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v172; // [rsp+5Ch] [rbp-A4h]
  __int64 v173; // [rsp+60h] [rbp-A0h]
  __int64 v174; // [rsp+68h] [rbp-98h]
  int v175; // [rsp+70h] [rbp-90h] BYREF
  int v176; // [rsp+74h] [rbp-8Ch]
  int v177; // [rsp+78h] [rbp-88h]
  unsigned int v178; // [rsp+7Ch] [rbp-84h]
  unsigned int v179; // [rsp+80h] [rbp-80h]
  __int64 v180; // [rsp+88h] [rbp-78h] BYREF
  __int64 v181; // [rsp+90h] [rbp-70h]
  __int64 v182; // [rsp+98h] [rbp-68h]
  __int64 PrototypePteVadLookup; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v184; // [rsp+A8h] [rbp-58h]
  int v185; // [rsp+B0h] [rbp-50h] BYREF
  int v186; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v187; // [rsp+B8h] [rbp-48h]
  __int64 v188; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v189; // [rsp+C8h] [rbp-38h]
  __int64 v190; // [rsp+D0h] [rbp-30h]
  int v191; // [rsp+D8h] [rbp-28h] BYREF
  int v192; // [rsp+DCh] [rbp-24h] BYREF
  int v193; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-18h]
  __int64 v195; // [rsp+F0h] [rbp-10h]
  __int64 v196; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v197; // [rsp+100h] [rbp+0h]
  __int64 v198; // [rsp+108h] [rbp+8h]
  _QWORD *v199; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v200; // [rsp+118h] [rbp+18h]
  unsigned int v201; // [rsp+11Ch] [rbp+1Ch]
  char v202; // [rsp+120h] [rbp+20h] BYREF
  __int64 v203; // [rsp+128h] [rbp+28h] BYREF
  __int64 v204; // [rsp+130h] [rbp+30h] BYREF
  char v205[8]; // [rsp+138h] [rbp+38h] BYREF
  unsigned int v206; // [rsp+140h] [rbp+40h] BYREF
  __int16 v207; // [rsp+144h] [rbp+44h]
  __int64 v208; // [rsp+148h] [rbp+48h]
  unsigned __int64 v209; // [rsp+150h] [rbp+50h]
  _QWORD Base[21]; // [rsp+158h] [rbp+58h] BYREF
  int v211; // [rsp+200h] [rbp+100h] BYREF
  __int16 v212; // [rsp+204h] [rbp+104h]
  __int64 v213; // [rsp+208h] [rbp+108h]
  __int64 v214; // [rsp+210h] [rbp+110h]
  __int64 v215; // [rsp+218h] [rbp+118h]
  _WORD v216[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v217; // [rsp+2C4h] [rbp+1C4h]
  _QWORD v218[21]; // [rsp+2C8h] [rbp+1C8h] BYREF
  void *retaddr; // [rsp+3C8h] [rbp+2C8h]

  v8 = a2;
  v196 = a8;
  v12 = *(_DWORD *)(a2 + 48) & 7;
  v173 = a2;
  v13 = a5;
  v174 = a1;
  v179 = a5;
  if ( v12 == 2 )
  {
    if ( (a5 & 4) != 0 )
    {
      v13 = a5 & 0xFFFFFFF3 | 8;
      v179 = v13;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v13 = v13 & 0xFFFFFF3F | 0x80;
      v179 = v13;
    }
  }
  if ( v13 >= 0x800 )
    return 3221225541LL;
  if ( (v13 & 0xF) != 0 )
  {
    if ( (v13 & 0xF0) != 0 )
      return 3221225541LL;
    v14 = (char)MmUserProtectionToMask1[v13 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)v13 >> 4) )
      return 3221225541LL;
    v14 = (char)MmUserProtectionToMask2[(unsigned __int8)v13 >> 4];
  }
  v172 = v14;
  if ( v14 == -1 )
    return 3221225541LL;
  if ( (v13 & 0x700) != 0 )
  {
    if ( (v13 & 0x100) != 0 )
    {
      if ( v14 == 24 || (v13 & 0x600) != 0 )
        return 3221225541LL;
      v14 |= 0x10u;
      v172 = v14;
    }
    if ( (v13 & 0x200) != 0 )
    {
      if ( v14 == 24 || (v13 & 0x400) != 0 )
        return 3221225541LL;
      v14 |= 8u;
      v172 = v14;
    }
    if ( (v13 & 0x400) != 0 )
    {
      if ( v14 == 24 || (v14 & 2) != 0 )
        return 3221225541LL;
      v14 |= 0x18u;
      v172 = v14;
    }
  }
  if ( v14 == -1 )
    return 3221225541LL;
  v176 = 0;
  v15 = 1;
  v206 = 1;
  v16 = 0LL;
  v187 = 0LL;
  v195 = 0LL;
  v208 = 20LL;
  v207 = 0;
  v209 = 0LL;
  Base[0] = 0LL;
  v178 = v14;
  if ( (v14 & 5) == 5 )
  {
    v176 = 1;
    v178 = v14 & 0xFFFFFFFE;
  }
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter2 = v17;
  v18 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v213 = 20LL;
  v181 = a1 + 1280;
  v19 = *(_QWORD *)(a1 + 1296);
  v211 = 1;
  v212 = 4;
  v214 = 0LL;
  v215 = 0LL;
  v184 = v18;
  CurrentThread = KeGetCurrentThread();
  v186 = 0;
  v180 = 0LL;
  if ( *(_QWORD *)(v19 + 240) )
  {
    v20 = *(unsigned int *)(v8 + 52);
    LODWORD(v20) = v20 & 0x7FFFFFFF;
    if ( v20 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 31) )
    {
      SharedVm = MiGetSharedVm(a1 + 1280);
      v22 = ExAcquireSpinLockExclusive(SharedVm);
      v23 = v173;
      v24 = v22;
      SharedVm[1] = 0;
      MiComputePageCommitment(a3, a4, v23, v22, (__int64)&v180);
      MiPreUnlockWorkingSetExclusive(v181, v24);
      v25 = MiGetSharedVm(v181);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25, retaddr);
      else
        *v25 = 0;
      __writecr8(v24);
      if ( v180 )
      {
        result = MiChargeFullProcessCommitment(v174, v180);
        if ( (int)result < 0 )
          return result;
      }
      v18 = v184;
      v8 = v173;
      v17 = BugCheckParameter2;
    }
  }
  v188 = *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v181 + 172));
  if ( !v176 )
  {
LABEL_46:
    v31 = *(_DWORD *)(v8 + 48);
    if ( (v31 & 0x8000) != 0 )
    {
      if ( *(int *)(v8 + 52) < 0 || (v31 & 7) != 0 )
        goto LABEL_49;
    }
    else
    {
      if ( (unsigned __int8)v31 >> 3 != 24 )
        goto LABEL_49;
      v36 = *(__int64 **)(v8 + 72);
      if ( !v36 )
        goto LABEL_49;
      if ( (v31 & 7) == 1 )
        goto LABEL_49;
      v37 = *v36;
      if ( *(_QWORD *)(v37 + 64) || (*(_DWORD *)(v37 + 56) & 0x1000) == 0 )
        goto LABEL_49;
    }
    v186 = 1;
    --CurrentThread->SpecialApcDisable;
    v38 = (volatile signed __int64 *)(v174 + 880);
    ExAcquirePushLockExclusiveEx(v174 + 880, 0LL);
    v39 = MiCommitPageTablesForVad(v8, a3, a4);
    if ( v39 >= 0 )
    {
LABEL_49:
      if ( v16 )
      {
        v32 = *(unsigned int *)(v8 + 52);
        LODWORD(v32) = v32 & 0x7FFFFFFF;
        v33 = v16 + (v32 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 34) << 31));
        v34 = v173;
        *(_DWORD *)(v173 + 52) = *(_DWORD *)(v8 + 52) ^ (*(_DWORD *)(v8 + 52) ^ v33) & 0x7FFFFFFF;
        *(_BYTE *)(v34 + 34) = v33 >> 31;
      }
      else
      {
        v34 = v173;
      }
      v41 = &dword_14036D4C0;
      v177 = 1;
      v182 = 0LL;
      if ( (*(_BYTE *)(v181 + 192) & 7) != 2 )
        v41 = (LONG *)(v181 + 200);
      CurrentIrql = KeGetCurrentIrql();
      v190 = CurrentIrql;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v41, (unsigned __int8)CurrentIrql);
      }
      else
      {
        v185 = 0;
        if ( _interlockedbittestandset(v41, 0x1Fu) )
          v185 = ExpWaitForSpinLockExclusiveAndAcquire(v41, CurrentIrql);
        v43 = *v41;
        while ( (v43 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v43 & 0x40000000) == 0 )
          {
            v44 = _InterlockedCompareExchange(v41, v43 | 0x40000000, v43);
            v29 = v43 == v44;
            v43 = v44;
            if ( !v29 )
              continue;
          }
          KeYieldProcessorEx(&v185);
          v43 = *v41;
        }
      }
      v45 = v174;
      v169 = &v202;
      v41[1] = 0;
      MiQueryAddressState(a3, (unsigned __int8)CurrentIrql, v34, v45, 4, 0LL, &v175, v205, v169);
      ProtoLeafValid = BugCheckParameter2;
      v168[0] = 1;
      v47 = BugCheckParameter2;
      *a7 = MmProtectToValue[v175];
      v48 = v190;
      MiMakeSystemAddressValid(v47, v168[0]);
      if ( ProtoLeafValid <= v184 )
      {
        v52 = 0LL;
        v198 = 0LL;
        while ( 1 )
        {
          if ( (ProtoLeafValid & 0xFFF) == 0 || v177 == 1 )
          {
            v177 = 0;
            MiMakeSystemAddressValid(ProtoLeafValid, 1);
          }
          v53 = (__int64)((ProtoLeafValid << 25) - v52) >> 16;
          v189 = v53;
          v54 = MI_READ_PTE_LOCK_FREE(ProtoLeafValid);
          PrototypePteVadLookup = v54;
          v58 = v54;
          if ( (v54 & 1) != 0 )
          {
            v197 = MI_GET_PAGE_FRAME_FROM_PTE(&PrototypePteVadLookup);
            v61 = 6 * v197;
            v63 = v62 + 48 * v197;
            if ( (v60 & *(_QWORD *)(v63 + 40)) != 0 )
            {
              v64 = *(_QWORD *)(v63 + 8);
              v65 = v59 | v64;
              if ( (v59 | v64) != MiGetProtoPteAddress(v173, v53 >> 12, 1, &v203) )
              {
                CloneAddress = 0LL;
                if ( v64 < 0 )
                {
                  CloneAddress = MiLocateCloneAddress(v174, v65);
                  if ( *(_QWORD *)(*(_QWORD *)(v67 + 1296) + 240LL) <= CloneAddress[9] )
                    CloneAddress = 0LL;
                }
                MiFlushTbList(&v206);
                ProtoLeafValid = BugCheckParameter2;
                v15 = 1;
                if ( (unsigned int)MiCopyOnWriteEx(v53, 0) )
                {
                  if ( CloneAddress )
                    --v180;
                }
                else
                {
                  v177 = 1;
                }
                goto LABEL_295;
              }
              v34 = v173;
              v60 = 0x200000000000000LL;
            }
            v68 = v179 & 0x101;
            if ( (v179 & 0x101) == 0 && (a6 != 1 || (v60 & *(_QWORD *)(v63 + 40)) != 0) )
            {
              if ( (v60 & *(_QWORD *)(v63 + 40)) != 0 )
              {
                if ( !v176 && (v58 & 0x200) != 0 )
                  ++v182;
                v69 = MI_READ_PTE_LOCK_FREE(((v189 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v69 & 1) != 0 )
                  v71 = HIBYTE(v69) & 0xF ^ (HIBYTE(v69) & 0xF ^ (16 * (v69 >> 60))) & 0x70;
                else
                  v71 = 10;
                LODWORD(v72) = (v71 >> 4) & 7;
                if ( (_DWORD)v72 )
                {
                  if ( ((*v70 >> 4) & 1) != 0 || (*v70 & 8) == 0 )
                  {
                    if ( ((*v70 >> 4) & 1LL) != 0 )
                      LODWORD(v72) = v72 | 8;
                  }
                  else
                  {
                    LODWORD(v72) = v72 | 0x18;
                  }
                }
                else
                {
                  v73 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v63 + 16);
                  v74 = *(_QWORD *)(v63 + 8);
                  v72 = v73;
                  if ( v74 >= 0
                    || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.Bitmap[12])
                    && MiLocateCloneAddress((__int64)Process, v74 | 0x8000000000000000uLL) )
                  {
                    LODWORD(v72) = MmMakeProtectNotWriteCopy[v72];
                  }
                }
                v76 = v172;
                v175 = v72;
                if ( v172 != 24 )
                {
                  if ( (_DWORD)v72 == 24 )
                  {
                    v77 = *(_DWORD *)(v34 + 48);
                    v78 = (v77 & 0x8000) != 0 ? v77 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(v34 + 72) + 32LL) >> 1;
                    LODWORD(v72) = v78 & 0x1F;
                    if ( (_DWORD)v72 == 24 )
                      LOBYTE(v72) = 0;
                  }
                  v79 = v72 & 0x18;
                  if ( v79 )
                  {
                    if ( v79 != 16 )
                    {
                      if ( v79 == 8 )
                      {
                        v76 = v172 & 0xFFFFFFE7 | 8;
                      }
                      else if ( v79 == 24 )
                      {
                        v76 = v172 | 0x18;
                      }
                      goto LABEL_139;
                    }
LABEL_138:
                    v76 = v172 & 0xFFFFFFF7;
                    goto LABEL_139;
                  }
                  v80 = v172 & 0x18;
                  if ( v80 == 24 )
                  {
                    v76 = v172 & 0xFFFFFFE7;
                    goto LABEL_139;
                  }
                  if ( v80 == 8 )
                    goto LABEL_138;
                }
LABEL_139:
                v81 = MI_READ_PTE_LOCK_FREE(v70);
                if ( (v81 & 1) != 0 )
                  v83 = HIBYTE(v81) & 0xF ^ (HIBYTE(v81) & 0xF ^ (16 * (v81 >> 60))) & 0x70;
                else
                  v83 = 10;
                v84 = *v82;
                do
                {
                  v85 = _InterlockedCompareExchange64(
                          v82,
                          ((unsigned __int64)(((unsigned __int8)v83 ^ ((unsigned __int8)v83 ^ (unsigned __int8)(16 * v76)) & 0x70) & 0x7F) << 56) | v84 & 0x80FFFFFFFFFFFFFFuLL,
                          v84);
                  v29 = v84 == v85;
                  v84 = v85;
                }
                while ( !v29 );
LABEL_144:
                v86 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
                v87 = v86;
                if ( (v86 & 0x10) != 0 )
                {
                  if ( (v76 & 0x18) != 8 )
                    v76 = v76 & 0xFFFFFFE7 | 8;
                }
                else if ( (v86 & 8) != 0 )
                {
                  if ( (v76 & 0x18) != 0x18 )
                    v76 |= 0x18u;
                }
                else if ( (v76 & 0x18) != 0 )
                {
                  v76 &= 0xFFFFFFE7;
                }
                if ( v197 > qword_14036C290
                  || MmPhysicalMemoryBlock && (*(_QWORD *)(8 * v61 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
                {
                  v63 = 0LL;
                }
                else if ( (MiFlags & 0x40000) != 0 && (v76 & 2) != 0 )
                {
                  MiLockPageAtDpcInline(v63);
                  if ( !(unsigned int)MiGetPagePrivilege(v63, 1, 0LL) )
                    MiMarkPfnVerified(v63, 7);
                  _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
                v93 = v76 & 0x1F;
                v94 = ((v197 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v93] & 0xFFFF000000000E7FuLL | 0x21;
                if ( BugCheckParameter2 < 0xFFFFF68000000000uLL || BugCheckParameter2 > 0xFFFFF6FFFFFFFFFFuLL )
                {
                  v95 = v189;
                  goto LABEL_197;
                }
                if ( BugCheckParameter2 >= 0xFFFFF6FB40000000uLL && BugCheckParameter2 <= 0xFFFFF6FB7FFFFFFFuLL )
                {
                  if ( BugCheckParameter2 == 0xFFFFF6FB7DBEDF68uLL )
                  {
                    v94 = ((v197 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v93] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
                  }
                  else if ( (v76 & 0x4000000) == 0 )
                  {
                    v94 = ((v197 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v93] & 0x7FFF000000000E7FLL | 0x21;
                  }
                  if ( (unsigned int)MiUserPdeOrAbove(BugCheckParameter2) )
                    v94 |= 4uLL;
                }
                if ( BugCheckParameter2 <= 0xFFFFF6BFFFFFFF78uLL )
                  v94 |= 4uLL;
                v95 = v189;
                if ( (unsigned int)MiIsAddressGlobal(v189) )
LABEL_197:
                  v94 |= 0x100uLL;
                if ( v76 < 0 && (v76 & 5) == 4 )
                  v94 |= 0x42uLL;
                if ( (v76 & 0x40000000) != 0 )
                  v94 &= ~4uLL;
                if ( (v76 & 0x20000000) != 0 )
                  v94 ^= ((unsigned __int16)v94 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100;
                if ( (v76 & 0x8000000) != 0 )
                  v94 &= ~0x100uLL;
                if ( (v76 & 0x4000000) != 0 )
                  v94 |= 0x80uLL;
                v96 = v94 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
                if ( !v63 && (v76 & 4) != 0 )
                  v96 |= 0x42uLL;
                v97 = BugCheckParameter2;
                v98 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
                v99 = v96 ^ (v96 ^ ((unsigned __int64)(HIBYTE(v98) & 0xF) << 56)) & 0xF00000000000000LL;
                *(_QWORD *)BugCheckParameter2 = v99 ^ (v99 ^ (((v98 >> 60) & 7) << 60)) & 0x7000000000000000LL;
                if ( (unsigned int)MiPteInShadowRange(v97) )
                {
                  MiWritePteShadow(i);
                  v100 = 0xFFFFF68000000000uLL;
                }
                if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
                  || (v96 & 0x40) == 0 && (v87 & 0x40) != 0
                  || (v96 & 2) == 0 && (v87 & 2) != 0
                  || v96 < 0 && (v87 & 0x8000000000000000uLL) == 0 )
                {
                  v102 = 1LL;
                  v103 = v95;
                  if ( v206 != 1 )
                  {
                    if ( (v207 & 8) == 0 && v95 >= v100 && v95 <= v101 )
                      LOBYTE(v207) = v207 | 8;
                    if ( v206 )
                    {
                      for ( i = v95; i >= v100; i = (__int64)((i << 25) - v198) >> 16 )
                      {
                        if ( i > v101 )
                          break;
                      }
                    }
                  }
                  if ( !HIDWORD(v208) )
                    goto LABEL_244;
                  if ( (v207 & 4) == 0 )
                  {
                    v104 = Base[HIDWORD(v208) - 1];
                    if ( (v104 & 0xC00) == 0 )
                    {
                      v50 = Base[HIDWORD(v208) - 1] & 0x3FFLL;
                      i = v104 & 0xFFFFFFFFFFFFF000uLL;
                      if ( (v104 & 0xFFFFFFFFFFFFF000uLL) + ((v50 + 1) << 12) == v95 )
                      {
                        i = v50 + 1;
                        if ( v50 + 1 >= v50 && i <= 0x3FF )
                        {
                          i = ((unsigned __int16)v104 ^ (unsigned __int16)(v104 + 1)) & 0x3FF;
                          ++v209;
                          Base[HIDWORD(v208) - 1] = i ^ v104;
                          goto LABEL_255;
                        }
                      }
                    }
                  }
                  if ( (v207 & 4) != 0
                    || (v50 = (unsigned __int64)&Base[HIDWORD(v208) - 1],
                        v105 = *(_QWORD *)v50,
                        (*(_QWORD *)v50 & 0xC00LL) != 0)
                    || (i = v95 + 4096, (v105 & 0xFFFFFFFFFFFFF000uLL) != v95 + 4096)
                    || (i = *(_QWORD *)v50 & 0x3FFLL, i + 1 < i)
                    || i + 1 > 0x3FF )
                  {
LABEL_244:
                    if ( HIDWORD(v208) < (unsigned int)v208 )
                    {
                      while ( 1 )
                      {
                        v107 = 1024LL;
                        if ( (unsigned __int64)(v102 - 1) <= 0x3FF )
                          v107 = v102;
                        v102 -= v107;
                        v108 = v103 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v107 - 1) & 0x3FF;
                        v103 += v107 << 12;
                        i = HIDWORD(v208);
                        Base[HIDWORD(v208)] = v108;
                        v209 += v107;
                        v109 = HIDWORD(v208) + 1;
                        HIDWORD(v208) = v109;
                        if ( v109 == (_DWORD)v208 && (v207 & 4) == 0 )
                        {
                          qsort(Base, v109, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                          MiCompressTbFlushList((__int64)&v206);
                          if ( HIDWORD(v208) == (_DWORD)v208 )
                            break;
                        }
                        if ( !v102 )
                          goto LABEL_255;
                      }
                      if ( v102 )
                      {
                        v209 = HIDWORD(v208);
                        HIBYTE(v207) = 1;
                      }
                    }
                    else
                    {
                      HIBYTE(v207) = 1;
                    }
                  }
                  else
                  {
                    v106 = v105 - 4096;
                    i = ((unsigned __int16)v106 ^ (unsigned __int16)(v106 + 1)) & 0x3FF;
                    ++v209;
                    *(_QWORD *)v50 = i ^ v106;
                  }
LABEL_255:
                  v97 = BugCheckParameter2;
                }
                if ( (v87 & 0x42) == 0 )
                  goto LABEL_275;
                v110 = v173;
                if ( v63 && ((*(_BYTE *)(v173 + 48) & 7) != 6 || MiRotatedToFrameBuffer(v97)) )
                {
                  v111 = 0LL;
                  v192 = 0;
                  v112 = 0LL;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
                  {
                    do
                    {
                      do
                        KeYieldProcessorEx(&v192);
                      while ( (*(_QWORD *)(v63 + 24) & 0x8000000000000000uLL) != 0 );
                    }
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) );
                    v111 = 0LL;
                  }
                  v50 = *(unsigned __int8 *)(v63 + 34);
                  if ( (v50 & 0x10) == 0 )
                  {
                    if ( (*(_DWORD *)(v63 + 16) & 0x400LL) == 0 && (v50 & 8) == 0 )
                      v111 = MiCapturePageFileInfoInline((_QWORD *)(v63 + 16), 1, 0);
                    *(_BYTE *)(v63 + 34) |= 0x10u;
                    if ( v111 )
                      v112 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v63 + 40) >> 40) & 0x3FFLL));
                  }
                  i = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v15 = 1;
                  if ( v111 )
                    MiReleasePageFileInfo(v112, v111, 1);
                }
                else
                {
                  v15 = 1;
                }
                if ( (*(_DWORD *)(v110 + 48) & 7) == 4 )
                {
                  MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v95, v110);
                  ProtoLeafValid = v97 + 8;
                  BugCheckParameter2 = ProtoLeafValid;
                }
                else
                {
LABEL_275:
                  ProtoLeafValid = v97 + 8;
                  v15 = 1;
                  BugCheckParameter2 = ProtoLeafValid;
                }
                goto LABEL_295;
              }
              v191 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v191);
                while ( (*(_QWORD *)(v63 + 24) & 0x8000000000000000uLL) != 0 );
              }
              v76 = v178;
              v88 = (*(_QWORD *)(v63 + 16) >> 5) & 0x1FLL;
              if ( v178 != 24 )
              {
                if ( (_DWORD)v88 == 24 )
                {
                  v89 = *(_DWORD *)(v34 + 48);
                  v90 = (v89 & 0x8000) != 0 ? v89 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(v34 + 72) + 32LL) >> 1;
                  LODWORD(v88) = v90 & 0x1F;
                  if ( (_DWORD)v88 == 24 )
                    LOBYTE(v88) = 0;
                }
                v91 = v88 & 0x18;
                if ( v91 )
                {
                  if ( v91 != 16 )
                  {
                    if ( v91 == 8 )
                    {
                      v76 = v178 & 0xFFFFFFE7 | 8;
                    }
                    else if ( v91 == 24 )
                    {
                      v76 = v178 | 0x18;
                    }
                    goto LABEL_168;
                  }
LABEL_167:
                  v76 = v178 & 0xFFFFFFF7;
                }
                else
                {
                  v92 = v178 & 0x18;
                  if ( v92 == 24 )
                  {
                    v76 = v178 & 0xFFFFFFE7;
                  }
                  else if ( v92 == 8 )
                  {
                    goto LABEL_167;
                  }
                }
              }
LABEL_168:
              *(_QWORD *)(v63 + 16) ^= ((unsigned __int16)*(_QWORD *)(v63 + 16) ^ (unsigned __int16)(32 * v76)) & 0x3E0;
              _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_144;
            }
            v113 = v184;
            i = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
            if ( (BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) != (v184 & 0xFFFFFFFFFFFFF000uLL) )
              v113 = i + 4088;
            v114 = 0;
            v115 = BugCheckParameter2;
            if ( BugCheckParameter2 <= v113 )
            {
              v116 = v189;
              while ( 1 )
              {
                PrototypePteVadLookup = MI_READ_PTE_LOCK_FREE(v115);
                if ( (PrototypePteVadLookup & 1) == 0 )
                  goto LABEL_292;
                i = 6 * MI_GET_PAGE_FRAME_FROM_PTE(&PrototypePteVadLookup);
                if ( !v68 && (v117 != 1 || (v118 & *(_QWORD *)(v119 + 8 * i + 40)) != 0) )
                  goto LABEL_292;
                if ( (MiGetWsleContents(i, v116) & 0xF) == 8 )
                  break;
                MiInsertTbFlushEntry(&v211, v116, 1LL, 0LL);
                if ( HIDWORD(v213) == (_DWORD)v213 )
                  goto LABEL_287;
LABEL_291:
                v115 += 8LL;
                v116 += 4096LL;
                if ( v115 > v113 )
                  goto LABEL_292;
              }
              v114 = 1;
              *(_DWORD *)v196 = 1;
LABEL_287:
              v120 = v181;
              if ( HIDWORD(v213) )
              {
                MiFreeWsleList(v181, &v211, 0LL);
                HIDWORD(v213) = 0;
              }
              if ( v114 == 1 )
              {
                MiUnlockVa(v120, v116);
                v114 = 0;
              }
              goto LABEL_291;
            }
LABEL_292:
            if ( HIDWORD(v213) )
            {
              MiFreeWsleList(v181, &v211, 0LL);
              HIDWORD(v213) = 0;
            }
            ProtoLeafValid = BugCheckParameter2;
            v15 = 1;
          }
          else
          {
            if ( (v54 & 0x400) != 0 )
            {
              if ( !(unsigned int)MiIsPrototypePteVadLookup(v54) )
              {
                ProtoPteAddress = MiGetProtoPteAddress(v34, v53 >> 12, 1, &v203);
                PrototypePteDirect = MiGetPrototypePteDirect(v58, ProtoPteAddress, v125, v126);
                if ( PrototypePteDirect != v128 )
                {
                  MiFlushTbList(&v206);
                  ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid, 1LL, v48);
                  BugCheckParameter2 = ProtoLeafValid;
                  v177 = 1;
                  goto LABEL_295;
                }
              }
              if ( !v176 && (unsigned int)MiIsPrototypePteVadLookup(v58) && (v58 & 0xA0) == 0xA0 )
                ++v182;
              if ( (unsigned int)MiIsPrototypePteVadLookup(v58) )
                v130 = (v58 >> 5) & 0x1F;
              else
                v130 = (*(unsigned __int16 *)(*(_QWORD *)(v34 + 72) + 32LL) >> 1) & 0x1F;
              v175 = v130;
              v131 = v130;
              v132 = v34;
              goto LABEL_316;
            }
            if ( (v54 & 0x800) == 0 )
            {
              v137 = 0;
              if ( a6 == 1 )
              {
                if ( v54 )
                {
                  MiReleasePageFileSpace(v188, v54, 1LL);
                  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v58) )
                    goto LABEL_329;
                  goto LABEL_330;
                }
LABEL_332:
                UsedPtesHandle = MiGetUsedPtesHandle(v53, v55, v56, v57);
                v193 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v193);
                  while ( (*(_QWORD *)(UsedPtesHandle + 24) & 0x8000000000000000uLL) != 0 );
                }
                *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((*(_QWORD *)(UsedPtesHandle + 16) & 0xFFFF0000) + 0x10000)) & 0x3FF0000;
                _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiIsAddressValid(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL);
                if ( !v176 && (v137 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v173, ProtoLeafValid)) )
                  ++v182;
                v140 = *(_QWORD *)(v173 + 72);
                v131 = (*(unsigned __int16 *)(v140 + 32) >> 1) & 0x1F;
                v175 = (*(unsigned __int16 *)(v140 + 32) >> 1) & 0x1F;
                v132 = 0LL;
LABEL_316:
                v133 = MiSanitizePfnProtection(v132, v131, v172, v129);
                PrototypePteVadLookup = MiMakePrototypePteVadLookup(v133);
                *(_QWORD *)ProtoLeafValid = PrototypePteVadLookup;
                if ( (unsigned int)MiPteInShadowRange(ProtoLeafValid) )
                {
                  MiWritePteShadow(i);
                  ProtoLeafValid += 8LL;
                  BugCheckParameter2 = ProtoLeafValid;
                  goto LABEL_295;
                }
              }
              else
              {
                if ( !v54 )
                  goto LABEL_332;
                v175 = (v54 >> 5) & 0x1F;
                v178 = MiSanitizePfnProtection(v173, (v54 >> 5) & 0x1F, v178, v57);
                PrototypePteVadLookup = ((unsigned __int16)v58 ^ (unsigned __int16)(32 * v178)) & 0x3E0 ^ v58;
                *(_QWORD *)ProtoLeafValid = PrototypePteVadLookup;
                if ( (unsigned int)MiPteInShadowRange(ProtoLeafValid) )
                  MiWritePteShadow(i);
              }
LABEL_342:
              ProtoLeafValid += 8LL;
              BugCheckParameter2 = ProtoLeafValid;
              goto LABEL_295;
            }
            if ( a6 == 1 )
            {
              v134 = MiTryDeleteTransitionPte(ProtoLeafValid);
              if ( v134 == 3 )
              {
                ++v195;
              }
              else if ( v134 == 1 )
              {
                goto LABEL_295;
              }
LABEL_329:
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v174 + 920), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_330:
              v138 = MiGetUsedPtesHandle(v53, v135, v50, v136);
              MiDecreaseUsedPtesCount(v138);
              v137 = 1;
              goto LABEL_332;
            }
            if ( !(unsigned int)MiSetProtectionOnTransitionPte(v34, (unsigned __int64 *)ProtoLeafValid, v178, 1) )
              goto LABEL_342;
          }
LABEL_295:
          v51 = 0x8000000000000000uLL;
          v52 = v198;
          if ( ProtoLeafValid > v184 )
            break;
          v34 = v173;
          v48 = v190;
        }
      }
      v121 = HIDWORD(v208);
      if ( !HIDWORD(v208) )
        goto LABEL_387;
      v122 = qword_14036C218;
      if ( (v207 & 2) == 0 )
      {
        i = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( !*(_QWORD *)(i + 1840) )
        {
          if ( !*(_QWORD *)(i + 720) )
            goto LABEL_302;
          if ( v206 != 1 )
            goto LABEL_343;
        }
        v122 = -1LL;
      }
LABEL_302:
      if ( v206 == 1 )
      {
        v123 = 0;
LABEL_344:
        if ( HIBYTE(v207) || v209 > v122 )
        {
          if ( (v207 & 1) != 0 )
            KeFlushCurrentTbOnly(v206, v122, v50);
          else
            KeFlushTb(v206, v123);
          HIBYTE(v207) = 0;
          goto LABEL_386;
        }
        if ( (v207 & 1) != 0 )
        {
          KeFlushMultipleRangeCurrentTb(HIDWORD(v208), Base, v206);
LABEL_386:
          LOBYTE(v207) = v207 & 0xF7;
          HIDWORD(v208) = 0;
          v209 = 0LL;
LABEL_387:
          MiUnlockWorkingSetExclusive(v181, (unsigned __int8)v190);
          v157 = v174;
          if ( v186 == 1 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v174 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v157 + 880);
            KeAbPostRelease(v157 + 880);
            v158 = CurrentThread;
            v159 = CurrentThread->SpecialApcDisable + 1;
            CurrentThread->SpecialApcDisable = v159;
            if ( !v159 && ($69CD3F157F9F39B6F7113F2231989901 *)v158->ApcState.ApcListHead[0].Flink != &v158->152 )
              KiCheckForKernelApcDelivery();
          }
          v160 = v195;
          v161 = v187;
          if ( v195 && v176 )
          {
            v161 = v187 - v195;
            v160 = 0LL;
          }
          v162 = v188;
          if ( v161 )
            MiReturnCommit(v188, v161);
          v163 = v182;
          if ( v182 )
          {
            v164 = v173;
            v165 = *(unsigned int *)(v173 + 52);
            LODWORD(v165) = v165 & 0x7FFFFFFF;
            v166 = ((v165 | ((unsigned __int64)*(unsigned __int8 *)(v173 + 34) << 31)) - v182) >> 31;
            *(_DWORD *)(v173 + 52) ^= (*(_DWORD *)(v173 + 52) ^ ((v165 | (*(unsigned __int8 *)(v173 + 34) << 31)) - v182)) & 0x7FFFFFFF;
            *(_BYTE *)(v164 + 34) = v166;
            MiReturnCommit(v162, v163 - v160);
            MiReturnFullProcessCharges(v157, v163);
          }
          if ( v180 )
            MiReturnFullProcessCommitment(v157);
          return 0LL;
        }
        v141 = v206;
        if ( v206 == 1 && (i = (unsigned __int64)KeGetCurrentThread()->ApcState.Process, *(_QWORD *)(i + 720)) )
        {
          v142 = v206;
        }
        else
        {
          v142 = 0;
          if ( !(unsigned int)KiFlushViaHypervisor(i, v122, v50, v51) )
            goto LABEL_356;
        }
        KiPrepareFlushParameters(v141, &v204, v171);
        if ( v123 )
          p_ActiveProcessors = 0;
        else
          p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        if ( (unsigned __int8)HvlFlushRangeListTb(
                                v204,
                                p_ActiveProcessors,
                                (unsigned __int8)v171[0],
                                v142,
                                v121,
                                (__int64)Base) )
          goto LABEL_378;
LABEL_356:
        v200 = v121;
        v199 = Base;
        v201 = v141;
        v144 = 4;
        if ( v123 == 1 )
          v144 = -2147483644;
        v177 = v144;
        v145 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v123 )
        {
          LODWORD(v150) = 0;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_374:
            KiIpiSendRequest((_DWORD)CurrentPrcb, v15, (_DWORD)v150, (unsigned int)&v199, v121, v144);
            if ( KiFlushRangeWorker )
              KiFlushRangeWorker(&v199);
            KiIpiWaitForRequestBarrier((__int64)CurrentPrcb);
            goto LABEL_377;
          }
        }
        else
        {
          _InterlockedOr(v167, 0);
          v147 = CurrentPrcb->CurrentThread;
          v217 = 0;
          v148 = &v147->ApcState.Process->ActiveProcessors;
          Count = v148->Count;
          LOWORD(v147) = v147->ApcState.Process->ActiveProcessors.Size;
          v216[0] = Count;
          v216[1] = (_WORD)v147;
          if ( Count )
          {
            memmove(v218, v148->Bitmap, 8LL * Count);
            Count = v216[0];
            v144 = v177;
          }
          v150 = v216;
          v151 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
          v152 = v151 >> 6;
          if ( Count > (unsigned int)v152 )
          {
            v218[v152] &= ~(1LL << (v151 & 0x3F));
            Count = v216[0];
          }
          v15 = 0;
          v153 = 0;
          if ( Count )
          {
            v196 = 0x5555555555555555LL;
            do
            {
              v154 = v218[v153];
              v155 = (0x101010101010101LL
                    * ((((v154 - (v196 & (v154 >> 1))) & 0x3333333333333333LL)
                      + (((v154 - (v196 & (v154 >> 1))) >> 2) & 0x3333333333333333LL)
                      + ((((v154 - (v196 & (v154 >> 1))) & 0x3333333333333333LL)
                        + (((v154 - (v196 & (v154 >> 1))) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              if ( (unsigned __int8)v155 > 1u
                || (_BYTE)v155 == 1 && (CurrentPrcb->Group != v153 || (v154 & CurrentPrcb->GroupSetMember) == 0) )
              {
                goto LABEL_374;
              }
            }
            while ( ++v153 < Count );
          }
        }
        if ( KiFlushRangeWorker )
          KiFlushRangeWorker(&v199);
LABEL_377:
        __writecr8(v145);
LABEL_378:
        if ( VmTbFlushEnabled )
          VmFlushTb(v121, Base);
        if ( ExTbFlushActive )
        {
          v156 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          ExFlushTb(v121, Base, v141);
          __writecr8(v156);
        }
        goto LABEL_386;
      }
LABEL_343:
      v123 = ((v207 & 8) != 0) + 1;
      goto LABEL_344;
    }
    if ( (_InterlockedExchangeAdd64(v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v38);
    KeAbPostRelease((ULONG_PTR)v38);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    if ( v187 )
    {
      MiReturnCommit(v188, v16);
    }
    else if ( v16 )
    {
      v40 = v174;
      MiReturnFullProcessCommitment(v174);
      goto LABEL_67;
    }
    v40 = v174;
LABEL_67:
    if ( v180 )
      MiReturnFullProcessCommitment(v40);
    return (unsigned int)v39;
  }
  v27 = MiCountSharedPages(v8, v17, v18);
  v16 = v27;
  if ( a6 == 1 )
  {
    v28 = ((__int64)(v184 - v17) >> 3) - v27;
    v29 = v28 == -1;
    v30 = v28 + 1;
    v187 = v30;
    if ( !v29 && !(unsigned int)MiChargeCommit(v188, v30, 0LL) )
    {
      if ( v180 )
        MiReturnFullProcessCommitment(v174);
      return 3221225773LL;
    }
    v16 = 0LL;
    goto LABEL_46;
  }
  if ( !v27 )
    goto LABEL_46;
  v35 = MiChargeFullProcessCommitment(v174, v27);
  if ( v35 >= 0 )
    goto LABEL_46;
  if ( v180 )
    MiReturnFullProcessCommitment(v174);
  return (unsigned int)v35;
}
