/*
 * XREFs of MiSetProtectionOnSection @ 0x14003B7E0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 *     MiCommitPagefileBackedSection @ 0x140460420 (MiCommitPagefileBackedSection.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14057EE40 (MiUnsecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     MiSanitizePfnProtection @ 0x1400384C0 (MiSanitizePfnProtection.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400E4CF4 (MiSetProtectionOnTransitionPte.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400E9684 (MiCaptureWriteWatchDirtyBit.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MiDecreaseUsedPtesCount @ 0x1400EB520 (MiDecreaseUsedPtesCount.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVa @ 0x14010C884 (MiUnlockVa.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 *     MiCompressTbFlushList @ 0x140112EA0 (MiCompressTbFlushList.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiPteNeedsCommitCharge @ 0x14011570C (MiPteNeedsCommitCharge.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1401277C8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiMakeProtoLeafValid @ 0x140128454 (MiMakeProtoLeafValid.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v9; // r9
  __int64 v11; // rsi
  char v12; // al
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  LONG *SharedVm; // rbx
  KIRQL v21; // al
  int v22; // r8d
  KIRQL v23; // si
  LONG *v24; // rcx
  __int64 result; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  bool v30; // zf
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  int v33; // ecx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  LONG *v36; // rbx
  __int64 CurrentIrql; // r14
  int v38; // ebx
  __int64 *v39; // rax
  __int64 v40; // rax
  volatile signed __int64 *v41; // rbx
  int v42; // r14d
  __int64 v43; // rbx
  unsigned int v44; // edi
  signed __int32 v45; // edx
  signed __int32 v46; // eax
  __int64 v47; // rdi
  ULONG_PTR ProtoLeafValid; // r14
  unsigned __int8 v49; // r12
  __int64 v50; // rbx
  __int64 v51; // r15
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v53; // r15
  __int64 v54; // r10
  unsigned __int64 v55; // r11
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 CloneAddress; // rbx
  __int64 v63; // rdi
  int v64; // r9d
  int v65; // r15d
  volatile signed __int64 *v66; // r9
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // r10
  unsigned __int8 v69; // al
  __int64 v70; // r8
  unsigned int v71; // eax
  __int64 v72; // rdx
  _KPROCESS *Process; // rcx
  int v74; // r14d
  unsigned int v75; // r8d
  unsigned int v76; // r8d
  int v77; // r8d
  unsigned int v78; // eax
  __int64 v79; // rax
  char v80; // al
  unsigned __int8 v81; // cl
  signed __int64 v82; // rax
  signed __int64 v83; // rtt
  unsigned __int64 v84; // r9
  __int64 v85; // rdi
  unsigned int v86; // edx
  __int64 v87; // rax
  unsigned int v88; // eax
  unsigned int v89; // eax
  int v90; // eax
  int v91; // eax
  __int64 v92; // r15
  unsigned __int64 v93; // rbx
  int v94; // eax
  unsigned __int64 v95; // r12
  __int64 v96; // rax
  unsigned __int64 v97; // r11
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // r10
  signed __int64 v101; // r10
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rdx
  __int64 v104; // rbx
  unsigned __int64 v105; // r14
  unsigned __int64 i; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // r8
  __int64 v109; // rax
  unsigned __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned __int64 v112; // rax
  unsigned int v113; // eax
  __int64 v114; // rbx
  char v115; // r8
  __int64 v116; // rax
  __int64 *v117; // rbx
  unsigned __int64 v118; // r14
  char v119; // di
  unsigned __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int8 v123; // r9
  __int64 v124; // r13
  unsigned __int64 v125; // r8
  _KPROCESS *v126; // rcx
  __int64 v127; // rdx
  __int64 PrototypePteDirect; // rax
  __int64 v129; // rdx
  int v130; // ebx
  unsigned int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v136; // r11
  unsigned __int64 v137; // rdx
  int v138; // eax
  char v139; // di
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v141; // rbx
  __int64 v142; // r8
  __int64 v143; // r9
  _QWORD *v144; // rcx
  __int64 v145; // rax
  unsigned int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // rax
  ULONG_PTR v151; // r9
  ULONG_PTR v152; // r11
  struct _KTHREAD *v153; // rax
  __int64 v154; // rsi
  unsigned __int64 v155; // rax
  __int64 v156; // r14
  __int64 v157; // rbx
  __int64 v158; // r8
  unsigned __int64 v159; // rdx
  unsigned __int64 v160; // r8
  __int64 *BugCheckParameter4; // [rsp+50h] [rbp-B0h]
  int v162; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v163; // [rsp+5Ch] [rbp-A4h]
  int v164; // [rsp+60h] [rbp-A0h]
  __int64 v165; // [rsp+68h] [rbp-98h]
  __int64 v166; // [rsp+70h] [rbp-90h]
  unsigned int v167; // [rsp+78h] [rbp-88h]
  int v168; // [rsp+7Ch] [rbp-84h]
  unsigned int v169; // [rsp+80h] [rbp-80h]
  __int64 v170; // [rsp+88h] [rbp-78h] BYREF
  __int64 v171; // [rsp+90h] [rbp-70h]
  ULONG_PTR v172; // [rsp+98h] [rbp-68h]
  unsigned __int64 v173; // [rsp+A0h] [rbp-60h] BYREF
  int v174; // [rsp+A8h] [rbp-58h]
  __int64 v175; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v176; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v177; // [rsp+C0h] [rbp-40h]
  __int64 v178; // [rsp+C8h] [rbp-38h]
  __int64 v179; // [rsp+D0h] [rbp-30h]
  int v180; // [rsp+D8h] [rbp-28h] BYREF
  int v181; // [rsp+DCh] [rbp-24h] BYREF
  int v182; // [rsp+E0h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-18h]
  __int64 v184; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v185; // [rsp+F8h] [rbp-8h]
  __int64 v186; // [rsp+100h] [rbp+0h]
  char v187[8]; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v188; // [rsp+110h] [rbp+10h]
  char v189[8]; // [rsp+118h] [rbp+18h] BYREF
  char v190[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v191; // [rsp+130h] [rbp+30h] BYREF
  __int16 v192; // [rsp+134h] [rbp+34h]
  __int64 v193; // [rsp+138h] [rbp+38h]
  unsigned __int64 v194; // [rsp+140h] [rbp+40h]
  _QWORD Base[21]; // [rsp+148h] [rbp+48h] BYREF
  int v196; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v197; // [rsp+1F4h] [rbp+F4h]
  __int64 v198; // [rsp+1F8h] [rbp+F8h]
  __int64 v199; // [rsp+200h] [rbp+100h]
  __int64 v200; // [rsp+208h] [rbp+108h]
  unsigned __int64 v201; // [rsp+2B0h] [rbp+1B0h]
  unsigned __int64 v202; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 v203; // [rsp+2C0h] [rbp+1C0h]
  __int64 v204; // [rsp+2C8h] [rbp+1C8h]
  void *retaddr; // [rsp+328h] [rbp+228h]

  v9 = a2;
  v188 = a8;
  v11 = a1;
  v12 = *(_DWORD *)(a2 + 48) & 7;
  v165 = a2;
  v13 = a5;
  v166 = a1;
  v167 = a5;
  if ( v12 == 2 )
  {
    if ( (a5 & 4) != 0 )
    {
      v13 = a5 & 0xFFFFFFF3 | 8;
      v167 = v13;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v13 = v13 & 0xFFFFFF3F | 0x80;
      v167 = v13;
    }
  }
  if ( v13 >= 0x800 )
    return 3221225541LL;
  if ( (v13 & 0xF) != 0 )
  {
    if ( (v13 & 0xF0) != 0 )
      return 3221225541LL;
    LOBYTE(v14) = MmUserProtectionToMask1[v13 & 0xF];
  }
  else
  {
    if ( !((unsigned __int8)v13 >> 4) )
      return 3221225541LL;
    LOBYTE(v14) = MmUserProtectionToMask2[(unsigned __int8)v13 >> 4];
  }
  v14 = (char)v14;
  v169 = v14;
  if ( (char)v14 == -1 )
    return 3221225541LL;
  if ( (v13 & 0x700) != 0 )
  {
    if ( (v13 & 0x100) != 0 )
    {
      if ( v14 == 24 || (v13 & 0x600) != 0 )
        return 3221225541LL;
      v14 |= 0x10u;
    }
    if ( (v13 & 0x200) != 0 )
    {
      if ( v14 == 24 || (v13 & 0x400) != 0 )
        return 3221225541LL;
      v14 |= 8u;
    }
    if ( (v13 & 0x400) != 0 )
    {
      if ( v14 == 24 || (v14 & 2) != 0 )
        return 3221225541LL;
      v14 |= 0x18u;
    }
    v169 = v14;
  }
  if ( v14 == -1 )
    return 3221225541LL;
  v164 = 0;
  v15 = 0LL;
  v176 = 0LL;
  v184 = 0LL;
  v193 = 20LL;
  v191 = 1;
  v192 = 0;
  v194 = 0LL;
  Base[0] = 0LL;
  v163 = v14;
  if ( (v14 & 5) == 5 )
  {
    v164 = 1;
    v163 = v14 & 0xFFFFFFFE;
  }
  v16 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter4 = (__int64 *)v16;
  v17 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v198 = 20LL;
  v18 = *(_QWORD *)(v11 + 1296);
  v196 = 1;
  v197 = 4;
  v199 = 0LL;
  v200 = 0LL;
  v172 = v17;
  CurrentThread = KeGetCurrentThread();
  v174 = 0;
  v170 = 0LL;
  v175 = v11 + 1280;
  if ( *(_QWORD *)(v18 + 240) )
  {
    v19 = *(unsigned int *)(v9 + 52);
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    if ( v19 | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31) )
    {
      SharedVm = MiGetSharedVm(v11 + 1280);
      v21 = ExAcquireSpinLockExclusive(SharedVm);
      v22 = v165;
      v23 = v21;
      SharedVm[1] = 0;
      MiComputePageCommitment(a3, a4, v22, v21, (__int64)&v170);
      MiPreUnlockWorkingSetExclusive(v175, v23);
      v24 = MiGetSharedVm(v175);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
      else
        *v24 = 0;
      __writecr8(v23);
      v11 = v166;
      if ( v170 )
      {
        result = MiChargeFullProcessCommitment(v166, v170);
        if ( (int)result < 0 )
          return result;
      }
      v17 = v172;
      v9 = v165;
    }
  }
  v26 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v11 + 1452));
  v179 = v26;
  if ( !v164 )
  {
LABEL_47:
    v32 = v165;
    v33 = *(_DWORD *)(v165 + 48);
    if ( (v33 & 0x8000) != 0 )
    {
      if ( *(int *)(v165 + 52) < 0 || (v33 & 7) != 0 )
        goto LABEL_50;
    }
    else if ( (v33 & 0xF8) != 0xC0
           || (v39 = *(__int64 **)(v165 + 72)) == 0LL
           || (v33 & 7) == 1
           || (v40 = *v39, *(_QWORD *)(v40 + 64))
           || (*(_DWORD *)(v40 + 56) & 0x1000) == 0 )
    {
LABEL_50:
      if ( v15 )
      {
        v34 = *(unsigned int *)(v32 + 52);
        LODWORD(v34) = v34 & 0x7FFFFFFF;
        v35 = v15 + (((unsigned __int64)*(unsigned __int8 *)(v32 + 34) << 31) | v34);
        *(_DWORD *)(v32 + 52) ^= (v35 ^ *(_DWORD *)(v32 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v32 + 34) = v35 >> 31;
      }
      v36 = &dword_140389780;
      v168 = 1;
      v171 = 0LL;
      if ( (*(_BYTE *)(v175 + 192) & 7) != 2 )
        v36 = (LONG *)(v175 + 200);
      CurrentIrql = KeGetCurrentIrql();
      v178 = CurrentIrql;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v36, (unsigned __int8)CurrentIrql);
      }
      else
      {
        v44 = 0;
        if ( _interlockedbittestandset(v36, 0x1Fu) )
          v44 = ExpWaitForSpinLockExclusiveAndAcquire(v36, CurrentIrql);
        v45 = *v36;
        while ( (v45 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v45 & 0x40000000) == 0 )
          {
            v46 = _InterlockedCompareExchange(v36, v45 | 0x40000000, v45);
            v30 = v45 == v46;
            v45 = v46;
            if ( !v30 )
              continue;
          }
          if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v44);
          v45 = *v36;
        }
      }
      v47 = v166;
      v36[1] = 0;
      MiQueryAddressState(a3, a3, (unsigned __int8)CurrentIrql, v32, v47, 4, 0LL, &v162, v190, v187);
      ProtoLeafValid = (ULONG_PTR)BugCheckParameter4;
      *a7 = MmProtectToValue[v162];
      v49 = v178;
      MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter4, 1);
      if ( (unsigned __int64)BugCheckParameter4 <= v172 )
      {
        v50 = 0LL;
        v186 = 0LL;
        while ( 1 )
        {
          if ( (ProtoLeafValid & 0xFFF) == 0 || v168 == 1 )
          {
            v168 = 0;
            MiMakeSystemAddressValid(ProtoLeafValid, 1);
          }
          v51 = (ProtoLeafValid << 25) - v50;
          PteShadow = *(_QWORD *)ProtoLeafValid;
          v53 = v51 >> 16;
          v177 = v53;
          if ( ProtoLeafValid >= 0xFFFFF6FB7DBED000uLL && ProtoLeafValid <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(ProtoLeafValid, PteShadow);
          v173 = PteShadow;
          if ( (PteShadow & 1) != 0 )
            break;
          if ( (PteShadow & 0x400) != 0 )
          {
            if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow)
              || (MiGetProtoPteAddress(v32, v53 >> 12, 1LL, v189),
                  PrototypePteDirect = MiGetPrototypePteDirect(PteShadow),
                  PrototypePteDirect == v129) )
            {
              if ( !v164 && (unsigned int)MiIsPrototypePteVadLookup(PteShadow) && (PteShadow & 0xA0) == 0xA0 )
                ++v171;
              if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
                v130 = (PteShadow >> 5) & 0x1F;
              else
                v130 = (*(unsigned __int16 *)(*(_QWORD *)(v32 + 72) + 32LL) >> 1) & 0x1F;
              v162 = v130;
              v131 = MiSanitizePfnProtection(v32, v130, v169);
              PrototypePteVadLookup = MiMakePrototypePteVadLookup(v131, v132, v133, v134);
              v173 = PrototypePteVadLookup;
              *(_QWORD *)ProtoLeafValid = PrototypePteVadLookup;
              if ( ProtoLeafValid >= v136 && ProtoLeafValid <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v137 = PrototypePteVadLookup;
                goto LABEL_368;
              }
LABEL_369:
              ProtoLeafValid += 8LL;
              BugCheckParameter4 = (__int64 *)ProtoLeafValid;
              goto LABEL_313;
            }
            MiFlushTbList(&v191);
            ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid);
            BugCheckParameter4 = (__int64 *)ProtoLeafValid;
            v168 = 1;
          }
          else
          {
            if ( (PteShadow & 0x800) == 0 )
            {
              v139 = 0;
              if ( a6 == 1 )
              {
                if ( PteShadow )
                {
                  MiReleasePageFileSpace(v179, PteShadow, 1LL);
                  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow) )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v166 + 920), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_346:
                  UsedPtesHandle = MiGetUsedPtesHandle(v53);
                  MiDecreaseUsedPtesCount(UsedPtesHandle);
                  v139 = 1;
                }
LABEL_348:
                v141 = MiGetUsedPtesHandle(v53);
                v182 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v141 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v182);
                  while ( *(__int64 *)(v141 + 24) < 0 );
                }
                *(_QWORD *)(v141 + 16) ^= ((unsigned int)*(_QWORD *)(v141 + 16) ^ ((unsigned int)*(_QWORD *)(v141 + 16)
                                                                                 + 0x10000)) & 0x3FF0000;
                _InterlockedAnd64((volatile signed __int64 *)(v141 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( (__int64)(*(_QWORD *)(v141 + 8) | 0x8000000000000000uLL) >> 47 == -1
                  || (__int64)(*(_QWORD *)(v141 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
                {
                  v142 = 0x7FFFFFFFF8LL;
                  v201 = (((*(_QWORD *)(v141 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v202 = ((v201 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v203 = ((v202 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v204 = ((v203 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  LODWORD(v143) = 4;
                  do
                  {
                    v143 = (unsigned int)(v143 - 1);
                    v144 = (_QWORD *)*(&v201 + v143);
                    v145 = *v144;
                    if ( (unsigned __int64)v144 >= 0xFFFFF6FB7DBED000uLL
                      && (unsigned __int64)v144 <= 0xFFFFF6FB7DBED7F8uLL )
                    {
                      LOBYTE(v145) = MiReadPteShadow(v144, *v144);
                    }
                  }
                  while ( (v145 & 1) != 0 && (v145 & 0x80u) == 0LL && (_DWORD)v143 );
                }
                if ( !v164 && (v139 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v32, ProtoLeafValid, v142, v143)) )
                  ++v171;
                v162 = (*(unsigned __int16 *)(*(_QWORD *)(v32 + 72) + 32LL) >> 1) & 0x1F;
                v146 = MiSanitizePfnProtection(0LL, v162, v169);
                v150 = MiMakePrototypePteVadLookup(v146, v147, v148, v149);
                v173 = v150;
                *(_QWORD *)ProtoLeafValid = v150;
                if ( ProtoLeafValid < 0xFFFFF6FB7DBED000uLL || ProtoLeafValid > 0xFFFFF6FB7DBED7F8uLL )
                  goto LABEL_369;
                v137 = v150;
              }
              else
              {
                if ( !PteShadow )
                  goto LABEL_348;
                v162 = (PteShadow >> 5) & 0x1F;
                v163 = MiSanitizePfnProtection(v32, v162, v163);
                v137 = PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * v163)) & 0x3E0;
                v173 = v137;
                *(_QWORD *)ProtoLeafValid = v137;
                if ( ProtoLeafValid < v152 || ProtoLeafValid > v151 )
                  goto LABEL_369;
              }
LABEL_368:
              MiWritePteShadow(ProtoLeafValid, v137);
              goto LABEL_369;
            }
            if ( a6 != 1 )
            {
              if ( (unsigned int)MiSetProtectionOnTransitionPte(v32, ProtoLeafValid, v163, 1LL) )
                goto LABEL_313;
              goto LABEL_369;
            }
            v138 = MiTryDeleteTransitionPte(ProtoLeafValid);
            if ( v138 == 3 )
            {
              ++v184;
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 920), 0xFFFFFFFFFFFFFFFFuLL);
              goto LABEL_346;
            }
            if ( v138 != 1 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 920), 0xFFFFFFFFFFFFFFFFuLL);
              goto LABEL_346;
            }
          }
LABEL_313:
          v32 = v165;
          v47 = v166;
          v50 = v186;
          v49 = v178;
          if ( ProtoLeafValid > v172 )
            goto LABEL_314;
        }
        v185 = MI_GET_PAGE_FRAME_FROM_PTE(&v173);
        v56 = 6 * v185;
        v57 = 48 * v185 - 0x58000000000LL;
        if ( (*(_QWORD *)(v57 + 40) & 0x200000000000000LL) != 0 )
        {
          v58 = *(_QWORD *)(v57 + 8);
          v59 = v54 | v58;
          if ( (v54 | v58) != MiGetProtoPteAddress(v165, v53 >> 12, 1LL, v189) )
          {
            CloneAddress = 0LL;
            if ( v58 < 0 )
            {
              v63 = v166;
              CloneAddress = MiLocateCloneAddress(v166, v59, v60, v61);
              if ( *(_QWORD *)(*(_QWORD *)(v63 + 1296) + 240LL) <= *(_QWORD *)(CloneAddress + 72) )
                CloneAddress = 0LL;
            }
            MiFlushTbList(&v191);
            ProtoLeafValid = (ULONG_PTR)BugCheckParameter4;
            if ( (unsigned int)MiCopyOnWriteEx(v53, (_DWORD)BugCheckParameter4, -1, v178, 0) )
            {
              if ( CloneAddress )
                --v170;
            }
            else
            {
              v168 = 1;
            }
            goto LABEL_313;
          }
          ProtoLeafValid = (ULONG_PTR)BugCheckParameter4;
          v55 = 0xFFFFF6FB7DBED000uLL;
        }
        v64 = a6;
        v65 = v167 & 0x101;
        if ( (v167 & 0x101) != 0 || a6 == 1 && (*(_QWORD *)(v57 + 40) & 0x200000000000000LL) == 0 )
        {
          v117 = BugCheckParameter4;
          v30 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) == (v172 & 0xFFFFFFFFFFFFF000uLL);
          v118 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
          if ( v30 )
            v118 = v172;
          v119 = 0;
          if ( (unsigned __int64)BugCheckParameter4 > v118 )
          {
LABEL_310:
            if ( HIDWORD(v198) )
            {
              MiFreeWsleList(v175, &v196, 0LL);
              HIDWORD(v198) = 0;
            }
            ProtoLeafValid = (ULONG_PTR)BugCheckParameter4;
            goto LABEL_313;
          }
          v120 = v177;
          while ( 2 )
          {
            v121 = *v117;
            v122 = v55;
            if ( (unsigned __int64)v117 >= v55 )
            {
              v122 = 0xFFFFF6FB7DBED7F8uLL;
              if ( (unsigned __int64)v117 <= 0xFFFFF6FB7DBED7F8uLL )
                v121 = MiReadPteShadow(v117, *v117);
            }
            v173 = v121;
            if ( (v121 & 1) == 0 )
              goto LABEL_310;
            if ( !v65 )
            {
              if ( v64 != 1 )
                goto LABEL_310;
              v122 = 6 * MI_GET_PAGE_FRAME_FROM_PTE(&v173);
              if ( ((*(_QWORD *)(8 * v122 - 0x57FFFFFFFD8LL) >> 57) & v123) != 0 )
                goto LABEL_310;
            }
            if ( (MiGetWsleContents(v122, v120) & 0xF) == 8 )
            {
              v119 = 1;
              *v188 = 1;
              goto LABEL_305;
            }
            MiInsertTbFlushEntry(&v196, v120, 1LL, 0LL);
            if ( HIDWORD(v198) == (_DWORD)v198 )
            {
LABEL_305:
              v124 = v175;
              if ( HIDWORD(v198) )
              {
                MiFreeWsleList(v175, &v196, 0LL);
                HIDWORD(v198) = 0;
              }
              if ( v119 == 1 )
              {
                MiUnlockVa(v124, v120);
                v119 = 0;
              }
            }
            v64 = a6;
            ++v117;
            v120 += 4096LL;
            v55 = 0xFFFFF6FB7DBED000uLL;
            if ( (unsigned __int64)v117 > v118 )
              goto LABEL_310;
            continue;
          }
        }
        if ( (*(_QWORD *)(v57 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( !v164 && (PteShadow & 0x200) != 0 )
            ++v171;
          v66 = (volatile signed __int64 *)(((v177 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v67 = *v66;
          v68 = 0xFFFFF6FB7DBED7F8uLL;
          if ( (unsigned __int64)v66 >= v55 && (unsigned __int64)v66 <= 0xFFFFF6FB7DBED7F8uLL )
            v67 = MiReadPteShadow(((v177 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v66);
          if ( (v67 & 1) != 0 )
            v69 = 16 * (v67 >> 60);
          else
            v69 = 10;
          LODWORD(v70) = (v69 >> 4) & 7;
          if ( (_DWORD)v70 )
          {
            if ( (*v66 & 0x10) != 0 )
            {
              LODWORD(v70) = v70 | 8;
            }
            else if ( (*v66 & 8) != 0 )
            {
              LODWORD(v70) = v70 | 0x18;
            }
          }
          else
          {
            v71 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v57 + 16);
            v72 = *(_QWORD *)(v57 + 8);
            v70 = v71;
            if ( v72 >= 0
              || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.Bitmap[12])
              && MiLocateCloneAddress(Process, v72 | 0x8000000000000000uLL, v71, v66) )
            {
              LODWORD(v70) = MmMakeProtectNotWriteCopy[v70];
            }
          }
          v74 = v169;
          v162 = v70;
          if ( v169 == 24 )
            goto LABEL_147;
          if ( (_DWORD)v70 == 24 )
          {
            v75 = *(_DWORD *)(v165 + 48);
            v76 = (v75 & 0x8000) != 0 ? v75 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(v165 + 72) + 32LL) >> 1;
            LODWORD(v70) = v76 & 0x1F;
            if ( (_DWORD)v70 == 24 )
              LOBYTE(v70) = 0;
          }
          v77 = v70 & 0x18;
          if ( v77 )
          {
            if ( v77 != 16 )
            {
              if ( v77 == 8 )
              {
                v74 = v169 & 0xFFFFFFE7 | 8;
              }
              else if ( v77 == 24 )
              {
                v74 = v169 | 0x18;
              }
              goto LABEL_147;
            }
          }
          else
          {
            v78 = v169 & 0x18;
            if ( v78 == 24 )
            {
              v74 = v169 & 0xFFFFFFE7;
              goto LABEL_147;
            }
            if ( v78 != 8 )
            {
LABEL_147:
              v79 = *v66;
              if ( (unsigned __int64)v66 >= v55 && (unsigned __int64)v66 <= v68 )
                v79 = MiReadPteShadow(v66, *v66);
              if ( (v79 & 1) != 0 )
                v80 = HIBYTE(v79) & 0xF;
              else
                v80 = 10;
              v81 = v80 | (16 * (v74 & 7));
              v82 = *v66;
              do
              {
                v83 = v82;
                v82 = _InterlockedCompareExchange64(
                        v66,
                        ((unsigned __int64)v81 << 56) | v82 & 0x80FFFFFFFFFFFFFFuLL,
                        v82);
              }
              while ( v83 != v82 );
LABEL_155:
              v84 = (unsigned __int64)BugCheckParameter4;
              v85 = *BugCheckParameter4;
              if ( (unsigned __int64)BugCheckParameter4 >= v55
                && (unsigned __int64)BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v85 = MiReadPteShadow(BugCheckParameter4, *BugCheckParameter4);
              }
              if ( (v85 & 0x10) != 0 )
              {
                if ( (v74 & 0x18) != 8 )
                  v74 = v74 & 0xFFFFFFE7 | 8;
              }
              else if ( (v85 & 8) != 0 )
              {
                if ( (v74 & 0x18) != 0x18 )
                  v74 |= 0x18u;
              }
              else if ( (v74 & 0x18) != 0 )
              {
                v74 &= 0xFFFFFFE7;
              }
              if ( v185 > qword_1403885E0
                || MmPhysicalMemoryBlock && (*(_QWORD *)(8 * v56 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
              {
                v57 = 0LL;
              }
              else if ( (MiFlags & 0x40000) != 0 && (v74 & 2) != 0 )
              {
                MiLockPageAtDpcInline(8 * v56 - 0x58000000000LL);
                if ( !(unsigned int)MiGetPagePrivilege(8 * v56 - 0x58000000000LL, 1LL, 0LL) )
                  MiMarkPfnVerified(8 * v56 - 0x58000000000LL, 7LL);
                _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v84 = (unsigned __int64)BugCheckParameter4;
                v55 = 0xFFFFF6FB7DBED000uLL;
              }
              v92 = v74 & 0x1F;
              v93 = ((v185 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v92] & 0xFFFF000000000E7FuLL | 0x21;
              if ( v84 < 0xFFFFF68000000000uLL || v84 > 0xFFFFF6FFFFFFFFFFuLL )
              {
                v95 = v177;
                v97 = 0xFFFFF68000000000uLL;
              }
              else
              {
                if ( v84 >= 0xFFFFF6FB40000000uLL && v84 <= 0xFFFFF6FB7FFFFFFFuLL )
                {
                  if ( v84 == ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
                  {
                    v93 = ((v185 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v92] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
                  }
                  else if ( (v74 & 0x4000000) == 0 )
                  {
                    v93 = ((v185 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v92] & 0x7FFF000000000E7FLL | 0x21;
                  }
                  v94 = MiUserPdeOrAbove(v84);
                  v84 = (unsigned __int64)BugCheckParameter4;
                  if ( v94 )
                    v93 |= 4uLL;
                }
                v95 = v177;
                v96 = v93 | 4;
                if ( v84 > 0xFFFFF6BFFFFFFF78uLL )
                  v96 = v93;
                v93 = v96;
                if ( !(unsigned int)MiIsAddressGlobal(v177) )
                {
LABEL_212:
                  if ( v74 < 0 && (v74 & 5) == 4 )
                    v93 |= 0x42uLL;
                  v98 = v93 & 0xFFFFFFFFFFFFFFFBuLL;
                  if ( (v74 & 0x40000000) == 0 )
                    v98 = v93;
                  if ( (v74 & 0x20000000) != 0 )
                    v98 ^= ((unsigned __int16)v98 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100;
                  v99 = v98 & 0xFFFFFFFFFFFFFEFFuLL;
                  if ( (v74 & 0x8000000) == 0 )
                    v99 = v98;
                  v100 = v99 | 0x80;
                  if ( (v74 & 0x4000000) == 0 )
                    v100 = v99;
                  v101 = v100 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
                  if ( !v57 && (v74 & 4) != 0 )
                    v101 |= 0x42uLL;
                  ProtoLeafValid = (ULONG_PTR)BugCheckParameter4;
                  v102 = *BugCheckParameter4;
                  if ( (unsigned __int64)BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
                    && (unsigned __int64)BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
                  {
                    v102 = MiReadPteShadow(BugCheckParameter4, *BugCheckParameter4);
                  }
                  v103 = v101 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v102) & 0xF | (16 * ((v102 >> 60) & 7))) << 56);
                  *BugCheckParameter4 = v103;
                  if ( (unsigned __int64)BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
                    && (unsigned __int64)BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
                  {
                    MiWritePteShadow(BugCheckParameter4, v103);
                  }
                  if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0)
                    && ((v101 & 0x40) != 0 || (v85 & 0x40) == 0)
                    && ((v101 & 2) != 0 || (v85 & 2) == 0)
                    && (v101 >= 0 || v85 < 0) )
                  {
                    goto LABEL_274;
                  }
                  v104 = 1LL;
                  v105 = v95;
                  if ( v191 != 1 )
                  {
                    if ( (v192 & 8) == 0 && v95 >= v97 && v95 <= 0xFFFFF6FFFFFFFFFFuLL )
                      LOBYTE(v192) = v192 | 8;
                    if ( v191 )
                    {
                      for ( i = v95; i >= v97; i = (__int64)((i << 25) - v186) >> 16 )
                      {
                        if ( i > 0xFFFFF6FFFFFFFFFFuLL )
                          break;
                      }
                    }
                  }
                  if ( HIDWORD(v193) )
                  {
                    v84 = (unsigned __int8)v192;
                    LOBYTE(v84) = v192 & 4;
                    if ( (v192 & 4) == 0 )
                    {
                      v107 = Base[HIDWORD(v193) - 1];
                      if ( (v107 & 0xC00) == 0 )
                      {
                        v108 = Base[HIDWORD(v193) - 1] & 0x3FFLL;
                        if ( (v107 & 0xFFFFFFFFFFFFF000uLL) + ((v108 + 1) << 12) == v95
                          && v108 + 1 >= v108
                          && v108 + 1 <= 0x3FF )
                        {
                          ++v194;
                          Base[HIDWORD(v193) - 1] = v107 ^ ((unsigned __int16)v107 ^ (unsigned __int16)(v107 + 1)) & 0x3FF;
LABEL_273:
                          ProtoLeafValid = (ULONG_PTR)BugCheckParameter4;
LABEL_274:
                          if ( (v85 & 0x42) == 0 )
                            goto LABEL_369;
                          if ( v57
                            && ((*(_BYTE *)(v165 + 48) & 7) != 6 || MiRotatedToFrameBuffer((__int64 *)ProtoLeafValid)) )
                          {
                            v181 = 0;
                            v114 = 0LL;
                            while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
                            {
                              do
                                KeYieldProcessorEx(&v181);
                              while ( *(__int64 *)(v57 + 24) < 0 );
                            }
                            v115 = *(_BYTE *)(v57 + 34);
                            v116 = 0LL;
                            if ( (v115 & 0x10) == 0 )
                            {
                              if ( (*(_DWORD *)(v57 + 16) & 0x400LL) == 0 && (v115 & 8) == 0 )
                                v116 = MiCapturePageFileInfoInline(v57 + 16, 1LL);
                              *(_BYTE *)(v57 + 34) |= 0x10u;
                              if ( v116 )
                                v114 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v57 + 40) >> 40) & 0x3FFLL));
                            }
                            _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                            if ( v116 )
                              MiReleasePageFileInfo(v114, v116, 1LL);
                          }
                          if ( (*(_DWORD *)(v165 + 48) & 7) != 4 )
                            goto LABEL_369;
                          MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, v95, v165, v84);
                          ProtoLeafValid += 8LL;
                          BugCheckParameter4 = (__int64 *)ProtoLeafValid;
                          goto LABEL_313;
                        }
                      }
                    }
                    if ( !(_BYTE)v84 )
                    {
                      v109 = Base[HIDWORD(v193) - 1];
                      if ( (v109 & 0xC00) == 0 && (v109 & 0xFFFFFFFFFFFFF000uLL) == v95 + 4096 )
                      {
                        v110 = Base[HIDWORD(v193) - 1] & 0x3FFLL;
                        if ( v110 + 1 >= v110 && v110 + 1 <= 0x3FF )
                        {
                          ++v194;
                          Base[HIDWORD(v193) - 1] = (v109 - 4096) ^ ((unsigned __int16)(v109 - 4096) ^ (unsigned __int16)(v109 - 4096 + 1)) & 0x3FF;
                          goto LABEL_273;
                        }
                      }
                    }
                  }
                  if ( HIDWORD(v193) < (unsigned int)v193 )
                  {
                    while ( 1 )
                    {
                      v111 = 1024LL;
                      if ( (unsigned __int64)(v104 - 1) <= 0x3FF )
                        v111 = v104;
                      v104 -= v111;
                      v112 = v105 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v111 - 1) & 0x3FF;
                      v105 += v111 << 12;
                      Base[HIDWORD(v193)] = v112;
                      v194 += v111;
                      v113 = HIDWORD(v193) + 1;
                      HIDWORD(v193) = v113;
                      if ( v113 == (_DWORD)v193 && (v192 & 4) == 0 )
                      {
                        qsort(Base, v113, 8uLL, MiTbFlushSort);
                        MiCompressTbFlushList(&v191);
                        if ( HIDWORD(v193) == (_DWORD)v193 )
                          break;
                      }
                      if ( !v104 )
                        goto LABEL_273;
                    }
                    if ( v104 )
                    {
                      v194 = HIDWORD(v193);
                      HIBYTE(v192) = 1;
                    }
                  }
                  else
                  {
                    HIBYTE(v192) = 1;
                  }
                  goto LABEL_273;
                }
              }
              v93 |= 0x100uLL;
              goto LABEL_212;
            }
          }
          v74 = v169 & 0xFFFFFFF7;
          goto LABEL_147;
        }
        v180 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v180);
          while ( *(__int64 *)(v57 + 24) < 0 );
        }
        v86 = v163;
        v74 = v163;
        v87 = (*(_QWORD *)(v57 + 16) >> 5) & 0x1FLL;
        if ( v163 != 24 )
        {
          if ( (_DWORD)v87 == 24 )
          {
            v88 = *(_DWORD *)(v165 + 48);
            v89 = (v88 & 0x8000) != 0 ? v88 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(v165 + 72) + 32LL) >> 1;
            LODWORD(v87) = v89 & 0x1F;
            v86 = v163;
            if ( (_DWORD)v87 == 24 )
              LOBYTE(v87) = 0;
          }
          v90 = v87 & 0x18;
          if ( v90 )
          {
            if ( v90 != 16 )
            {
              if ( v90 == 8 )
              {
                v74 = v86 & 0xFFFFFFE7 | 8;
              }
              else if ( v90 == 24 )
              {
                v74 = v86 | 0x18;
              }
              goto LABEL_182;
            }
            goto LABEL_181;
          }
          v91 = v86 & 0x18;
          if ( v91 == 24 )
          {
            v74 = v86 & 0xFFFFFFE7;
          }
          else if ( v91 == 8 )
          {
LABEL_181:
            v74 = v86 & 0xFFFFFFF7;
          }
        }
LABEL_182:
        *(_QWORD *)(v57 + 16) ^= ((unsigned __int16)*(_QWORD *)(v57 + 16) ^ (unsigned __int16)(32 * v74)) & 0x3E0;
        _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v55 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_155;
      }
LABEL_314:
      if ( !HIDWORD(v193) )
        goto LABEL_383;
      v125 = qword_140388568;
      if ( (v192 & 2) != 0 )
      {
        if ( v191 == 1 )
        {
LABEL_371:
          v127 = 0LL;
          goto LABEL_373;
        }
      }
      else if ( v191 == 1 )
      {
        v126 = KeGetCurrentThread()->ApcState.Process;
        if ( v126[2].ActiveProcessors.Bitmap[16] || v126->SecureState.SecureHandle )
        {
          v125 = -1LL;
          v127 = 0LL;
          goto LABEL_373;
        }
        goto LABEL_371;
      }
      v127 = (unsigned int)((v192 & 8) != 0) + 1;
LABEL_373:
      if ( HIBYTE(v192) || v194 > v125 )
      {
        if ( (v192 & 1) != 0 )
          KeFlushCurrentTbOnly(v191, v127, v125);
        else
          KeFlushTb(v191, v127, v125);
        HIBYTE(v192) = 0;
      }
      else if ( (v192 & 1) != 0 )
      {
        KeFlushMultipleRangeCurrentTb(HIDWORD(v193), Base, v191);
      }
      else
      {
        KeFlushMultipleRangeTb(HIDWORD(v193), Base, v191, (unsigned int)v127);
      }
      LOBYTE(v192) = v192 & 0xF7;
      HIDWORD(v193) = 0;
      v194 = 0LL;
LABEL_383:
      MiUnlockWorkingSetExclusive(v47 + 1280, v49);
      if ( v174 == 1 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v47 + 880);
        KeAbPostRelease(v47 + 880);
        v153 = CurrentThread;
        v30 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v30 && ($B476B70DB57F76B110DA5B9238C3E934 *)v153->ApcState.ApcListHead[0].Flink != &v153->152 )
          KiCheckForKernelApcDelivery();
      }
      v154 = v184;
      v155 = v176;
      if ( v184 && v164 )
      {
        v155 = v176 - v184;
        v154 = 0LL;
      }
      v156 = v179;
      if ( v155 )
        MiReturnCommit(v179, v155);
      v157 = v171;
      if ( v171 )
      {
        v158 = *(unsigned int *)(v32 + 52);
        LODWORD(v158) = v158 & 0x7FFFFFFF;
        v159 = v171 - v154;
        v160 = (((unsigned __int64)*(unsigned __int8 *)(v32 + 34) << 31) | v158) - v171;
        *(_DWORD *)(v32 + 52) ^= (*(_DWORD *)(v32 + 52) ^ v160) & 0x7FFFFFFF;
        *(_BYTE *)(v32 + 34) = v160 >> 31;
        MiReturnCommit(v156, v159);
        MiReturnFullProcessCharges(v47, v157);
      }
      if ( v170 )
        MiReturnFullProcessCommitment(v47, v170);
      return 0LL;
    }
    v174 = 1;
    --CurrentThread->SpecialApcDisable;
    v41 = (volatile signed __int64 *)(v11 + 880);
    ExAcquirePushLockExclusiveEx(v11 + 880, 0LL);
    v42 = MiCommitPageTablesForVad(v32, a3, a4);
    if ( v42 >= 0 )
      goto LABEL_50;
    if ( (_InterlockedExchangeAdd64(v41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v41);
    KeAbPostRelease((ULONG_PTR)v41);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    if ( v176 )
    {
      MiReturnCommit(v179, v15);
    }
    else if ( v15 )
    {
      v43 = v166;
      MiReturnFullProcessCommitment(v166, v15);
      goto LABEL_72;
    }
    v43 = v166;
LABEL_72:
    if ( v170 )
      MiReturnFullProcessCommitment(v43, v170);
    return (unsigned int)v42;
  }
  v27 = MiCountSharedPages(v9, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v17);
  v15 = v27;
  if ( a6 == 1 )
  {
    v29 = ((__int64)(v172 - v16) >> 3) - v27;
    v30 = v29 == -1;
    v31 = v29 + 1;
    v176 = v31;
    if ( !v30 && !(unsigned int)MiChargeCommit(v26, v31, 0LL, v28) )
    {
      if ( v170 )
        MiReturnFullProcessCommitment(v11, v170);
      return 3221225773LL;
    }
    v15 = 0LL;
    goto LABEL_47;
  }
  if ( !v27 )
    goto LABEL_47;
  v38 = MiChargeFullProcessCommitment(v11, v27);
  if ( v38 >= 0 )
    goto LABEL_47;
  if ( v170 )
    MiReturnFullProcessCommitment(v11, v170);
  return (unsigned int)v38;
}
