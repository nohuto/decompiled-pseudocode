/*
 * XREFs of MiMakePageAvoidRead @ 0x140076C10
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140001280 (MiIdentifyPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiIsAddressGlobal @ 0x140079510 (MiIsAddressGlobal.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiPfnZeroingNeeded @ 0x1400C4A48 (MiPfnZeroingNeeded.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     MiLockAndInsertPageInFreeList @ 0x140150B54 (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017C61C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1406E23F8 (MiMapCacheExceptionFilter.c)
 *     MxFillPhysicalPage @ 0x14082C5B4 (MxFillPhysicalPage.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  int v8; // r15d
  __int64 PteShadow; // rax
  __int64 v10; // rbx
  int v11; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // dx
  char v14; // cl
  unsigned int v15; // edx
  ULONG_PTR Page; // rax
  unsigned int v17; // r12d
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // r8
  char v22; // r9
  unsigned int v23; // eax
  signed __int64 i; // rdx
  signed __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  ULONG_PTR v28; // rdi
  __int64 v29; // r15
  unsigned int v30; // r14d
  unsigned __int64 v31; // rbx
  char v32; // cl
  int v33; // eax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v35; // r9
  __int64 v36; // rbx
  char v37; // si
  int v38; // eax
  __int64 v39; // rsi
  ULONG_PTR v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rcx
  char *v43; // rsi
  size_t v44; // rax
  size_t v45; // r14
  unsigned __int64 v46; // r9
  __int64 *v47; // rbx
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 CurrentIrql; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r9
  unsigned __int64 v59; // r10
  char v60; // bl
  int IsPfnCommitNotCharged; // eax
  char v62; // r11
  __int64 v63; // r10
  ULONG_PTR *v64; // rsi
  struct _KPRCB *v65; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v67; // ett
  int v68; // r14d
  _QWORD *v69; // rbx
  unsigned __int8 v70; // bl
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 *v74; // r11
  unsigned int v75; // esi
  __int64 v76; // rax
  __int64 v77; // r11
  __int64 v78; // rbx
  unsigned int v79; // esi
  __int64 ContainingPageTable; // rax
  __int64 v81; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v83; // edx
  int v84; // eax
  __int64 v85; // r14
  unsigned __int8 v86; // si
  signed __int32 v87; // edx
  bool v88; // zf
  signed __int32 v89; // eax
  unsigned int v90; // r9d
  ULONG_PTR v91; // rbx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // r8
  __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rcx
  unsigned __int64 v97; // r10
  unsigned __int64 v98; // rcx
  unsigned int v99; // r14d
  __int16 v100; // bx
  __int16 v101; // bx
  __int64 v102; // rax
  unsigned __int64 v103; // r8
  char v104; // al
  int v105; // ecx
  unsigned __int64 v106; // rdx
  __int64 v107; // rsi
  unsigned __int64 v108; // r8
  struct _KPRCB *v109; // r9
  __int64 v110; // rdx
  signed __int32 v111; // eax
  unsigned __int8 v112; // al
  bool v113; // cf
  char v114[3]; // [rsp+31h] [rbp-147h] BYREF
  unsigned int v115; // [rsp+34h] [rbp-144h]
  unsigned int Size; // [rsp+38h] [rbp-140h]
  int Size_4; // [rsp+3Ch] [rbp-13Ch]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-138h]
  char v119; // [rsp+48h] [rbp-130h]
  int v120; // [rsp+4Ch] [rbp-12Ch]
  __int64 v121; // [rsp+50h] [rbp-128h]
  unsigned __int64 v122; // [rsp+58h] [rbp-120h]
  int v123; // [rsp+60h] [rbp-118h]
  unsigned int v124; // [rsp+64h] [rbp-114h]
  int v125; // [rsp+68h] [rbp-110h] BYREF
  int v126; // [rsp+6Ch] [rbp-10Ch]
  int v127; // [rsp+70h] [rbp-108h]
  _QWORD *v128; // [rsp+78h] [rbp-100h]
  int v129; // [rsp+80h] [rbp-F8h] BYREF
  int v130; // [rsp+84h] [rbp-F4h] BYREF
  int v131; // [rsp+88h] [rbp-F0h] BYREF
  int v132; // [rsp+8Ch] [rbp-ECh] BYREF
  int v133; // [rsp+90h] [rbp-E8h] BYREF
  size_t v134; // [rsp+98h] [rbp-E0h]
  __int64 v135; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 PrototypePteDirect; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v137; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 *v138; // [rsp+B8h] [rbp-C0h]
  _DWORD *v139; // [rsp+C0h] [rbp-B8h]
  __int64 v140; // [rsp+C8h] [rbp-B0h]
  __int64 v141; // [rsp+D0h] [rbp-A8h]
  void *Src; // [rsp+D8h] [rbp-A0h]
  __int64 v143; // [rsp+E0h] [rbp-98h]
  __int64 v144; // [rsp+E8h] [rbp-90h]
  __int64 v145; // [rsp+F0h] [rbp-88h]
  __int64 v146[3]; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v147; // [rsp+110h] [rbp-68h]
  _QWORD v148[2]; // [rsp+120h] [rbp-58h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v134 = a4;
  Size = a3;
  Src = a2;
  v122 = a1;
  v128 = (_QWORD *)a1;
  v138 = a6;
  v139 = a7;
  v8 = 0;
  *a7 = 0;
  PteShadow = *a6;
  if ( (unsigned __int64)a6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a6 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a6, *a6);
  v137 = PteShadow;
  PrototypePteDirect = MiGetPrototypePteDirect(PteShadow);
  v143 = PrototypePteDirect;
  v141 = *(_QWORD *)PrototypePteDirect;
  v144 = v141;
  v10 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v141 + 60) & 0x3FF));
  v126 = 0;
  v120 = 0;
  v11 = (*(_DWORD *)(v141 + 56) >> 20) & 0x3F;
  if ( v11 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)v11 - 1) << byte_140388501;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v14 = byte_140388502;
  v15 = NodeShiftedColor | (unsigned __int16)(++LOWORD(CurrentPrcb->PageColor) & ((1 << v14) - 1));
  if ( a4 == 4096 )
  {
    Page = MiGetPage(v10, v15, 0);
    v17 = 2;
  }
  else
  {
    v17 = 2;
    Page = MiGetPage(v10, v15, 2u);
  }
  BugCheckParameter2 = Page;
  if ( Page == -1LL )
  {
    MiWaitForFreePage(v10);
    return 1LL;
  }
  v19 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v145 = v19;
  v20 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v138);
  v22 = v20;
  v115 = v20;
  LODWORD(v121) = v20;
  if ( v20 == 31 )
  {
    v17 = 1;
  }
  else
  {
    v23 = v20 >> 3;
    if ( v23 != 3 || (v22 & 7) == 0 )
      v17 = v23 != 1;
  }
  Size_4 = 0;
  v127 = 0;
  if ( a4 != 4096 && (unsigned int)MiPfnZeroingNeeded(v19, v17, v21) )
    v8 = 1;
  if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v17 )
    MiChangePageAttribute(v19, v17, 0LL);
  for ( i = *(_QWORD *)(v19 + 24); ; i = v25 )
  {
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v25 )
      break;
  }
  v27 = MiReservePtes(&qword_140389360, 1LL);
  v140 = v27;
  if ( v27 )
  {
    v37 = 4;
    if ( (unsigned int)MiIsPfnInline(BugCheckParameter2) )
    {
      v38 = *(unsigned __int8 *)(48 * BugCheckParameter2 - 0x58000000000LL + 34) >> 6;
      if ( !v38 || v38 == 3 )
      {
        v37 = 12;
      }
      else if ( v38 == 2 )
      {
        v37 = 28;
      }
    }
    v39 = v37 & 0x1F;
    v40 = ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v27 < 0xFFFFF68000000000uLL || v27 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_66;
    if ( v27 >= 0xFFFFF6FB40000000uLL && v27 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v40 = v27 == 0xFFFFF6FB7DBEDF68uLL
          ? ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v39] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v39] & 0x7FFF000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v27) )
        v40 |= 4uLL;
    }
    if ( v27 <= 0xFFFFF6BFFFFFFF78uLL )
      v40 |= 4uLL;
    if ( (unsigned int)MiIsAddressGlobal((__int64)(v27 << 25) >> 16) )
LABEL_66:
      v40 |= 0x100uLL;
    if ( (v39 & 5) == 4 )
      v40 |= 0x42uLL;
    v41 = (((unsigned __int16)v40 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v40) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    *(_QWORD *)v27 = v41;
    if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v27, v41);
    v42 = (__int64)(v27 << 25) >> 16;
    v43 = (char *)(Size + v42);
    if ( v8 )
    {
      if ( Size )
        memset((void *)v42, 0, Size);
      v44 = v134;
      v45 = 4096 - v134 - Size;
      if ( !v45 )
        goto LABEL_78;
      memset(&v43[v134], 0, v45);
    }
    v44 = v134;
LABEL_78:
    v123 = 0;
    memmove(v43, Src, v44);
    MiReleasePtes((__int64)&qword_140389360, v27, 1u, v46);
    v126 = 1;
    goto LABEL_79;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v19, v26);
    return 4LL;
  }
  if ( v8 )
  {
    v28 = 48 * BugCheckParameter2 - 0x58000000000LL;
    v29 = *(unsigned __int8 *)(v28 + 34) >> 6;
    v30 = dword_140388570[4 * v29 + v17];
    if ( v30 != (_DWORD)v29 )
      MiChangePageAttribute(48 * BugCheckParameter2 - 0x58000000000LL, v30, 0LL);
    v31 = MiReservePtes(&qword_140389360, 1LL);
    if ( v31 )
    {
      v32 = *(_BYTE *)(v28 + 34) >> 6;
      if ( v32 )
      {
        v33 = 4;
        if ( v32 == 2 )
          v33 = 28;
      }
      else
      {
        v33 = 12;
      }
      ValidPte = MiMakeValidPte(v31, BugCheckParameter2, v33 | 0xA0000000);
      *(_QWORD *)v31 = ValidPte;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL && v31 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v31, ValidPte);
      KeZeroPages((__int64)(v31 << 25) >> 16, 4096LL);
      MiReleasePtes((__int64)&qword_140389360, v31, 1u, v35);
    }
    if ( !v31 )
    {
      if ( KeGetCurrentPrcb()->HyperPte )
      {
        v36 = MiMapPageInHyperSpaceWorker(BugCheckParameter2, v114, 0x80000000LL);
        KeZeroPages(v36, 4096LL);
        MiUnmapPageInHyperSpaceWorker(v36, (unsigned __int8)v114[0], 0x80000000LL);
        v31 = 1LL;
      }
      else
      {
        MxFillPhysicalPage(BugCheckParameter2);
      }
    }
    if ( v30 != (_DWORD)v29 && v30 != v17 && v31 )
      MiChangePageAttribute(v28, (unsigned int)v29, 0LL);
  }
  Size_4 = 1;
LABEL_79:
  if ( v120 )
    Size = 0;
  else
    Size = BYTE4(PerfGlobalGroupMask) & 1;
  v47 = (__int64 *)(((v122 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v48 = *v47;
  do
  {
    v49 = v48;
    if ( (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v47 <= 0xFFFFF6FB7DBED7F8uLL )
      v49 = MiReadPteShadow(v47, v48);
    v135 = v49;
    if ( (v49 & 1) == 0 || (v49 & 0x200) != 0 )
      goto LABEL_259;
    v50 = MI_GET_PAGE_FRAME_FROM_PTE(&v135);
  }
  while ( !(unsigned int)MiIsPfnInline(v50) );
  v140 = 48 * v50;
  v51 = 48 * v50 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v121 = CurrentIrql;
  __writecr8(2uLL);
  v129 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v129);
      while ( *(__int64 *)(v51 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) );
    LOBYTE(CurrentIrql) = v121;
  }
  v119 = CurrentIrql;
  v53 = *v47;
  if ( (unsigned __int64)v47 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v47 <= 0xFFFFF6FB7DBED7F8uLL )
    v53 = MiReadPteShadow(v47, *v47);
  v135 = v53;
  if ( (v53 & 1) == 0 || (v53 & 0x200) != 0 || v50 != MI_GET_PAGE_FRAME_FROM_PTE(&v135) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    goto LABEL_259;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v50 - 0x58000000000LL, v54, v55, CurrentIrql) )
    goto LABEL_116;
  v59 = *(_QWORD *)(v51 + 40);
  if ( (v59 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v51 + 16) & 0x400LL) != 0 )
  {
    v60 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v57, v56);
    v60 = v62;
    if ( IsPfnCommitNotCharged )
      v60 = 1;
  }
  v63 = (v59 >> 40) & 0x3FF;
  v64 = *(ULONG_PTR **)(qword_140388AF0 + 8 * v63);
  if ( !v60 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140388AF0 + 8 * v63), 1uLL, 4LL, v58) )
  {
    if ( v64 == &MiSystemPartition )
    {
      v65 = KeGetCurrentPrcb();
      CachedResidentAvailable = v65->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v67 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v65->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v67 == CachedResidentAvailable )
          goto LABEL_116;
      }
    }
    v68 = MiChargePartitionResidentAvailable(v64);
    if ( !v68 && v60 )
      MiReturnCommit((__int64)v64, 1uLL);
    if ( v68 )
LABEL_116:
      ++*(_WORD *)(v51 + 32);
  }
  v69 = (_QWORD *)(*(_QWORD *)(v51 + 8) | 0x8000000000000000uLL);
  v128 = v69;
  if ( (*(_BYTE *)(v51 + 34) & 0x20) != 0 )
  {
    v70 = v121;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v70 != 17 )
        __writecr8(v70);
      v130 = 0;
      while ( (*(_BYTE *)(v51 + 34) & 0x20) != 0 )
        KeYieldProcessorEx(&v130);
      MiLockPageInline(v51);
    }
    while ( (*(_BYTE *)(v51 + 34) & 0x20) != 0 );
    v69 = v128;
  }
  *(_BYTE *)(v51 + 34) |= 0x20u;
  if ( (*(_QWORD *)(v51 + 24) & 0x4000000000000000LL) == 0 )
  {
    v71 = *v69;
    if ( (unsigned __int64)v69 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v69 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v71) = MiReadPteShadow(v69, *v69);
    if ( (v71 & 0x20) == 0 )
      MiWriteValidPteVolatile(v69, 1LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v72 = *(_QWORD *)v122;
  if ( v122 >= 0xFFFFF6FB7DBED000uLL && v122 <= 0xFFFFF6FB7DBED7F8uLL )
    v72 = MiReadPteShadow(v122, *(_QWORD *)v122);
  v137 = v72;
  if ( (v72 & 1) != 0
    || (v72 & 0x800) != 0 && (v72 & 0x400) == 0
    || (v73 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v137), v75 = v115, v115 != v73) )
  {
    MiUnlockProtoPoolPage(v51, v121);
LABEL_259:
    MiLockAndInsertPageInFreeList(v19);
    return 1LL;
  }
  v131 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v131);
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
    v74 = (__int64 *)v122;
  }
  v76 = *v74;
  if ( (unsigned __int64)v74 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v74 <= 0xFFFFF6FB7DBED7F8uLL )
    v76 = MiReadPteShadow(v74, *v74);
  *(_QWORD *)(v19 + 16) = MiTransferSoftwarePte(v76, 0LL, 0LL, 4LL);
  *(_QWORD *)(v19 + 40) |= 0x200000000000000uLL;
  v78 = *(_QWORD *)(v19 + 40);
  if ( v75 == 31 )
  {
    v79 = 1;
  }
  else if ( v75 >> 3 == 3 && (v75 & 7) != 0 )
  {
    v79 = 2;
  }
  else
  {
    v79 = v75 >> 3 != 1;
  }
  *(_WORD *)(v19 + 32) = 1;
  ContainingPageTable = MiGetContainingPageTable(v77);
  *(_QWORD *)(v19 + 40) = v78 ^ (v78 ^ ContainingPageTable) & 0xFFFFFFFFFLL;
  v81 = 48 * ContainingPageTable - 0x58000000000LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v124 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v83 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v84 = 2;
      if ( v83 < 2 )
        v84 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v83 = v84;
    }
    v124 = v83;
  }
  *(_BYTE *)(v19 + 34) |= 0x10u;
  v132 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v81 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v132);
    while ( *(__int64 *)(v81 + 24) < 0 );
  }
  *(_QWORD *)(v81 + 24) ^= (*(_QWORD *)(v81 + 24) ^ ((*(_QWORD *)(v81 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v81 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v79 )
    MiChangePageAttribute(v19, v79, 1LL);
  *(_QWORD *)(v19 + 24) = *(_QWORD *)(v19 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v19 + 35) ^= (*(_BYTE *)(v19 + 35) ^ v124) & 7;
  *(_QWORD *)(v19 + 8) = v122;
  *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 6;
  if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v19) > 2 )
    *(_BYTE *)(v19 + 35) = *(_BYTE *)(v19 + 35) & 0xF8 | 2;
  v85 = v141;
  if ( (*(_DWORD *)(v141 + 56) & 0x20) != 0 || !*(_QWORD *)(v141 + 64) )
    PrototypePteDirect = 0LL;
  v86 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v141 + 72, v86);
  }
  else
  {
    v125 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v141 + 72), 0x1Fu) )
      v125 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v85 + 72), v86);
    v87 = *(_DWORD *)(v85 + 72);
    while ( (v87 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v87 & 0x40000000) == 0 )
      {
        v89 = _InterlockedCompareExchange((volatile signed __int32 *)(v85 + 72), v87 | 0x40000000, v87);
        v88 = v87 == v89;
        v87 = v89;
        if ( !v88 )
          continue;
      }
      KeYieldProcessorEx(&v125);
      v87 = *(_DWORD *)(v85 + 72);
    }
  }
  ++*(_QWORD *)(v85 + 32);
  if ( PrototypePteDirect )
    ++*(_DWORD *)(PrototypePteDirect + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v85 + 72, retaddr);
  else
    *(_DWORD *)(v85 + 72) = 0;
  __writecr8(v86);
  v90 = v115 | 0x80000000;
  v115 = v90;
  v91 = ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v90 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v90 & 5) == 4 )
    v91 = ((BugCheckParameter2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v90 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v92 = v91 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v90 & 0x40000000) == 0 )
    v92 = v91;
  if ( (v90 & 0x20000000) != 0 )
    v92 ^= ((unsigned __int16)v92 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100;
  v93 = v92 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v90 & 0x8000000) == 0 )
    v93 = v92;
  v94 = v93 | 0x80;
  if ( (v90 & 0x4000000) == 0 )
    v94 = v93;
  v95 = v94 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v137 = v95;
  v96 = v122;
  *(_QWORD *)v122 = v95;
  v97 = 0xFFFFF6FB7DBED000uLL;
  if ( v96 >= 0xFFFFF6FB7DBED000uLL && v96 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v96, v95);
  v98 = (unsigned __int64)v138;
  *v138 = v95;
  if ( v98 >= v97 && v98 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v98, v95);
  v99 = Size;
  if ( !v120 )
  {
    if ( Size )
    {
      memset(v146, 0, sizeof(v146));
      v147 = 0LL;
      MiIdentifyPfn((_OWORD *)v19, v146);
    }
    if ( (*(_BYTE *)(v19 + 34) & 7) != 6 )
      MiBadShareCount(v19);
    v95 = (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ v95) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v95 )
      MiPfnShareCountIsZero(v19, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v133 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v133);
    while ( *(__int64 *)(v51 + 24) < 0 );
  }
  *(_BYTE *)(v51 + 34) &= ~0x20u;
  v100 = *(_WORD *)(v51 + 32);
  if ( !v100 )
    MiBadRefCount(v51, v95);
  v101 = v100 - 1;
  *(_WORD *)(v51 + 32) = v101;
  if ( !v101 && (unsigned int)MiIsPfnFileOnly(v51) )
    goto LABEL_249;
  if ( !(unsigned int)MiIsPfnFileOnly(v51) )
  {
    v102 = *(_QWORD *)(v51 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v101 )
      goto LABEL_221;
    if ( v101 == 1 )
    {
      if ( v102 )
        goto LABEL_221;
    }
    else if ( v101 != 2 || !v102 )
    {
      goto LABEL_250;
    }
    if ( (*(_BYTE *)(v51 + 34) & 8) == 0 )
      goto LABEL_250;
LABEL_221:
    v103 = *(_QWORD *)(v51 + 8) | 0x8000000000000000uLL;
    if ( v103 > 0xFFFFF6BFFFFFFF78uLL || v103 < 0xFFFFF68000000000uLL )
    {
      v104 = *(_BYTE *)(v51 + 35);
      if ( (v104 & 0x20) != 0 )
      {
        *(_BYTE *)(v51 + 35) = v104 & 0xDF;
        goto LABEL_248;
      }
    }
    v105 = 0;
    v106 = *(_QWORD *)(v51 + 40);
    if ( (v106 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v51 + 16) & 0x400LL) != 0 )
    {
      v105 = 1;
    }
    else if ( v103 <= 0xFFFFF6BFFFFFFF78uLL && v103 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v51 + 35) & 0x20) != 0 )
    {
      v105 = 1;
    }
    else if ( !v101 && (*(_QWORD *)(v51 + 24) & 0x4000000000000000LL) != 0 )
    {
      v105 = 1;
    }
    v107 = *(_QWORD *)(qword_140388AF0 + 8 * ((v106 >> 40) & 0x3FF));
    if ( v105 == 1 )
      MiReturnCommit(v107, 1uLL);
    if ( (ULONG_PTR *)v107 == &MiSystemPartition )
    {
      v108 = 1LL;
      v109 = KeGetCurrentPrcb();
      v110 = (int)v109->CachedResidentAvailable;
      if ( (_DWORD)v110 != -1 )
      {
        if ( (unsigned __int64)(v110 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v111 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v109->CachedResidentAvailable,
                     v110 + 1,
                     v110);
            v88 = (_DWORD)v110 == v111;
            LODWORD(v110) = v111;
            if ( v88 )
              break;
            if ( v111 == -1 || (unsigned __int64)(v111 + 1LL) > 0x100 )
              goto LABEL_243;
          }
LABEL_248:
          if ( !v101 )
          {
LABEL_249:
            MiPfnReferenceCountIsZero(v51, v140 / 48);
            goto LABEL_250;
          }
          goto LABEL_250;
        }
LABEL_243:
        if ( (int)v110 > 192
          && (_DWORD)v110 == _InterlockedCompareExchange(
                               (volatile signed __int32 *)&v109->CachedResidentAvailable,
                               192,
                               v110) )
        {
          v108 = (int)v110 - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_14038B840, v108);
      goto LABEL_248;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v107 + 6016), 1uLL);
    goto LABEL_248;
  }
LABEL_250:
  v112 = v121;
  _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v112 != 17 )
    __writecr8(v112);
  *v139 = 0;
  if ( v120 )
    return (unsigned int)(v126 != 0) + 2;
  if ( v99 )
  {
    v147 |= 4uLL;
    v148[0] = v146;
    v148[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v148, 1, 536870913, 642, 289413890);
  }
  v113 = Size_4 != 0;
  Size_4 = -Size_4;
  return v113 ? 4 : 0;
}
