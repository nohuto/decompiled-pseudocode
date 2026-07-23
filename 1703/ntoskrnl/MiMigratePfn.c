/*
 * XREFs of MiMigratePfn @ 0x1400C3D80
 * Callers:
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x14003B28C (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnCommitNotCharged @ 0x1400CCF10 (MiIsPfnCommitNotCharged.c)
 *     MiObtainFaultCharges @ 0x1400CDE40 (MiObtainFaultCharges.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiGetInPageSupportBlock @ 0x1400FBF70 (MiGetInPageSupportBlock.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMigratePfn(
        unsigned int *p_PageColor,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *PrototypePteDirect; // rax
  __int64 v15; // rdx
  unsigned __int64 v17; // rbx
  int v18; // r10d
  unsigned __int64 v19; // r11
  __int64 v20; // rax
  unsigned __int64 Address; // rax
  unsigned int v22; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v25; // r9
  unsigned __int16 NodeShiftedColor; // r10
  unsigned int v27; // r11d
  __int16 v28; // dx
  int v29; // r15d
  __int64 v30; // r14
  _WORD *v31; // r8
  _WORD *v32; // rdi
  unsigned int v33; // r13d
  unsigned __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 Page; // rax
  ULONG_PTR v37; // r12
  __int64 v38; // r14
  _WORD *v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rdx
  unsigned int v42; // edi
  _QWORD *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rcx
  __int16 v46; // si
  __int64 v47; // r8
  struct _KEVENT *v48; // [rsp+20h] [rbp-58h]
  __int64 updated; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp+10h]
  unsigned int v51; // [rsp+90h] [rbp+18h]

  v50 = a2;
  v6 = *(_QWORD *)(a3 + 24);
  v8 = *(_QWORD *)(a3 + 40);
  if ( (v6 & 0x4000000000000000LL) == 0 )
  {
    if ( (v8 & 0x10000000000000LL) == 0 )
      goto LABEL_3;
    return a3;
  }
  if ( (v8 & 0x10000000000000LL) != 0 )
    return a3;
LABEL_3:
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a3 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return a3;
  }
  if ( (v8 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    if ( (unsigned int)MiIsPfnFileOnly(a3) == 1 )
      return a3;
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a3 + 16), v11, v12, v13);
    v15 = *PrototypePteDirect;
    if ( PrototypePteDirect != (_QWORD *)(*PrototypePteDirect + 128LL)
      && (*(_DWORD *)(v15 + 56) & 0x20) != 0
      && (*(_DWORD *)(v15 + 92) & 0x100000) != 0 )
    {
      return a3;
    }
    a2 = v50;
  }
  v17 = 0LL;
  v18 = 0;
  if ( (a5 & 1) != 0 )
  {
    v19 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v18 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(*(_QWORD *)(v19 + 40) + 588LL)] + 192)
                                + 146LL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( (p_PageColor[48] & 7) != 0 )
    goto LABEL_35;
  v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v19 && !*(_QWORD *)(v20 + 256) && !*(_QWORD *)(v20 + 264) && *(_BYTE *)(v20 + 232) != 1 )
      goto LABEL_35;
    Address = MiLocateAddress(a2);
    if ( Address )
    {
      v22 = *(_DWORD *)(Address + 48);
      v18 = (v22 >> 8) & 0x3F;
      if ( !v18 && (v22 & 0x8000) == 0 )
        v18 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
    }
  }
  if ( !v19 )
    goto LABEL_35;
  if ( !v18 )
  {
    if ( !(unsigned __int8)KeIsAttachedProcess() )
      goto LABEL_37;
    CurrentThread = KeGetCurrentThread();
    v18 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
LABEL_35:
    if ( v18 )
      goto LABEL_36;
LABEL_37:
    v25 = byte_14036C1B9;
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    goto LABEL_38;
  }
LABEL_36:
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = byte_14036C1B9;
  NodeShiftedColor = ((_WORD)v18 - 1) << byte_14036C1B9;
LABEL_38:
  v27 = 1;
  v28 = (1 << byte_14036C1BA) - 1;
  if ( (p_PageColor[48] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v29 = NodeShiftedColor >> v25;
  if ( v29 == (unsigned __int8)HIBYTE(*(_QWORD *)(a3 + 40)) >> 2 )
    return a3;
  v30 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a3 + 40) >> 40) & 0x3FFLL));
  v51 = NodeShiftedColor | (unsigned __int16)(v28 & ++*(_WORD *)p_PageColor);
  v48 = (struct _KEVENT *)v30;
  v31 = (char *)qword_14036C1C0 + 2 * v29 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v32 = &v31[(unsigned __int16)KeNumberNodes];
  if ( v31 < v32 )
  {
    while ( *v31 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
    {
      if ( *(_OWORD *)(*(_QWORD *)(v30 + 48) + 2184LL * (unsigned __int16)*v31 + 2008) == 0LL && ++v31 < v32 )
        continue;
      goto LABEL_45;
    }
    return a3;
  }
LABEL_45:
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    v33 = 1;
  }
  else
  {
    v33 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged(a3) )
      v33 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v30, v27, v33) )
    return a3;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || (unsigned int)MiGetSystemRegionType(v50) == 12
    || PsNtosImageBase
    && (v34 >= (unsigned __int64)PsNtosImageBase && v34 < PsNtosImageEnd
     || v34 >= (unsigned __int64)PsHalImageBase && v34 < PsHalImageEnd) )
  {
    v35 = 9;
  }
  Page = MiGetPage(v30, v51, v35);
  v37 = Page;
  if ( Page == -1 )
  {
    MiReturnFaultCharges(v30, 1uLL, v33);
    return a3;
  }
  v38 = 48 * Page - 0x58000000000LL;
  if ( v29 != (unsigned __int8)HIBYTE(*(_QWORD *)(v38 + 40)) >> 2 )
  {
    v39 = (char *)qword_14036C1C0 + 2 * v29 * (unsigned int)(unsigned __int16)KeNumberNodes;
    if ( v39 < v32 )
    {
      while ( *v39 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
      {
        if ( *v39 != ((*(_QWORD *)(v38 + 40) >> 58) & 0x3F) && ++v39 < v32 )
          continue;
        goto LABEL_67;
      }
      goto LABEL_69;
    }
  }
LABEL_67:
  if ( a4 )
  {
    v40 = MiGetInPageSupportBlock(6LL);
    if ( !v40 )
    {
LABEL_69:
      MiLockNestedPageAtDpcInline(v38);
      if ( *(_QWORD *)(v38 + 16) )
        v41 = 2LL;
      else
        v41 = 1LL;
      MiInsertPageInFreeOrZeroedList(v37, v41);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReturnFaultCharges((__int64)v48, 1uLL, v33);
      return a3;
    }
  }
  else
  {
    v40 = 0LL;
  }
  v42 = *(unsigned __int8 *)(a3 + 34) >> 6;
  MiLockNestedPageAtDpcInline(v38);
  MiFinalizePageAttribute(v38, v42, 1LL);
  MiCopyPfnEntry(v38, a3);
  *(_WORD *)(v38 + 32) = 1;
  *(_QWORD *)(v38 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
  if ( v40 )
  {
    *(_BYTE *)(v40 + 189) |= 0x10u;
    *(_BYTE *)(v38 + 34) |= 0x20u;
    *(_QWORD *)v38 = v40 + 32;
    *(_QWORD *)(v40 + 240) = v38;
  }
  v43 = (_QWORD *)(*(_QWORD *)(v38 + 8) | 0x8000000000000000uLL);
  v44 = MI_READ_PTE_LOCK_FREE(v43);
  updated = MiUpdateTransitionPteFrame(v44, v37);
  *v43 = updated;
  if ( (unsigned int)MiPteInShadowRange(v43) )
    MiWritePteShadow(v45);
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a4 )
  {
    MiLockNestedPageAtDpcInline(a4);
    MiAddLockedPageCharge(a4);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(a4);
    *(_BYTE *)(a4 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a4);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a6 = v40;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(2uLL);
  }
  MiCopyPage(v37, (a3 + 0x58000000000LL) / 48, 0LL, 2);
  if ( a4 )
  {
    MiLockProtoPoolPage((unsigned __int64)v43, 0LL);
    MiLockPageAtDpcInline(a4);
    MiRemoveLockedPageChargeAndDecRef(a4);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(a3);
  }
  else
  {
    MiLockPageInline(a3);
  }
  *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList((a3 + 0x58000000000LL) / 48, 2LL);
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v38);
  *(_BYTE *)(v38 + 34) &= ~0x20u;
  v46 = *(_WORD *)(v38 + 32);
  *(_QWORD *)v38 = 0LL;
  MiRemoveLockedPageCharge(v38);
  if ( v40 )
  {
    *(_BYTE *)(v40 + 189) &= ~0x10u;
    if ( (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( v46 == 1 )
      {
        if ( (*(_DWORD *)(v38 + 16) & 0x400LL) == 0 )
          v17 = MiCapturePageFileInfoInline((_QWORD *)(v38 + 16), 0, 1);
        MiInsertPageInFreeOrZeroedList(v37, 2LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a4 )
        MiUnlockProtoPoolPage(a4, 2u);
      if ( v17 )
      {
        MiReleasePageFileInfo(v48, v17, 1);
        return 0LL;
      }
      return 0LL;
    }
    if ( !(unsigned int)MiIsFaultPteIntact(v50, v43, &updated) )
    {
      if ( v46 == 1 )
        MiPfnReferenceCountIsZero(v38, v37, v47);
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a4 )
        MiUnlockProtoPoolPage(a4, 2u);
      return 0LL;
    }
  }
  return v38;
}
