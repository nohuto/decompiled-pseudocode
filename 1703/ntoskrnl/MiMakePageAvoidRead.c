/*
 * XREFs of MiMakePageAvoidRead @ 0x1400A08D0
 * Callers:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIdentifyPfn @ 0x1400DBC70 (MiIdentifyPfn.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015976C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetContainingPageTable @ 0x14017CDC0 (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWaitForFreePage @ 0x140220450 (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x1406B6048 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 *a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        _QWORD *a6,
        _DWORD *a7)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  int v13; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int16 NodeShiftedColor; // r8
  unsigned int v16; // r12d
  __int16 v17; // dx
  unsigned int *p_PageColor; // rax
  __int64 v19; // rdx
  __int64 Page; // rax
  unsigned int v21; // edi
  __int64 v22; // rbx
  unsigned int v23; // eax
  char v24; // r8
  unsigned int v25; // eax
  BOOL v26; // r13d
  signed __int64 i; // rdx
  signed __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r9
  __int64 v32; // rdx
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  char *v37; // r12
  size_t v38; // rax
  size_t v39; // r15
  unsigned __int64 *v40; // r13
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // esi
  __int64 v45; // rax
  __int64 ContainingPageTable; // rax
  __int64 v47; // r9
  __int64 v48; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int Queue; // eax
  unsigned int v51; // edx
  int v52; // eax
  char v53; // cl
  __int64 v54; // rcx
  volatile signed __int32 *v55; // rsi
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v57; // edx
  bool v58; // zf
  signed __int32 v59; // eax
  __int64 v60; // r8
  unsigned __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r12d
  unsigned int v69; // esi
  __int64 v70; // rdx
  __int64 v71; // r8
  bool v72; // cf
  char v73[4]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int Size; // [rsp+34h] [rbp-134h]
  int Size_4; // [rsp+38h] [rbp-130h]
  unsigned int v76; // [rsp+3Ch] [rbp-12Ch]
  int v77; // [rsp+40h] [rbp-128h]
  int v78; // [rsp+44h] [rbp-124h]
  int v79; // [rsp+48h] [rbp-120h] BYREF
  int v80; // [rsp+4Ch] [rbp-11Ch]
  int v81; // [rsp+50h] [rbp-118h]
  unsigned __int64 *v82; // [rsp+58h] [rbp-110h]
  ULONG_PTR v83; // [rsp+60h] [rbp-108h]
  unsigned int v84; // [rsp+68h] [rbp-100h]
  int v85; // [rsp+70h] [rbp-F8h] BYREF
  int v86; // [rsp+74h] [rbp-F4h] BYREF
  int v87; // [rsp+78h] [rbp-F0h] BYREF
  size_t v88; // [rsp+80h] [rbp-E8h]
  __int64 v89; // [rsp+88h] [rbp-E0h]
  __int64 PrototypePteDirect; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v91; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD *v92; // [rsp+A0h] [rbp-C8h]
  _QWORD *v93; // [rsp+A8h] [rbp-C0h]
  void *Src; // [rsp+B0h] [rbp-B8h]
  __int64 v95; // [rsp+B8h] [rbp-B0h]
  __int64 v96; // [rsp+C0h] [rbp-A8h]
  __int64 v97; // [rsp+C8h] [rbp-A0h]
  __int64 v98; // [rsp+D0h] [rbp-98h]
  unsigned __int64 *v99; // [rsp+D8h] [rbp-90h]
  unsigned int *v100; // [rsp+E0h] [rbp-88h]
  __int16 v101; // [rsp+E8h] [rbp-80h]
  unsigned __int16 v102; // [rsp+EAh] [rbp-7Eh]
  _QWORD v103[3]; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v104; // [rsp+108h] [rbp-60h]
  _QWORD v105[2]; // [rsp+118h] [rbp-50h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  v88 = a4;
  Size = a3;
  Src = a2;
  v82 = a1;
  v99 = a1;
  v93 = a6;
  v92 = a7;
  v8 = 0;
  *a7 = 0;
  v91 = MI_READ_PTE_LOCK_FREE(a6);
  PrototypePteDirect = MiGetPrototypePteDirect(v91, v9, v10, v11);
  v95 = PrototypePteDirect;
  v89 = *(_QWORD *)PrototypePteDirect;
  v96 = v89;
  v12 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v89 + 60) & 0x3FF));
  v81 = 0;
  v80 = 0;
  v13 = (*(_DWORD *)(v89 + 56) >> 20) & 0x3F;
  if ( v13 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)v13 - 1) << byte_14036C1B9;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v102 = NodeShiftedColor;
  v16 = 1;
  v17 = (1 << byte_14036C1BA) - 1;
  v101 = v17;
  p_PageColor = &CurrentPrcb->PageColor;
  v100 = p_PageColor;
  v19 = (unsigned __int16)(v17 & ++*(_WORD *)p_PageColor) | (unsigned int)NodeShiftedColor;
  if ( a4 == 4096 )
  {
    Page = MiGetPage(v12, v19, 0LL);
    v21 = 2;
  }
  else
  {
    v21 = 2;
    Page = MiGetPage(v12, v19, 2LL);
  }
  v83 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v12);
    return 1LL;
  }
  v22 = 48 * Page - 0x58000000000LL;
  v97 = v22;
  v23 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a6);
  v24 = v23;
  v76 = v23;
  v84 = v23;
  if ( v23 == 31 )
  {
    v21 = 1;
  }
  else
  {
    v25 = v23 >> 3;
    if ( v25 != 3 || (v24 & 7) == 0 )
      v21 = v25 != 1;
  }
  v26 = 0;
  Size_4 = 0;
  if ( a4 != 4096 )
    v26 = MiPfnZeroingNeeded();
  if ( *(unsigned __int8 *)(v22 + 34) >> 6 != v21 )
    MiChangePageAttribute(v22, v21, 0LL);
  for ( i = *(_QWORD *)(v22 + 24); ; i = v28 )
  {
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), i & 0xF0FFFFFFFFFFFFFFuLL, i);
    if ( i == v28 )
      break;
  }
  v29 = MiReservePtes(&qword_14036D0A0, 1LL);
  v98 = v29;
  if ( v29 )
  {
    if ( (unsigned int)MiIsPfnInline(v83, v83, 4LL, v30) )
    {
      v34 = *(unsigned __int8 *)(48 * v32 - 0x58000000000LL + 34) >> 6;
      if ( !v34 || v34 == 3 )
      {
        v33 = 12;
      }
      else if ( v34 == 2 )
      {
        v33 = 28;
      }
    }
    *(_QWORD *)v29 = MiMakeValidPte(v29, v32, v33 | 0xA0000000);
    if ( (unsigned int)MiPteInShadowRange(v29) )
      MiWritePteShadow(v35);
    v36 = v29 << 25 >> 16;
    v37 = (char *)(Size + v36);
    if ( v26 )
    {
      if ( Size )
        memset((void *)v36, 0, Size);
      v38 = v88;
      v39 = 4096LL - Size - v88;
      if ( !v39 )
        goto LABEL_40;
      memset(&v37[v88], 0, v39);
    }
    v38 = v88;
LABEL_40:
    v77 = 0;
    memmove(v37, Src, v38);
    v16 = 1;
    MiReleasePtes(&qword_14036D0A0, v29, 1LL);
    v81 = 1;
    goto LABEL_41;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v22);
    return 4LL;
  }
  if ( v26 )
    MiZeroPhysicalPage(v83);
  Size_4 = 1;
LABEL_41:
  if ( v80 )
    Size = 0;
  else
    Size = BYTE4(PerfGlobalGroupMask) & 1;
  v40 = v82;
  v41 = MiLockProtoPoolPage(v82, v73);
  if ( !v41 )
    goto LABEL_116;
  v42 = MI_READ_PTE_LOCK_FREE(v40);
  v91 = v42;
  if ( (v42 & 1) != 0
    || (v42 & 0x800) != 0 && (v42 & 0x400) == 0
    || (v43 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v91), v44 = v76, v76 != v43) )
  {
    MiUnlockProtoPoolPage(v41, (unsigned __int8)v73[0]);
LABEL_116:
    MiLockAndInsertPageInFreeList(v22);
    return 1LL;
  }
  v85 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v85);
    while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v45 = MI_READ_PTE_LOCK_FREE(v40);
  *(_QWORD *)(v22 + 16) = MiTransferSoftwarePte(v45, 0LL, 0LL);
  *(_QWORD *)(v22 + 40) |= 0x200000000000000uLL;
  if ( v44 != 31 )
  {
    if ( v44 >> 3 == 3 && (v44 & 7) != 0 )
    {
      v16 = 2;
    }
    else if ( v44 >> 3 == 1 )
    {
      v16 = 0;
    }
  }
  *(_WORD *)(v22 + 32) = 1;
  ContainingPageTable = MiGetContainingPageTable(v82);
  *(_QWORD *)(v22 + 40) = v47 ^ (v47 ^ ContainingPageTable) & 0xFFFFFFFFFLL;
  v48 = 48 * ContainingPageTable - 0x58000000000LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v78 = (Queue >> 9) & 7;
  }
  else
  {
    v51 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v52 = 2;
      if ( v51 < 2 )
        v52 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v51 = v52;
    }
    v78 = v51;
  }
  *(_BYTE *)(v22 + 34) |= 0x10u;
  v86 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v86);
    while ( (*(_QWORD *)(v48 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_QWORD *)(v48 + 24) ^= (*(_QWORD *)(v48 + 24) ^ (*(_QWORD *)(v48 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( *(unsigned __int8 *)(v22 + 34) >> 6 != v16 )
    MiChangePageAttribute(v22, v16, 1LL);
  *(_QWORD *)(v22 + 24) = *(_QWORD *)(v22 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v22 + 35) ^= (v78 ^ *(_BYTE *)(v22 + 35)) & 7;
  *(_QWORD *)(v22 + 8) = v82;
  *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 6;
  if ( (a5 & 2) != 0 )
  {
    v53 = *(_BYTE *)(v22 + 35);
    if ( (v53 & 8) != 0 || (v53 & 7u) > 2 )
      *(_BYTE *)(v22 + 35) = v53 & 0xF8 | 2;
  }
  v54 = v89;
  if ( (*(_DWORD *)(v89 + 56) & 0x20) != 0 || !*(_QWORD *)(v89 + 64) )
    PrototypePteDirect = 0LL;
  v55 = (volatile signed __int32 *)(v89 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v89 + 72, CurrentIrql);
  }
  else
  {
    v79 = 0;
    if ( _interlockedbittestandset(v55, 0x1Fu) )
      v79 = ExpWaitForSpinLockExclusiveAndAcquire(v54 + 72, CurrentIrql);
    v57 = *v55;
    while ( (v57 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v57 & 0x40000000) == 0 )
      {
        v59 = _InterlockedCompareExchange(v55, v57 | 0x40000000, v57);
        v58 = v57 == v59;
        v57 = v59;
        if ( !v58 )
          continue;
      }
      KeYieldProcessorEx(&v79);
      v57 = *v55;
    }
  }
  ++*(_QWORD *)(v89 + 32);
  if ( PrototypePteDirect )
    ++*(_DWORD *)(PrototypePteDirect + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v55, retaddr);
  else
    *v55 = 0;
  __writecr8(CurrentIrql);
  v60 = v76;
  LODWORD(v60) = v76 | 0x80000000;
  v91 = MiMakeValidPte(0LL, v83, v60) & 0xFFFFFFFFFFFFFEFFuLL;
  v61 = v82;
  *v82 = v91;
  if ( (unsigned int)MiPteInShadowRange(v61) )
    MiWritePteShadow(v63);
  v64 = v93;
  *v93 = v62;
  if ( (unsigned int)MiPteInShadowRange(v64) )
    MiWritePteShadow(v66);
  v68 = v80;
  v69 = Size;
  if ( !v80 )
  {
    if ( Size )
    {
      memset(v103, 0, sizeof(v103));
      v104 = 0LL;
      MiIdentifyPfn(v22, v103);
    }
    if ( (*(_BYTE *)(v22 + 34) & 7) != 6 )
      MiBadShareCount(v22, v65, v67);
    v70 = (*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
    *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ v70) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v70 )
      MiPfnShareCountIsZero(v22);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v87 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v87);
    while ( (*(_QWORD *)(v41 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_BYTE *)(v41 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v41) )
    MiPfnReferenceCountIsZero(v41, (v41 + 0x58000000000LL) / 48, v71);
  if ( v73[0] == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v73[0]);
  }
  *v92 = 0;
  if ( v68 )
  {
    LOBYTE(v8) = v81 != v68;
    return (unsigned int)(v8 + 2);
  }
  else
  {
    if ( v69 )
    {
      v104 |= 4uLL;
      v105[0] = v103;
      v105[1] = 32LL;
      EtwTraceKernelEvent((int)v105, 1, 0x20000001u, 642, 289413890);
    }
    v72 = Size_4 != 0;
    Size_4 = -Size_4;
    return v72 ? 4 : 0;
  }
}
