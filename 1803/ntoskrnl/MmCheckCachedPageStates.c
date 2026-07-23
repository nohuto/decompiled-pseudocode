/*
 * XREFs of MmCheckCachedPageStates @ 0x14011E3C0
 * Callers:
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x1400B7AE0 (CcMapDataForOverwrite.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x14011D8A0 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x14011E210 (CcMapAndRead.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlinkStandbyBatch @ 0x1400306A0 (MiUnlinkStandbyBatch.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiMarkPteDirty @ 0x140048BD0 (MiMarkPteDirty.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x140056EF8 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x1400579A8 (MiReferenceControlAreaPfn.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiIsAddressGlobal @ 0x140113970 (MiIsAddressGlobal.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     MiFreeTransitionPageHeatList @ 0x140258C9C (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x140258D38 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x1402590DC (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x140259210 (MiReplenishTransitionPageHeatList.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned int v7; // r11d
  ULONG_PTR v8; // rsi
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdi
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // rdx
  __int64 *v33; // rcx
  unsigned __int64 v34; // r8
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  ULONG_PTR PrototypePteDirect; // rax
  unsigned __int64 v44; // r10
  unsigned int v45; // r11d
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  unsigned __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // r10
  __int64 v55; // r11
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  unsigned __int64 v60; // r10
  __int64 v61; // r11
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // r8
  unsigned __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // r8
  int v70; // eax
  unsigned __int64 v71; // r10
  char v72; // bl
  int IsPfnCommitNotCharged; // eax
  char v74; // r11
  __int64 v75; // r10
  ULONG_PTR *v76; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v79; // ett
  unsigned __int64 v80; // rdi
  char v81; // al
  unsigned int v82; // ebx
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  unsigned __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rax
  unsigned __int64 v89; // r9
  __int64 v90; // r9
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  bool v94; // zf
  __int64 v95; // rax
  unsigned __int64 v96; // rbx
  _SLIST_ENTRY *TransitionHeatBatch; // rsi
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // r15
  ULONG_PTR v103; // rbx
  unsigned int PfnPriority; // r14d
  _KSPIN_LOCK_QUEUE *v105; // r8
  int v106; // esi
  __int64 v107; // rax
  __int64 v108; // r13
  char v109; // al
  _QWORD *v110; // r13
  int v111; // esi
  int v112; // eax
  signed int v113; // esi
  __int64 v114; // r15
  unsigned __int64 v115; // rbx
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // r14
  unsigned __int64 v118; // r10
  unsigned __int16 v119; // dx
  unsigned __int64 v120; // rcx
  __int64 v121; // rdx
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rcx
  __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  char v129; // di
  __int64 v130; // r15
  unsigned int v131; // edx
  __int16 v132; // ax
  __int64 Page; // rax
  ULONG_PTR v134; // r14
  __int64 v135; // rdi
  unsigned int v136; // eax
  int v137; // esi
  BOOL v138; // eax
  __int64 v139; // r8
  __int64 v140; // r9
  unsigned __int8 v141; // bl
  __int64 v142; // rax
  __int64 v143; // r8
  __int64 v144; // r9
  unsigned int v145; // ebx
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // rcx
  unsigned __int8 v149; // bl
  unsigned __int64 v150; // rax
  __int64 v151; // r9
  unsigned __int64 v152; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v154; // eax
  unsigned int Flink; // ecx
  unsigned int v156; // edi
  __int64 v157; // rax
  int v158; // eax
  int v159; // ecx
  unsigned __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rax
  __int16 v165; // dx
  __int16 v166; // dx
  __int64 v167; // rax
  int v168; // edi
  unsigned __int64 v169; // r14
  unsigned __int64 v170; // rdx
  char v171; // al
  unsigned __int64 v172; // rcx
  __int64 v173; // rbx
  struct _KPRCB *v174; // r8
  __int64 v175; // rdx
  signed __int32 v176; // eax
  unsigned __int8 v178; // [rsp+30h] [rbp-D0h] BYREF
  char i; // [rsp+31h] [rbp-CFh]
  char v180; // [rsp+32h] [rbp-CEh]
  int v181; // [rsp+34h] [rbp-CCh]
  unsigned int v182; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v183; // [rsp+40h] [rbp-C0h]
  unsigned __int64 ValidPte; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v185; // [rsp+50h] [rbp-B0h] BYREF
  int v186; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v187; // [rsp+60h] [rbp-A0h]
  __int64 v188; // [rsp+68h] [rbp-98h]
  unsigned __int64 v189; // [rsp+70h] [rbp-90h]
  __int64 v190; // [rsp+78h] [rbp-88h] BYREF
  __int64 v191; // [rsp+80h] [rbp-80h]
  __int64 v192; // [rsp+88h] [rbp-78h]
  unsigned __int64 v193; // [rsp+90h] [rbp-70h] BYREF
  __int64 v194; // [rsp+98h] [rbp-68h]
  int v195; // [rsp+A0h] [rbp-60h] BYREF
  int v196; // [rsp+A4h] [rbp-5Ch] BYREF
  int v197; // [rsp+A8h] [rbp-58h] BYREF
  int v198; // [rsp+ACh] [rbp-54h] BYREF
  unsigned __int64 v199; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v200; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v201; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v202; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v203; // [rsp+D0h] [rbp-30h]
  __int64 v204; // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  char *v206; // [rsp+F8h] [rbp-8h]
  volatile signed __int32 *v207; // [rsp+100h] [rbp+0h] BYREF
  __int16 v208; // [rsp+108h] [rbp+8h]
  unsigned __int16 v209; // [rsp+10Ah] [rbp+Ah]
  _QWORD v210[16]; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0LL;
  v206 = a4;
  v5 = a1;
  v182 = a3;
  v180 = 1;
  v194 = 0LL;
  v6 = a3;
  v186 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v8 = 0LL;
  v181 = 0;
  v9 = 0LL;
  v178 = 17;
  v201 = 0LL;
  v192 = 0LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v183 = v10;
  v11 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v189 = v11;
  v12 = (unsigned __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = *v12;
  if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8 * ((v14 >> 3) & 0x1FF));
      v17 = v13 | 0x20;
      if ( (v16 & 0x20) == 0 )
        v17 = v13;
      v13 = v17;
      if ( (v16 & 0x42) != 0 )
        v13 = v17 | 0x42;
    }
  }
  v193 = v13;
  if ( (unsigned __int64)&v193 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v193 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v13 & 1) != 0
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&v193 >> 3) & 0x1FF));
      v20 = v13 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v13;
      v13 = v20;
      if ( (v19 & 0x42) != 0 )
        v13 = v20 | 0x42;
    }
  }
  v21 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v188 = v21;
  v22 = (unsigned __int64 *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v23 = *v22;
  if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 8 * ((v24 >> 3) & 0x1FF));
      v27 = v23 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v23;
      v23 = v27;
      if ( (v26 & 0x42) != 0 )
        v23 = v27 | 0x42;
    }
  }
  v199 = v23;
  if ( (unsigned __int64)&v199 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v199 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v23 & 1) != 0
    && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v199 >> 3) & 0x1FF));
      v30 = v23 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v30 = v23;
      v23 = v30;
      if ( (v29 & 0x42) != 0 )
        v23 = v30 | 0x42;
    }
  }
  v31 = *(_QWORD *)(48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v31 )
    v31 += 48 * ((v5 >> 18) & 7);
  v32 = *(__int64 **)(v31 + 24);
  v33 = (__int64 *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( ((unsigned __int8)v32 & 1) == 0 )
    v33 = v32;
  v204 = *v33;
  v203 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v204 + 60) & 0x3FF));
  while ( v10 <= v11 )
  {
    v34 = *(_QWORD *)v10;
    LOBYTE(v35) = 0;
    v36 = *(_QWORD *)v10;
    v37 = 0xFFFFF6FB7DBED000uLL;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
      {
        v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v38 )
        {
          LOBYTE(v36) = v36 | 0x20;
          v39 = *(_QWORD *)(v38 + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v39 & 0x20) == 0 )
            LOBYTE(v36) = v34;
          if ( (v39 & 0x42) != 0 )
            LOBYTE(v36) = v36 | 0x42;
        }
      }
      v6 = v182;
    }
    if ( (v36 & 1) != 0 )
    {
      if ( (v6 & 4) != 0 )
      {
        if ( v178 != 17 )
        {
          MiUnlockProtoPoolPage(v9, v178, v34, v6);
          v178 = 17;
        }
        goto LABEL_67;
      }
      goto LABEL_352;
    }
    if ( v10 >= v37
      && v10 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v34 & 1) != 0
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v40 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 8 * ((v10 >> 3) & 0x1FF));
        v42 = v34 | 0x20;
        if ( (v41 & 0x20) == 0 )
          v42 = v34;
        v34 = v42;
        if ( (v41 & 0x42) != 0 )
          v34 = v42 | 0x42;
      }
    }
    ValidPte = v34;
    if ( (v34 & 1) != 0 )
    {
      if ( (v6 & 4) != 0 )
      {
        if ( v178 != 17 )
        {
          MiUnlockProtoPoolPage(v9, v178, v34, v6);
          v178 = 17;
        }
LABEL_67:
        MiMarkPteDirty(v10);
      }
LABEL_352:
      v160 = 0LL;
      goto LABEL_353;
    }
    v35 = (v34 >> 3) & 1;
    v191 = v35;
    PrototypePteDirect = MiGetPrototypePteDirect(v34);
    v46 = v8 & 0xFFFFFFFFFFFFF000uLL;
    v187 = PrototypePteDirect;
    v8 = PrototypePteDirect;
    if ( v178 != 17 )
    {
      if ( (PrototypePteDirect & 0xFFFFFFFFFFFFF000uLL) == v46 )
        goto LABEL_194;
      MiUnlockProtoPoolPage(v9, v178, v34, v6);
      v45 = v181;
      v44 = 0xFFFFF6FB7DBED000uLL;
      v178 = 17;
    }
    if ( (v8 & 0xFFFFFFFFFFFFF000uLL) == v46 || !v45 )
    {
      v4 = 0LL;
    }
    else
    {
      MiMakeSystemCacheRangeValid(v10 - 8LL * v45, v210, v45, v21);
      v4 = 0LL;
      v44 = 0xFFFFF6FB7DBED000uLL;
      v181 = 0;
    }
    v47 = *(_QWORD *)v8;
    if ( v8 >= v44
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v47 & 1) != 0
      && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
    {
      v48 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 8 * ((v8 >> 3) & 0x1FF));
        v50 = v47 | 0x20;
        if ( (v49 & 0x20) == 0 )
          v50 = v47;
        v47 = v50;
        if ( (v49 & 0x42) != 0 )
          v47 = v50 | 0x42;
      }
    }
    v190 = v47;
    if ( (v47 & 1) == 0 && ((v47 & 0x400) != 0 || (v47 & 0x800) == 0) )
    {
      v9 = 0LL;
      v192 = 0LL;
LABEL_313:
      v128 = MiGetPrototypePteDirect(v47);
      v129 = v182;
      v130 = v128;
      v131 = *(_DWORD *)(v204 + 56);
      if ( (v131 & 0x40000000) == 0 && (v182 & 1) != 0 )
      {
        MiInitializePageColorBase(0LL, (v131 >> 20) & 0x3F, (__int64)&v207);
        v132 = _InterlockedExchangeAdd(v207, 1u);
        Page = MiGetPage(v203, v209 | (unsigned int)(unsigned __int16)(v132 & v208), 2u);
        v134 = Page;
        if ( Page != -1 )
        {
          v135 = 48 * Page - 0x58000000000LL;
          v136 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v190);
          v137 = MiProtectionToCacheAttribute(v136);
          v138 = MiPfnZeroingNeeded(v135, v137);
          v141 = v178;
          if ( v138 )
          {
            if ( v178 != 17 )
            {
              MiUnlockProtoPoolPage(v9, v178, v139, v140);
              v141 = 17;
              v178 = 17;
            }
            MiZeroPhysicalPage(v134, 1, v137, v140);
            *(_QWORD *)(v135 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          v8 = v187;
          if ( v141 != 17 )
            goto LABEL_329;
          v192 = MiLockProtoPoolPage(v187, &v178);
          v9 = v192;
          if ( !v192 )
          {
            do
            {
              MmAccessFault(2uLL, v8, 0, 0LL);
              v192 = MiLockProtoPoolPage(v8, &v178);
              v9 = v192;
            }
            while ( !v192 );
            v21 = v188;
          }
          v142 = MI_READ_PTE_LOCK_FREE(v8);
          v190 = v142;
          if ( (v142 & 1) == 0 && ((v142 & 0x800) == 0 || (v142 & 0x400) != 0) )
          {
LABEL_329:
            MiReferenceControlAreaPfn(v204, v130, 1u);
            v145 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v190);
            MiInitializePfn(v135, v8, v145, 18);
            v10 = v183;
            ValidPte = MiMakeValidPte(v183, v134, v145 | 0x20000000, v146);
            *(_QWORD *)v8 = ValidPte;
            if ( MiPteInShadowRange(v8) )
              MiWritePteShadow(v148, v147, v34);
            LOBYTE(v35) = v191;
            goto LABEL_332;
          }
          MiUnlockProtoPoolPage(v9, v178, v143, v144);
          MiReleaseFreshPage(v135);
          v178 = 17;
          goto LABEL_328;
        }
        LOBYTE(v35) = v191;
      }
      if ( (v129 & 2) != 0 )
      {
        v10 = v183;
      }
      else
      {
        if ( v178 != 17 )
        {
          MiUnlockProtoPoolPage(v9, v178, v34, v6);
          v178 = 17;
        }
        CurrentThread = KeGetCurrentThread();
        v10 = v183;
        v154 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v156 = v154 + 4 * Flink;
        v157 = (__int64)(v189 - v10) >> 3;
        if ( (unsigned int)v157 > Flink )
        {
          if ( (unsigned int)v157 > 0xF )
            LODWORD(v157) = 15;
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v157;
        }
        v158 = MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
        if ( v158 < 0 )
        {
          v159 = v186;
          if ( v186 >= 0 )
            v159 = v158;
          v186 = v159;
        }
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v156 >> 2;
        BYTE4(CurrentThread[1].Queue) = v156 & 3;
        v4 = 0LL;
      }
      v180 = 0;
      goto LABEL_352;
    }
    v51 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      while ( 1 )
      {
        v52 = MI_READ_PTE_LOCK_FREE(v51);
        v185 = v52;
        v56 = v52;
        if ( (v52 & 1) != 0 && (v52 & 0x200) == 0 )
          break;
LABEL_150:
        MmAccessFault(2uLL, v8, 0, 0LL);
      }
      if ( (unsigned __int64)&v185 >= v54
        && (unsigned __int64)&v185 <= v53
        && (unsigned int)MiPteHasShadow()
        && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
      {
        v57 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 8 * (((unsigned __int64)&v185 >> 3) & 0x1FF));
          if ( (v58 & 0x20) != 0 )
            v56 |= 0x20uLL;
          if ( (v58 & 0x42) != 0 )
            v56 |= 0x42uLL;
        }
        else
        {
          v56 = v185;
        }
      }
      v59 = v55 & (v56 >> 12);
    }
    while ( !(unsigned int)MiIsPfnInline(v59) );
    v9 = 48 * v59 - 0x58000000000LL;
    v192 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v195 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v195);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      v60 = 0xFFFFF6FB7DBED000uLL;
      v61 = 0xFFFFFFFFFLL;
    }
    v63 = *(_QWORD *)v51;
    v178 = CurrentIrql;
    if ( v51 >= v60
      && v51 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v64 )
      {
        v65 = *(_QWORD *)(v64 + 8 * ((v51 >> 3) & 0x1FF));
        v66 = v63 | 0x20;
        if ( (v65 & 0x20) == 0 )
          v66 = v63;
        v63 = v66;
        if ( (v65 & 0x42) != 0 )
          v63 = v66 | 0x42;
      }
    }
    v185 = v63;
    if ( (v63 & 1) == 0 || (v63 & 0x200) != 0 )
      goto LABEL_149;
    if ( (unsigned __int64)&v185 >= v60
      && (unsigned __int64)&v185 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v67 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 8 * (((unsigned __int64)&v185 >> 3) & 0x1FF));
        v69 = v63 | 0x20;
        if ( (v68 & 0x20) == 0 )
          v69 = v63;
        v63 = v69;
        if ( (v68 & 0x42) != 0 )
          v63 = v69 | 0x42;
      }
    }
    if ( v59 != (v61 & (v63 >> 12)) )
    {
LABEL_149:
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v8 = v187;
      goto LABEL_150;
    }
    v70 = MiAreChargesNeededToLockPage(48 * v59 - 0x58000000000LL);
    v21 = v188;
    LOBYTE(v35) = v191;
    v10 = v183;
    if ( !v70 )
      goto LABEL_167;
    v71 = *(_QWORD *)(v9 + 40);
    if ( (v71 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
    {
      v72 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(48 * v59 - 0x58000000000LL);
      v72 = v74;
      if ( IsPfnCommitNotCharged )
        v72 = 1;
    }
    v75 = (v71 >> 40) & 0x3FF;
    v76 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v75);
    if ( !v72 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v75), 1uLL, 4u) )
    {
      if ( v76 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( CachedResidentAvailable )
        {
          if ( CachedResidentAvailable == -1 )
            break;
          v79 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v79 == CachedResidentAvailable )
            goto LABEL_167;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v76, 1LL, 0xFFFFFFFFLL, v6) )
      {
        if ( v72 )
          MiReturnCommit((__int64)v76, 1uLL);
        goto LABEL_168;
      }
LABEL_167:
      ++*(_WORD *)(v9 + 32);
    }
LABEL_168:
    v80 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
    v81 = *(_BYTE *)(v9 + 34);
    if ( (v81 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
        v82 = 0;
        for ( i = *(_BYTE *)(v9 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v9 + 34) )
        {
          if ( (++v82 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v82);
        }
        MiLockPageInline(v9);
        v81 = *(_BYTE *)(v9 + 34);
      }
      while ( (v81 & 0x20) != 0 );
      v21 = v188;
      v10 = v183;
    }
    v44 = 0xFFFFF6FB7DBED000uLL;
    *(_BYTE *)(v9 + 34) = v81 | 0x20;
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) == 0 )
    {
      v83 = *(_QWORD *)v80;
      if ( v80 >= 0xFFFFF6FB7DBED000uLL
        && v80 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v83 & 1) != 0
        && ((v83 & 0x20) == 0 || (v83 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v84 = *(_QWORD *)(v34 + 8 * ((v80 >> 3) & 0x1FF));
          v34 = v83 | 0x20;
          if ( (v84 & 0x20) == 0 )
            v34 = v83;
          LOBYTE(v83) = v34;
          if ( (v84 & 0x42) != 0 )
            LOBYTE(v83) = v34 | 0x42;
        }
      }
      if ( (v83 & 0x20) == 0 )
      {
        MiWriteValidPteVolatile(v80, 1LL, 0LL);
        v44 = 0xFFFFF6FB7DBED000uLL;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v187;
LABEL_194:
    if ( (*(_BYTE *)v10 & 1) != 0 )
    {
      v4 = 0LL;
      goto LABEL_352;
    }
    v47 = *(_QWORD *)v8;
    if ( v8 >= v44
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v47 & 1) != 0
      && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
    {
      v85 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v85 )
      {
        v86 = *(_QWORD *)(v85 + 8 * ((v8 >> 3) & 0x1FF));
        v87 = v47 | 0x20;
        if ( (v86 & 0x20) == 0 )
          v87 = v47;
        v47 = v87;
        if ( (v86 & 0x42) != 0 )
          v47 = v87 | 0x42;
      }
    }
    v190 = v47;
    if ( (v47 & 1) == 0 && ((v47 & 0x400) != 0 || (v47 & 0x800) == 0) )
    {
      v4 = 0LL;
      goto LABEL_313;
    }
    v4 = 0LL;
    while ( 2 )
    {
      while ( 2 )
      {
        v88 = MI_READ_PTE_LOCK_FREE(v8);
        v200 = v88;
        if ( (v88 & 1) != 0 )
        {
          v89 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v200) >> 12) & 0xFFFFFFFFFLL;
LABEL_217:
          if ( (unsigned int)MiIsPfnInline(v89) )
          {
            v91 = 48 * v90 - 0x58000000000LL;
            v196 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v91 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v196);
              while ( *(__int64 *)(v91 + 24) < 0 );
            }
            v92 = MI_READ_PTE_LOCK_FREE(v8);
            if ( v92 == v200 )
              goto LABEL_224;
            _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          continue;
        }
        break;
      }
      if ( (v88 & 0x400) == 0 && (v88 & 0x800) != 0 )
      {
        if ( !(unsigned int)MiInvalidPteConforms(v88) )
          continue;
        v89 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v200);
        goto LABEL_217;
      }
      break;
    }
    v91 = 0LL;
LABEL_224:
    v47 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v47 & 1) != 0
      && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
    {
      v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v34 )
      {
        v93 = *(_QWORD *)(v34 + 8 * ((v8 >> 3) & 0x1FF));
        v34 = v47 | 0x20;
        if ( (v93 & 0x20) == 0 )
          v34 = v47;
        v47 = v34;
        if ( (v93 & 0x42) != 0 )
          v47 = v34 | 0x42;
      }
    }
    v190 = v47;
    if ( !v91 )
      goto LABEL_313;
    if ( (v47 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v91 + 34) & 0x20) != 0 || (*(_BYTE *)(v91 + 35) & 0x40) != 0 )
      {
LABEL_238:
        _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_352;
      }
      v95 = *(_QWORD *)(v91 + 16) >> 11;
      v96 = ((__int64)(v189 - v10) >> 3) + 1;
      if ( (*(_QWORD *)(v91 + 16) & 0x400LL) == 0 )
        v95 = *(_QWORD *)(v91 + 16) >> 3;
      if ( (v95 & 1) != 0 )
      {
        TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v91, 0LL, ((__int64)(v189 - v10) >> 3) + 1, v6);
        if ( TransitionHeatBatch )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(v9, v178, v98, v99);
          v178 = 17;
          if ( TransitionHeatBatch == (_SLIST_ENTRY *)-1LL )
          {
            MiReplenishTransitionPageHeatList();
          }
          else
          {
            MiProcessTransitionHeatBatch(TransitionHeatBatch);
            MiFreeTransitionPageHeatList(TransitionHeatBatch);
          }
          v21 = v188;
          v4 = 0LL;
          v7 = v181;
          v8 = 0LL;
          v6 = v182;
          v11 = v189;
          continue;
        }
        v8 = v187;
      }
      if ( (*(_BYTE *)(v91 + 34) & 7) != 2 || v96 <= 1 )
        goto LABEL_264;
      v100 = MiGetPrototypePteDirect(*(_QWORD *)(v91 + 16));
      if ( (__int64)(*(_QWORD *)(v100 + 8) + 8LL * *(unsigned int *)(v100 + 44) - v8) >> 3 < v96 )
        v96 = (__int64)(*(_QWORD *)(v100 + 8) + 8LL * *(unsigned int *)(v100 + 44) - v8) >> 3;
      v101 = (unsigned __int64)(4096 - (unsigned int)(v8 & 0xFFF)) >> 3;
      if ( v96 <= v101 )
        v101 = v96;
      v102 = (unsigned int)(16 - v181);
      if ( v101 <= v102 )
        v102 = v101;
      if ( v102 > 1 )
      {
        v103 = 0LL;
        v202 = 0LL;
        PfnPriority = MiGetPfnPriority(v91);
        LockHandle.LockQueue.Next = v105;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v203 + 40 * (PfnPriority + 60LL));
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
        v106 = MiUnlinkPageFromList(v91, 1uLL);
        if ( v106 == 1 )
        {
          v107 = MiUnlinkStandbyBatch((__int64)&v202, v187 + 8, PfnPriority, v183, v102 - 1, &v202);
          v103 = v202;
          v201 = v107;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( v103 )
        {
          MiDiscardTransitionPte(v103);
          _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      else
      {
LABEL_264:
        v106 = MiUnlinkPageFromList(v91, 0LL);
      }
      if ( v106 )
      {
        v108 = *(_QWORD *)(v91 + 8);
        v109 = *(_BYTE *)(v91 + 34) & 0xFE;
        ++*(_WORD *)(v91 + 32);
        *(_BYTE *)(v91 + 34) = v109 | 6;
        v110 = (_QWORD *)(v108 | 0x8000000000000000uLL);
        v111 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v91 + 16);
        v112 = *(unsigned __int8 *)(v91 + 34) >> 6;
        v113 = v111 & 0xFFFFFFE7;
        if ( v112 != 1 )
        {
          if ( v112 )
          {
            if ( v112 == 2 )
              v113 |= 0x18u;
          }
          else
          {
            v113 |= 8u;
          }
        }
        v114 = v113 & 0x1F;
        v115 = MmProtectToPteMask[v114] & 0xFFFF000000000E7FuLL | ((((v91 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | 0x21;
        v116 = v183;
        if ( v183 < 0xFFFFF68000000000uLL || v183 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_285;
        v117 = (__int64)(v183 << 25) >> 16;
        if ( v183 >= 0xFFFFF6FB40000000uLL && v183 <= 0xFFFFF6FB7FFFFFFFuLL )
        {
          if ( v183 == 0xFFFFF6FB7DBEDF68uLL )
          {
            v115 |= v6;
          }
          else if ( (v113 & 0x4000000) == 0 )
          {
            v115 = MmProtectToPteMask[v114] & 0x7FFF000000000E7FLL | ((((v91 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | 0x21;
          }
          if ( (unsigned int)MiUserPdeOrAbove(v183) )
            v115 |= 4uLL;
        }
        if ( v116 <= 0xFFFFF6BFFFFFFF78uLL )
          v115 |= 4uLL;
        if ( (unsigned int)MiIsAddressGlobal(v117) )
LABEL_285:
          v115 |= 0x100uLL;
        if ( v113 < 0 && (v113 & 5) == 4 )
          v115 |= 0x42uLL;
        v118 = 0xFFFFF6FB7DBED000uLL;
        v119 = v115 & 0xFFFB;
        if ( (v113 & 0x40000000) == 0 )
          v119 = v115;
        v120 = v115 & 0xFFFFFFFFFFFFFFFBuLL;
        v121 = ((unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8) ^ v119) & 0x100;
        if ( (v113 & 0x40000000) == 0 )
          v120 = v115;
        v122 = v120 ^ v121;
        v123 = v122 & 0xFFFFFFFFFFFFFEFFuLL;
        if ( (v113 & 0x8000000) == 0 )
          v123 = v122;
        v124 = v123 | 0x80;
        if ( (v113 & 0x4000000) == 0 )
          v124 = v123;
        v125 = v124 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
        *v110 = v125;
        if ( (unsigned __int64)v110 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v110 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow((__int64)v110, v125, v34);
        v8 = v187;
        *(_QWORD *)(v91 + 24) = *(_QWORD *)(v91 + 24) & 0xC000000000000000uLL | 1;
        v126 = *(_QWORD *)v8;
        if ( v8 >= v118
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v126 & 1) != 0
          && ((v126 & 0x20) == 0 || (v126 & 0x42) == 0) )
        {
          v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v34 )
          {
            v127 = *(_QWORD *)(v34 + 8 * ((v8 >> 3) & 0x1FF));
            v34 = v126 | 0x20;
            if ( (v127 & 0x20) == 0 )
              v34 = v126;
            v126 = v34;
            if ( (v127 & 0x42) != 0 )
              v126 = v34 | 0x42;
          }
        }
        v21 = v188;
        LOBYTE(v35) = v191;
        v10 = v183;
        ValidPte = v126;
        _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_332;
      }
      MiDiscardTransitionPte(v91);
      _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v188;
LABEL_328:
      v10 = v183;
      v4 = 0LL;
      v7 = v181;
      v8 = 0LL;
      v6 = v182;
      v11 = v189;
      continue;
    }
    v94 = (*(_BYTE *)(v91 + 35) & 0x40) == 0;
    ValidPte = v47;
    if ( !v94 )
      goto LABEL_238;
    *(_QWORD *)(v91 + 24) ^= (*(_QWORD *)(v91 + 24) ^ (*(_QWORD *)(v91 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v91 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    while ( 1 )
    {
LABEL_332:
      v149 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v197 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v197);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v149);
      if ( (v35 & 1) != 0 )
      {
        v150 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        v152 = MiMakeValidPte(v10, (v150 >> 12) & 0xFFFFFFFFFLL, 536870913LL, v151);
      }
      else
      {
        v152 = ValidPte;
        if ( (v182 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
          v152 = ValidPte | 0x42;
      }
      v9 = v192;
      v160 = v152 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1403CB7D0 & 1) << 8);
      v4 = 0LL;
LABEL_353:
      v10 += 8LL;
      ValidPte = v160;
      if ( (v35 & 2) != 0 )
      {
        v160 &= ~1uLL;
        ValidPte = v160;
      }
      v7 = v181;
      if ( v181 || v160 )
      {
        v210[v181] = v160;
        v181 = ++v7;
        if ( v7 == 16 )
        {
          if ( v178 != 17 )
          {
            MiUnlockProtoPoolPage(v9, v178, v34, v6);
            v178 = 17;
          }
          MiMakeSystemCacheRangeValid(v10 - 128, v210, 16LL, v21);
          v7 = 0;
          v181 = 0;
        }
      }
      if ( !v201 )
        break;
      v161 = *(_QWORD *)(v8 + 8);
      v8 += 8LL;
      --v201;
      v6 = 0xFFFFF6FB7DBED000uLL;
      if ( v8 >= 0xFFFFF6FB7DBED000uLL
        && v8 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v161 & 1) != 0
        && ((v161 & 0x20) == 0 || (v161 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v162 = *(_QWORD *)(v34 + 8 * ((v8 >> 3) & 0x1FF));
          v34 = v161 | 0x20;
          if ( (v162 & 0x20) == 0 )
            v34 = v161;
          v161 = v34;
          if ( (v162 & 0x42) != 0 )
            v161 = v34 | 0x42;
        }
      }
      ValidPte = v161;
      v163 = *(_QWORD *)v10;
      if ( v10 >= v6
        && v10 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v163 & 1) != 0
        && ((v163 & 0x20) == 0 || (v163 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v164 = *(_QWORD *)(v34 + 8 * ((v10 >> 3) & 0x1FF));
          v34 = v163 | 0x20;
          if ( (v164 & 0x20) == 0 )
            v34 = v163;
          v163 = v34;
          if ( (v164 & 0x42) != 0 )
            v163 = v34 | 0x42;
        }
      }
      v193 = v163;
      if ( (v163 & 1) != 0 )
        LOBYTE(v35) = 2;
      else
        LOBYTE(v35) = (v163 & 8) != 0;
    }
    v6 = v182;
    v11 = v189;
    v183 = v10;
  }
  if ( v178 != 17 )
  {
    v198 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v198);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_BYTE *)(v9 + 34) &= ~0x20u;
    v165 = *(_WORD *)(v9 + 32);
    if ( !v165 )
      MiBadRefCount(v9);
    *(_WORD *)(v9 + 32) = v165 - 1;
    if ( v165 == 1 && (unsigned int)MiIsPfnFileOnly(v9) )
      goto LABEL_439;
    if ( !(unsigned int)MiIsPfnFileOnly(v9) )
    {
      v167 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v166 )
      {
        v169 = 1LL;
        v168 = 1;
        goto LABEL_410;
      }
      if ( v166 != 1 )
      {
        if ( v166 == 2 && v167 )
        {
LABEL_407:
          if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
            goto LABEL_408;
        }
        goto LABEL_440;
      }
      if ( !v167 )
        goto LABEL_407;
LABEL_408:
      v168 = 0;
      v169 = 1LL;
LABEL_410:
      v170 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
      if ( v170 > 0xFFFFF6BFFFFFFF78uLL || v170 < 0xFFFFF68000000000uLL )
      {
        v171 = *(_BYTE *)(v9 + 35);
        if ( (v171 & 0x20) != 0 )
        {
          *(_BYTE *)(v9 + 35) = v171 & 0xDF;
          goto LABEL_438;
        }
      }
      v172 = *(_QWORD *)(v9 + 40);
      if ( (v172 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
      {
        LODWORD(v194) = 1;
      }
      else if ( v170 <= 0xFFFFF6BFFFFFFF78uLL && v170 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v9 + 35) & 0x20) != 0 )
      {
        LODWORD(v194) = 1;
      }
      else if ( v168 == 1 )
      {
        if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
          v4 = 1LL;
        v194 = v4;
      }
      v173 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v172 >> 40) & 0x3FF));
      if ( (_DWORD)v194 == 1 )
        MiReturnCommit(v173, 1uLL);
      if ( (ULONG_PTR *)v173 != &MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v173 + 7104), 1uLL);
        goto LABEL_438;
      }
      v174 = KeGetCurrentPrcb();
      v175 = (int)v174->CachedResidentAvailable;
      if ( (_DWORD)v175 != -1 )
      {
        if ( (unsigned __int64)(v175 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v176 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v174->CachedResidentAvailable,
                     v175 + 1,
                     v175);
            v94 = (_DWORD)v175 == v176;
            LODWORD(v175) = v176;
            if ( v94 )
              break;
            if ( v176 == -1 || (unsigned __int64)(v176 + 1LL) > 0x100 )
              goto LABEL_433;
          }
LABEL_438:
          if ( v168 )
LABEL_439:
            MiPfnReferenceCountIsZero(v9, (v9 + 0x58000000000LL) / 48);
          goto LABEL_440;
        }
LABEL_433:
        if ( (int)v175 > 192
          && (_DWORD)v175 == _InterlockedCompareExchange(
                               (volatile signed __int32 *)&v174->CachedResidentAvailable,
                               192,
                               v175) )
        {
          v169 = (int)v175 - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_1403CFB00, v169);
      goto LABEL_438;
    }
LABEL_440:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v178);
    v7 = v181;
  }
  if ( v7 )
    MiMakeSystemCacheRangeValid(v10 - 8LL * v7, v210, v7, v21);
  if ( v206 )
    *v206 = v180;
  return (unsigned int)v186;
}
