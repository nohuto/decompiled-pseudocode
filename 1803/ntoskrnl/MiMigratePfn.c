/*
 * XREFs of MiMigratePfn @ 0x14011B910
 * Callers:
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiAreChargesNeededToLockPage @ 0x140031FE0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140032060 (MiIsPfnCommitNotCharged.c)
 *     MiLockOwnedProtoPage @ 0x1400322A0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140033DD0 (MiChargeForLockedPage.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiReturnFreeZeroPage @ 0x1400517A8 (MiReturnFreeZeroPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1400B221C (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnFaultCharges @ 0x1400D13B8 (MiReturnFaultCharges.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiObtainFaultCharges @ 0x14011C410 (MiObtainFaultCharges.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiInitializeInPageSupport @ 0x140127F00 (MiInitializeInPageSupport.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall MiMigratePfn(
        unsigned int *p_PageColor,
        unsigned __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        PSLIST_ENTRY *a6)
{
  __int64 v8; // r8
  _QWORD *PrototypePteDirect; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  int v15; // r10d
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  unsigned __int64 Address; // rax
  unsigned int v19; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 NodeShiftedColor; // r10
  unsigned int v23; // r11d
  unsigned __int16 v24; // dx
  int v25; // r8d
  int v26; // r12d
  unsigned __int64 v27; // rcx
  struct _KEVENT *v28; // r10
  _WORD *v29; // r8
  _WORD *v30; // r14
  unsigned int v31; // r15d
  unsigned int v32; // r8d
  __int64 Page; // rax
  __int64 v34; // rdi
  __int64 v35; // r9
  _WORD *v36; // rdx
  PSLIST_ENTRY v37; // rax
  PSLIST_ENTRY v38; // r12
  int v39; // r14d
  unsigned __int64 v40; // r14
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 updated; // rax
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // r9
  unsigned __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // r9
  __int16 v65; // bp
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  ULONG_PTR v69; // [rsp+20h] [rbp-68h]
  int v70; // [rsp+28h] [rbp-60h] BYREF
  int v71; // [rsp+2Ch] [rbp-5Ch] BYREF
  int v72; // [rsp+30h] [rbp-58h] BYREF
  int v73; // [rsp+34h] [rbp-54h] BYREF
  int v74; // [rsp+38h] [rbp-50h] BYREF
  int v75; // [rsp+3Ch] [rbp-4Ch] BYREF
  int v76; // [rsp+40h] [rbp-48h] BYREF
  __int64 v77; // [rsp+48h] [rbp-40h] BYREF
  struct _KEVENT *v78; // [rsp+50h] [rbp-38h]
  unsigned int v79; // [rsp+A0h] [rbp+18h]
  PSLIST_ENTRY v80; // [rsp+A0h] [rbp+18h]

  v8 = *(_QWORD *)(a3 + 40);
  if ( (v8 & 0x10000000000000LL) != 0
    || (unsigned __int16)KeNumberNodes <= 1u
    || *(_WORD *)(a3 + 32)
    || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
  {
    return a3;
  }
  if ( (v8 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    if ( (unsigned int)MiIsPfnFileOnly(a3) == 1 )
      return a3;
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a3 + 16));
    v13 = *PrototypePteDirect;
    if ( PrototypePteDirect != (_QWORD *)(*PrototypePteDirect + 128LL)
      && (*(_DWORD *)(v13 + 56) & 0x20) != 0
      && (*(_DWORD *)(v13 + 92) & 0x100000) != 0 )
    {
      return a3;
    }
  }
  v14 = 0LL;
  v15 = 0;
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
  if ( (p_PageColor[46] & 7) != 0 )
    goto LABEL_32;
  v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v16 && !*(_QWORD *)(v17 + 360) && !*(_QWORD *)(v17 + 368) && *(_BYTE *)(v17 + 320) != 1 )
      goto LABEL_32;
    Address = MiLocateAddress(a2);
    if ( Address )
    {
      v19 = *(_DWORD *)(Address + 48);
      v15 = (v19 >> 8) & 0x3F;
      if ( !v15 && (v19 & 0x4000) == 0 )
        v15 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
    }
  }
  if ( !v16 )
    goto LABEL_32;
  if ( !v15 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex != 1 )
      goto LABEL_34;
    CurrentThread = KeGetCurrentThread();
    v15 = CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
LABEL_32:
    if ( v15 )
      goto LABEL_33;
LABEL_34:
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
    goto LABEL_35;
  }
LABEL_33:
  CurrentPrcb = KeGetCurrentPrcb();
  NodeShiftedColor = ((_WORD)v15 - 1) << byte_1403CB699;
LABEL_35:
  v23 = 1;
  if ( (p_PageColor[46] & 7) >= 2 )
    p_PageColor = &CurrentPrcb->PageColor;
  v25 = NodeShiftedColor;
  v26 = NodeShiftedColor >> byte_1403CB699;
  v27 = *(_QWORD *)(a3 + 40);
  if ( v26 == v27 >> 58 )
    return a3;
  v28 = *(struct _KEVENT **)(qword_1403CBD88 + 8 * ((v27 >> 40) & 0x3FF));
  v78 = v28;
  v24 = (1 << byte_1403CB69A) - 1;
  v79 = v25 | _InterlockedExchangeAdd((volatile signed __int32 *)p_PageColor, 1u) & v24;
  v29 = (char *)qword_1403CB6A0 + 2 * v26 * (unsigned int)(unsigned __int16)KeNumberNodes;
  v30 = &v29[(unsigned __int16)KeNumberNodes];
  if ( v29 < v30 )
  {
    while ( *v29 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
    {
      if ( *(_OWORD *)&v28->Header.WaitListHead.Blink[124 * (unsigned __int16)*v29 + 110] == 0LL && ++v29 < v30 )
        continue;
      goto LABEL_42;
    }
    return a3;
  }
LABEL_42:
  if ( (*(_QWORD *)(a3 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
  {
    v31 = 1;
  }
  else
  {
    v31 = 0;
    if ( (unsigned int)MiIsPfnCommitNotCharged(a3) )
      v31 = 5;
  }
  if ( !(unsigned int)MiObtainFaultCharges(v28, v23, v31) )
    return a3;
  v32 = 1;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4
    || a2 >= 0xFFFF800000000000uLL && byte_1403CCF90[((a2 >> 39) & 0x1FF) - 256] == 12 )
  {
    v32 = 9;
  }
  Page = MiGetPage((__int64)v78, v79, v32);
  v69 = Page;
  if ( Page == -1 )
  {
LABEL_64:
    MiReturnFaultCharges((__int64)v78, 1uLL, v31);
    return a3;
  }
  v34 = 48 * Page - 0x58000000000LL;
  v35 = *(_QWORD *)(v34 + 40) >> 58;
  if ( v26 != (unsigned __int16)v35 )
  {
    v36 = (char *)qword_1403CB6A0 + 2 * v26 * (unsigned int)(unsigned __int16)KeNumberNodes;
    if ( v36 < v30 )
    {
      while ( *v36 != ((*(_QWORD *)(a3 + 40) >> 58) & 0x3F) )
      {
        if ( *v36 != (v35 & 0x3F) && ++v36 < v30 )
          continue;
        goto LABEL_59;
      }
      goto LABEL_63;
    }
  }
LABEL_59:
  if ( a4 )
  {
    if ( !LOWORD(stru_1403CC3D0.Alignment)
      || (v37 = RtlpInterlockedPopEntrySList(&stru_1403CC3D0), v80 = v37, (v38 = v37) == 0LL) )
    {
LABEL_63:
      MiLockNestedPageAtDpcInline(v34);
      MiReturnFreeZeroPage(v34, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_64;
    }
    MiInitializeInPageSupport((ULONG_PTR)v37);
  }
  else
  {
    v38 = 0LL;
    v80 = 0LL;
  }
  v39 = *(unsigned __int8 *)(a3 + 34) >> 6;
  v70 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v70);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  if ( *(unsigned __int8 *)(v34 + 34) >> 6 != v39 )
    MiChangePageAttribute(v34, v39, 1u);
  MiSetPfnTbFlushStamp(v34, 0, 1);
  MiCopyPfnEntry(v34, a3);
  *(_WORD *)(v34 + 32) = 1;
  *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
  *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
  if ( v38 )
  {
    *((_BYTE *)&v38[11].Next + 13) |= 0x10u;
    *(_BYTE *)(v34 + 34) |= 0x20u;
    *(_QWORD *)v34 = v38 + 2;
    v38[15].Next = (_SLIST_ENTRY *)v34;
  }
  v40 = *(_QWORD *)(v34 + 8) | 0x8000000000000000uLL;
  if ( MiPteInShadowRange(v40)
    && (unsigned int)MiPteHasShadow()
    && (v41 & 1) != 0
    && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
  {
    v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)(unsigned int)v40 >> 3) & 0x1FF));
      v44 = v41 | 0x20;
      if ( (v43 & 0x20) == 0 )
        v44 = v41;
      v41 = v44;
      if ( (v43 & 0x42) != 0 )
        v41 = v44 | 0x42;
    }
  }
  updated = MiUpdateTransitionPteFrame(v41, v69);
  *(_QWORD *)v40 = updated;
  if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v40, updated, v46);
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a4 )
  {
    v71 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v71);
      while ( *(__int64 *)(a4 + 24) < 0 );
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(a4) || (unsigned int)MiChargeForLockedPage(a4, 3, v48, v49) )
      ++*(_WORD *)(a4 + 32);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v72 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v72);
      while ( *(__int64 *)(a4 + 24) < 0 );
    }
    *(_BYTE *)(a4 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(a4, v47, v48, v49);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *a6 = v38;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(2uLL);
  }
  MiCopyPage(v69, (a3 + 0x58000000000LL) / 48, 0LL, 2);
  if ( a4 )
  {
    v50 = v40 >> 9;
    v51 = (v50 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v52 = MI_READ_PTE_LOCK_FREE((v50 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v77 = v52;
      if ( (v52 & 1) == 0 || (v52 & 0x200) != 0 )
        break;
      v53 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77);
      v55 = v54 & (v53 >> 12);
      if ( (unsigned int)MiIsPfnInline(v55) )
      {
        v56 = 48 * v55 - 0x58000000000LL;
        v73 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v73);
          while ( *(__int64 *)(v56 + 24) < 0 );
        }
        if ( MiPteInShadowRange(v51)
          && (unsigned int)MiPteHasShadow()
          && (v57 & 1) != 0
          && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 8 * (((unsigned __int64)(unsigned int)v51 >> 3) & 0x1FF));
            v60 = v57 | 0x20;
            if ( (v59 & 0x20) == 0 )
              v60 = v57;
            v57 = v60;
            if ( (v59 & 0x42) != 0 )
              v57 = v60 | 0x42;
          }
        }
        v77 = v57;
        if ( (v57 & 1) != 0
          && (v57 & 0x200) == 0
          && (v61 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v77), v55 == (v62 & (v61 >> 12))) )
        {
          if ( !(unsigned int)MiAreChargesNeededToLockPage(48 * v55 - 0x58000000000LL)
            || (unsigned int)MiChargeForLockedPage(48 * v55 - 0x58000000000LL, 1, v63, v64) )
          {
            ++*(_WORD *)(v56 + 32);
          }
          MiLockOwnedProtoPage(48 * v55 - 0x58000000000LL, 0x11u);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        break;
      }
    }
    v74 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v74);
      while ( *(__int64 *)(a4 + 24) < 0 );
    }
    if ( (unsigned int)MiRemoveLockedPageCharge(a4) )
      MiPfnReferenceCountIsZero(a4, (__int64)(a4 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v75 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v75);
      while ( *(__int64 *)(a3 + 24) < 0 );
    }
    v38 = v80;
  }
  else
  {
    MiLockPageInline(a3);
  }
  *(_QWORD *)(a3 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  MiInsertPageInFreeOrZeroedList((a3 + 0x58000000000LL) / 48, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v76 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v76);
    while ( *(__int64 *)(v34 + 24) < 0 );
  }
  v65 = *(_WORD *)(v34 + 32);
  *(_BYTE *)(v34 + 34) &= ~0x20u;
  *(_QWORD *)v34 = 0LL;
  MiRemoveLockedPageCharge(v34);
  if ( !v38 )
    return v34;
  *((_BYTE *)&v38[11].Next + 13) &= ~0x10u;
  if ( (*(_QWORD *)(v34 + 24) & 0x4000000000000000LL) == 0 )
    return v34;
  if ( v65 == 1 )
  {
    if ( (*(_DWORD *)(v34 + 16) & 0x400LL) == 0 )
      v14 = MiCapturePageFileInfoInline((_QWORD *)(v34 + 16), 0, 1);
    MiInsertPageInFreeOrZeroedList(v69, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a4 )
  {
    LOBYTE(v66) = 2;
    MiUnlockProtoPoolPage(a4, v66, v67, v68);
  }
  if ( v14 )
    MiReleasePageFileInfo(v78, v14, 1);
  return 0LL;
}
