/*
 * XREFs of MiMigratePfn @ 0x14004A320
 * Callers:
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14002AA00 (MiInitializeInPageSupport.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiFindActualFaultingPte @ 0x14002CEA0 (MiFindActualFaultingPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1400C0428 (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     MiCapturePageFileInfoInline @ 0x140117280 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x14012F0F4 (MiReturnFaultCharges.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiMigratePfn(
        unsigned int *p_PageColor,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        PSLIST_ENTRY *a6)
{
  unsigned __int64 v8; // r8
  __int64 v10; // r10
  _QWORD *PrototypePteDirect; // rax
  __int64 v12; // rdx
  __int64 v14; // rbx
  int v15; // r10d
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  __int64 Address; // rax
  unsigned int v19; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 NodeShiftedColor; // r10
  unsigned __int16 v23; // dx
  int v24; // r8d
  ULONG_PTR *v25; // r11
  int v26; // eax
  int v27; // edi
  __int64 v28; // rdx
  unsigned int v29; // edi
  _WORD *v30; // r8
  _WORD *v31; // r15
  unsigned int v32; // r12d
  unsigned int v33; // esi
  __int64 v34; // r9
  struct _KPRCB *v35; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v37; // zf
  unsigned __int32 v38; // eax
  unsigned int v39; // edi
  unsigned int v40; // r8d
  __int64 Page; // rax
  __int64 v42; // rdi
  __int64 v43; // r9
  _WORD *v44; // rdx
  PSLIST_ENTRY v45; // rax
  PSLIST_ENTRY v46; // r15
  unsigned int v47; // esi
  unsigned __int64 v48; // r15
  __int64 PteShadow; // rax
  __int64 updated; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 *v56; // r15
  unsigned __int64 v57; // r10
  unsigned __int64 v58; // r11
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  _QWORD *v68; // r15
  char v69; // al
  __int64 v70; // rax
  __int16 v71; // si
  __int64 *ActualFaultingPte; // rax
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 *v75; // rax
  unsigned __int64 v76; // r9
  unsigned __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // r9
  unsigned __int64 v80; // r11
  unsigned __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // [rsp+20h] [rbp-59h]
  unsigned int v84; // [rsp+28h] [rbp-51h]
  __int64 v85; // [rsp+28h] [rbp-51h]
  int v86; // [rsp+30h] [rbp-49h]
  PSLIST_ENTRY v87; // [rsp+30h] [rbp-49h]
  __int64 v88; // [rsp+38h] [rbp-41h] BYREF
  __int64 v89; // [rsp+40h] [rbp-39h]
  int v90; // [rsp+48h] [rbp-31h] BYREF
  int v91; // [rsp+4Ch] [rbp-2Dh] BYREF
  int v92; // [rsp+50h] [rbp-29h] BYREF
  int v93; // [rsp+54h] [rbp-25h] BYREF
  int v94; // [rsp+58h] [rbp-21h] BYREF
  int v95; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v96; // [rsp+60h] [rbp-19h] BYREF
  int v97; // [rsp+64h] [rbp-15h] BYREF
  __int64 v98; // [rsp+68h] [rbp-11h] BYREF
  __int64 v99; // [rsp+70h] [rbp-9h]
  char v100[8]; // [rsp+78h] [rbp-1h] BYREF
  char v101[16]; // [rsp+80h] [rbp+7h] BYREF

  v8 = a2;
  v10 = *(_QWORD *)(a3 + 40);
  if ( (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (v10 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
    return a3;
  }
  if ( (v10 & 0x10000000000000LL) != 0 )
    return a3;
LABEL_3:
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a3 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return a3;
  }
  if ( (v10 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a3 + 16));
    v12 = *PrototypePteDirect;
    if ( PrototypePteDirect != (_QWORD *)(*PrototypePteDirect + 128LL)
      && (*(_DWORD *)(v12 + 56) & 0x20) != 0
      && (*(_DWORD *)(v12 + 92) & 0x100000) != 0 )
    {
      return a3;
    }
  }
  v14 = 0LL;
  v15 = 0;
  v89 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    v16 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v15 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v16 + 40) + 588LL)] + 192)
                                + 146LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( (p_PageColor[48] & 7) != 0 )
    goto LABEL_33;
  v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v16 && !*(_QWORD *)(v17 + 256) && !*(_QWORD *)(v17 + 264) && *(_BYTE *)(v17 + 232) != 1 )
      goto LABEL_33;
    Address = MiLocateAddress(v8);
    if ( Address )
    {
      v19 = *(_DWORD *)(Address + 48);
      v15 = (v19 >> 8) & 0x3F;
      if ( !v15 && (v19 & 0x8000) == 0 )
        v15 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
    }
  }
  if ( !v16 )
    goto LABEL_33;
  if ( !v15 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex != 1 )
      goto LABEL_35;
    CurrentThread = KeGetCurrentThread();
    v15 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
LABEL_33:
    if ( v15 )
      goto LABEL_34;
LABEL_35:
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    goto LABEL_36;
  }
LABEL_34:
  CurrentPrcb = KeGetCurrentPrcb();
  NodeShiftedColor = ((_WORD)v15 - 1) << byte_140388501;
LABEL_36:
  v23 = (1 << byte_140388502) - 1;
  if ( (p_PageColor[48] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v24 = NodeShiftedColor >> byte_140388501;
  v86 = v24;
  if ( v24 == *(_QWORD *)(a3 + 40) >> 58 )
    return a3;
  v25 = *(ULONG_PTR **)(qword_140388AF0 + 8 * ((*(_QWORD *)(a3 + 40) >> 40) & 0x3FFLL));
  v26 = (unsigned __int16)++*(_WORD *)p_PageColor;
  v27 = v23;
  v28 = (unsigned __int16)KeNumberNodes;
  v29 = NodeShiftedColor | v26 & v27;
  v83 = (__int64)v25;
  v84 = v29;
  v30 = (char *)qword_140388508 + 2 * v24 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v31 = &v30[(unsigned __int16)KeNumberNodes];
  if ( v30 < v31 )
  {
    v28 = *(_QWORD *)(a3 + 40) >> 58;
    LOWORD(v28) = v28 & 0x3F;
    while ( *v30 != (_WORD)v28 )
    {
      if ( *(_OWORD *)(v25[2] + 8256LL * (unsigned __int16)*v30 + 8032) == 0LL && ++v30 < v31 )
        continue;
      goto LABEL_44;
    }
    return a3;
  }
LABEL_44:
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    v32 = 1;
  }
  else
  {
    v32 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged(a3, v28) )
      v32 = 5;
  }
  v33 = 1;
  while ( 1 )
  {
    v34 = v33;
    if ( v25 == &MiSystemPartition )
    {
      v35 = KeGetCurrentPrcb();
      CachedResidentAvailable = v35->CachedResidentAvailable;
      if ( v33 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v38 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v35->CachedResidentAvailable,
                  CachedResidentAvailable - v33,
                  CachedResidentAvailable);
          v37 = (_DWORD)CachedResidentAvailable == v38;
          LODWORD(CachedResidentAvailable) = v38;
          if ( v37 )
            goto LABEL_60;
        }
        while ( v33 <= (unsigned __int64)v38 );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v25) )
      break;
    v33 >>= 1;
    if ( !v33 )
      return a3;
    v25 = (ULONG_PTR *)v83;
  }
LABEL_60:
  if ( (v32 & 1) != 0 )
  {
    v39 = v33;
    do
    {
      if ( (unsigned int)MiChargeCommit(v83, v39, 1LL, v34) == 1 )
        break;
      v39 >>= 1;
    }
    while ( v39 );
    if ( v39 != v33 )
      MiReturnFaultCharges(v83, v33 - v39, 0LL);
    v33 = v39;
    v29 = v84;
  }
  if ( !v33 )
    return a3;
  v40 = 1;
  if ( v89 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || a2 >= 0xFFFF800000000000uLL && byte_1403899D0[((a2 >> 39) & 0x1FF) - 256] == 12
    || PsNtosImageBase
    && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
     || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
  {
    v40 = 9;
  }
  Page = MiGetPage(v83, v29, v40);
  v85 = Page;
  if ( Page == -1 )
  {
LABEL_89:
    MiReturnFaultCharges(v83, 1LL, v32);
    return a3;
  }
  v42 = 48 * Page - 0x58000000000LL;
  v43 = *(_QWORD *)(v42 + 40) >> 58;
  if ( v86 != (unsigned __int16)v43 )
  {
    v44 = (char *)qword_140388508 + 2 * (unsigned int)(unsigned __int16)KeNumberNodes * v86;
    if ( v44 < v31 )
    {
      while ( *v44 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
      {
        if ( *v44 != (v43 & 0x3F) && ++v44 < v31 )
          continue;
        goto LABEL_84;
      }
      goto LABEL_88;
    }
  }
LABEL_84:
  if ( a4 )
  {
    if ( !LOWORD(stru_140389150.Alignment)
      || (v45 = RtlpInterlockedPopEntrySList(&stru_140389150), v87 = v45, (v46 = v45) == 0LL) )
    {
LABEL_88:
      MiLockNestedPageAtDpcInline(v42);
      MiReturnFreeZeroPage(v42, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_89;
    }
    MiInitializeInPageSupport((ULONG_PTR)v45, 6);
  }
  else
  {
    v46 = 0LL;
    v87 = 0LL;
  }
  v47 = *(unsigned __int8 *)(a3 + 34) >> 6;
  v90 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v90);
    while ( *(__int64 *)(v42 + 24) < 0 );
  }
  if ( *(unsigned __int8 *)(v42 + 34) >> 6 != v47 )
    MiChangePageAttribute(v42, v47, 1LL);
  *(_QWORD *)(v42 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
  MiCopyPfnEntry(v42, a3);
  *(_QWORD *)(v42 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(v42 + 32) = 1;
  *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
  if ( v46 )
  {
    *((_BYTE *)&v46[11].Next + 13) |= 0x10u;
    *(_BYTE *)(v42 + 34) |= 0x20u;
    *(_QWORD *)v42 = v46 + 2;
    v46[15].Next = (_SLIST_ENTRY *)v42;
  }
  v48 = *(_QWORD *)(v42 + 8) | 0x8000000000000000uLL;
  v89 = v48;
  PteShadow = *(_QWORD *)v48;
  if ( v48 >= 0xFFFFF6FB7DBED000uLL && v48 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v48, *(_QWORD *)v48);
  updated = MiUpdateTransitionPteFrame(PteShadow, v85, 0xFFFFF6FB7DBED7F8uLL);
  v88 = updated;
  *(_QWORD *)v48 = updated;
  if ( v48 >= v53 && v48 <= v52 )
    MiWritePteShadow(v48, updated);
  _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a4 )
  {
    v91 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v91);
      while ( *(__int64 *)(a4 + 24) < 0 );
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a4, v51, v52, v53) || (unsigned int)MiChargeForLockedPage(v54, 3) )
      ++*(_WORD *)(a4 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v92 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v92);
      while ( *(__int64 *)(a4 + 24) < 0 );
    }
    *(_BYTE *)(a4 + 34) &= ~0x20u;
    if ( (unsigned int)MiRemoveLockedPageCharge(a4) )
      MiPfnReferenceCountIsZero(a4, (a4 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a6 = v87;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(2uLL);
  }
  v55 = (a3 + 0x58000000000LL) / 48;
  v99 = v55;
  MiCopyPage(v85, v55, 0LL, 2LL);
  if ( a4 )
  {
    v56 = (__int64 *)(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v57 = 0xFFFFF6FB7DBED7F8uLL;
    v58 = 0xFFFFF6FB7DBED000uLL;
    v59 = *v56;
    while ( 1 )
    {
      v60 = v59;
      if ( (unsigned __int64)v56 >= v58 && (unsigned __int64)v56 <= v57 )
        v60 = MiReadPteShadow(v56, v59);
      v98 = v60;
      if ( (v60 & 1) == 0 || (v60 & 0x200) != 0 )
        break;
      v61 = MI_GET_PAGE_FRAME_FROM_PTE(&v98);
      if ( (unsigned int)MiIsPfnInline(v61) )
      {
        v62 = 48 * v61 - 0x58000000000LL;
        v93 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v93);
          while ( *(__int64 *)(v62 + 24) < 0 );
        }
        v63 = *v56;
        if ( (unsigned __int64)v56 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v56 <= 0xFFFFF6FB7DBED7F8uLL )
          v63 = MiReadPteShadow(v56, *v56);
        v98 = v63;
        if ( (v63 & 1) != 0 && (v63 & 0x200) == 0 && v61 == MI_GET_PAGE_FRAME_FROM_PTE(&v98) )
        {
          if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v61 - 0x58000000000LL, v64, v65, v66)
            || (unsigned int)MiChargeForLockedPage(v67, 1) )
          {
            ++*(_WORD *)(v62 + 32);
          }
          v68 = (_QWORD *)(*(_QWORD *)(v62 + 8) | 0x8000000000000000uLL);
          while ( (*(_BYTE *)(v62 + 34) & 0x20) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v69 = *(_BYTE *)(v62 + 34);
            v94 = 0;
            if ( (v69 & 0x20) != 0 )
            {
              do
                KeYieldProcessorEx(&v94);
              while ( (*(_BYTE *)(v62 + 34) & 0x20) != 0 );
            }
            MiLockPageInline(v62);
          }
          *(_BYTE *)(v62 + 34) |= 0x20u;
          if ( (*(_QWORD *)(v62 + 24) & 0x4000000000000000LL) == 0 )
          {
            v70 = *v68;
            if ( (unsigned __int64)v68 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v68 <= 0xFFFFF6FB7DBED7F8uLL )
              LOBYTE(v70) = MiReadPteShadow(v68, *v68);
            if ( (v70 & 0x20) == 0 )
              MiWriteValidPteVolatile(v68, 1LL);
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v55 = v99;
        break;
      }
    }
    v95 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v95);
      while ( *(__int64 *)(a4 + 24) < 0 );
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(a4) )
      MiPfnReferenceCountIsZero(a4, (a4 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v96 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v96);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    v48 = v89;
  }
  else
  {
    MiLockPageInline(a3);
  }
  *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList(v55, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v97 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v97);
    while ( *(__int64 *)(v42 + 24) < 0 );
  }
  *(_BYTE *)(v42 + 34) &= ~0x20u;
  v71 = *(_WORD *)(v42 + 32);
  *(_QWORD *)v42 = 0LL;
  MiRemoveLockedPageCharge(v42);
  if ( !v87 )
    return v42;
  *((_BYTE *)&v87[11].Next + 13) &= ~0x10u;
  if ( (*(_QWORD *)(v42 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( v71 == 1 )
    {
      if ( (*(_DWORD *)(v42 + 16) & 0x400LL) == 0 )
        v14 = MiCapturePageFileInfoInline(v42 + 16, 0LL);
      MiInsertPageInFreeOrZeroedList(v85, 2LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a4 )
      MiUnlockProtoPoolPage(a4, 2u);
    if ( v14 )
    {
      MiReleasePageFileInfo(v83, v14, 1LL);
      return 0LL;
    }
    return 0LL;
  }
  ActualFaultingPte = (__int64 *)MiFindActualFaultingPte(a2);
  if ( ActualFaultingPte )
  {
    if ( ActualFaultingPte == (__int64 *)v48 )
    {
      v79 = *ActualFaultingPte;
      v80 = 0xFFFFF6FB7DBED000uLL;
      v81 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)ActualFaultingPte >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)ActualFaultingPte <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v79 = MiReadPteShadow(ActualFaultingPte, v79);
      }
      v82 = v88;
      if ( (unsigned __int64)&v88 >= v80 && (unsigned __int64)&v88 <= v81 )
        v82 = MiReadPteShadow(&v88, v88);
      if ( v79 == v82 )
        return v42;
    }
    else
    {
      v73 = *ActualFaultingPte;
      if ( (unsigned __int64)ActualFaultingPte >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)ActualFaultingPte <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v73 = MiReadPteShadow(ActualFaultingPte, v73);
      }
      if ( (v73 & 0x400) != 0 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(v73) )
        {
          v75 = (__int64 *)MiCheckVirtualAddress(a2, v100, v101);
          v76 = 0xFFFFF6FB7DBED000uLL;
        }
        else
        {
          v75 = (__int64 *)MiGetPrototypePteDirect(v74);
        }
        v77 = (unsigned __int64)v75;
        if ( v75 == (__int64 *)v48 )
        {
          v78 = *v75;
          if ( v77 >= v76 && v77 <= 0xFFFFF6FB7DBED7F8uLL )
            v78 = MiReadPteShadow(v77, v78);
          if ( v78 == v88 )
            return v42;
        }
      }
    }
  }
  if ( v71 == 1 )
    MiPfnReferenceCountIsZero(v42, v85);
  _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a4 )
    MiUnlockProtoPoolPage(a4, 2u);
  return 0LL;
}
