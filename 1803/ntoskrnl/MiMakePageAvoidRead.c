/*
 * XREFs of MiMakePageAvoidRead @ 0x140110E10
 * Callers:
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiPfnZeroingNeeded @ 0x140052058 (MiPfnZeroingNeeded.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUserPdeOrAbove @ 0x14009DC68 (MiUserPdeOrAbove.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiIsAddressGlobal @ 0x140113970 (MiIsAddressGlobal.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140134FF4 (MiChargePartitionResidentAvailable.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14017EC2C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x14074D038 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        unsigned __int64 a6,
        _DWORD *a7)
{
  unsigned int v8; // r14d
  unsigned int v9; // r9d
  __int64 v10; // rbx
  int v11; // edx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 NodeShiftedColor; // dx
  __int16 v14; // ax
  int v15; // ecx
  unsigned int v16; // r8d
  __int64 Page; // rax
  __int64 v19; // rsi
  unsigned int v20; // eax
  char v21; // r9
  int v22; // ebx
  unsigned int v23; // eax
  BOOL v24; // r12d
  signed __int64 i; // rdx
  signed __int64 v26; // rax
  ULONG_PTR v27; // rdi
  __int64 v28; // r9
  __int64 v29; // r15
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r9
  __int64 v33; // r11
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r8
  char v36; // si
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rsi
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  char *v45; // rsi
  size_t v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r10
  __int64 v51; // r11
  __int64 v52; // rdi
  __int64 CurrentIrql; // r12
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned __int64 v61; // rcx
  __int16 v62; // ax
  __int64 v63; // rdx
  bool v64; // bl
  __int64 v65; // r9
  unsigned __int64 v66; // rdx
  __int64 v67; // rcx
  ULONG_PTR *v68; // rsi
  unsigned __int64 v69; // rbx
  char v70; // al
  unsigned __int8 v71; // si
  __int64 v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // rax
  char v75; // r8
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  ULONG_PTR v79; // r15
  __int64 v80; // rax
  int v81; // r8d
  int v82; // esi
  struct _KPRCB *v83; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v85; // ett
  int v86; // r14d
  __int64 ContainingPageTable; // rax
  int v88; // r10d
  __int64 v89; // r9
  __int64 v90; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v92; // edx
  int v93; // eax
  unsigned __int8 v94; // cl
  char v95; // cl
  char v96; // cl
  volatile signed __int32 *v97; // rbx
  unsigned __int8 v98; // si
  struct _KPRCB *v99; // r10
  _DWORD *SchedulerAssist; // rcx
  int v101; // eax
  signed __int32 v102; // edx
  bool v103; // zf
  signed __int32 v104; // eax
  struct _KPRCB *v105; // rdx
  _DWORD *v106; // rcx
  int v107; // eax
  ULONG_PTR v108; // rbx
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // r8
  __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // r8
  unsigned __int64 v114; // r10
  unsigned __int64 v115; // r8
  __int64 v116; // rdx
  __int16 v117; // bx
  __int16 v118; // bx
  unsigned __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rcx
  unsigned __int64 v122; // r8
  char v123; // al
  int v124; // ecx
  __int64 v125; // rsi
  unsigned __int64 v126; // r8
  struct _KPRCB *v127; // r9
  __int64 v128; // rdx
  signed __int32 v129; // eax
  unsigned int v130; // [rsp+34h] [rbp-144h]
  int Sizea; // [rsp+38h] [rbp-140h]
  int Size_4; // [rsp+3Ch] [rbp-13Ch]
  unsigned __int64 v134; // [rsp+40h] [rbp-138h] BYREF
  char v135; // [rsp+48h] [rbp-130h]
  unsigned __int64 v136; // [rsp+50h] [rbp-128h]
  int v137; // [rsp+58h] [rbp-120h]
  unsigned int v138; // [rsp+5Ch] [rbp-11Ch]
  int v139; // [rsp+60h] [rbp-118h] BYREF
  __int64 v140; // [rsp+68h] [rbp-110h]
  int v141; // [rsp+70h] [rbp-108h]
  ULONG_PTR v142; // [rsp+78h] [rbp-100h]
  ULONG_PTR v143; // [rsp+80h] [rbp-F8h]
  int v144; // [rsp+88h] [rbp-F0h] BYREF
  int v145; // [rsp+8Ch] [rbp-ECh] BYREF
  int v146; // [rsp+90h] [rbp-E8h] BYREF
  int v147; // [rsp+94h] [rbp-E4h] BYREF
  int v148; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v149; // [rsp+A0h] [rbp-D8h]
  __int64 PrototypePteDirect; // [rsp+A8h] [rbp-D0h]
  __int64 v151; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD *v152; // [rsp+B8h] [rbp-C0h]
  _DWORD *v153; // [rsp+C0h] [rbp-B8h]
  __int64 v154; // [rsp+C8h] [rbp-B0h]
  __int64 v155; // [rsp+D0h] [rbp-A8h]
  void *Src; // [rsp+D8h] [rbp-A0h]
  __int64 v157; // [rsp+E0h] [rbp-98h]
  __int64 v158; // [rsp+E8h] [rbp-90h]
  ULONG_PTR v159; // [rsp+F0h] [rbp-88h]
  unsigned __int64 v160[3]; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v161; // [rsp+110h] [rbp-68h]
  _QWORD v162[2]; // [rsp+120h] [rbp-58h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v8 = a3;
  Src = a2;
  v136 = a1;
  v154 = a1;
  v152 = (_QWORD *)a6;
  v153 = a7;
  *a7 = 0;
  v151 = MI_READ_PTE_LOCK_FREE(a6);
  PrototypePteDirect = MiGetPrototypePteDirect(v151);
  v157 = PrototypePteDirect;
  v149 = *(_QWORD *)PrototypePteDirect;
  v158 = v149;
  v10 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v149 + 60) & 0x3FF));
  v11 = (*(_DWORD *)(v149 + 56) >> 20) & 0x3F;
  if ( v11 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)v11 - 1) << byte_1403CB699;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v14 = (1 << byte_1403CB69A) - 1;
  v15 = (unsigned __int16)(v14 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u));
  v16 = v9;
  if ( a4 != 4096 )
    v16 = 2;
  Page = MiGetPage(v10, v15 | (unsigned int)NodeShiftedColor, v16);
  v143 = Page;
  v155 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v10);
    return 1LL;
  }
  v19 = 48 * Page - 0x58000000000LL;
  v142 = v19;
  v20 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v152);
  v21 = v20;
  v130 = v20;
  LODWORD(v140) = v20;
  if ( v20 == 31 )
  {
    v22 = 1;
  }
  else
  {
    v23 = v20 >> 3;
    if ( v23 == 3 && (v21 & 7) != 0 )
      v22 = 2;
    else
      v22 = v23 != 1;
  }
  v24 = 0;
  Size_4 = 0;
  v141 = 0;
  if ( a4 != 4096 )
    v24 = MiPfnZeroingNeeded(v19, v22);
  if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v22 )
    MiChangePageAttribute(v19, v22, 0);
  for ( i = *(_QWORD *)(v19 + 24); ; i = v26 )
  {
    v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v26 )
      break;
  }
  v27 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  v159 = v27;
  if ( v27 )
  {
    v36 = 4;
    if ( (unsigned int)MiIsPfnInline(v143) )
    {
      v39 = *(unsigned __int8 *)(48 * v37 - 0x58000000000LL + 34) >> 6;
      if ( !v39 || v39 == 3 )
      {
        v36 = 12;
      }
      else if ( v39 == 2 )
      {
        v36 = 28;
      }
    }
    v40 = v36 & 0x1F;
    v41 = ((v37 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v40] & 0xFFFF000000000E7FuLL | 0x21;
    v42 = 0xFFFFF68000000000uLL;
    if ( v27 < 0xFFFFF68000000000uLL || v27 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_54;
    if ( v27 >= 0xFFFFF6FB40000000uLL && v27 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v41 = v27 == 0xFFFFF6FB7DBEDF68uLL
          ? ((v37 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v40] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : ((v37 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v40] & 0x7FFF000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v27) )
        v41 |= 4uLL;
    }
    if ( v27 <= 0xFFFFF6BFFFFFFF78uLL )
      v41 |= 4uLL;
    v8 = a3;
    if ( (unsigned int)MiIsAddressGlobal((__int64)(v27 << 25) >> 16) )
LABEL_54:
      v41 |= 0x100uLL;
    if ( (v40 & 5) == 4 )
      v41 |= 0x42uLL;
    v43 = v41 & 0xFAFFFFFFFFFFFEFFuLL | ((word_1403CB7D0 & 1 | 0xA000000000000LL) << 8);
    *(_QWORD *)v27 = v43;
    if ( v27 >= 0xFFFFF6FB7DBED000uLL && v27 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v27, v43, v38);
    v44 = (__int64)((v27 << 25) - (v42 << 25)) >> 16;
    v45 = (char *)(v8 + v44);
    if ( v24 )
    {
      if ( v8 )
        memset((void *)v44, 0, v8);
      v46 = 4096 - a4 - v8;
      if ( v46 )
        memset(&v45[a4], 0, v46);
    }
    v137 = 0;
    memmove(v45, Src, a4);
    v29 = v142;
    MiReleasePtes((__int64)&qword_1403CC5E0, v27, 1uLL);
  }
  else
  {
    if ( (a5 & 1) == 0 )
    {
      MiReleaseFreshPage(v19);
      return 4LL;
    }
    if ( v24 )
      MiZeroPhysicalPage(v143, 1, v22, v28);
    Size_4 = 1;
    v29 = v19;
  }
  Sizea = BYTE4(PerfGlobalGroupMask) & 1;
  v30 = ((v136 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v31 = MI_READ_PTE_LOCK_FREE(v30);
    v34 = v31;
    v134 = v31;
    if ( (v31 & 1) == 0 || (v31 & 0x200) != 0 )
      goto LABEL_281;
    if ( (unsigned __int64)&v134 >= v32
      && (unsigned __int64)&v134 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v35 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v35 )
      {
        v47 = *(_QWORD *)(v35 + 8 * (((unsigned __int64)&v134 >> 3) & 0x1FF));
        if ( (v47 & 0x20) != 0 )
          v34 |= 0x20uLL;
        if ( (v47 & 0x42) != 0 )
          v34 |= 0x42uLL;
      }
      else
      {
        v34 = v134;
      }
    }
    v48 = v33 & (v34 >> 12);
  }
  while ( !(unsigned int)MiIsPfnInline(v48) );
  v154 = 48 * v48;
  v52 = 48 * v48 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v140 = CurrentIrql;
  __writecr8(2uLL);
  v144 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v144);
      while ( *(__int64 *)(v52 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) );
    v49 = 0xFFFFF6FB7DBED000uLL;
    v50 = 0xFFFFF68000000000uLL;
    v51 = 0xFFFFFFFFFLL;
  }
  v135 = CurrentIrql;
  v54 = *(_QWORD *)v30;
  if ( v30 >= v49
    && v30 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v54 & 1) != 0
    && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
  {
    v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v55 )
    {
      v56 = *(_QWORD *)(v55 + 8 * ((v30 >> 3) & 0x1FF));
      v57 = v54 | 0x20;
      if ( (v56 & 0x20) == 0 )
        v57 = v54;
      v54 = v57;
      if ( (v56 & 0x42) != 0 )
        v54 = v57 | 0x42;
    }
  }
  v134 = v54;
  if ( (v54 & 1) == 0 || (v54 & 0x200) != 0 )
    goto LABEL_280;
  if ( (unsigned __int64)&v134 >= v49
    && (unsigned __int64)&v134 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
  {
    v58 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v58 )
    {
      v59 = *(_QWORD *)(v58 + 8 * (((unsigned __int64)&v134 >> 3) & 0x1FF));
      v60 = v54 | 0x20;
      if ( (v59 & 0x20) == 0 )
        v60 = v54;
      v54 = v60;
      if ( (v59 & 0x42) != 0 )
        v54 = v60 | 0x42;
    }
  }
  if ( v48 != (v51 & (v54 >> 12)) )
  {
LABEL_280:
    _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    goto LABEL_281;
  }
  v61 = *(_QWORD *)(v52 + 40);
  if ( (v61 & 0x10000000000000LL) != 0 )
  {
LABEL_156:
    ++*(_WORD *)(v52 + 32);
    goto LABEL_116;
  }
  v62 = *(_WORD *)(v52 + 32);
  v63 = *(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v62 )
  {
    if ( v62 == 1 )
    {
      if ( v63 || (*(_BYTE *)(v52 + 34) & 8) != 0 )
        goto LABEL_104;
LABEL_110:
      ++*(_WORD *)(v52 + 32);
      goto LABEL_116;
    }
    if ( v62 != 2 || !v63 || (*(_BYTE *)(v52 + 34) & 8) == 0 )
      goto LABEL_110;
  }
LABEL_104:
  v64 = 0;
  v65 = 0x200000000000000LL;
  if ( (v61 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0 )
  {
    v64 = 1;
  }
  else
  {
    v66 = *(_QWORD *)(v52 + 8) | 0x8000000000000000uLL;
    if ( v66 <= v50 + 0x3FFFFFFF78LL && v66 >= v50 )
      v64 = (*(_BYTE *)(v52 + 35) & 0x20) != 0;
  }
  v67 = (v61 >> 40) & 0x3FF;
  v68 = *(ULONG_PTR **)(qword_1403CBD88 + 8 * v67);
  if ( !v64 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v67), 1LL, 4LL, 0x200000000000000LL) )
  {
    if ( v68 == &MiSystemPartition )
    {
      v83 = KeGetCurrentPrcb();
      CachedResidentAvailable = v83->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v85 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v83->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v85 == CachedResidentAvailable )
          goto LABEL_156;
      }
    }
    v86 = MiChargePartitionResidentAvailable(v68, 1LL, 0xFFFFFFFFLL, v65);
    if ( !v86 && v64 )
      MiReturnCommit((__int64)v68, 1uLL);
    if ( v86 )
      ++*(_WORD *)(v52 + 32);
  }
LABEL_116:
  v69 = *(_QWORD *)(v52 + 8) | 0x8000000000000000uLL;
  v70 = *(_BYTE *)(v52 + 34);
  v71 = v140;
  if ( (v70 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v71 != 17 )
        __writecr8(v71);
      v145 = 0;
      while ( (*(_BYTE *)(v52 + 34) & 0x20) != 0 )
        KeYieldProcessorEx(&v145);
      MiLockPageInline(v52);
      v70 = *(_BYTE *)(v52 + 34);
    }
    while ( (v70 & 0x20) != 0 );
    v29 = v142;
  }
  *(_BYTE *)(v52 + 34) = v70 | 0x20;
  if ( (*(_QWORD *)(v52 + 24) & 0x4000000000000000LL) == 0 )
  {
    v72 = *(_QWORD *)v69;
    if ( v69 >= 0xFFFFF6FB7DBED000uLL
      && v69 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v72 & 1) != 0
      && ((v72 & 0x20) == 0 || (v72 & 0x42) == 0) )
    {
      v73 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v73 )
      {
        v74 = *(_QWORD *)(v73 + 8 * ((v69 >> 3) & 0x1FF));
        v75 = v72 | 0x20;
        if ( (v74 & 0x20) == 0 )
          v75 = v72;
        LOBYTE(v72) = v75;
        if ( (v74 & 0x42) != 0 )
          LOBYTE(v72) = v75 | 0x42;
      }
    }
    if ( (v72 & 0x20) == 0 )
      MiWriteValidPteVolatile(v69, 1LL, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v76 = MI_READ_PTE_LOCK_FREE(v136);
  v151 = v76;
  if ( (v76 & 1) != 0
    || (v76 & 0x800) != 0 && (v76 & 0x400) == 0
    || v130 != (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v151) )
  {
    MiUnlockProtoPoolPage(v52, v71, v77, v78);
LABEL_281:
    MiLockAndInsertPageInFreeList(v29);
    return 1LL;
  }
  v146 = 0;
  v79 = v142;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v79 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v146);
    while ( *(__int64 *)(v79 + 24) < 0 );
  }
  v80 = MI_READ_PTE_LOCK_FREE(v136);
  *(_QWORD *)(v79 + 16) = MiTransferSoftwarePte(v80, 0LL, 0LL, 4LL);
  *(_QWORD *)(v79 + 40) |= 0x200000000000000uLL;
  if ( v130 == 31 )
  {
    v82 = 1;
  }
  else if ( v130 >> 3 == 3 && (v130 & 7) != 0 )
  {
    v82 = 2;
  }
  else
  {
    v82 = 1;
    if ( v130 >> 3 == 1 )
      v82 = v81;
  }
  *(_WORD *)(v79 + 32) = 1;
  ContainingPageTable = MiGetContainingPageTable(v136);
  *(_QWORD *)(v79 + 40) = v89 ^ (v89 ^ ContainingPageTable) & 0xFFFFFFFFFLL;
  v90 = 48 * ContainingPageTable - 0x58000000000LL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v138 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v92 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v93 = 2;
      if ( v92 < 2 )
        v93 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v92 = v93;
    }
    v138 = v92;
  }
  v147 = v88;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v90 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v147);
    while ( *(__int64 *)(v90 + 24) < 0 );
  }
  *(_QWORD *)(v90 + 24) ^= (*(_QWORD *)(v90 + 24) ^ ((*(_QWORD *)(v90 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v94 = *(_BYTE *)(v79 + 34);
  if ( v94 >> 6 != v82 )
  {
    MiChangePageAttribute(v79, v82, 1u);
    v94 = *(_BYTE *)(v79 + 34);
  }
  *(_QWORD *)(v79 + 24) = *(_QWORD *)(v79 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v79 + 35) ^= (*(_BYTE *)(v79 + 35) ^ v138) & 7;
  *(_QWORD *)(v79 + 8) = v136;
  v95 = v94 & 0xF8 | 6;
  *(_BYTE *)(v79 + 34) = v95;
  *(_BYTE *)(v79 + 34) = v95 | 0x10;
  if ( (a5 & 2) != 0 )
  {
    v96 = *(_BYTE *)(v79 + 35);
    if ( (v96 & 8) != 0 || (v96 & 7u) > 2 )
      *(_BYTE *)(v79 + 35) = v96 & 0xF8 | 2;
  }
  if ( (*(_DWORD *)(v149 + 56) & 0x20) != 0 || !*(_QWORD *)(v149 + 64) )
    PrototypePteDirect = 0LL;
  v97 = (volatile signed __int32 *)(v149 + 72);
  v98 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v149 + 72, v98);
  }
  else
  {
    v139 = 0;
    v99 = KeGetCurrentPrcb();
    SchedulerAssist = v99->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v99->NestingLevel <= 1u )
      {
        v101 = SchedulerAssist[5];
        SchedulerAssist[5] = v101 + 1;
        if ( v101 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(v99);
      }
    }
    if ( _interlockedbittestandset(v97, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount((__int64)v99, 0);
      v139 = ExpWaitForSpinLockExclusiveAndAcquire(v97, v98);
    }
    v102 = *v97;
    while ( (v102 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v102 & 0x40000000) == 0 )
      {
        v104 = _InterlockedCompareExchange(v97, v102 | 0x40000000, v102);
        v103 = v102 == v104;
        v102 = v104;
        if ( !v103 )
          continue;
      }
      KeYieldProcessorEx(&v139);
      v102 = *v97;
    }
  }
  ++*(_QWORD *)(v149 + 32);
  if ( PrototypePteDirect )
    ++*(_DWORD *)(PrototypePteDirect + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v97, retaddr);
  else
    *v97 = 0;
  v105 = KeGetCurrentPrcb();
  v106 = v105->SchedulerAssist;
  if ( v106 )
  {
    if ( v105->NestingLevel <= 1u )
    {
      v107 = v106[5] - 1;
      v106[5] = v107;
      if ( !v107 && !*((_BYTE *)v106 + 25) && !*((_BYTE *)v106 + 27) )
        KiPerformUnboostKick(v105);
    }
  }
  __writecr8(v98);
  v108 = ((v143 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v130 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
  if ( (v130 & 5) == 4 )
    v108 = ((v143 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v130 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
  v109 = v108 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v130 & 0x40000000) == 0 )
    v109 = v108;
  if ( (v130 & 0x20000000) != 0 )
    v109 ^= ((unsigned __int16)v109 ^ (unsigned __int16)((unsigned __int8)word_1403CB7D0 << 8)) & 0x100;
  v110 = v109 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (v130 & 0x8000000) == 0 )
    v110 = v109;
  v111 = v110 | 0x80;
  if ( (v130 & 0x4000000) == 0 )
    v111 = v110;
  v112 = v111 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  v151 = v112;
  v113 = v136;
  *(_QWORD *)v136 = v112;
  v114 = 0xFFFFF6FB7DBED000uLL;
  if ( v113 >= 0xFFFFF6FB7DBED000uLL && v113 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v113, v112, v113);
  v115 = (unsigned __int64)v152;
  *v152 = v112;
  if ( v115 >= v114 && v115 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v115, v112, v115);
  if ( Sizea )
  {
    memset(v160, 0, sizeof(v160));
    v161 = 0LL;
    MiIdentifyPfn(v79, v160);
  }
  if ( (*(_BYTE *)(v79 + 34) & 7) != 6 )
    MiBadShareCount(v79);
  v116 = (*(_QWORD *)(v79 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v79 + 24) ^= (*(_QWORD *)(v79 + 24) ^ v116) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v116 )
    MiPfnShareCountIsZero(v79, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v148 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v148);
    while ( *(__int64 *)(v52 + 24) < 0 );
  }
  *(_BYTE *)(v52 + 34) &= ~0x20u;
  v117 = *(_WORD *)(v52 + 32);
  if ( !v117 )
    MiBadRefCount(v52);
  v118 = v117 - 1;
  *(_WORD *)(v52 + 32) = v118;
  if ( !v118 && (unsigned int)MiIsPfnFileOnly(v52) )
    goto LABEL_273;
  v119 = *(_QWORD *)(v52 + 40);
  v120 = (v119 >> 52) & 1;
  if ( (*(_QWORD *)(v52 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( v120 )
      goto LABEL_274;
  }
  else if ( v120 )
  {
    goto LABEL_274;
  }
  v121 = *(_QWORD *)(v52 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v118 )
  {
    if ( v118 == 1 )
    {
      if ( v121 )
        goto LABEL_245;
    }
    else if ( v118 != 2 || !v121 )
    {
      goto LABEL_274;
    }
    if ( (*(_BYTE *)(v52 + 34) & 8) == 0 )
      goto LABEL_274;
  }
LABEL_245:
  v122 = *(_QWORD *)(v52 + 8) | 0x8000000000000000uLL;
  if ( v122 > 0xFFFFF6BFFFFFFF78uLL || v122 < 0xFFFFF68000000000uLL )
  {
    v123 = *(_BYTE *)(v52 + 35);
    if ( (v123 & 0x20) != 0 )
    {
      *(_BYTE *)(v52 + 35) = v123 & 0xDF;
      goto LABEL_272;
    }
  }
  v124 = 0;
  if ( (v119 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v52 + 16) & 0x400LL) != 0 )
  {
    v124 = 1;
  }
  else if ( v122 <= 0xFFFFF6BFFFFFFF78uLL && v122 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v52 + 35) & 0x20) != 0 )
  {
    v124 = 1;
  }
  else if ( !v118 && (*(_QWORD *)(v52 + 24) & 0x4000000000000000LL) != 0 )
  {
    v124 = 1;
  }
  v125 = *(_QWORD *)(qword_1403CBD88 + 8 * ((v119 >> 40) & 0x3FF));
  if ( v124 == 1 )
    MiReturnCommit(v125, 1uLL);
  if ( (ULONG_PTR *)v125 != &MiSystemPartition )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v125 + 7104), 1uLL);
    goto LABEL_272;
  }
  v126 = 1LL;
  v127 = KeGetCurrentPrcb();
  v128 = (int)v127->CachedResidentAvailable;
  if ( (_DWORD)v128 == -1 )
  {
LABEL_270:
    _InterlockedExchangeAdd64(&qword_1403CFB00, v126);
    goto LABEL_272;
  }
  if ( (unsigned __int64)(v128 + 1) > 0x100 )
  {
LABEL_267:
    if ( (int)v128 > 192
      && (_DWORD)v128 == _InterlockedCompareExchange(
                           (volatile signed __int32 *)&v127->CachedResidentAvailable,
                           192,
                           v128) )
    {
      v126 = (int)v128 - 192 + 1LL;
    }
    goto LABEL_270;
  }
  while ( 1 )
  {
    v129 = _InterlockedCompareExchange((volatile signed __int32 *)&v127->CachedResidentAvailable, v128 + 1, v128);
    v103 = (_DWORD)v128 == v129;
    LODWORD(v128) = v129;
    if ( v103 )
      break;
    if ( v129 == -1 || (unsigned __int64)(v129 + 1LL) > 0x100 )
      goto LABEL_267;
  }
LABEL_272:
  if ( !v118 )
LABEL_273:
    MiPfnReferenceCountIsZero(v52, v154 / 48);
LABEL_274:
  _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_BYTE)v140 != 17 )
    __writecr8((unsigned __int8)v140);
  *v153 = 0;
  if ( Sizea )
  {
    v161 |= 4uLL;
    v162[0] = v160;
    v162[1] = 32LL;
    EtwTraceKernelEvent((int)v162, 1, 0x20000001u, 642, 289413890);
  }
  return Size_4 != 0 ? 4 : 0;
}
