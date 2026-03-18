/*
 * XREFs of MiDispatchFault @ 0x1400429F0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140012A2C (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14001313C (PfSnCheckLoggingForThread.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 */

__int64 __fastcall MiDispatchFault(
        char a1,
        unsigned __int64 a2,
        __int64 *a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        char a9,
        _QWORD *a10)
{
  _QWORD *v10; // rbx
  int v11; // r13d
  __int64 v12; // r11
  unsigned int v13; // edi
  __int64 v14; // r15
  unsigned __int64 v15; // r10
  __int64 *v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // rbx
  __int64 *v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // r11
  int v22; // ecx
  __int64 v23; // r14
  __int64 v24; // r10
  unsigned __int64 v25; // r8
  __int64 v26; // r11
  unsigned __int16 **v27; // r10
  unsigned __int16 *v28; // rcx
  unsigned int v29; // edx
  __int64 *v30; // r9
  __int64 *v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r11
  unsigned __int64 v36; // rbx
  __int64 v37; // rsi
  signed __int8 v38; // cf
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r9
  __int16 v43; // ax
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // r14
  __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  bool v50; // zf
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  bool v56; // bl
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  ULONG_PTR *v59; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v62; // ett
  _QWORD *v63; // rbx
  char v64; // al
  unsigned __int64 v65; // r10
  __int64 v66; // rax
  unsigned __int64 v67; // r13
  unsigned __int64 v68; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rbx
  unsigned __int64 v74; // rax
  __int64 v75; // r14
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rsi
  unsigned __int64 v82; // rdi
  __int64 v83; // rax
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned __int64 v91; // r13
  __int64 *PrototypePteDirect; // rbx
  unsigned int v93; // edi
  __int64 UsedPtesHandle; // rax
  __int64 v95; // rbx
  __int64 v96; // rax
  unsigned __int64 v97; // r10
  unsigned __int64 v98; // r11
  __int64 v99; // rbx
  int v100; // r8d
  _QWORD *v101; // r12
  __int64 *v102; // r15
  int v103; // edx
  unsigned __int64 v104; // r9
  __int64 v105; // r14
  int v106; // edi
  char v107; // al
  __int64 v108; // rcx
  unsigned __int64 v109; // rbx
  __int64 v110; // rsi
  int v111; // eax
  __int64 v112; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  struct _EX_RUNDOWN_REF *v114; // rax
  struct _EX_RUNDOWN_REF *v115; // rbx
  __int64 *v116; // rdi
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rcx
  _QWORD *v126; // rsi
  unsigned int v127; // edi
  __int64 v128; // rax
  unsigned int v129; // eax
  __int64 PteShadow; // rax
  int v131; // eax
  void *v132; // rax
  __int64 *v133; // [rsp+58h] [rbp-A8h]
  unsigned int v134; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v135; // [rsp+68h] [rbp-98h]
  unsigned __int64 v136; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v137; // [rsp+78h] [rbp-88h]
  __int64 v138; // [rsp+80h] [rbp-80h]
  __int64 *v139; // [rsp+88h] [rbp-78h] BYREF
  __int64 v140; // [rsp+90h] [rbp-70h]
  unsigned __int64 v141; // [rsp+98h] [rbp-68h]
  PVOID v142; // [rsp+A0h] [rbp-60h] BYREF
  int v143; // [rsp+A8h] [rbp-58h] BYREF
  int v144; // [rsp+ACh] [rbp-54h] BYREF
  int v145; // [rsp+B0h] [rbp-50h] BYREF
  int v146; // [rsp+B4h] [rbp-4Ch] BYREF
  int v147; // [rsp+B8h] [rbp-48h] BYREF
  int v148; // [rsp+BCh] [rbp-44h] BYREF
  int v149; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v150; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v151; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v152; // [rsp+D8h] [rbp-28h]
  __int64 v153; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v154; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v155; // [rsp+F0h] [rbp-10h]
  __int64 v156; // [rsp+F8h] [rbp-8h]
  __int64 v157; // [rsp+100h] [rbp+0h]
  __int64 v158; // [rsp+108h] [rbp+8h]
  __int64 v159; // [rsp+110h] [rbp+10h]
  _QWORD *v160; // [rsp+118h] [rbp+18h]
  _QWORD v161[8]; // [rsp+120h] [rbp+20h] BYREF

  v10 = a10;
  v11 = a4;
  v12 = a7;
  v13 = 0;
  v14 = a8;
  v15 = a2;
  LODWORD(v138) = a4;
  v133 = a3;
  v141 = a2;
  *a10 = 0LL;
  v152 = a5;
  v155 = a7;
  v157 = a8;
  v160 = a10;
  v16 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v17 = a1 & 2;
  v142 = MmBadPointer;
  v135 = (unsigned __int64)v16;
  v156 = v17;
  if ( !a3 )
  {
    PteShadow = *v16;
    if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v16, *v16);
    v136 = PteShadow;
    if ( (PteShadow & 1) != 0 || !PteShadow )
      return 0LL;
    if ( (PteShadow & 0x800) != 0 )
    {
      v129 = MiResolveTransitionFault(v15, v16, 0LL, a5, v12, v17, a6, a9, &v142);
      goto LABEL_305;
    }
    if ( (unsigned __int64)&v136 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v136 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(PteShadow) = MiReadPteShadow(&v136, PteShadow);
    if ( (PteShadow & 4) != 0 )
    {
      v129 = MiResolvePageFileFault(v15, (_DWORD)v16, 0, a5, v12, (__int64)&v142);
LABEL_305:
      v13 = v129;
      if ( v129 == -1073532109 )
        *v10 = v142;
      return v13;
    }
    if ( (v12 & 1) != 0
      && *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 1
      && (*(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
    {
      return v13;
    }
    if ( (v12 & 1) == 0 )
      goto LABEL_295;
    if ( *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_301;
    if ( (v12 & 1) == 0 )
      goto LABEL_295;
    if ( *(_BYTE *)(v12 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      goto LABEL_301;
    if ( (v12 & 1) == 0 )
    {
LABEL_295:
      if ( v12 )
      {
        v131 = *(unsigned __int16 *)(v12 + 368);
        if ( v131 == 16 )
        {
          v132 = &ExpInterlockedPopEntrySListFault;
        }
        else
        {
          if ( v131 != 51 )
            goto LABEL_303;
          v132 = (void *)KeUserPopEntrySListFault;
        }
        if ( *(void **)(v12 + 360) == v132 )
        {
LABEL_301:
          if ( v15 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
        }
      }
    }
LABEL_303:
    v129 = MiResolveDemandZeroFault(v15, (_DWORD)v16, 0, a5, v12, v17, a6);
    goto LABEL_305;
  }
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    LODWORD(v67) = (_DWORD)a3;
    v116 = (__int64 *)((((unsigned __int64)a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v117 = *v116;
    do
    {
      v118 = v117;
      if ( (unsigned __int64)v116 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v116 <= 0xFFFFF6FB7DBED7F8uLL )
        v118 = MiReadPteShadow(v116, v117);
      v151 = v118;
      if ( (v118 & 1) == 0 || (v118 & 0x200) != 0 )
        return 3221225494LL;
      v119 = MI_GET_PAGE_FRAME_FROM_PTE(&v151);
    }
    while ( !(unsigned int)MiIsPfnInline(v119) );
    v120 = 48 * v119 - 0x58000000000LL;
    v149 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v120 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v149);
      while ( *(__int64 *)(v120 + 24) < 0 );
    }
    v121 = *v116;
    if ( (unsigned __int64)v116 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v116 <= 0xFFFFF6FB7DBED7F8uLL )
      v121 = MiReadPteShadow(v116, *v116);
    v151 = v121;
    if ( (v121 & 1) == 0 || (v121 & 0x200) != 0 || v119 != MI_GET_PAGE_FRAME_FROM_PTE(&v151) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v119 - 0x58000000000LL, v122, v123, v124)
      || (unsigned int)MiChargeForLockedPage(v125, 1) )
    {
      ++*(_WORD *)(v120 + 32);
    }
    v126 = (_QWORD *)(*(_QWORD *)(v120 + 8) | 0x8000000000000000uLL);
    if ( (*(_BYTE *)(v120 + 34) & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v127 = 0;
        while ( (*(_BYTE *)(v120 + 34) & 0x20) != 0 )
        {
          if ( (++v127 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v127);
        }
        MiLockPageInline(v120);
      }
      while ( (*(_BYTE *)(v120 + 34) & 0x20) != 0 );
      LODWORD(v67) = (_DWORD)v133;
    }
    *(_BYTE *)(v120 + 34) |= 0x20u;
    if ( (*(_QWORD *)(v120 + 24) & 0x4000000000000000LL) == 0 )
    {
      v128 = *v126;
      if ( (unsigned __int64)v126 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v126 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v128) = MiReadPteShadow(v126, *v126);
      if ( (v128 & 0x20) == 0 )
        MiWriteValidPteVolatile(v126, 1LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_273;
  }
  v18 = *v16;
  v137 = 1LL;
  v140 = 0LL;
  if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
    v18 = MiReadPteShadow(v16, v18);
  v136 = v18;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v18) || (v18 & 8) != 0 )
  {
    if ( a8 )
    {
      v22 = *(_DWORD *)(a8 + 48);
      if ( (v22 & 7) != 2 && (v22 & 0x100000) == 0 && *(__int64 *)(a8 + 120) >= 0 )
      {
        v23 = *(_QWORD *)(a8 + 72);
        v24 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)v23 + 60LL) & 0x3FF));
        v25 = *(_QWORD *)(v24 + 5952);
        if ( v25 < 0x4E20 )
        {
          v26 = 0LL;
          v27 = (unsigned __int16 **)(v24 + 4072);
          while ( 1 )
          {
            v28 = *v27;
            v29 = 0;
            if ( dword_140388544 )
              break;
LABEL_17:
            ++v26;
            ++v27;
            if ( v26 > 1 )
              goto LABEL_18;
          }
          while ( 1 )
          {
            v25 += *v28;
            if ( v25 >= 0x4E20 )
              break;
            ++v29;
            v28 += 8;
            if ( v29 >= dword_140388544 )
              goto LABEL_17;
          }
          v19 = v133;
          v21 = v155;
        }
        if ( !v11
          && ((v21 & 1) == 0 || *(_BYTE *)(v21 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
          && ((*(_BYTE *)(v152 + 192) & 0x40) == 0
           || (unsigned __int64)(*(_QWORD *)(v152 + 120) + 8LL) <= *(_QWORD *)(v152 + 152))
          && (BYTE12(xmmword_140401150) & 2) == 0 )
        {
          v45 = 8LL;
          if ( (unsigned __int64)v19 < *(_QWORD *)(a8 + 80) || (v46 = *(_QWORD *)(a8 + 88), (unsigned __int64)v19 > v46) )
          {
            v139 = *(__int64 **)(a8 + 72);
            v50 = v23 == 0;
            v47 = v141;
            v49 = 1LL;
            if ( v50 )
            {
              v30 = v133;
              goto LABEL_60;
            }
            MiGetProtoPteAddress(a8, v141 >> 12, 0, &v139);
            v30 = v133;
            if ( !v139 )
            {
LABEL_60:
              v45 = v49;
              goto LABEL_61;
            }
            v49 = (v139[1] + 8LL * *((unsigned int *)v139 + 11) - (__int64)v133) >> 3;
          }
          else
          {
            v47 = v141;
            v48 = v46 - (_QWORD)v19;
            v30 = v133;
            v49 = (v48 >> 3) + 1;
          }
          if ( v49 >= 8 )
          {
LABEL_61:
            v137 = 1LL;
            v51 = (unsigned __int64)(4096 - (unsigned int)(v135 & 0xFFF)) >> 3;
            v52 = 1LL;
            if ( v45 <= v51 )
              v51 = v45;
            v53 = (unsigned __int64)(4096 - ((unsigned __int16)v30 & 0xFFFu)) >> 3;
            if ( v51 <= v53 )
              v53 = v51;
            v54 = (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32))
                - (v47 >> 12)
                + 1;
            if ( v53 <= v54 )
              v54 = v53;
            v55 = (unsigned __int64)(4096 - (unsigned int)(v135 & 0xFFF)) >> 3;
            if ( !v55 )
              v55 = 1LL;
            if ( v54 > v55 )
              v54 = v55;
            if ( v54 > 1 )
            {
              do
              {
                if ( *(_QWORD *)(v135 + 8 * v52) )
                  break;
                ++v52;
              }
              while ( v52 < v54 );
              v137 = v52;
            }
            v20 = 0xFFFFF6FB7DBED000uLL;
            v140 = (v18 >> 5) & 0x1F;
            goto LABEL_20;
          }
          goto LABEL_60;
        }
LABEL_18:
        v20 = 0xFFFFF6FB7DBED000uLL;
      }
    }
  }
  v30 = v133;
LABEL_20:
  v134 = 0;
  v31 = (__int64 *)((((unsigned __int64)v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v32 = *v31;
  do
  {
    v33 = v32;
    if ( (unsigned __int64)v31 >= v20 && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
      v33 = MiReadPteShadow(v31, v32);
    v150 = v33;
    if ( (v33 & 1) == 0 || (v33 & 0x200) != 0 )
      return 3221225494LL;
    v34 = MI_GET_PAGE_FRAME_FROM_PTE(&v150);
    v36 = v34;
  }
  while ( v34 > qword_1403885E0 || MmPhysicalMemoryBlock && (*(_QWORD *)(v35 + 48 * v34) & 0x20000000000000LL) == 0 );
  v159 = 48 * v34;
  v37 = 48 * v34 - 0x58000000000LL;
  v143 = 0;
  v38 = _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL);
  v158 = v37;
  if ( v38 )
  {
    do
    {
      do
        KeYieldProcessorEx(&v143);
      while ( *(__int64 *)(v37 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) );
    v20 = 0xFFFFF6FB7DBED000uLL;
  }
  v39 = *v31;
  if ( (unsigned __int64)v31 >= v20 && (unsigned __int64)v31 <= 0xFFFFF6FB7DBED7F8uLL )
    v39 = MiReadPteShadow(v31, *v31);
  v150 = v39;
  if ( (v39 & 1) == 0 || (v39 & 0x200) != 0 || v36 != MI_GET_PAGE_FRAME_FROM_PTE(&v150) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v40 = *(_QWORD *)(v37 + 40);
  v41 = 0x8000000000000000uLL;
  v42 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v40 & 0x10000000000000LL) != 0 )
    goto LABEL_95;
  v43 = *(_WORD *)(v37 + 32);
  v44 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v43 )
  {
    if ( v43 == 1 )
    {
      if ( v44 )
        goto LABEL_79;
    }
    else if ( v43 != 2 || !v44 )
    {
      goto LABEL_95;
    }
    if ( (*(_BYTE *)(v37 + 34) & 8) == 0 )
      goto LABEL_95;
  }
LABEL_79:
  v56 = 0;
  if ( (v40 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v37 + 16) & 0x400LL) != 0 )
  {
    v56 = 1;
  }
  else
  {
    v42 = 0xFFFFF68000000000uLL;
    v57 = *(_QWORD *)(v37 + 8) | 0x8000000000000000uLL;
    if ( v57 <= 0xFFFFF6BFFFFFFF78uLL && v57 >= 0xFFFFF68000000000uLL )
      v56 = (*(_BYTE *)(v37 + 35) & 0x20) != 0;
  }
  v58 = (v40 >> 40) & 0x3FF;
  v59 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v58);
  if ( !v56 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v58), 1uLL, 4LL, v42) )
  {
    if ( v59 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v62 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v62 == CachedResidentAvailable )
          goto LABEL_95;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v59) )
    {
      if ( v56 )
        MiReturnCommit((__int64)v59, 1uLL);
      goto LABEL_96;
    }
LABEL_95:
    ++*(_WORD *)(v37 + 32);
  }
LABEL_96:
  v63 = (_QWORD *)(*(_QWORD *)(v37 + 8) | 0x8000000000000000uLL);
  if ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v64 = *(_BYTE *)(v37 + 34);
      v144 = 0;
      if ( (v64 & 0x20) != 0 )
      {
        do
          KeYieldProcessorEx(&v144);
        while ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 );
      }
      MiLockPageInline(v37);
    }
    while ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 );
    v14 = v157;
    v11 = v138;
  }
  *(_BYTE *)(v37 + 34) |= 0x20u;
  v65 = 0xFFFFF6FB7DBED000uLL;
  if ( (*(_QWORD *)(v37 + 24) & 0x4000000000000000LL) == 0 )
  {
    v66 = *v63;
    if ( (unsigned __int64)v63 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v63 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v66) = MiReadPteShadow(v63, *v63);
    if ( (v66 & 0x20) == 0 )
    {
      MiWriteValidPteVolatile(v63, 1LL);
      v65 = 0xFFFFF6FB7DBED000uLL;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v50 = v11 == 1;
  v67 = (unsigned __int64)v133;
  if ( v50 )
  {
    v42 = MiLockLeafPage(v133, 0LL, v41, v42);
    v65 = 0xFFFFF6FB7DBED000uLL;
    v68 = *v133;
    if ( (unsigned __int64)v133 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v133 <= 0xFFFFF6FB7DBED7F8uLL )
      v68 = MiReadPteShadow(v133, *v133);
    v136 = v68;
    if ( (v68 & 1) == 0 && (v68 & 0x400) == 0 )
    {
      v140 = (v68 >> 5) & 0x1F;
      if ( (_DWORD)v140 == 24 )
      {
        if ( v42 )
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v37, 0x11u);
        return 3221225477LL;
      }
    }
    if ( v42 )
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v137 == 1 )
  {
LABEL_273:
    v129 = MiResolveProtoPteFault(v156, v141, v135, v152, a6, v67, v155, a9, (__int64)&v142);
    v10 = v160;
    goto LABEL_305;
  }
  v70 = *(_WORD *)(**(_QWORD **)(v14 + 72) + 60LL) & 0x3FF;
  v71 = 0LL;
  v72 = *(_QWORD *)(qword_140388AF0 + 8 * v70);
  v138 = v72;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v73 = *(_QWORD *)v67;
          if ( v67 >= v65 && v67 <= 0xFFFFF6FB7DBED7F8uLL )
            v73 = MiReadPteShadow(v67, *(_QWORD *)v67);
          v153 = v73;
          if ( (v73 & 1) != 0 )
            break;
          if ( (v73 & 0x400) != 0 || (v73 & 0x800) == 0 )
            goto LABEL_183;
          if ( (unsigned int)MiInvalidPteConforms(v73, v70, v41, v42) )
          {
            v74 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v153);
            goto LABEL_130;
          }
        }
        v74 = MI_GET_PAGE_FRAME_FROM_PTE(&v153);
LABEL_130:
        v42 = v74;
      }
      while ( v74 > qword_1403885E0
           || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v74 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
      v75 = 48 * v74 - 0x58000000000LL;
      v145 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v145);
          while ( *(__int64 *)(v75 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) );
        v65 = 0xFFFFF6FB7DBED000uLL;
      }
      v76 = *(_QWORD *)v67;
      if ( v67 >= v65 && v67 <= 0xFFFFF6FB7DBED7F8uLL )
        v76 = MiReadPteShadow(v67, *(_QWORD *)v67);
      if ( v76 == v73 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v75 )
      goto LABEL_183;
    v77 = *(_QWORD *)v67;
    if ( v67 >= v65 && v67 <= 0xFFFFF6FB7DBED7F8uLL )
      v77 = MiReadPteShadow(v67, *(_QWORD *)v67);
    v136 = v77;
    if ( (v77 & 1) == 0 )
      break;
    v78 = MI_GET_PAGE_FRAME_FROM_PTE(&v136);
    v70 = *(_QWORD *)(v75 + 24) ^ (*(_QWORD *)(v75 + 24) ^ (*(_QWORD *)(v75 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v75 + 24) = v70;
    _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_179:
    v67 += 8LL;
    v133 = (__int64 *)v67;
    v71 = v75;
    v161[v134++] = v78;
    if ( v134 == v137 )
      goto LABEL_183;
  }
  v78 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v136);
  if ( (*(_BYTE *)(v75 + 34) & 0x20) != 0 || !(unsigned int)MiSufficientAvailablePages(v72, 160LL) )
    goto LABEL_182;
  if ( (unsigned int)MiUnlinkPageFromList(v75) )
  {
    v79 = *(_QWORD *)(v75 + 24);
    ++*(_WORD *)(v75 + 32);
    *(_QWORD *)(v75 + 24) = v79 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v75 + 34) = *(_BYTE *)(v75 + 34) & 0xF8 | 6;
    v80 = *(_QWORD *)(v75 + 16);
    if ( (v80 & 0x400) == 0 && (v80 & 4) != 0 && (unsigned __int16)v80 >> 12 == *(_DWORD *)(v72 + 1140) )
      v81 = MiCaptureDirtyBitToPfn(v75);
    else
      v81 = 0LL;
    v82 = *(_QWORD *)v67;
    if ( v67 >= 0xFFFFF6FB7DBED000uLL && v67 <= 0xFFFFF6FB7DBED7F8uLL )
      v82 = MiReadPteShadow(v67, *(_QWORD *)v67);
    v154 = v82;
    v83 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v154);
    v70 = 0xFFFFF68000000000uLL;
    v84 = MmProtectToPteMask[(v82 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | ((v83 & 0xFFFFFFFFFLL) << 12) | 0x21;
    if ( v67 < 0xFFFFF68000000000uLL || v67 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_172;
    if ( v67 >= 0xFFFFF6FB40000000uLL && v67 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v67 == ((v65 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        v84 = MmProtectToPteMask[(v82 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | ((v83 & 0xFFFFFFFFFLL) << 12) | 0x8000000000000021uLL;
      }
      else if ( !(_BYTE)v42 )
      {
        v84 = MmProtectToPteMask[(v82 >> 5) & 0x1F] & 0x7FFF000000000E7FLL | ((v83 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove(v67) )
        v84 |= 4uLL;
    }
    if ( v67 <= 0xFFFFF6BFFFFFFF78uLL )
      v84 |= 4uLL;
    if ( (unsigned int)MiIsAddressGlobal((__int64)(v67 << 25) >> 16) )
LABEL_172:
      v84 |= 0x100uLL;
    v85 = (((unsigned __int16)v84 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v84) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v154 = v85;
    v136 = v85;
    *(_QWORD *)v67 = v85;
    if ( v67 >= v65 && v67 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v67, v85);
    _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v81 )
    {
      v86 = v81;
      v72 = v138;
      MiReleasePageFileInfo(v138, v86, 0LL);
      v65 = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v72 = v138;
    }
    goto LABEL_179;
  }
  MiDiscardTransitionPte(v75);
LABEL_182:
  _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_183:
  if ( !v134 )
    goto LABEL_273;
  v87 = v158;
  v146 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v146);
    while ( *(__int64 *)(v87 + 24) < 0 );
  }
  *(_BYTE *)(v87 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v87) )
    MiPfnReferenceCountIsZero(v87, v159 / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v139 = 0LL;
  __addgsdword(0x2E98u, v134);
  v91 = 0LL;
  v137 = 0LL;
  if ( PfSnNumActiveTraces && (*(_DWORD *)(v71 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v71 + 16));
    v139 = PrototypePteDirect;
    v137 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v91 = MiStartingOffset(PrototypePteDirect, (unsigned __int64)&v133[-v134], 0xFFFFFFFF);
  }
  if ( v134 > 1 )
  {
    v93 = v134 - 1;
    UsedPtesHandle = MiGetUsedPtesHandle(v141);
    v147 = 0;
    v95 = UsedPtesHandle;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v147);
      while ( *(__int64 *)(v95 + 24) < 0 );
    }
    *(_QWORD *)(v95 + 16) ^= ((unsigned int)*(_QWORD *)(v95 + 16) ^ ((unsigned int)*(_QWORD *)(v95 + 16)
                                                                   + ((unsigned __int16)v93 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v93 <= 1 )
      MiIsAddressValid(*(_QWORD *)(v95 + 8) | 0x8000000000000000uLL);
  }
  v96 = MI_GET_PFN_FROM_PTE(((v135 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v88, v89, v90);
  v148 = 0;
  v99 = v96;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v96 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v148);
      while ( *(__int64 *)(v99 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v99 + 24), 0x3FuLL) );
    v97 = v135;
    v98 = 0xFFFFF68000000000uLL;
  }
  *(_QWORD *)(v99 + 24) ^= (*(_QWORD *)(v99 + 24) ^ (*(_QWORD *)(v99 + 24) + v134)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v100 = v140;
  v101 = v161;
  v102 = v139;
  v103 = v140 & 0xFFFFFFE7;
  v104 = 0xFAFFFFFFFFFFFFDFuLL;
  LODWORD(v138) = v140 & 0xFFFFFFE7;
  do
  {
    v105 = 48LL * *v101 - 0x58000000000LL;
    v106 = v103;
    v107 = *(_BYTE *)(v105 + 34) >> 6;
    if ( v107 != 1 )
    {
      if ( v107 )
      {
        if ( v107 == 2 )
          v106 = v103 | 0x18;
      }
      else
      {
        v106 = v103 | 8;
      }
    }
    v108 = (*v101 & 0xFFFFFFFFFLL) << 12;
    v109 = v108 | MmProtectToPteMask[v106] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v97 < v98 || v97 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v109 = v108 | MmProtectToPteMask[v106] & 0xFFFF000000000E7FuLL | 0x121;
    }
    else
    {
      v110 = (__int64)((v97 << 25) - (v98 << 25)) >> 16;
      if ( v97 >= 0xFFFFF6FB40000000uLL && v97 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v109 = v97 == v98 + 0x7B7DBEDF68LL
             ? v108 | MmProtectToPteMask[v106] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
             : v108 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v106] & 0x7FFF000000000E7FLL | 0x21;
        v111 = MiUserPdeOrAbove(v97);
        v97 = v135;
        v98 = 0xFFFFF68000000000uLL;
        if ( v111 )
          v109 |= 4uLL;
      }
      if ( v97 <= v98 + 0x3FFFFFFF78LL )
        v109 |= 4uLL;
      if ( (unsigned int)MiIsAddressGlobal(v110) )
        v109 |= 0x100uLL;
    }
    v112 = v104 & v109 | 0xA00000000000000LL;
    if ( v156 && (v112 & 0x800) != 0 && (v106 & 5) != 5 )
      v112 |= 0x42uLL;
    MiAllocateWsle(v152, v97, v105, v100, v112, 0LL);
    if ( v102 )
    {
      CurrentThread = KeGetCurrentThread();
      v114 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
      v115 = v114;
      if ( v114 )
      {
        if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v114, 0) )
          PfSnLogPageFaultCommon((__int64)v115, v137, *(_QWORD *)(v137 + 24), v91, 0);
        ExReleaseRundownProtection_0(v115 + 45);
      }
      v102 = v139;
      v91 += 4096LL;
    }
    ++v101;
    v103 = v138;
    v97 = v135 + 8;
    v100 = v140;
    v50 = v134-- == 1;
    v104 = 0xFAFFFFFFFFFFFFDFuLL;
    v135 += 8LL;
    v98 = 0xFFFFF68000000000uLL;
  }
  while ( !v50 );
  if ( v102 )
    MiDereferenceControlAreaFile(*v102, v137);
  return 272LL;
}
