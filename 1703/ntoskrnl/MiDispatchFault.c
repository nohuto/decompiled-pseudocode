/*
 * XREFs of MiDispatchFault @ 0x1400BF7D0
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14000D798 (MiChargePartitionResidentAvailable.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     PfSnCheckLoggingForThread @ 0x14004AF54 (PfSnCheckLoggingForThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtectionEx @ 0x140061C00 (ExAcquireRundownProtectionEx.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     PfSnLogPageFaultCommon @ 0x1400B5710 (PfSnLogPageFaultCommon.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDispatchFault(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
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
  unsigned int v12; // r15d
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  unsigned __int64 v16; // r9
  __int64 v17; // r10
  unsigned __int64 v18; // r11
  int v19; // ecx
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r9
  int v30; // r11d
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r10
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int16 v36; // ax
  __int64 v37; // rdx
  bool v38; // bl
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  ULONG_PTR *v41; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v44; // ett
  unsigned __int64 v45; // rdi
  unsigned int v46; // ebx
  unsigned __int64 v47; // rax
  __int64 v48; // r9
  unsigned __int64 v49; // r10
  ULONG_PTR v51; // rbx
  unsigned int v52; // esi
  struct _KEVENT *v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  ULONG_PTR v56; // r14
  __int64 v57; // rax
  unsigned __int64 v58; // r10
  __int64 v59; // r12
  __int64 v60; // rax
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rsi
  int v65; // edi
  __int64 v66; // r13
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // r10
  unsigned __int64 v69; // r12
  int v70; // eax
  int IsAddressGlobal; // eax
  unsigned __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned int v79; // esi
  __int64 *PrototypePteDirect; // rbx
  unsigned int v81; // edi
  __int64 UsedPtesHandle; // rax
  __int64 v83; // rbx
  __int64 v84; // rax
  unsigned __int64 v85; // r10
  unsigned __int64 v86; // r11
  __int64 v87; // rbx
  char v88; // r8
  __int64 *v89; // rax
  __int64 *v90; // r12
  int v91; // edx
  unsigned __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r13
  int v95; // edi
  char v96; // al
  __int64 v97; // r14
  unsigned __int64 v98; // rbx
  unsigned __int64 v99; // rsi
  int v100; // eax
  int v101; // eax
  __int64 v102; // rbx
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rbx
  signed __int64 v105; // rdx
  signed __int64 v106; // rax
  struct _EX_RUNDOWN_REF *v107; // rdi
  unsigned int v108; // edx
  BOOLEAN v109; // si
  KIRQL v110; // r14
  signed __int64 v111; // rax
  signed __int64 v112; // rtt
  signed __int64 Count; // rdx
  signed __int64 v114; // rax
  unsigned __int64 v115; // rdx
  char v116; // r8
  __int64 v117; // rsi
  __int64 v118; // rax
  unsigned __int64 v119; // rdi
  __int64 v120; // rbx
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rsi
  unsigned int v124; // edi
  unsigned int v125; // eax
  __int64 v126; // rax
  __int64 v127; // r10
  int v128; // r11d
  __int64 v129; // r10
  unsigned __int64 v130; // r11
  int v131; // eax
  void *v132; // rax
  unsigned int v133; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v134; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v135; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v136; // [rsp+68h] [rbp-98h]
  unsigned __int64 v137; // [rsp+70h] [rbp-90h]
  unsigned __int64 v138; // [rsp+78h] [rbp-88h]
  struct _KEVENT *v139; // [rsp+80h] [rbp-80h]
  __int64 *v140; // [rsp+88h] [rbp-78h] BYREF
  __int64 v141; // [rsp+90h] [rbp-70h]
  unsigned __int64 v142; // [rsp+98h] [rbp-68h]
  PVOID v143; // [rsp+A0h] [rbp-60h] BYREF
  int v144; // [rsp+A8h] [rbp-58h] BYREF
  int v145; // [rsp+ACh] [rbp-54h] BYREF
  int v146; // [rsp+B0h] [rbp-50h] BYREF
  int v147; // [rsp+B4h] [rbp-4Ch] BYREF
  int v148; // [rsp+B8h] [rbp-48h] BYREF
  int v149; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v150; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v151; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v152; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v153; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v154; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v155; // [rsp+E8h] [rbp-18h]
  __int64 v156; // [rsp+F0h] [rbp-10h]
  __int64 v157; // [rsp+F8h] [rbp-8h]
  __int64 v158; // [rsp+100h] [rbp+0h]
  _QWORD *v159; // [rsp+108h] [rbp+8h]
  _QWORD v160[8]; // [rsp+110h] [rbp+10h] BYREF

  v10 = a10;
  v11 = a4;
  v12 = 0;
  v13 = a8;
  LODWORD(v139) = a4;
  v134 = a3;
  v142 = a2;
  *a10 = 0LL;
  v155 = a5;
  v158 = a7;
  v157 = a8;
  v159 = a10;
  v14 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = a1 & 2;
  v143 = MmBadPointer;
  v137 = v14;
  v156 = v15;
  if ( !a3 )
  {
    v126 = MI_READ_PTE_LOCK_FREE(v14);
    v135 = v126;
    if ( (v126 & 1) != 0 || !v126 )
      return 0LL;
    if ( (v126 & 0x800) != 0 )
    {
      v125 = MiResolveTransitionFault(v128, v14, 0LL, v127, v15, a6, a9, (__int64)&v143);
      goto LABEL_295;
    }
    if ( (MI_READ_PTE_LOCK_FREE(&v135) & 4) != 0 )
    {
      v125 = MiResolvePageFileFault(v130, v14, 0LL, a5, v129, &v143);
LABEL_295:
      v12 = v125;
      if ( v125 == -1073532109 )
        *v10 = v143;
      return v12;
    }
    if ( (v129 & 1) != 0 && *(_BYTE *)(v129 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      if ( (*(_DWORD *)((v129 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0 )
        return v12;
      goto LABEL_292;
    }
    if ( (v129 & 1) != 0 )
    {
      if ( *(_BYTE *)(v129 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
      {
LABEL_285:
        v125 = MiResolveDemandZeroFault(v130, v14, 0LL, a5, v129, v15, a6);
        goto LABEL_295;
      }
    }
    else
    {
      if ( !v129 )
        goto LABEL_285;
      v131 = *(unsigned __int16 *)(v129 + 368);
      if ( v131 == 16 )
      {
        v132 = &ExpInterlockedPopEntrySListFault;
      }
      else
      {
        if ( v131 != 51 )
          goto LABEL_285;
        v132 = (void *)KeUserPopEntrySListFault;
      }
      if ( *(void **)(v129 + 360) != v132 )
        goto LABEL_285;
    }
LABEL_292:
    if ( v130 >= 0xFFFF800000000000uLL )
      return 3221225477LL;
    goto LABEL_285;
  }
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    v117 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v118 = MI_READ_PTE_LOCK_FREE(v117);
      v152 = v118;
      if ( (v118 & 1) == 0 || (v118 & 0x200) != 0 )
        return 3221225494LL;
      v119 = MI_GET_PAGE_FRAME_FROM_PTE(&v152);
    }
    while ( !MiIsPfnInline(v119) );
    v149 = 0;
    v120 = 48 * v119 - 0x58000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v120 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v149);
      while ( (*(_QWORD *)(v120 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v121 = MI_READ_PTE_LOCK_FREE(v117);
    v152 = v121;
    if ( (v121 & 1) == 0 || (v121 & 0x200) != 0 || v119 != MI_GET_PAGE_FRAME_FROM_PTE(&v152) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v119 - 0x58000000000LL)
      || (unsigned int)MiChargeForLockedPage(v122, 1LL) )
    {
      ++*(_WORD *)(v120 + 32);
    }
    v123 = *(_QWORD *)(v120 + 8) | 0x8000000000000000uLL;
    v61 = (*(_BYTE *)(v120 + 34) & 0x20) == 0;
    v153 = v123;
    if ( !v61 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v124 = 0;
        while ( (*(_BYTE *)(v120 + 34) & 0x20) != 0 )
        {
          if ( (++v124 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v124);
        }
        MiLockPageInline(v120);
      }
      while ( (*(_BYTE *)(v120 + 34) & 0x20) != 0 );
      v123 = v153;
    }
    *(_BYTE *)(v120 + 34) |= 0x20u;
    if ( (*(_QWORD *)(v120 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v123) & 0x20) == 0 )
      MiWriteValidPteVolatile(v123, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_271;
  }
  v136 = 1LL;
  v141 = 0LL;
  v135 = MI_READ_PTE_LOCK_FREE(v14);
  if ( (unsigned int)MiIsPrototypePteVadLookup(v135) || (v135 & 8) != 0 )
  {
    if ( a8 )
    {
      v19 = *(_DWORD *)(a8 + 48);
      if ( (v19 & 7) != 2 && (v19 & 0x100000) == 0 && (*(_QWORD *)(a8 + 120) & 0x8000000000000000uLL) == 0 )
      {
        v20 = *(_QWORD *)(a8 + 72);
        if ( *(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)v20 + 60LL) & 0x3FF)) + 5760LL) > 0x4E20uLL
          && !v11
          && ((v17 & 1) == 0 || *(_BYTE *)(v17 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
          && ((*(_BYTE *)(a5 + 192) & 0x40) == 0
           || (unsigned __int64)(*(_QWORD *)(a5 + 120) + 8LL) <= *(_QWORD *)(a5 + 152))
          && (BYTE12(xmmword_1403E4010) & 2) == 0 )
        {
          v21 = 8LL;
          if ( v16 < *(_QWORD *)(a8 + 80) || (v22 = *(_QWORD *)(a8 + 88), v16 > v22) )
          {
            v140 = *(__int64 **)(a8 + 72);
            v23 = 1LL;
            if ( !v20 )
              goto LABEL_23;
            MiGetProtoPteAddress(a8, v18 >> 12, 0, &v140);
            if ( !v140 )
              goto LABEL_23;
            v16 = v134;
            v23 = (__int64)(v140[1] + 8LL * *((unsigned int *)v140 + 11) - v134) >> 3;
          }
          else
          {
            v23 = ((__int64)(v22 - v16) >> 3) + 1;
          }
          if ( v23 >= 8 )
          {
LABEL_24:
            v136 = 1LL;
            v24 = 1LL;
            if ( v21 > (unsigned __int64)(4096 - (unsigned int)(v137 & 0xFFF)) >> 3 )
              v21 = (unsigned __int64)(4096 - (unsigned int)(v137 & 0xFFF)) >> 3;
            if ( v21 > (unsigned __int64)(4096 - (unsigned int)(v16 & 0xFFF)) >> 3 )
              v21 = (unsigned __int64)(4096 - (unsigned int)(v16 & 0xFFF)) >> 3;
            if ( v21 > (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32))
                     - (v142 >> 12)
                     + 1 )
              v21 = (*(unsigned int *)(a8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a8 + 33) << 32))
                  - (v142 >> 12)
                  + 1;
            v25 = (unsigned __int64)(4096 - (unsigned int)(v137 & 0xFFF)) >> 3;
            if ( !v25 )
              v25 = 1LL;
            if ( v21 > v25 )
              v21 = v25;
            if ( v21 > 1 )
            {
              do
              {
                if ( *(_QWORD *)(v137 + 8 * v24) )
                  break;
                ++v24;
              }
              while ( v24 < v21 );
              v136 = v24;
            }
            v141 = (v135 >> 5) & 0x1F;
            goto LABEL_39;
          }
LABEL_23:
          v16 = v134;
          v21 = v23;
          goto LABEL_24;
        }
      }
    }
  }
LABEL_39:
  v133 = 0;
  v26 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v27 = MI_READ_PTE_LOCK_FREE(v26);
    v150 = v27;
    if ( (v27 & 1) == 0 || (v27 & 0x200) != 0 )
      return 3221225494LL;
    v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v150);
    v31 = v28;
  }
  while ( v28 > v32 || v29 && (*(_QWORD *)(48 * v28 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
  v33 = 48 * v28 - 0x58000000000LL;
  v144 = v30;
  v153 = v33;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v144);
    while ( (*(_QWORD *)(v33 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v34 = MI_READ_PTE_LOCK_FREE(v26);
  v150 = v34;
  if ( (v34 & 1) == 0 || (v34 & 0x200) != 0 || v31 != MI_GET_PAGE_FRAME_FROM_PTE(&v150) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v35 = *(_QWORD *)(v33 + 40);
  if ( (v35 & 0x10000000000000LL) != 0 )
    goto LABEL_75;
  v36 = *(_WORD *)(v33 + 32);
  v37 = *(_QWORD *)(v33 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v36 )
  {
    if ( v36 == 1 )
    {
      if ( v37 )
        goto LABEL_59;
    }
    else if ( v36 != 2 || !v37 )
    {
      goto LABEL_75;
    }
    if ( (*(_BYTE *)(v33 + 34) & 8) == 0 )
      goto LABEL_75;
  }
LABEL_59:
  v38 = 0;
  if ( (v35 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v33 + 16) & 0x400LL) != 0 )
  {
    v38 = 1;
  }
  else
  {
    v39 = *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL;
    if ( v39 <= 0xFFFFF6BFFFFFFF78uLL && v39 >= 0xFFFFF68000000000uLL )
      v38 = ((*(unsigned __int8 *)(v33 + 35) >> 5) & 1) != 0;
  }
  v40 = (v35 >> 40) & 0x3FF;
  v41 = *(ULONG_PTR **)(qword_14036C8F8 + 8 * v40);
  if ( !v38 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_14036C8F8 + 8 * v40), 1LL, 4LL) )
  {
    if ( v41 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v44 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v44 == CachedResidentAvailable )
          goto LABEL_75;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v41, 1uLL, 0xFFFFFFFFLL) )
    {
      if ( v38 )
        MiReturnCommit(v41, 1LL);
      goto LABEL_76;
    }
LABEL_75:
    ++*(_WORD *)(v33 + 32);
  }
LABEL_76:
  v45 = *(_QWORD *)(v33 + 8) | 0x8000000000000000uLL;
  if ( (*(_BYTE *)(v33 + 34) & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v46 = 0;
      while ( (*(_BYTE *)(v33 + 34) & 0x20) != 0 )
      {
        if ( (++v46 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v46);
      }
      MiLockPageInline(v33);
    }
    while ( (*(_BYTE *)(v33 + 34) & 0x20) != 0 );
    v13 = v157;
    v11 = (int)v139;
  }
  *(_BYTE *)(v33 + 34) |= 0x20u;
  if ( (*(_QWORD *)(v33 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v45) & 0x20) == 0 )
    MiWriteValidPteVolatile(v45, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 == 1 )
  {
    MiLockLeafPage(v134, 0LL);
    v47 = MI_READ_PTE_LOCK_FREE(v134);
    v135 = v47;
    if ( (v47 & 1) == 0 && (v47 & 0x400) == 0 )
    {
      v141 = (v47 >> 5) & 0x1F;
      if ( (_DWORD)v141 == 24 )
      {
        if ( v48 )
          _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v33, 0x11u);
        return 3221225477LL;
      }
    }
    if ( v48 )
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v49 = v134;
  }
  if ( v136 == 1 )
  {
LABEL_271:
    v125 = MiResolveProtoPteFault(v156, v142, v137, v155, a6, v134, v158, a9, &v143);
    v10 = v159;
    goto LABEL_295;
  }
  v51 = 0LL;
  v52 = 0;
  v53 = *(struct _KEVENT **)(qword_14036C8F8 + 8LL * (*(_WORD *)(**(_QWORD **)(v13 + 72) + 60LL) & 0x3FF));
  v139 = v53;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v54 = MI_READ_PTE_LOCK_FREE(v49);
          v151 = v54;
          if ( (v54 & 1) != 0 )
            break;
          if ( (v54 & 0x400) != 0 || (v54 & 0x800) == 0 )
            goto LABEL_158;
          if ( (unsigned int)MiInvalidPteConforms(v54) )
          {
            v55 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v151);
            goto LABEL_106;
          }
        }
        v55 = MI_GET_PAGE_FRAME_FROM_PTE(&v151);
LABEL_106:
        ;
      }
      while ( v55 > qword_14036C290
           || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v55 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
      v56 = 48 * v55 - 0x58000000000LL;
      v145 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v145);
          while ( (*(_QWORD *)(v56 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) );
        v49 = v134;
      }
      v57 = MI_READ_PTE_LOCK_FREE(v49);
      if ( v57 == v151 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v56 )
      goto LABEL_158;
    v135 = MI_READ_PTE_LOCK_FREE(v49);
    if ( (v135 & 1) == 0 )
      break;
    v59 = MI_GET_PAGE_FRAME_FROM_PTE(&v135);
    *(_QWORD *)(v56 + 24) ^= (*(_QWORD *)(v56 + 24) ^ (*(_QWORD *)(v56 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_154:
    v74 = v52;
    v49 = v58 + 8;
    ++v52;
    v134 = v49;
    v51 = v56;
    v133 = v52;
    v160[v74] = v59;
    if ( v52 == v136 )
      goto LABEL_158;
  }
  v60 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v135);
  v61 = (*(_BYTE *)(v56 + 34) & 0x20) == 0;
  v59 = v60;
  v138 = v60;
  if ( !v61 || *(_QWORD *)&v53[240].Header.Lock < 0xA0uLL )
    goto LABEL_157;
  if ( (unsigned int)MiUnlinkPageFromList(v56) )
  {
    v62 = *(_QWORD *)(v56 + 24);
    ++*(_WORD *)(v56 + 32);
    *(_QWORD *)(v56 + 24) = v62 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v56 + 34) = *(_BYTE *)(v56 + 34) & 0xF8 | 6;
    v63 = *(_QWORD *)(v56 + 16);
    if ( (v63 & 0x400) == 0
      && (v63 & 4) != 0
      && (unsigned __int16)v63 >> 12 == HIDWORD(v53[49].Header.WaitListHead.Flink) )
    {
      v64 = MiCaptureDirtyBitToPfn(v56);
    }
    else
    {
      v64 = 0LL;
    }
    v154 = MI_READ_PTE_LOCK_FREE(v134);
    v65 = (v154 >> 5) & 0x1F | 0x20000000;
    v66 = (v154 >> 5) & 0x1F;
    v67 = MmProtectToPteMask[v66] & 0xFFFF000000000E7FuLL | ((MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v154) & 0xFFFFFFFFFLL) << 12) | 0x21;
    if ( v68 < 0xFFFFF68000000000uLL || v68 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_139;
    v69 = (__int64)(v68 << 25) >> 16;
    if ( v68 >= 0xFFFFF6FB40000000uLL && v68 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v68 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v67 |= 0x8000000000000000uLL;
      }
      else if ( (v65 & 0x4000000) == 0 )
      {
        v67 &= ~0x8000000000000000uLL;
      }
      v70 = MiUserPdeOrAbove(v68);
      v68 = v134;
      if ( v70 )
        v67 |= 4uLL;
    }
    if ( v68 <= 0xFFFFF6BFFFFFFF78uLL )
      v67 |= 4uLL;
    IsAddressGlobal = MiIsAddressGlobal(v69);
    v59 = v138;
    if ( IsAddressGlobal )
LABEL_139:
      v67 |= 0x100uLL;
    if ( v65 < 0 && (v66 & 5) == 4 )
      v67 |= 0x42uLL;
    if ( (v65 & 0x40000000) != 0 )
      v67 &= ~4uLL;
    v72 = ((unsigned __int16)v67 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100 ^ v67;
    if ( (v65 & 0x8000000) != 0 )
      v72 &= ~0x100uLL;
    if ( (v65 & 0x4000000) != 0 )
      v72 |= 0x80uLL;
    v154 = v72 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v135 = v154;
    *(_QWORD *)v68 = v154;
    if ( (unsigned int)MiPteInShadowRange(v68) )
      MiWritePteShadow(v73);
    _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v53 = v139;
    if ( v64 )
    {
      MiReleasePageFileInfo(v139, v64, 0);
      v58 = v134;
    }
    v52 = v133;
    goto LABEL_154;
  }
  MiDiscardTransitionPte(v56);
LABEL_157:
  _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_158:
  if ( !v52 )
    goto LABEL_271;
  v75 = v153;
  v146 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v146);
    while ( (*(_QWORD *)(v75 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_BYTE *)(v75 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v75) )
    MiPfnReferenceCountIsZero(v75, (v75 + 0x58000000000LL) / 48, v77);
  _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v79 = v133;
  v140 = 0LL;
  __addgsdword(0x2E98u, v133);
  v138 = 0LL;
  v136 = 0LL;
  if ( PfSnNumActiveTraces && (*(_DWORD *)(v51 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(v51 + 16), v76, v77, v78);
    v140 = PrototypePteDirect;
    v138 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v136 = MiStartingOffset(PrototypePteDirect, v134 - 8LL * v133, 0xFFFFFFFFLL);
  }
  if ( v133 > 1 )
  {
    v81 = v133 - 1;
    UsedPtesHandle = MiGetUsedPtesHandle(v142, v76, v77, v78);
    v147 = 0;
    v83 = UsedPtesHandle;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v83 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v147);
      while ( (*(_QWORD *)(v83 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_QWORD *)(v83 + 16) ^= ((unsigned int)*(_QWORD *)(v83 + 16) ^ ((unsigned int)*(_QWORD *)(v83 + 16)
                                                                   + ((unsigned __int16)v81 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v81 <= 1 )
      MiIsAddressValid(*(_QWORD *)(v83 + 8) | 0x8000000000000000uLL);
  }
  v84 = MI_GET_PFN_FROM_PTE(((v137 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v76, v77, v78);
  v148 = 0;
  v87 = v84;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v84 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v148);
      while ( (*(_QWORD *)(v87 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 24), 0x3FuLL) );
    v85 = v137;
    v86 = 0xFFFFF68000000000uLL;
  }
  *(_QWORD *)(v87 + 24) ^= (*(_QWORD *)(v87 + 24) ^ (*(_QWORD *)(v87 + 24) + v133)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v88 = v141;
  v89 = v160;
  v90 = v140;
  v91 = v141 & 0xFFFFFFE7;
  v142 = (unsigned __int64)v160;
  LODWORD(v139) = v141 & 0xFFFFFFE7;
  v92 = 0xFAFFFFFFFFFFFFDFuLL;
  while ( 2 )
  {
    v93 = *v89;
    v94 = 48 * *v89 - 0x58000000000LL;
    v95 = v91;
    v96 = *(_BYTE *)(v94 + 34) >> 6;
    if ( v96 != 1 )
    {
      if ( v96 )
      {
        if ( v96 == 2 )
          v95 = v91 | 0x18;
      }
      else
      {
        v95 = v91 | 8;
      }
    }
    v97 = v95 & 0x1F;
    v98 = ((v93 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v97] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v85 < v86 || v85 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_196;
    v99 = (__int64)((v85 << 25) - (v86 << 25)) >> 16;
    if ( v85 >= 0xFFFFF6FB40000000uLL && v85 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v85 == v86 + 0x7B7DBEDF68LL )
      {
        v98 = ((v93 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v97] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
      }
      else if ( (v95 & 0x4000000) == 0 )
      {
        v98 = ((v93 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v97] & 0x7FFF000000000E7FLL | 0x21;
      }
      v100 = MiUserPdeOrAbove(v85);
      v85 = v137;
      v86 = 0xFFFFF68000000000uLL;
      if ( v100 )
        v98 |= 4uLL;
    }
    if ( v85 <= v86 + 0x3FFFFFFF78LL )
      v98 |= 4uLL;
    v101 = MiIsAddressGlobal(v99);
    v79 = v133;
    if ( v101 )
LABEL_196:
      v98 |= 0x100uLL;
    if ( v95 < 0 && (v95 & 5) == 4 )
      v98 |= 0x42uLL;
    if ( (v95 & 0x40000000) != 0 )
      v98 &= ~4uLL;
    if ( (v95 & 0x20000000) != 0 )
      v98 ^= ((unsigned __int16)v98 ^ (unsigned __int16)((unsigned __int8)word_14036C2A8 << 8)) & 0x100;
    if ( (v95 & 0x8000000) != 0 )
      v98 &= ~0x100uLL;
    if ( (v95 & 0x4000000) != 0 )
      v98 |= 0x80uLL;
    v102 = v92 & v98 | 0xA00000000000000LL;
    v135 = v102;
    if ( v156 && (v102 & 0x800) != 0 && (v95 & 5) != 5 )
    {
      v102 |= 0x42uLL;
      v135 = v102;
    }
    MiAllocateWsle(v155, (__int64 *)v85, v94, v88, v102, 0LL);
    if ( v90 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      _m_prefetchw(&Process[1].ThreadSeed[4]);
      v105 = *(_QWORD *)&Process[1].ThreadSeed[4];
      if ( (v105 & 0xF) != 0 )
      {
        do
        {
          v106 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].ThreadSeed[4], v105 - 1, v105);
          if ( v105 == v106 )
            break;
          v105 = v106;
        }
        while ( (v106 & 0xF) != 0 );
      }
      v107 = (struct _EX_RUNDOWN_REF *)(v105 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (v105 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        v108 = v105 & 0xF;
        if ( v108 > 1 )
          goto LABEL_234;
        if ( v108 )
        {
          if ( ExAcquireRundownProtectionEx(v107 + 45, 0xFu) )
          {
            _m_prefetchw(&Process[1].ThreadSeed[4]);
            v111 = *(_QWORD *)&Process[1].ThreadSeed[4];
            while ( (v111 & 0xF) == 0 )
            {
              if ( v107 != (struct _EX_RUNDOWN_REF *)(v111 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v112 = v111;
              v111 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&Process[1].ThreadSeed[4],
                       v111 + 15,
                       v111);
              if ( v112 == v111 )
                goto LABEL_234;
            }
            _m_prefetchw(&v107[45]);
            Count = v107[45].Count;
            if ( (Count & 1) != 0 )
            {
LABEL_231:
              v115 = Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v115, 0xFFFFFFFFFFFFFFF1uLL) == 15
                && !_interlockedbittestandreset((volatile signed __int32 *)(v115 + 32), 0) )
              {
                KeSetEvent((PRKEVENT)(v115 + 8), 0, 0);
              }
            }
            else
            {
              while ( 1 )
              {
                v114 = _InterlockedCompareExchange64((volatile signed __int64 *)&v107[45], Count - 30, Count);
                v61 = Count == v114;
                Count = v114;
                if ( v61 )
                  break;
                if ( (v114 & 1) != 0 )
                  goto LABEL_231;
              }
            }
          }
LABEL_234:
          if ( v107 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v107, 0) )
              PfSnLogPageFaultCommon((__int64)v107, v138, *(_QWORD *)(v138 + 24), v136, v116);
            ExReleaseRundownProtection(v107 + 45);
          }
        }
        else
        {
          v109 = 1;
          v110 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
          v107 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)&Process[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL);
          if ( v107 )
            v109 = ExAcquireRundownProtection(v107 + 45);
          KxReleaseSpinLock(&qword_14036DFD0);
          __writecr8(v110);
          if ( v109 )
            goto LABEL_234;
        }
      }
      v136 += 4096LL;
      v90 = v140;
      v79 = v133;
    }
    v89 = (__int64 *)(v142 + 8);
    v91 = (int)v139;
    v85 = v137 + 8;
    v88 = v141;
    v61 = v79-- == 1;
    v133 = v79;
    v92 = 0xFAFFFFFFFFFFFFDFuLL;
    v142 += 8LL;
    v137 += 8LL;
    v86 = 0xFFFFF68000000000uLL;
    if ( !v61 )
      continue;
    break;
  }
  if ( v90 )
    MiDereferenceControlAreaFile(*v90, v138);
  return 272LL;
}
