/*
 * XREFs of MiSetProtectionOnSection @ 0x1401147F0
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1404B4820 (MiMarkSharedImageCfgBits.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1404D7638 (MiCommitPagefileBackedSection.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140569118 (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1400278B0 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     MiUnlockVa @ 0x14004EACC (MiUnlockVa.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140050C14 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1400524F0 (MiTryDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1400A68AC (MiPteNeedsCommitCharge.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400AE1C8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiGetPageTableLockBuffer @ 0x1400B2278 (MiGetPageTableLockBuffer.c)
 *     MiMakeProtoLeafValid @ 0x1400BF71C (MiMakeProtoLeafValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400C06B0 (MiSetProtectionOnTransitionPte.c)
 *     MiDecreaseUsedPtesCount @ 0x1400C1830 (MiDecreaseUsedPtesCount.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiSanitizePfnProtection @ 0x140116C20 (MiSanitizePfnProtection.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  ULONG_PTR v10; // r13
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int ProtectionMask; // eax
  __int64 v14; // r8
  __int64 result; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // bl
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int32 v32; // r11d
  unsigned __int8 v33; // al
  volatile signed __int64 *v34; // rbx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // r8
  __int64 *v38; // rax
  __int64 v39; // rax
  volatile signed __int64 *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // r14d
  __int64 v45; // r8
  __int64 v46; // rbx
  LONG *v47; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  int v51; // eax
  signed __int32 v52; // ett
  unsigned __int64 v53; // r14
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rcx
  __int64 v58; // r13
  unsigned __int64 v59; // r14
  char v60; // al
  volatile __int64 *v61; // r11
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // r10
  struct _KPRCB *v63; // r10
  unsigned __int64 Process; // rcx
  __int64 v65; // rdx
  int v66; // eax
  _QWORD *v67; // rdx
  __int64 i; // r15
  unsigned __int64 v69; // rdi
  signed __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  char v74; // cl
  struct _KPRCB *v75; // rax
  volatile signed __int32 *PageTableLockBuffer; // rbx
  unsigned __int32 v77; // r8d
  char v78; // cl
  signed __int32 v79; // eax
  signed __int64 v80; // rcx
  unsigned __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // r8
  unsigned __int64 v84; // rdx
  signed __int64 v85; // r8
  unsigned int v86; // ebx
  char v87; // cl
  _KLOCK_QUEUE_HANDLE *v88; // rbx
  struct _KPRCB *v89; // rbx
  __int64 Next; // rax
  __int64 v91; // rdx
  int v92; // eax
  volatile signed __int32 *v93; // r8
  int v94; // r9d
  signed __int32 v95; // eax
  volatile signed __int32 v96; // ett
  signed __int32 v97; // edx
  signed __int64 v98; // rdx
  unsigned __int64 v99; // r8
  __int64 v100; // rax
  __int64 v101; // r8
  signed __int64 v102; // rax
  signed __int64 v103; // rdx
  unsigned int v104; // r12d
  __int64 v105; // r8
  int v106; // eax
  ULONG_PTR v107; // rbx
  unsigned __int64 v108; // r11
  unsigned __int64 v109; // rbx
  ULONG_PTR v110; // r15
  unsigned __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  unsigned __int64 v114; // r12
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  unsigned __int64 v117; // r12
  ULONG_PTR v118; // r13
  __int64 v119; // r14
  _QWORD *CloneAddress; // rbx
  __int64 v121; // rcx
  int v122; // edi
  __int64 v123; // r8
  int v124; // r15d
  unsigned __int64 v125; // r9
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // r11
  unsigned __int64 v128; // r8
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 v131; // r8
  unsigned int v132; // eax
  __int64 v133; // rdx
  _KPROCESS *v134; // rcx
  int v135; // r14d
  unsigned int v136; // r8d
  unsigned int v137; // r8d
  int v138; // r8d
  int v139; // eax
  __int64 v140; // rax
  signed __int64 v141; // rdx
  unsigned __int64 v142; // r8
  signed __int64 v143; // rax
  unsigned __int64 v144; // r9
  __int64 v145; // rdi
  unsigned int v146; // edx
  __int64 v147; // rax
  unsigned int v148; // eax
  unsigned int v149; // eax
  int v150; // eax
  int v151; // eax
  unsigned __int64 v152; // r12
  unsigned __int64 v153; // r11
  __int64 v154; // r15
  unsigned __int64 v155; // rbx
  int v156; // eax
  unsigned __int64 v157; // r12
  int v158; // eax
  unsigned __int64 v159; // rdx
  unsigned __int64 v160; // rax
  unsigned __int64 v161; // rdx
  __int64 v162; // r10
  signed __int64 v163; // r10
  unsigned __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rdx
  char v167; // r9
  __int64 v168; // rbx
  unsigned __int64 v169; // r14
  unsigned int v170; // r8d
  char v171; // r9
  unsigned __int64 v172; // rax
  unsigned __int64 v173; // r10
  struct _KEVENT *v174; // rbx
  char v175; // r9
  unsigned __int64 v176; // rdx
  char v177; // al
  __int64 v178; // rax
  unsigned __int64 v179; // rcx
  __int64 v180; // rdx
  unsigned __int64 v181; // rax
  unsigned __int64 v182; // rdi
  unsigned __int64 v183; // r14
  char v184; // bl
  unsigned __int64 v185; // rsi
  __int64 v186; // r13
  unsigned __int64 v187; // rcx
  int v188; // r9d
  __int64 PrototypePteDirect; // rax
  __int64 v190; // rdx
  unsigned __int64 v191; // rbx
  unsigned int v192; // eax
  __int64 PrototypePteVadLookup; // rax
  __int64 v194; // r8
  unsigned __int64 v195; // r10
  __int64 v196; // rdx
  __int64 v197; // rcx
  int v198; // eax
  char v199; // di
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // r9
  ULONG_PTR UsedPtesHandle; // rax
  unsigned __int64 *v204; // r15
  unsigned __int64 PteShadow; // rdx
  __int64 v206; // rbx
  __int64 v207; // r9
  unsigned __int64 v208; // r8
  __int64 v209; // rcx
  unsigned __int64 v210; // rax
  __int64 v211; // rax
  char v212; // r8
  unsigned int v213; // eax
  __int64 v214; // rax
  unsigned __int64 v215; // r10
  volatile signed __int32 *v216; // r8
  char v217; // cl
  struct _KPRCB *v218; // rax
  struct _KLOCK_QUEUE_HANDLE *v219; // rcx
  int v220; // edi
  signed __int32 v221; // eax
  volatile signed __int32 v222; // ett
  signed __int32 v223; // edx
  signed __int64 v224; // rax
  signed __int64 v225; // rax
  signed __int64 v226; // rtt
  signed __int64 v227; // r9
  __int64 v228; // rdx
  __int64 v229; // r8
  __int64 v230; // r9
  struct _KTHREAD *v231; // rcx
  __int64 v232; // rsi
  unsigned __int64 v233; // rax
  __int64 v234; // r14
  __int64 v235; // rbx
  __int64 v236; // rax
  unsigned __int64 v237; // rdx
  unsigned __int64 v238; // r8
  __int64 *BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  unsigned int v241; // [rsp+50h] [rbp-B0h]
  volatile signed __int64 *v243; // [rsp+60h] [rbp-A0h]
  unsigned int v244; // [rsp+68h] [rbp-98h] BYREF
  int v245; // [rsp+6Ch] [rbp-94h]
  int v246; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v247; // [rsp+74h] [rbp-8Ch]
  int v248; // [rsp+78h] [rbp-88h]
  __int64 v249; // [rsp+80h] [rbp-80h] BYREF
  __int64 v250; // [rsp+88h] [rbp-78h] BYREF
  __int64 v251; // [rsp+90h] [rbp-70h]
  unsigned int v252; // [rsp+98h] [rbp-68h]
  __int64 v253; // [rsp+A0h] [rbp-60h]
  ULONG_PTR v254; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v255; // [rsp+B0h] [rbp-50h]
  int v256; // [rsp+B8h] [rbp-48h]
  __int64 v257; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v258; // [rsp+C8h] [rbp-38h]
  __int64 v259; // [rsp+D0h] [rbp-30h]
  int v260; // [rsp+D8h] [rbp-28h] BYREF
  int v261; // [rsp+DCh] [rbp-24h] BYREF
  int v262; // [rsp+E0h] [rbp-20h] BYREF
  int v263; // [rsp+E4h] [rbp-1Ch] BYREF
  int v264; // [rsp+E8h] [rbp-18h] BYREF
  int v265; // [rsp+ECh] [rbp-14h] BYREF
  unsigned __int64 v266; // [rsp+F0h] [rbp-10h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  __int64 v268; // [rsp+100h] [rbp+0h]
  ULONG_PTR v269; // [rsp+108h] [rbp+8h]
  __int64 v270; // [rsp+110h] [rbp+10h]
  ULONG_PTR BugCheckParameter3; // [rsp+118h] [rbp+18h]
  int v272; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int64 v273; // [rsp+128h] [rbp+28h]
  _DWORD *v274; // [rsp+130h] [rbp+30h]
  __int64 v275; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v276; // [rsp+140h] [rbp+40h]
  unsigned __int64 v277; // [rsp+148h] [rbp+48h]
  unsigned __int64 v278; // [rsp+150h] [rbp+50h]
  __int64 v279; // [rsp+158h] [rbp+58h]
  unsigned __int64 v280; // [rsp+160h] [rbp+60h]
  unsigned __int64 v281; // [rsp+168h] [rbp+68h]
  unsigned __int64 v282; // [rsp+170h] [rbp+70h]
  __int64 v283; // [rsp+178h] [rbp+78h]
  __int64 v284; // [rsp+180h] [rbp+80h] BYREF
  int v285; // [rsp+190h] [rbp+90h] BYREF
  __int16 v286; // [rsp+194h] [rbp+94h]
  __int64 v287; // [rsp+198h] [rbp+98h]
  __int64 v288; // [rsp+1A0h] [rbp+A0h]
  _QWORD Base[21]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v290; // [rsp+250h] [rbp+150h] BYREF
  __int16 v291; // [rsp+254h] [rbp+154h]
  __int64 v292; // [rsp+258h] [rbp+158h]
  __int64 v293; // [rsp+260h] [rbp+160h]
  __int64 v294; // [rsp+268h] [rbp+168h]
  _UNKNOWN *retaddr; // [rsp+368h] [rbp+268h]

  v274 = a8;
  v10 = a2;
  v11 = (*(_DWORD *)(a2 + 48) & 7) == 2;
  v12 = a5;
  v247 = a5;
  if ( v11 )
  {
    if ( (a5 & 4) != 0 )
    {
      v12 = a5 & 0xFFFFFFF3 | 8;
      v247 = v12;
    }
    if ( (v12 & 0x40) != 0 )
    {
      v12 = v12 & 0xFFFFFF3F | 0x80;
      v247 = v12;
    }
  }
  ProtectionMask = MiMakeProtectionMask(v12, a2, a1);
  v252 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v258 = 0LL;
  v16 = 0LL;
  v268 = 0LL;
  v287 = 20LL;
  v285 = 1;
  v286 = 0;
  v288 = 0LL;
  Base[0] = 0LL;
  v241 = ProtectionMask;
  v245 = ProtectionMask & 5;
  if ( v245 == 5 )
    v241 = ProtectionMask & 0xFFFFFFFE;
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter2 = (__int64 *)v17;
  v18 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v256 = 0;
  v19 = v14 + 1280;
  v20 = *(_QWORD *)(v14 + 1296);
  v292 = 20LL;
  v290 = 1;
  v291 = 4;
  v293 = 0LL;
  v294 = 0LL;
  v255 = v18;
  CurrentThread = KeGetCurrentThread();
  v249 = 0LL;
  v251 = v14 + 1280;
  if ( *(_QWORD *)(v20 + 328) )
  {
    v21 = *(unsigned int *)(v10 + 52);
    LODWORD(v21) = v21 & 0x7FFFFFFF;
    if ( v21 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v22 = MiLockWorkingSetShared(v14 + 1280);
      MiComputePageCommitment(a3, a4, v10, v22, 0, &v249);
      MiUnlockWorkingSetShared(v19, v22, v23);
      if ( v249 )
      {
        result = MiChargeFullProcessCommitment(a1, v249);
        if ( (int)result < 0 )
          return result;
      }
      v18 = v255;
      v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
  }
  v259 = *(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(v19 + 174));
  if ( v245 == 5 )
  {
    v24 = MiCountSharedPages(v10, v17, v18);
    v16 = v24;
    if ( a6 == 1 )
    {
      v26 = ((__int64)(v255 - v17) >> 3) - v24;
      v11 = v26 == -1;
      v27 = v26 + 1;
      v258 = v27;
      if ( !v11 && !(unsigned int)MiChargeCommit(v259, v27, 0LL, v25) )
      {
        if ( v249 )
          MiReturnFullProcessCommitment(a1, v249, v28);
        return 3221225773LL;
      }
      v16 = 0LL;
    }
    else if ( v24 )
    {
      v36 = MiChargeFullProcessCommitment(a1, v24);
      if ( v36 < 0 )
      {
        if ( v249 )
          MiReturnFullProcessCommitment(a1, v249, v37);
        return (unsigned int)v36;
      }
    }
  }
  v29 = *(_DWORD *)(v10 + 48);
  if ( (v29 & 0x4000) != 0 )
  {
    if ( *(int *)(v10 + 52) < 0 || (v29 & 7) != 0 )
      goto LABEL_26;
LABEL_40:
    v256 = 1;
    --CurrentThread->SpecialApcDisable;
    v40 = (volatile signed __int64 *)(a1 + 880);
    ExAcquirePushLockExclusiveEx(a1 + 880, 0LL);
    v44 = MiCommitPageTablesForVad(v10, a3, a4);
    if ( v44 >= 0 )
      goto LABEL_26;
    if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v40, v41, v42, v43);
    KeAbPostRelease((ULONG_PTR)v40);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v258 )
    {
      MiReturnCommit(v259, v16);
    }
    else if ( v16 )
    {
      v46 = a1;
      MiReturnFullProcessCommitment(a1, v16, v45);
      goto LABEL_46;
    }
    v46 = a1;
LABEL_46:
    if ( v249 )
      MiReturnFullProcessCommitment(v46, v249, v45);
    return (unsigned int)v44;
  }
  if ( (v29 & 0xF8) == 0xC0 )
  {
    v38 = *(__int64 **)(v10 + 72);
    if ( v38 )
    {
      if ( (v29 & 7) != 1 )
      {
        v39 = *v38;
        if ( !*(_QWORD *)(v39 + 64) && (*(_DWORD *)(v39 + 56) & 0x1000) != 0 )
          goto LABEL_40;
      }
    }
  }
LABEL_26:
  if ( v16 )
  {
    v30 = *(unsigned int *)(v10 + 52);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    v31 = v16 + (v30 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31));
    *(_DWORD *)(v10 + 52) ^= (v31 ^ *(_DWORD *)(v10 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v10 + 34) = v31 >> 31;
  }
  v32 = 0;
  v33 = *(_BYTE *)(v19 + 184) & 7;
  v248 = 1;
  v253 = 0LL;
  v34 = 0LL;
  v243 = 0LL;
  if ( v33 < 6u )
  {
    v47 = &dword_1403CCD40;
    if ( v33 != 2 )
      v47 = (LONG *)(v19 + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v47, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v51 = SchedulerAssist[5];
          SchedulerAssist[5] = v51 + 1;
          if ( v51 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v47);
      v52 = *v47 & 0x7FFFFFFF;
      if ( v52 == _InterlockedCompareExchange(v47, v52 + 1, v52) )
        goto LABEL_64;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      ExpWaitForSpinLockSharedAndAcquire(v47, CurrentIrql);
    }
    v32 = 0;
LABEL_64:
    if ( v47[1] )
      _InterlockedExchange(v47 + 1, v32);
    v34 = 0LL;
    v35 = CurrentIrql;
    goto LABEL_67;
  }
  v35 = KeGetCurrentIrql();
  __writecr8(2uLL);
LABEL_67:
  v257 = v35;
  MiQueryAddressState(a3, a3, v35, v10, a1, (int *)&v244, &v284, &v272);
  v53 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v54 = 0xFFFFF6FB7DBED000uLL;
  *a7 = MmProtectToValue[v244];
  v55 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)BugCheckParameter2 > v255 )
    goto LABEL_519;
  while ( 2 )
  {
    v56 = 0xFFFFFA8000000000uLL;
    if ( (v53 & 0xFFF) != 0 && v248 != 1 )
      goto LABEL_203;
    v248 = 0;
    if ( v34 )
    {
      MiFlushTbList(&v285);
      MiUnlockPageTableInternal(v19, v34);
    }
    v57 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v243 = (volatile signed __int64 *)v57;
    LODWORD(v254) = (*(_DWORD *)(v10 + 48) >> 8) & 0x3F;
    BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
    v58 = BugCheckParameter3 + 1280;
    v269 = BugCheckParameter3 + 1280;
    while ( 2 )
    {
      v276 = v57;
      v277 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v278 = ((v277 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v279 = ((v278 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v59 = 0xFFFFF6FB7DBEDF68uLL;
      v60 = *(_BYTE *)(v58 + 184) & 7;
      if ( v60 )
      {
        if ( v60 == 7 )
        {
          v61 = (volatile __int64 *)&unk_1403CBCE8;
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          v63 = KeGetCurrentPrcb();
          if ( v60 == 5 )
          {
            v61 = &qword_1403CBCE0;
            SelfmapLockHandle = v63->SelfmapLockHandle;
          }
          else
          {
            v61 = &qword_1403CBCF8;
            SelfmapLockHandle = &v63->SelfmapLockHandle[3];
          }
        }
      }
      else
      {
        v61 = (volatile __int64 *)(v58 + 176);
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
      }
      SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v61;
      SelfmapLockHandle->LockQueue.Next = 0LL;
      Process = (unsigned __int64)KeGetCurrentPrcb();
      v65 = *(_QWORD *)(Process + 25016);
      if ( v65 )
      {
        if ( *(_BYTE *)(Process + 32) <= 1u )
        {
          v66 = *(_DWORD *)(v65 + 20);
          *(_DWORD *)(v65 + 20) = v66 + 1;
          if ( v66 == -1 && !*(_BYTE *)(v65 + 25) && !*(_BYTE *)(v65 + 27) )
            KiPerformUnboostKick(Process);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v61);
      }
      else
      {
        v67 = (_QWORD *)_InterlockedExchange64(v61, (__int64)SelfmapLockHandle);
        if ( v67 )
          KxWaitForLockOwnerShip((__int64)SelfmapLockHandle, v67);
      }
      for ( i = 2LL; ; --i )
      {
        v69 = *(&v276 + i);
        v270 = i;
        v70 = *(_QWORD *)v69;
        if ( v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 640) != 1 )
          {
            if ( (v70 & 1) == 0 )
              break;
            if ( (v70 & 0x20) == 0 || (v70 & 0x42) == 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v71 = *(_QWORD *)(Process + 1544);
              if ( v71 )
              {
                v72 = *(_QWORD *)(v71 + 8 * ((v69 >> 3) & 0x1FF));
                v73 = v70 | 0x20;
                Process = (unsigned __int8)v72;
                LOBYTE(Process) = v72 & 0x20;
                if ( (v72 & 0x20) == 0 )
                  v73 = *(_QWORD *)v69;
                v70 = v73;
                if ( (v72 & 0x42) != 0 )
                  v70 = v73 | 0x42;
              }
            }
          }
        }
        if ( (v70 & 1) == 0 || (v70 & 0x80u) != 0LL )
          break;
        if ( (v70 & 0x20) == 0 )
          MiPerformSafePdeWrite(Process, (volatile signed __int64 *)v69, v70, 1);
        if ( v69 != v59 )
        {
          v74 = *(_BYTE *)(v58 + 184) & 7;
          if ( v69 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v75 = KeGetCurrentPrcb();
            if ( v74 )
            {
              if ( v74 == 7 )
              {
                v75->SelfmapLockHandle[1].LockQueue.Next = 0LL;
                v75->SelfmapLockHandle[1].LockQueue.Lock = (unsigned __int64 *volatile)&unk_1403CBCE8;
                KxAcquireQueuedSpinLock((__int64)&v75->SelfmapLockHandle[1], (volatile __int64 *)&unk_1403CBCE8);
              }
              else if ( v74 == 5 )
              {
                v75->SelfmapLockHandle[0].LockQueue.Next = 0LL;
                v75->SelfmapLockHandle[0].LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBCE0;
                KxAcquireQueuedSpinLock((__int64)v75->SelfmapLockHandle, &qword_1403CBCE0);
              }
              else
              {
                v75->SelfmapLockHandle[3].LockQueue.Next = 0LL;
                v75->SelfmapLockHandle[3].LockQueue.Lock = (unsigned __int64 *volatile)&qword_1403CBCF8;
                KxAcquireQueuedSpinLock((__int64)&v75->SelfmapLockHandle[3], &qword_1403CBCF8);
              }
            }
            else
            {
              v75->SelfmapLockHandle[2].LockQueue.Next = 0LL;
              v75->SelfmapLockHandle[2].LockQueue.Lock = (unsigned __int64 *volatile)(v58 + 176);
              KxAcquireQueuedSpinLock((__int64)&v75->SelfmapLockHandle[2], (volatile __int64 *)(v58 + 176));
            }
          }
          else if ( v74 && v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v58, v69, &v246);
            v77 = *PageTableLockBuffer;
            do
            {
LABEL_120:
              v78 = v246;
              while ( ((v77 >> v78) & 1) != 0 )
              {
                if ( ((v77 >> v78) & 2) == 0 )
                {
                  v77 = _InterlockedCompareExchange(PageTableLockBuffer, v77 | (2 << v78), v77);
                  goto LABEL_120;
                }
                v260 = 0;
                do
                {
                  KeYieldProcessorEx(&v260);
                  v77 = *PageTableLockBuffer;
                  v78 = v246;
                }
                while ( (((unsigned __int32)*PageTableLockBuffer >> v246) & 1) != 0 );
              }
              v79 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v78) & (v77 | (1 << v78)), v77);
              v11 = v77 == v79;
              v77 = v79;
            }
            while ( !v11 );
          }
          else
          {
            v80 = *(_QWORD *)v69;
            if ( v69 >= 0xFFFFF6FB7DBED000uLL
              && v69 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v80 & 1) != 0
              && ((v80 & 0x20) == 0 || (v80 & 0x42) == 0) )
            {
              v81 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v81 )
              {
                v82 = *(_QWORD *)(v81 + 8 * ((v69 >> 3) & 0x1FF));
                v83 = v80 | 0x20;
                if ( (v82 & 0x20) == 0 )
                  v83 = *(_QWORD *)v69;
                v80 = v83;
                if ( (v82 & 0x42) != 0 )
                  v80 = v83 | 0x42;
              }
            }
            v84 = v80;
            if ( (v80 & 1) != 0 )
            {
              v85 = v80;
              do
              {
                if ( (v84 & 0x1000000000000000LL) != 0 )
                {
                  if ( ((v84 >> 60) & 2) != 0 )
                  {
                    v86 = 0;
                    do
                    {
                      if ( (++v86 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                        _mm_pause();
                      else
                        HvlNotifyLongSpinWait(v86);
                      v273 = *(_QWORD *)v69;
                      v80 = v273;
                    }
                    while ( (v273 & 0x1000000000000000LL) != 0 );
                  }
                  else
                  {
                    v80 = _InterlockedCompareExchange64((volatile signed __int64 *)v69, v84 | 0x2000000000000000LL, v80);
                  }
                }
                else
                {
                  v80 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)v69,
                          v84 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                          v80);
                  if ( v80 == v85 )
                    break;
                }
                v84 = v80;
                v85 = v80;
              }
              while ( (v80 & 1) != 0 );
              i = v270;
              v58 = v269;
            }
          }
          v87 = *(_BYTE *)(v58 + 184) & 7;
          if ( v59 == 0xFFFFF6FB7DBEDF68uLL )
          {
            if ( v87 )
            {
              if ( v87 == 7 )
              {
                v88 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
              }
              else
              {
                v89 = KeGetCurrentPrcb();
                if ( v87 == 5 )
                  v88 = v89->SelfmapLockHandle;
                else
                  v88 = &v89->SelfmapLockHandle[3];
              }
            }
            else
            {
              v88 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
            }
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(v88, retaddr);
              goto LABEL_170;
            }
            _m_prefetchw(v88);
            Next = (__int64)v88->LockQueue.Next;
            if ( v88->LockQueue.Next )
            {
LABEL_169:
              v88->LockQueue.Next = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            }
            else if ( v88 != (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                      (volatile signed __int64 *)v88->LockQueue.Lock,
                                                      0LL,
                                                      (signed __int64)v88) )
            {
              Next = KxWaitForLockChainValid((__int64 *)v88);
              goto LABEL_169;
            }
LABEL_170:
            Process = (unsigned __int64)KeGetCurrentPrcb();
            v91 = *(_QWORD *)(Process + 25016);
            if ( v91 )
            {
              if ( *(_BYTE *)(Process + 32) <= 1u )
              {
                v92 = *(_DWORD *)(v91 + 20) - 1;
                *(_DWORD *)(v91 + 20) = v92;
                if ( !v92 && !*(_BYTE *)(v91 + 25) && !*(_BYTE *)(v91 + 27) )
                  KiPerformUnboostKick(Process);
              }
            }
          }
          else if ( v87 && v59 >= 0xFFFFF6FB7DBED000uLL && v59 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v93 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v58, v59, &v261);
            v94 = ~(3 << v261);
            Process = (unsigned int)v94 & *v93;
            v96 = *v93;
            v95 = _InterlockedCompareExchange(v93, Process, *v93);
            if ( v96 != v95 )
            {
              do
              {
                v97 = v95;
                Process = v94 & (unsigned int)v95;
                v95 = _InterlockedCompareExchange(v93, Process, v95);
              }
              while ( v95 != v97 );
            }
          }
          else
          {
            v98 = *(_QWORD *)v59;
            if ( v59 >= 0xFFFFF6FB7DBED000uLL
              && v59 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x1800000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v98 & 1) != 0
              && ((v98 & 0x20) == 0 || (v98 & 0x42) == 0) )
            {
              v99 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v99 )
              {
                v100 = *(_QWORD *)(v99 + 8 * ((v59 >> 3) & 0x1FF));
                v101 = v98 | 0x20;
                if ( (v100 & 0x20) == 0 )
                  v101 = *(_QWORD *)v59;
                v98 = v101;
                if ( (v100 & 0x42) != 0 )
                  v98 = v101 | 0x42;
              }
            }
            Process = v98 & 0xCFFFFFFFFFFFFFFFuLL;
            v102 = _InterlockedCompareExchange64((volatile signed __int64 *)v59, v98 & 0xCFFFFFFFFFFFFFFFuLL, v98);
            if ( v98 != v102 )
            {
              do
              {
                v103 = v102;
                Process = v102 & 0xCFFFFFFFFFFFFFFFuLL;
                v102 = _InterlockedCompareExchange64((volatile signed __int64 *)v59, v102 & 0xCFFFFFFFFFFFFFFFuLL, v102);
              }
              while ( v102 != v103 );
            }
          }
          v59 = v69;
        }
        if ( !i )
          break;
      }
      v104 = v254;
      if ( (volatile signed __int64 *)v59 != v243 )
      {
        MiUnlockPageTableInternal(v58, v59);
        MiFlushTbList(&v285);
        MiUnlockWorkingSetShared(v58, v257, v105);
        v106 = MmAccessFault(
                 ((unsigned __int64)v104 << 57) | 0x100000000000002LL,
                 (signed __int64)BugCheckParameter2,
                 0,
                 0LL);
        v107 = v106;
        if ( v106 < 0 )
        {
          MiFlushAllFilesystemPages(1LL);
          KeBugCheckEx(0x7Au, 1uLL, v107, BugCheckParameter3, (ULONG_PTR)BugCheckParameter2);
        }
        MiLockWorkingSetShared(v58);
        v57 = (unsigned __int64)v243;
        continue;
      }
      break;
    }
    v53 = (unsigned __int64)BugCheckParameter2;
    v10 = a2;
    v19 = v251;
    v54 = 0xFFFFF6FB7DBED000uLL;
    v55 = 0xFFFFF6FB7DBED7F8uLL;
    v56 = 0xFFFFFA8000000000uLL;
LABEL_203:
    v108 = 0xFFFFF68000000000uLL;
    v109 = *(_QWORD *)v53;
    v110 = (__int64)(v53 << 25) >> 16;
    v254 = v110;
    if ( v53 >= 0xFFFFF6FB7DBED000uLL
      && v53 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v109 & 1) != 0
      && ((v109 & 0x20) == 0 || (v109 & 0x42) == 0) )
    {
      v111 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v111 )
      {
        v112 = *(_QWORD *)(v111 + 8 * ((v53 >> 3) & 0x1FF));
        v113 = v109 | 0x20;
        if ( (v112 & 0x20) == 0 )
          v113 = v109;
        v109 = v113;
        if ( (v112 & 0x42) != 0 )
          v109 = v113 | 0x42;
      }
    }
    v250 = v109;
    if ( (v109 & 1) == 0 )
    {
      if ( (v109 & 0x400) != 0 )
      {
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v109) )
        {
          MiGetProtoPteAddress(v10, v110 >> 12, 0, &v275);
          PrototypePteDirect = MiGetPrototypePteDirect(v109);
          if ( PrototypePteDirect != v190 )
          {
            MiFlushTbList(&v285);
            if ( (int)MiMakeProtoLeafValid(v53, 1LL, v257) < 0 )
            {
              v53 += 8LL;
              BugCheckParameter2 = (__int64 *)v53;
            }
            v34 = v243;
            v248 = 1;
            goto LABEL_517;
          }
        }
        if ( v245 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v109) && (v109 & 0xA0) == 0xA0 )
          ++v253;
        if ( (unsigned int)MiIsPrototypePteVadLookup(v109) )
          v191 = v109 >> 5;
        else
          LODWORD(v191) = *(unsigned __int16 *)(*(_QWORD *)(v10 + 72) + 32LL) >> 1;
        v244 = v191 & 0x1F;
        v192 = MiSanitizePfnProtection(v10, v191 & 0x1F, v252);
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v192);
        v250 = PrototypePteVadLookup;
        *(_QWORD *)v53 = PrototypePteVadLookup;
        if ( v53 < v195 || v53 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_512;
        v196 = PrototypePteVadLookup;
        v197 = v53;
        goto LABEL_511;
      }
      if ( (v109 & 0x800) != 0 )
      {
        if ( a6 != 1 )
        {
          if ( (unsigned int)MiSetProtectionOnTransitionPte(v10, (unsigned __int64 *)v53, v241, 1) )
            goto LABEL_514;
          goto LABEL_512;
        }
        v198 = MiTryDeleteTransitionPte(v53);
        if ( v198 == 3 )
        {
          ++v268;
        }
        else if ( v198 == 1 )
        {
          goto LABEL_514;
        }
      }
      else
      {
        v199 = 0;
        if ( a6 != 1 )
        {
          if ( v109 )
          {
            v244 = (v109 >> 5) & 0x1F;
            v241 = MiSanitizePfnProtection(v10, (v109 >> 5) & 0x1F, v241);
            v250 = v109 ^ ((unsigned __int16)v109 ^ (unsigned __int16)(32 * v241)) & 0x3E0;
            *(_QWORD *)v53 = v250;
            if ( !MiPteInShadowRange(v53) )
            {
LABEL_512:
              v34 = v243;
              v53 += 8LL;
              v19 = v251;
              BugCheckParameter2 = (__int64 *)v53;
              goto LABEL_517;
            }
LABEL_511:
            MiWritePteShadow(v197, v196, v194);
            goto LABEL_512;
          }
LABEL_475:
          v204 = (unsigned __int64 *)(((v110 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
          PteShadow = *v204;
          if ( (unsigned __int64)v204 >= v54 && (unsigned __int64)v204 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v204, PteShadow);
          v266 = PteShadow;
          if ( (unsigned __int64)&v266 >= v54 && (unsigned __int64)&v266 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(&v266, PteShadow);
          v206 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v264 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v206 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v264);
              while ( *(__int64 *)(v206 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v206 + 24), 0x3FuLL) );
            v54 = 0xFFFFF6FB7DBED000uLL;
          }
          *(_QWORD *)(v206 + 16) ^= ((unsigned int)*(_QWORD *)(v206 + 16) ^ ((unsigned int)*(_QWORD *)(v206 + 16)
                                                                           + 0x10000)) & 0x3FF0000;
          _InterlockedAnd64((volatile signed __int64 *)(v206 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (__int64)(*(_QWORD *)(v206 + 8) | 0x8000000000000000uLL) >> 47 == -1
            || (__int64)(*(_QWORD *)(v206 + 8) | 0x8000000000000000uLL) >> 47 == 0 )
          {
            v207 = 4LL;
            v280 = (((*(_QWORD *)(v206 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v281 = ((v280 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v282 = ((v281 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v283 = ((v282 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            do
            {
              v208 = *(&v279 + v207--);
              v209 = *(_QWORD *)v208;
              if ( v208 >= v54
                && v208 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0x1800000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
              {
                if ( (v209 & 1) == 0 )
                  break;
                if ( (v209 & 0x20) == 0 || (v209 & 0x42) == 0 )
                {
                  v210 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v210 )
                  {
                    v211 = *(_QWORD *)(v210 + 8 * ((v208 >> 3) & 0x1FF));
                    v212 = v209 | 0x20;
                    if ( (v211 & 0x20) == 0 )
                      v212 = v209;
                    LOBYTE(v209) = v212;
                    if ( (v211 & 0x42) != 0 )
                      LOBYTE(v209) = v212 | 0x42;
                  }
                }
              }
            }
            while ( (v209 & 1) != 0 && (v209 & 0x80u) == 0LL && v207 );
          }
          if ( v245 != 5 && (v199 == 1 || !(unsigned int)MiPteNeedsCommitCharge(v10, v53)) )
            ++v253;
          v244 = (*(unsigned __int16 *)(*(_QWORD *)(v10 + 72) + 32LL) >> 1) & 0x1F;
          v213 = MiSanitizePfnProtection(0LL, v244, v252);
          v214 = MiMakePrototypePteVadLookup(v213);
          v250 = v214;
          *(_QWORD *)v53 = v214;
          if ( v53 < v215 || v53 > 0xFFFFF6FB7DBED7F8uLL )
            goto LABEL_512;
          v196 = v214;
          v197 = v53;
          goto LABEL_511;
        }
        if ( !v109 )
          goto LABEL_475;
        MiReleasePageFileSpace(v259, v109);
        if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v109, v200, v201, v202) )
        {
LABEL_473:
          UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v53 << 25) >> 16);
          MiDecreaseUsedPtesCount(UsedPtesHandle, 1u);
          v54 = 0xFFFFF6FB7DBED000uLL;
          v199 = 1;
          goto LABEL_475;
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_473;
    }
    v114 = v109;
    if ( (unsigned __int64)&v250 >= v54
      && (unsigned __int64)&v250 <= v55
      && (unsigned int)MiPteHasShadow()
      && ((v109 & 0x20) == 0 || (v109 & 0x42) == 0) )
    {
      v115 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v115 )
      {
        v114 = v109 | 0x20;
        v116 = *(_QWORD *)(v115 + 8 * (((unsigned __int64)&v250 >> 3) & 0x1FF));
        if ( (v116 & 0x20) == 0 )
          v114 = v109;
        if ( (v116 & 0x42) != 0 )
          v114 |= 0x42uLL;
      }
    }
    v117 = (v114 >> 12) & 0xFFFFFFFFFLL;
    v269 = 48 * v117;
    v118 = 48 * v117 + v56;
    if ( (*(_QWORD *)(v118 + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_235;
    v119 = *(_QWORD *)(v118 + 8);
    if ( (v119 | 0x8000000000000000uLL) == MiGetProtoPteAddress(a2, v110 >> 12, 0, &v275) )
    {
      v53 = (unsigned __int64)BugCheckParameter2;
      v54 = 0xFFFFF6FB7DBED000uLL;
      v108 = 0xFFFFF68000000000uLL;
LABEL_235:
      v124 = v247 & 0x101;
      if ( (v247 & 0x101) == 0 && (a6 != 1 || (*(_QWORD *)(v118 + 40) & 0x200000000000000LL) != 0) )
      {
        if ( (*(_QWORD *)(v118 + 40) & 0x200000000000000LL) != 0 )
        {
          if ( v245 != 5 && (v109 & 0x200) != 0 )
            ++v253;
          v125 = v108 + ((v254 >> 9) & 0x7FFFFFFFF8LL);
          v126 = *(_QWORD *)v125;
          v127 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v125 >= v54
            && v125 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v126 & 1) != 0
            && ((v126 & 0x20) == 0 || (v126 & 0x42) == 0) )
          {
            v128 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v128 )
            {
              v129 = *(_QWORD *)(v128 + 8 * ((v125 >> 3) & 0x1FF));
              v130 = v126 | 0x20;
              if ( (v129 & 0x20) == 0 )
                v130 = v126;
              v126 = v130;
              if ( (v129 & 0x42) != 0 )
                v126 = v130 | 0x42;
            }
          }
          LODWORD(v131) = (unsigned __int8)(16 * ((v126 >> 60) & 7)) >> 4;
          if ( (_DWORD)v131 )
          {
            if ( ((*(_QWORD *)v125 >> 4) & 1) != 0 || (*(_QWORD *)v125 & 8) == 0 )
            {
              if ( ((*(_QWORD *)v125 >> 4) & 1LL) != 0 )
                LODWORD(v131) = v131 | 8;
            }
            else
            {
              LODWORD(v131) = v131 | 0x18;
            }
          }
          else
          {
            v132 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v118 + 16);
            v133 = *(_QWORD *)(v118 + 8);
            v131 = v132;
            if ( v133 >= 0
              || (v134 = KeGetCurrentThread()->ApcState.Process, v134[1].Affinity.Bitmap[12])
              && MiLocateCloneAddress((__int64)v134, v133 | 0x8000000000000000uLL) )
            {
              LODWORD(v131) = MmMakeProtectNotWriteCopy[v131];
            }
          }
          v135 = v252;
          v244 = v131;
          if ( v252 == 24 )
            goto LABEL_281;
          if ( (_DWORD)v131 == 24 )
          {
            v136 = *(_DWORD *)(a2 + 48);
            v137 = (v136 & 0x4000) != 0 ? v136 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
            LODWORD(v131) = v137 & 0x1F;
            if ( (_DWORD)v131 == 24 )
              LOBYTE(v131) = 0;
          }
          v138 = v131 & 0x18;
          if ( v138 )
          {
            if ( v138 != 16 )
            {
              if ( v138 == 8 )
              {
                v135 = v252 & 0xFFFFFFE7 | 8;
              }
              else if ( v138 == 24 )
              {
                v135 = v252 | 0x18;
              }
              goto LABEL_281;
            }
          }
          else
          {
            v139 = v252 & 0x18;
            if ( v139 == 24 )
            {
              v135 = v252 & 0xFFFFFFE7;
              goto LABEL_281;
            }
            if ( v139 != 8 )
            {
LABEL_281:
              v140 = *(_QWORD *)v125;
              if ( v125 >= v54 && v125 <= v127 )
                v140 = MiReadPteShadow(v125, *(_QWORD *)v125);
              v141 = *(_QWORD *)v125;
              v142 = (unsigned __int64)((16 * (v135 & 7)) & 0x7F | HIBYTE(v140) & 0xFu) << 56;
              do
              {
                v143 = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)v125,
                         v142 | v141 & 0x80FFFFFFFFFFFFFFuLL,
                         v141);
                v11 = v141 == v143;
                v141 = v143;
              }
              while ( !v11 );
LABEL_286:
              v144 = (unsigned __int64)BugCheckParameter2;
              v145 = *BugCheckParameter2;
              if ( (unsigned __int64)BugCheckParameter2 >= v54
                && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v145 = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
              }
              if ( (((unsigned __int64)v145 >> 4) & 1) != 0 || (v145 & 8) == 0 )
              {
                if ( (((unsigned __int64)v145 >> 4) & 1) != 0 )
                {
                  if ( (v135 & 0x18) != 8 )
                    v135 = v135 & 0xFFFFFFE7 | 8;
                }
                else if ( (v135 & 0x18) != 0 )
                {
                  v135 &= 0xFFFFFFE7;
                }
              }
              else if ( (v135 & 0x18) != 0x18 )
              {
                v135 |= 0x18u;
              }
              if ( v117 > qword_1403CB780
                || MmPhysicalMemoryBlock && (*(_QWORD *)(v269 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
              {
                v118 = 0LL;
              }
              else if ( (MiFlags & 0x40000) != 0 && (v135 & 2) != 0 )
              {
                MiLockPageAtDpcInline(v118);
                if ( !(unsigned int)MiGetPagePrivilege(v118, 1, 0LL) )
                  MiMarkPfnVerified(v118);
                _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v144 = (unsigned __int64)BugCheckParameter2;
              }
              v152 = v117 << 12;
              v153 = 0xFFFFF68000000000uLL;
              v154 = v135 & 0x1F;
              v155 = v152 | MmProtectToPteMask[v154] & 0xFFFF000000000E7FuLL | 0x21;
              if ( v144 < 0xFFFFF68000000000uLL || v144 > 0xFFFFF6FFFFFFFFFFuLL )
              {
                v157 = v254;
LABEL_351:
                v155 |= 0x100uLL;
                goto LABEL_352;
              }
              if ( v144 >= 0xFFFFF6FB40000000uLL && v144 <= 0xFFFFF6FB7FFFFFFFuLL )
              {
                if ( v144 == 0xFFFFF6FB7DBEDF68uLL )
                {
                  v155 = v152 | MmProtectToPteMask[v154] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
                }
                else if ( (v135 & 0x4000000) == 0 )
                {
                  v155 = v152 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v154] & 0x7FFF000000000E7FLL | 0x21;
                }
                v156 = MiUserPdeOrAbove(v144);
                v144 = (unsigned __int64)BugCheckParameter2;
                v153 = 0xFFFFF68000000000uLL;
                if ( v156 )
                  v155 |= 4uLL;
              }
              if ( v144 <= 0xFFFFF6BFFFFFFF78uLL )
                v155 |= 4uLL;
              v157 = v254;
              if ( v254 >= 0xFFFF800000000000uLL )
              {
                if ( (unsigned int)MiGetSystemRegionType(v254) == 1 || v157 >= v153 && v157 <= v159 )
                  goto LABEL_352;
                if ( v157 < qword_1403CD100 || (v158 = HIBYTE(word_1403CB7D0), v157 > qword_1403CBB70) )
                  v158 = (unsigned __int8)word_1403CB7D0;
              }
              else
              {
                v158 = HIBYTE(word_1403CB7D0);
              }
              if ( v158 )
                goto LABEL_351;
LABEL_352:
              if ( v135 < 0 && (v135 & 5) == 4 )
                v155 |= 0x42uLL;
              v160 = v155 & 0xFFFFFFFFFFFFFFFBuLL;
              if ( (v135 & 0x40000000) == 0 )
                v160 = v155;
              if ( (v135 & 0x20000000) != 0 )
                v160 ^= ((unsigned __int16)v160 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100;
              v161 = v160 & 0xFFFFFFFFFFFFFEFFuLL;
              if ( (v135 & 0x8000000) == 0 )
                v161 = v160;
              v162 = v161 | 0x80;
              if ( (v135 & 0x4000000) == 0 )
                v162 = v161;
              v163 = v162 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
              if ( !v118 && (v135 & 4) != 0 )
                v163 |= 0x42uLL;
              v53 = (unsigned __int64)BugCheckParameter2;
              v164 = *BugCheckParameter2;
              if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v164 = MiReadPteShadow(BugCheckParameter2, *BugCheckParameter2);
              }
              v165 = v163 ^ (v163 ^ (HIBYTE(v164) << 56)) & 0xF00000000000000LL;
              v166 = v165 ^ (v165 ^ (v164 >> 60 << 60)) & 0x7000000000000000LL;
              *BugCheckParameter2 = v166;
              if ( (unsigned __int64)BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                MiWritePteShadow((__int64)BugCheckParameter2, v166, 0xFFFFF6FB7DBED7F8uLL);
              }
              if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0)
                && ((v163 & 0x40) != 0 || (v145 & 0x40) == 0)
                && ((v163 & 2) != 0 || (v145 & 2) == 0)
                && (v163 >= 0 || v145 < 0) )
              {
                goto LABEL_393;
              }
              v167 = v286;
              v168 = 1LL;
              v169 = v157;
              if ( v285 != 1 && (v286 & 8) == 0 && v157 >= v153 && v157 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                v167 = v286 | 8;
                LOBYTE(v286) = v286 | 8;
              }
              v170 = HIDWORD(v287);
              if ( HIDWORD(v287) )
              {
                v171 = v167 & 4;
                if ( !v171 )
                {
                  v172 = Base[HIDWORD(v287) - 1];
                  if ( (v172 & 0xC00) == 0 )
                  {
                    v173 = Base[HIDWORD(v287) - 1] & 0x3FFLL;
                    if ( (v172 & 0xFFFFFFFFFFFFF000uLL) + ((v173 + 1) << 12) == v157
                      && v173 + 1 >= v173
                      && v173 + 1 <= 0x3FF )
                    {
                      ++v288;
                      Base[HIDWORD(v287) - 1] = ((unsigned __int16)v172 ^ (unsigned __int16)(v172 + 1)) & 0x3FF ^ v172;
LABEL_392:
                      v53 = (unsigned __int64)BugCheckParameter2;
LABEL_393:
                      if ( (v145 & 0x42) != 0 )
                      {
                        if ( v118 && ((*(_BYTE *)(a2 + 48) & 7) != 6 || MiRotatedToFrameBuffer(v53)) )
                        {
                          v263 = 0;
                          v174 = 0LL;
                          while ( _interlockedbittestandset64((volatile signed __int32 *)(v118 + 24), 0x3FuLL) )
                          {
                            do
                              KeYieldProcessorEx(&v263);
                            while ( *(__int64 *)(v118 + 24) < 0 );
                          }
                          v175 = *(_BYTE *)(v118 + 34);
                          v176 = 0LL;
                          if ( (v175 & 0x10) == 0 )
                          {
                            v177 = *(_BYTE *)(v118 + 34);
                            if ( (*(_DWORD *)(v118 + 16) & 0x400LL) == 0 && (v175 & 8) == 0 )
                            {
                              v176 = MiCapturePageFileInfoInline((_QWORD *)(v118 + 16), 1, 0);
                              v177 = *(_BYTE *)(v118 + 34);
                            }
                            *(_BYTE *)(v118 + 34) = v177 | 0x10;
                            if ( v176 )
                              v174 = *(struct _KEVENT **)(qword_1403CBD88
                                                        + 8 * ((*(_QWORD *)(v118 + 40) >> 40) & 0x3FFLL));
                          }
                          _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                          if ( v176 )
                            MiReleasePageFileInfo(v174, v176, 1);
                        }
                        v10 = a2;
                        if ( (*(_DWORD *)(a2 + 48) & 7) == 4 )
                          MiCaptureWriteWatchDirtyBit((__int64)KeGetCurrentThread()->ApcState.Process, v157, a2);
                      }
                      else
                      {
                        v10 = a2;
                      }
                      goto LABEL_512;
                    }
                  }
                }
                if ( !v171 )
                {
                  v178 = Base[HIDWORD(v287) - 1];
                  if ( (v178 & 0xC00) == 0 && (v178 & 0xFFFFFFFFFFFFF000uLL) == v157 + 4096 )
                  {
                    v179 = Base[HIDWORD(v287) - 1] & 0x3FFLL;
                    if ( v179 + 1 >= v179 && v179 + 1 <= 0x3FF )
                    {
                      ++v288;
                      Base[HIDWORD(v287) - 1] = ((unsigned __int16)(v178 - 4096) ^ (unsigned __int16)(v178 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v178 - 4096);
                      goto LABEL_392;
                    }
                  }
                }
              }
              if ( HIDWORD(v287) < (unsigned int)v287 )
              {
                while ( 1 )
                {
                  v180 = 1024LL;
                  if ( (unsigned __int64)(v168 - 1) <= 0x3FF )
                    v180 = v168;
                  v168 -= v180;
                  v181 = v169 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v180 - 1) & 0x3FF;
                  v169 += v180 << 12;
                  Base[v170] = v181;
                  v288 += v180;
                  v170 = HIDWORD(v287) + 1;
                  HIDWORD(v287) = v170;
                  if ( v170 == (_DWORD)v287 && (v286 & 4) == 0 )
                  {
                    qsort(Base, v170, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
                    MiCompressTbFlushList((__int64)&v285);
                    v170 = HIDWORD(v287);
                    if ( HIDWORD(v287) == (_DWORD)v287 )
                      break;
                  }
                  if ( !v168 )
                    goto LABEL_392;
                }
                v53 = (unsigned __int64)BugCheckParameter2;
                if ( v168 )
                {
                  HIBYTE(v286) = 1;
                  v288 = HIDWORD(v287);
                }
                goto LABEL_393;
              }
              HIBYTE(v286) = 1;
              goto LABEL_392;
            }
          }
          v135 = v252 & 0xFFFFFFF7;
          goto LABEL_281;
        }
        v262 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v118 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v262);
          while ( *(__int64 *)(v118 + 24) < 0 );
        }
        v146 = v241;
        v135 = v241;
        v147 = (*(_QWORD *)(v118 + 16) >> 5) & 0x1FLL;
        if ( v241 != 24 )
        {
          if ( (_DWORD)v147 == 24 )
          {
            v148 = *(_DWORD *)(a2 + 48);
            v149 = (v148 & 0x4000) != 0 ? v148 >> 3 : *(unsigned __int16 *)(*(_QWORD *)(a2 + 72) + 32LL) >> 1;
            LODWORD(v147) = v149 & 0x1F;
            v146 = v241;
            if ( (_DWORD)v147 == 24 )
              LOBYTE(v147) = 0;
          }
          v150 = v147 & 0x18;
          if ( v150 )
          {
            if ( v150 != 16 )
            {
              if ( v150 == 8 )
              {
                v135 = v146 & 0xFFFFFFE7 | 8;
              }
              else if ( v150 == 24 )
              {
                v135 = v146 | 0x18;
              }
              goto LABEL_313;
            }
            goto LABEL_312;
          }
          v151 = v146 & 0x18;
          if ( v151 == 24 )
          {
            v135 = v146 & 0xFFFFFFE7;
          }
          else if ( v151 == 8 )
          {
LABEL_312:
            v135 = v146 & 0xFFFFFFF7;
          }
        }
LABEL_313:
        *(_QWORD *)(v118 + 16) ^= ((unsigned __int16)*(_QWORD *)(v118 + 16) ^ (unsigned __int16)(32 * v135)) & 0x3E0;
        _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v54 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_286;
      }
      v182 = (unsigned __int64)BugCheckParameter2;
      v11 = (v53 & 0xFFFFFFFFFFFFF000uLL) == (v255 & 0xFFFFFFFFFFFFF000uLL);
      v183 = (v53 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v11 )
        v183 = v255;
      v184 = 0;
      if ( (unsigned __int64)BugCheckParameter2 > v183 )
      {
LABEL_443:
        if ( !HIDWORD(v292) )
        {
          v53 = (unsigned __int64)BugCheckParameter2;
          goto LABEL_514;
        }
        v19 = v251;
        MiFreeWsleList(v251, (__int64)&v290, 0);
        v53 = (unsigned __int64)BugCheckParameter2;
        goto LABEL_515;
      }
      v185 = v254;
      v186 = v251;
      while ( 1 )
      {
        v250 = MI_READ_PTE_LOCK_FREE(v182);
        if ( (v250 & 1) == 0 )
          goto LABEL_443;
        v187 = 6 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v250) >> 12) & 0xFFFFFFFFFLL);
        if ( !v124 && (v188 != 1 || (*(_QWORD *)(8 * v187 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0) )
          goto LABEL_443;
        if ( (MiGetWsleContents(v187, v185) & 0xF) == 8 )
          break;
        MiInsertTbFlushEntry((__int64)&v290, v185, 1LL, 0);
        if ( HIDWORD(v292) == (_DWORD)v292 )
          goto LABEL_438;
LABEL_442:
        v182 += 8LL;
        v185 += 4096LL;
        if ( v182 > v183 )
          goto LABEL_443;
      }
      v184 = 1;
      *v274 = 1;
LABEL_438:
      if ( HIDWORD(v292) )
        MiFreeWsleList(v186, (__int64)&v290, 0);
      if ( v184 == 1 )
      {
        MiUnlockVa(v186, v185);
        v184 = 0;
      }
      goto LABEL_442;
    }
    CloneAddress = 0LL;
    if ( v119 < 0 )
    {
      CloneAddress = MiLocateCloneAddress(a1, v119 | 0x8000000000000000uLL);
      if ( *(_QWORD *)(*(_QWORD *)(v121 + 1296) + 328LL) <= CloneAddress[12] )
        CloneAddress = 0LL;
    }
    MiFlushTbList(&v285);
    v53 = (unsigned __int64)BugCheckParameter2;
    v122 = MiCopyOnWrite(v110);
    if ( v122 < 0 )
    {
      v19 = v251;
      MiUnlockPageTableInternal(v251, v243);
      MiUnlockWorkingSetShared(v19, v257, v123);
      MiCopyOnWriteCheckConditions(v19, (unsigned int)v122);
      v34 = 0LL;
      v248 = 1;
      v243 = 0LL;
      MiLockWorkingSetShared(v19);
      goto LABEL_516;
    }
    if ( CloneAddress )
      --v249;
LABEL_514:
    v19 = v251;
LABEL_515:
    v34 = v243;
LABEL_516:
    v10 = a2;
LABEL_517:
    if ( v53 <= v255 )
    {
      v54 = 0xFFFFF6FB7DBED000uLL;
      v55 = 0xFFFFF6FB7DBED7F8uLL;
      continue;
    }
    break;
  }
LABEL_519:
  MiFlushTbList(&v285);
  if ( v34 )
  {
    v217 = *(_BYTE *)(v19 + 184) & 7;
    if ( v34 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      v218 = KeGetCurrentPrcb();
      if ( v217 )
      {
        if ( v217 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v218->SelfmapLockHandle[1]);
        }
        else
        {
          v11 = v217 == 5;
          v219 = v218->SelfmapLockHandle;
          if ( !v11 )
            v219 = &v218->SelfmapLockHandle[3];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(v219);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v218->SelfmapLockHandle[2]);
      }
    }
    else if ( v217 && (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v34 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v216 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v19, (__int64)v34, &v265);
      v220 = ~(3 << v265);
      v222 = *v216;
      v221 = _InterlockedCompareExchange(v216, *v216 & v220, *v216);
      if ( v222 != v221 )
      {
        do
        {
          v223 = v221;
          v221 = _InterlockedCompareExchange(v216, v221 & v220, v221);
        }
        while ( v221 != v223 );
      }
    }
    else
    {
      v224 = *v34;
      if ( (unsigned __int64)v34 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v34 <= 0xFFFFF6FB7DBED7F8uLL )
        v224 = MiReadPteShadow(v34, *v34);
      v226 = v224;
      v225 = _InterlockedCompareExchange64(v34, v224 & 0xCFFFFFFFFFFFFFFFuLL, v224);
      if ( v226 != v225 )
      {
        do
        {
          v227 = v225;
          v216 = (volatile signed __int32 *)(v225 & 0xCFFFFFFFFFFFFFFFuLL);
          v225 = _InterlockedCompareExchange64(v34, v225 & 0xCFFFFFFFFFFFFFFFuLL, v225);
        }
        while ( v225 != v227 );
      }
    }
  }
  MiUnlockWorkingSetShared(v19, v257, (__int64)v216);
  if ( v256 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 880), v228, v229, v230);
    KeAbPostRelease(a1 + 880);
    v231 = CurrentThread;
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($005F0E83B22994B61E86C72E0CE43C71 *)v231->ApcState.ApcListHead[0].Flink != &v231->152 )
      KiCheckForKernelApcDelivery();
  }
  v232 = v268;
  v233 = v258;
  if ( v268 && v245 == 5 )
  {
    v233 = v258 - v268;
    v232 = 0LL;
  }
  v234 = v259;
  if ( v233 )
    MiReturnCommit(v259, v233);
  v235 = v253;
  if ( v253 )
  {
    v236 = *(unsigned int *)(v10 + 52);
    LODWORD(v236) = v236 & 0x7FFFFFFF;
    v237 = v253 - v232;
    v238 = ((v236 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) - v253) >> 31;
    *(_DWORD *)(v10 + 52) ^= (*(_DWORD *)(v10 + 52) ^ ((v236 | (*(unsigned __int8 *)(v10 + 34) << 31)) - v253)) & 0x7FFFFFFF;
    *(_BYTE *)(v10 + 34) = v238;
    MiReturnCommit(v234, v237);
    MiReturnFullProcessCharges(a1, v235);
  }
  if ( v249 )
    MiReturnFullProcessCommitment(a1, v249, v229);
  return 0LL;
}
