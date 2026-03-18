/*
 * XREFs of MmCheckCachedPageStates @ 0x14007B8D0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x14007AE80 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x14007B720 (CcMapAndRead.c)
 *     CcMapDataForOverwrite @ 0x140117964 (CcMapDataForOverwrite.c)
 * Callees:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x140028A58 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x14002A810 (MiInitializePageColorBase.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiUnlinkStandbyBatch @ 0x140036990 (MiUnlinkStandbyBatch.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiReferenceControlAreaPfn @ 0x140066278 (MiReferenceControlAreaPfn.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiMarkPteDirty @ 0x140117FA4 (MiMarkPteDirty.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MiCaptureSystemCachePte @ 0x140219D54 (MiCaptureSystemCachePte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  unsigned __int8 v4; // bl
  ULONG_PTR v5; // r15
  __int64 v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 *v9; // r8
  __int64 PteShadow; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int64 v13; // r10
  __int64 v14; // r12
  __int64 *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 CurrentPrcb; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned int v21; // r11d
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  ULONG_PTR v28; // rdi
  unsigned int v29; // r11d
  __int64 v30; // rax
  unsigned __int64 v31; // r11
  __int64 *v32; // rbx
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r9
  unsigned __int64 v41; // r10
  char v42; // di
  int IsPfnCommitNotCharged; // eax
  char v44; // r11
  __int64 v45; // r10
  ULONG_PTR *v46; // rbx
  signed __int32 v47; // eax
  signed __int32 v48; // ett
  _QWORD *v49; // rdi
  unsigned int v50; // ebx
  __int64 v51; // rax
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // r10
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rdi
  ULONG_PTR v57; // rdi
  __int64 v58; // rax
  bool v59; // zf
  char v60; // cl
  __int64 v61; // rax
  unsigned __int64 v62; // r8
  ULONG_PTR v63; // r9
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // r15
  ULONG_PTR v66; // rbx
  __int64 PfnPriority; // r14
  _KSPIN_LOCK_QUEUE *v68; // r9
  BOOL v69; // esi
  __int64 v70; // rax
  __int64 v71; // r12
  char v72; // al
  _QWORD *v73; // r12
  int v74; // esi
  __int64 v75; // r9
  __int64 v76; // r10
  int v77; // eax
  signed int v78; // esi
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // r14
  __int64 v81; // rax
  int IsAddressGlobal; // eax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // r11
  unsigned __int64 v86; // r8
  __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 PrototypePteDirect; // r15
  _WORD *v91; // r8
  __int16 v92; // dx
  __int64 v93; // rcx
  __int64 Page; // rax
  ULONG_PTR v95; // r14
  __int64 v96; // rsi
  unsigned int v97; // eax
  unsigned int v98; // edi
  __int64 v99; // r8
  int v100; // r8d
  __int64 *v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned int v104; // eax
  unsigned int v105; // ebx
  __int64 v106; // rdx
  unsigned __int64 ValidPte; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v109; // eax
  unsigned int Flink; // ecx
  unsigned int v111; // edi
  __int64 v112; // rax
  int v113; // eax
  int v114; // ecx
  unsigned __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  char v118; // r9
  unsigned __int8 v119; // bl
  __int64 v120; // rax
  unsigned __int64 v121; // rcx
  __int64 v122; // rdx
  __int16 v123; // dx
  int v124; // r9d
  __int64 v125; // rax
  unsigned __int64 v126; // rdx
  char v127; // al
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rsi
  __int64 v130; // rbx
  struct _KPRCB *v131; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v133; // eax
  unsigned __int8 v135; // [rsp+30h] [rbp-D0h] BYREF
  char i; // [rsp+31h] [rbp-CFh]
  char v137; // [rsp+32h] [rbp-CEh]
  int v138; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v139; // [rsp+38h] [rbp-C8h] BYREF
  int v140; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v141; // [rsp+48h] [rbp-B8h]
  int v142; // [rsp+50h] [rbp-B0h]
  __int64 v143; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v145; // [rsp+68h] [rbp-98h]
  __int64 v146; // [rsp+70h] [rbp-90h]
  __int64 v147; // [rsp+78h] [rbp-88h]
  _BOOL8 v148; // [rsp+80h] [rbp-80h]
  int v149; // [rsp+88h] [rbp-78h] BYREF
  int v150; // [rsp+8Ch] [rbp-74h] BYREF
  int v151; // [rsp+90h] [rbp-70h] BYREF
  int v152; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v153; // [rsp+98h] [rbp-68h] BYREF
  __int64 v154; // [rsp+A0h] [rbp-60h]
  __int64 v155; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR v156; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v157; // [rsp+B8h] [rbp-48h]
  __int64 v158; // [rsp+C0h] [rbp-40h]
  __int64 v159; // [rsp+C8h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v161; // [rsp+E8h] [rbp-18h] BYREF
  char *v162; // [rsp+F0h] [rbp-10h]
  _WORD *v163; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v164; // [rsp+100h] [rbp+0h]
  unsigned __int16 v165; // [rsp+102h] [rbp+2h]
  __int64 v166[16]; // [rsp+110h] [rbp+10h] BYREF

  v162 = a4;
  v140 = a3;
  v137 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 17;
  v148 = 0LL;
  v142 = 0;
  v5 = 0LL;
  v138 = 0;
  v6 = 0LL;
  v135 = 17;
  v154 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v141 = v7;
  v8 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v145 = v8;
  v9 = (__int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v9;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v9);
  v159 = PteShadow;
  v14 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v159) - 0x58000000000LL;
  v146 = v14;
  v15 = (__int64 *)(((v13 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v16 = *v15;
  if ( (unsigned __int64)v15 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v15 <= 0xFFFFF6FB7DBED7F8uLL )
    v16 = MiReadPteShadow(((v13 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v15);
  v161 = v16;
  v17 = MI_GET_PFN_FROM_PTE(&v161, v11, v15, v12);
  v23 = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 48 * ((v22 >> 18) & 7) + 24);
  if ( (v23 & 1) != 0 )
    v23 &= ~1uLL;
  v158 = *(_QWORD *)v23;
  v157 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v158 + 60) & 0x3FF));
LABEL_10:
  v24 = 1;
  while ( v7 <= v8 )
  {
    v25 = *(_QWORD *)v7;
    LOBYTE(v26) = v20;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v25) = MiReadPteShadow(v7, *(_QWORD *)v7);
    if ( (v25 & 1) != 0 || (v27 = MiCaptureSystemCachePte(v7, CurrentPrcb, v19, v20), v139 = v27, (v27 & 1) != 0) )
    {
      if ( (v140 & 4) != 0 )
      {
        if ( v4 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v4);
          v4 = 17;
          v135 = 17;
        }
        MiMarkPteDirty(v7);
        v20 = 0LL;
      }
      goto LABEL_217;
    }
    v28 = v5;
    v26 = (v27 >> 3) & 1;
    v147 = v26;
    BugCheckParameter1 = MiGetPrototypePteDirect(v27);
    v5 = BugCheckParameter1;
    if ( v4 != 17 )
    {
      if ( ((BugCheckParameter1 ^ v28) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_89;
      MiUnlockProtoPoolPage(v6, v4);
      v29 = v138;
      v4 = 17;
      v135 = 17;
      v20 = 0LL;
    }
    if ( ((v5 ^ v28) & 0xFFFFFFFFFFFFF000uLL) != 0 && v29 )
    {
      MiMakeSystemCacheRangeValid(v7 - 8LL * v29, v166, v29, v14);
      v20 = 0LL;
      v138 = 0;
    }
    v30 = *(_QWORD *)v5;
    v31 = 0xFFFFF6FB7DBED000uLL;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      v30 = MiReadPteShadow(v5, *(_QWORD *)v5);
    v143 = v30;
    if ( (v30 & 1) == 0 && ((v30 & 0x400) != 0 || (v30 & 0x800) == 0) )
    {
      v6 = v20;
LABEL_179:
      PrototypePteDirect = MiGetPrototypePteDirect(v30);
      CurrentPrcb = *(unsigned int *)(v158 + 56);
      if ( (CurrentPrcb & 0x40000000) == 0 && (v140 & 1) != 0 )
      {
        MiInitializePageColorBase(0LL, ((unsigned int)CurrentPrcb >> 20) & 0x3F, (__int64)&v163);
        v91 = v163;
        v92 = v164;
        v93 = v157;
        ++*v163;
        Page = MiGetPage(v93, v165 | (unsigned int)(unsigned __int16)(*v91 & v92), 2u);
        v95 = Page;
        if ( Page != -1 )
        {
          v96 = 48 * Page - 0x58000000000LL;
          v97 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v143);
          v98 = MiProtectionToCacheAttribute(v97);
          if ( (unsigned int)MiPfnZeroingNeeded(v96, v98, v99) )
          {
            if ( v4 != 17 )
            {
              MiUnlockProtoPoolPage(v6, v4);
              v4 = 17;
              v135 = 17;
            }
            v100 = v98;
            v24 = 1;
            MiZeroPhysicalPage(v95, 1, v100);
            *(_QWORD *)(v96 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          else
          {
            v24 = 1;
          }
          if ( v4 != 17 )
            goto LABEL_198;
          v101 = (__int64 *)BugCheckParameter1;
          v6 = MiLockProtoPoolPage(BugCheckParameter1, &v135);
          if ( !v6 )
          {
            do
            {
              MmAccessFault(2uLL, (signed __int64)v101, 0LL, 0LL);
              v6 = MiLockProtoPoolPage((unsigned __int64)v101, &v135);
            }
            while ( !v6 );
            v14 = v146;
          }
          v102 = *v101;
          if ( (unsigned __int64)v101 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v101 <= 0xFFFFF6FB7DBED7F8uLL )
            v102 = MiReadPteShadow(v101, *v101);
          v143 = v102;
          if ( (v102 & 1) == 0 && ((v102 & 0x800) == 0 || (v102 & 0x400) != 0) )
          {
LABEL_198:
            MiReferenceControlAreaPfn(v158, PrototypePteDirect, 1u);
            v104 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v143);
            v5 = BugCheckParameter1;
            v105 = v104;
            MiInitializePfn(v96, (__int64 *)BugCheckParameter1, v104, 18);
            v106 = v95;
            v7 = v141;
            ValidPte = MiMakeValidPte(v141, v106, v105 | 0x20000000);
            v139 = ValidPte;
            *(_QWORD *)v5 = ValidPte;
            if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v5, ValidPte);
            LOBYTE(v26) = v147;
            goto LABEL_234;
          }
          MiUnlockProtoPoolPage(v6, v135);
          MiReleaseFreshPage(v96, v103);
          v7 = v141;
          v20 = 0LL;
          v21 = v138;
          v4 = 17;
          v8 = v145;
          v5 = 0LL;
          v135 = 17;
          continue;
        }
        v7 = v141;
        v20 = 0LL;
      }
      if ( (v140 & 2) == 0 )
      {
        if ( v4 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v4);
          v135 = 17;
        }
        CurrentThread = KeGetCurrentThread();
        v109 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v111 = v109 + 4 * Flink;
        v112 = (__int64)(v145 - v7) >> 3;
        if ( (unsigned int)v112 > Flink )
        {
          if ( (unsigned int)v112 > 0xF )
            LODWORD(v112) = 15;
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v112;
        }
        v113 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0LL, 0LL);
        if ( v113 < 0 )
        {
          v114 = v142;
          if ( v142 >= 0 )
            v114 = v113;
          v142 = v114;
        }
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v111 >> 2;
        BYTE4(CurrentThread[1].Queue) = v111 & 3;
        v20 = 0LL;
        v4 = v135;
      }
      v5 = BugCheckParameter1;
      v137 = 0;
      goto LABEL_216;
    }
    v32 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v33 = *v32;
      do
      {
        v34 = v33;
        if ( (unsigned __int64)v32 >= v31 && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
          v34 = MiReadPteShadow(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v33);
        v153 = v34;
        if ( (v34 & 1) == 0 || (v34 & 0x200) != 0 )
          goto LABEL_53;
        v35 = MI_GET_PAGE_FRAME_FROM_PTE(&v153);
      }
      while ( !(unsigned int)MiIsPfnInline(v35) );
      v6 = 48 * v35 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v149 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v149);
          while ( *(__int64 *)(v6 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
        v31 = 0xFFFFF6FB7DBED000uLL;
      }
      v37 = *v32;
      v135 = CurrentIrql;
      if ( (unsigned __int64)v32 >= v31 && (unsigned __int64)v32 <= 0xFFFFF6FB7DBED7F8uLL )
        v37 = MiReadPteShadow(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v37);
      v153 = v37;
      if ( (v37 & 1) == 0 || (v37 & 0x200) != 0 || v35 != MI_GET_PAGE_FRAME_FROM_PTE(&v153) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
LABEL_53:
        MmAccessFault(2uLL, v5, 0LL, 0LL);
        v31 = 0xFFFFF6FB7DBED000uLL;
        continue;
      }
      break;
    }
    v38 = MiAreChargesNeededToLockPage(48 * v35 - 0x58000000000LL);
    v14 = v146;
    v7 = v141;
    if ( !v38 )
      goto LABEL_70;
    v41 = *(_QWORD *)(v6 + 40);
    if ( (v41 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
    {
      v42 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v39);
      v42 = v44;
      if ( IsPfnCommitNotCharged )
        v42 = 1;
    }
    v45 = (v41 >> 40) & 0x3FF;
    v46 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v45);
    if ( v42 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v45), 1uLL, 4LL, v40) )
      goto LABEL_71;
    if ( v46 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v47 = *(_DWORD *)(CurrentPrcb + 24604);
      while ( v47 )
      {
        if ( v47 == -1 )
          break;
        v48 = v47;
        v47 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24604), v47 - 1, v47);
        if ( v48 == v47 )
          goto LABEL_70;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v46) )
    {
LABEL_70:
      ++*(_WORD *)(v6 + 32);
    }
    else if ( v42 )
    {
      MiReturnCommit((__int64)v46, 1uLL);
    }
LABEL_71:
    v49 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
    if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
        v50 = 0;
        for ( i = *(_BYTE *)(v6 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v6 + 34) )
        {
          if ( (++v50 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v50);
        }
        MiLockPageInline(v6);
      }
      while ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 );
      v14 = v146;
      v7 = v141;
    }
    *(_BYTE *)(v6 + 34) |= 0x20u;
    if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
    {
      v51 = *v49;
      if ( (unsigned __int64)v49 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v49 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v51) = MiReadPteShadow(v49, *v49);
      if ( (v51 & 0x20) == 0 )
        MiWriteValidPteVolatile(v49, 1LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v4 = v135;
    v20 = 0LL;
    LOBYTE(v26) = v147;
LABEL_89:
    if ( (*(_BYTE *)v7 & 1) != 0 )
      goto LABEL_216;
    v30 = *(_QWORD *)v5;
    v52 = 0xFFFFF6FB7DBED000uLL;
    v53 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      v30 = MiReadPteShadow(v5, *(_QWORD *)v5);
    v143 = v30;
    if ( (v30 & 1) == 0 && ((v30 & 0x400) != 0 || (v30 & 0x800) == 0) )
      goto LABEL_179;
    while ( 1 )
    {
      while ( 1 )
      {
        v54 = *(_QWORD *)v5;
        if ( v5 >= v52 && v5 <= v53 )
          v54 = MiReadPteShadow(v5, *(_QWORD *)v5);
        v155 = v54;
        if ( (v54 & 1) == 0 )
          break;
        v55 = MI_GET_PAGE_FRAME_FROM_PTE(&v155);
LABEL_105:
        if ( (unsigned int)MiIsPfnInline(v55) )
        {
          v56 = 48 * v20;
          v20 = 0LL;
          v57 = v56 - 0x58000000000LL;
          v150 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v150);
              while ( *(__int64 *)(v57 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v57 + 24), 0x3FuLL) );
            v20 = 0LL;
            v52 = 0xFFFFF6FB7DBED000uLL;
          }
          v58 = *(_QWORD *)v5;
          v53 = 0xFFFFF6FB7DBED7F8uLL;
          if ( v5 >= v52 && v5 <= 0xFFFFF6FB7DBED7F8uLL )
            v58 = MiReadPteShadow(v5, *(_QWORD *)v5);
          if ( v58 == v54 )
            goto LABEL_116;
          _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v54 & 0x400) != 0 || (v54 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v54, CurrentPrcb, v19, v20) )
      {
        v55 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v155);
        goto LABEL_105;
      }
    }
    v20 = 0LL;
    v57 = 0LL;
LABEL_116:
    v30 = *(_QWORD *)v5;
    if ( v5 >= v52 && v5 <= v53 )
      v30 = MiReadPteShadow(v5, *(_QWORD *)v5);
    v143 = v30;
    if ( !v57 )
    {
      v4 = v135;
      goto LABEL_179;
    }
    if ( (v30 & 1) != 0 )
    {
      v59 = (*(_BYTE *)(v57 + 35) & 0x40) == 0;
      v139 = v30;
      if ( v59 )
      {
        *(_QWORD *)(v57 + 24) ^= (*(_QWORD *)(v57 + 24) ^ (*(_QWORD *)(v57 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_234;
      }
LABEL_122:
      _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v135;
LABEL_216:
      v24 = 1;
LABEL_217:
      v115 = v20;
      goto LABEL_218;
    }
    v60 = *(_BYTE *)(v57 + 34);
    if ( (v60 & 0x20) != 0 || (*(_BYTE *)(v57 + 35) & 0x40) != 0 )
      goto LABEL_122;
    if ( (v60 & 7) != 2 || (unsigned __int64)(((__int64)(v145 - v7) >> 3) + 1) <= 1 )
      goto LABEL_139;
    v61 = MiGetPrototypePteDirect(*(_QWORD *)(v57 + 16));
    if ( (__int64)(*(_QWORD *)(v61 + 8) + 8LL * *(unsigned int *)(v61 + 44) - v5) >> 3 < v62 )
      v62 = (__int64)(*(_QWORD *)(v61 + 8) + 8LL * *(unsigned int *)(v61 + 44) - v5) >> 3;
    v64 = (unsigned __int64)(4096 - (unsigned int)(v5 & 0xFFF)) >> 3;
    if ( v62 <= v64 )
      v64 = v62;
    v65 = (unsigned int)(16 - v138);
    if ( v64 <= v65 )
      v65 = v64;
    if ( v65 > 1 )
    {
      v66 = v63;
      v156 = v63;
      PfnPriority = (unsigned int)MiGetPfnPriority(v57);
      LockHandle.LockQueue.Next = v68;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v157 + 8 * (PfnPriority + 4 * (PfnPriority + 73)));
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
      v69 = MiUnlinkPageFromList(v57, 1LL);
      if ( v69 )
      {
        v70 = MiUnlinkStandbyBatch(
                (__int64)&v156,
                BugCheckParameter1 + 8,
                (unsigned int)PfnPriority,
                v141,
                v65 - 1,
                &v156);
        v66 = v156;
        v154 = v70;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v66 )
      {
        MiDiscardTransitionPte(v66);
        _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v7 = v141;
    }
    else
    {
LABEL_139:
      v69 = MiUnlinkPageFromList(v57, 0LL);
    }
    if ( !v69 )
    {
      MiDiscardTransitionPte(v57);
      _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = v135;
      v20 = 0LL;
      v21 = v138;
      v5 = 0LL;
      v8 = v145;
      goto LABEL_10;
    }
    v71 = *(_QWORD *)(v57 + 8);
    v72 = *(_BYTE *)(v57 + 34) & 0xFE;
    ++*(_WORD *)(v57 + 32);
    *(_BYTE *)(v57 + 34) = v72 | 6;
    v73 = (_QWORD *)(v71 | 0x8000000000000000uLL);
    v74 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v57 + 16);
    v77 = *(unsigned __int8 *)(v57 + 34) >> 6;
    v78 = v74 & 0xFFFFFFE7;
    if ( v77 != 1 )
    {
      if ( v77 )
      {
        if ( v77 == 2 )
          v78 |= 0x18u;
      }
      else
      {
        v78 |= 8u;
      }
    }
    v79 = MmProtectToPteMask[v78 & 0x1F] & 0xFFFF000000000E7FuLL | ((((__int64)(v57 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | 0x21;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_161;
    v80 = (__int64)(v7 << 25) >> 16;
    if ( v141 >= 0xFFFFF6FB40000000uLL && v141 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v141 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v79 |= v76;
      }
      else if ( (v78 & 0x4000000) == 0 )
      {
        v79 &= v75;
      }
      if ( (unsigned int)MiUserPdeOrAbove(v141) )
        v79 |= 4uLL;
    }
    v81 = v79 | 4;
    if ( v141 > 0xFFFFF6BFFFFFFF78uLL )
      v81 = v79;
    v79 = v81;
    IsAddressGlobal = MiIsAddressGlobal(v80);
    v7 = v141;
    if ( IsAddressGlobal )
LABEL_161:
      v79 |= 0x100uLL;
    if ( v78 < 0 && (v78 & 5) == 4 )
      v79 |= 0x42uLL;
    v83 = v79 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v78 & 0x40000000) == 0 )
      v83 = v79;
    v84 = ((unsigned __int16)v83 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v83;
    v85 = 0xFFFFF6FB7DBED000uLL;
    v86 = v84 & 0xFFFFFFFFFFFFFEFFuLL;
    if ( (v78 & 0x8000000) == 0 )
      v86 = v84;
    v87 = v86 | 0x80;
    if ( (v78 & 0x4000000) == 0 )
      v87 = v86;
    v88 = v87 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    *v73 = v88;
    v19 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v73 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v73 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v73, v88);
      v19 = 0xFFFFF6FB7DBED7F8uLL;
    }
    v5 = BugCheckParameter1;
    *(_QWORD *)(v57 + 24) = *(_QWORD *)(v57 + 24) & 0xC000000000000000uLL | 1;
    v89 = *(_QWORD *)v5;
    if ( v5 >= v85 && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      v89 = MiReadPteShadow(v5, *(_QWORD *)v5);
    v14 = v146;
    LOBYTE(v26) = v147;
    v139 = v89;
    _InterlockedAnd64((volatile signed __int64 *)(v57 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    while ( 1 )
    {
LABEL_234:
      v119 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v151 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v151);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      CurrentPrcb = 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v119);
      if ( (v26 & 1) != 0 )
      {
        v120 = MI_GET_PAGE_FRAME_FROM_PTE(&v139);
        v121 = MiMakeValidPte(v7, v120, 536870913);
      }
      else
      {
        v121 = v139;
        if ( (v140 & 4) != 0 && (v139 & 0x42) == 0 && (v139 & 0x800) != 0 )
          v121 = v139 | 0x42;
      }
      v4 = v135;
      v115 = v121 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1403885F8 & 1) << 8);
      v20 = 0LL;
      v24 = 1;
LABEL_218:
      v139 = v115;
      v7 += 8LL;
      if ( (v26 & 2) != 0 )
      {
        v115 &= ~1uLL;
        v139 = v115;
      }
      v21 = v138;
      if ( v138 || v115 )
      {
        v166[v138] = v115;
        v138 = ++v21;
        if ( v21 == 16 )
        {
          if ( v4 != 17 )
          {
            MiUnlockProtoPoolPage(v6, v4);
            v4 = 17;
            v135 = 17;
          }
          MiMakeSystemCacheRangeValid(v7 - 128, v166, 16LL, v14);
          v20 = 0LL;
          v21 = 0;
          v138 = 0;
        }
      }
      if ( !v154 )
        break;
      v116 = *(_QWORD *)(v5 + 8);
      v5 += 8LL;
      --v154;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
        v116 = MiReadPteShadow(v5, v116);
      v139 = v116;
      v117 = MiCaptureSystemCachePte(v7, CurrentPrcb, v19, v20);
      v159 = v117;
      LOBYTE(v26) = v118;
      if ( (v117 & 1) != 0 )
      {
        LOBYTE(v26) = 2;
      }
      else if ( (v117 & 8) != 0 )
      {
        LOBYTE(v26) = 1;
      }
    }
    v8 = v145;
    v141 = v7;
  }
  if ( v4 != 17 )
  {
    v152 = v20;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v152);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    *(_BYTE *)(v6 + 34) &= ~0x20u;
    v122 = *(unsigned __int16 *)(v6 + 32);
    if ( !(_WORD)v122 )
      MiBadRefCount(v6, v122);
    *(_WORD *)(v6 + 32) = v122 - 1;
    if ( (_WORD)v122 == 1 && (unsigned int)MiIsPfnFileOnly(v6) )
      goto LABEL_288;
    if ( !(unsigned int)MiIsPfnFileOnly(v6) )
    {
      v125 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v123 )
        goto LABEL_261;
      if ( v123 != 1 )
      {
        if ( v123 == 2 && v125 )
        {
LABEL_259:
          if ( (*(_BYTE *)(v6 + 34) & 8) != 0 )
            goto LABEL_260;
        }
        goto LABEL_289;
      }
      if ( !v125 )
        goto LABEL_259;
LABEL_260:
      v24 = v124;
LABEL_261:
      v126 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
      if ( v126 > 0xFFFFF6BFFFFFFF78uLL || v126 < 0xFFFFF68000000000uLL )
      {
        v127 = *(_BYTE *)(v6 + 35);
        if ( (v127 & 0x20) != 0 )
        {
          *(_BYTE *)(v6 + 35) = v127 & 0xDF;
          goto LABEL_287;
        }
      }
      v128 = *(_QWORD *)(v6 + 40);
      if ( (v128 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
      {
        v129 = 1LL;
        LODWORD(v148) = 1;
      }
      else if ( v126 <= 0xFFFFF6BFFFFFFF78uLL && v126 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v6 + 35) & 0x20) != 0 )
      {
        v129 = 1LL;
        LODWORD(v148) = 1;
      }
      else
      {
        v129 = 1LL;
        if ( v24 == 1 )
          v148 = (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0;
      }
      v130 = *(_QWORD *)(qword_140388AF0 + 8 * ((v128 >> 40) & 0x3FF));
      if ( v148 )
        MiReturnCommit(v130, 1uLL);
      if ( (ULONG_PTR *)v130 != &MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v130 + 6016), 1uLL);
        goto LABEL_287;
      }
      v131 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v131->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v133 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v131->CachedResidentAvailable,
                     CachedResidentAvailable + 1,
                     CachedResidentAvailable);
            v59 = (_DWORD)CachedResidentAvailable == v133;
            LODWORD(CachedResidentAvailable) = v133;
            if ( v59 )
              break;
            if ( v133 == -1 || (unsigned __int64)(v133 + 1LL) > 0x100 )
              goto LABEL_282;
          }
LABEL_287:
          if ( v24 )
LABEL_288:
            MiPfnReferenceCountIsZero(v6, (v6 + 0x58000000000LL) / 48);
          goto LABEL_289;
        }
LABEL_282:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v131->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v129 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_14038B840, v129);
      goto LABEL_287;
    }
LABEL_289:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v135);
    v21 = v138;
  }
  if ( v21 )
    MiMakeSystemCacheRangeValid(v7 - 8LL * v21, v166, v21, v14);
  if ( v162 )
    *v162 = v137;
  return (unsigned int)v142;
}
