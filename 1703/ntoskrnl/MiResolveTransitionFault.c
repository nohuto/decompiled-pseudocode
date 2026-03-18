/*
 * XREFs of MiResolveTransitionFault @ 0x1400C2260
 * Callers:
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiIsAddressGlobal @ 0x1400B6550 (MiIsAddressGlobal.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiWaitForCollidedFaultComplete @ 0x1401180BC (MiWaitForCollidedFaultComplete.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiMakeProtoReadOnly @ 0x140214A0C (MiMakeProtoReadOnly.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 */

__int64 MiResolveTransitionFault(
        unsigned __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        ...)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  unsigned __int64 v12; // rbx
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r10
  volatile signed __int32 *BugCheckParameter4; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // r11
  __int64 result; // rax
  __int64 v22; // r8
  __int64 v23; // r13
  unsigned __int64 v24; // r10
  char v25; // cl
  struct _KTHREAD *CurrentThread; // r8
  __int64 v27; // r11
  char v28; // bl
  BOOL v29; // ecx
  int ImagePageOk; // ebx
  char v31; // al
  __int64 PrototypePteDirect; // rax
  __int64 v33; // rdx
  __int64 v34; // r10
  unsigned __int64 Address; // rax
  char v36; // r10
  __int64 v37; // r11
  int v38; // edx
  __int64 v39; // r11
  __int64 v40; // rdx
  bool v41; // zf
  unsigned __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rbx
  PVOID v46; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int16 v58; // dx
  unsigned __int64 CurrentPrcb; // r8
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  int v62; // ecx
  __int64 v63; // rbx
  unsigned __int64 v64; // r9
  __int64 v65; // rdx
  signed __int32 v66; // eax
  PVOID v67; // rbx
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  void *v70; // [rsp+28h] [rbp-61h]
  int v71[4]; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+60h] [rbp-29h] BYREF
  int v73; // [rsp+68h] [rbp-21h] BYREF
  int v74; // [rsp+6Ch] [rbp-1Dh] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-19h] BYREF
  __int64 v76; // [rsp+78h] [rbp-11h] BYREF
  struct _KEVENT *v77; // [rsp+80h] [rbp-9h]
  __int64 v78; // [rsp+88h] [rbp-1h]
  int v80; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v81; // [rsp+E8h] [rbp+5Fh]
  _QWORD *v82; // [rsp+110h] [rbp+87h] BYREF
  va_list va; // [rsp+110h] [rbp+87h]
  va_list va1; // [rsp+118h] [rbp+8Fh] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v82 = va_arg(va1, _QWORD *);
  v81 = a4;
  v8 = (__int64)v82;
  v9 = 0LL;
  v12 = a1;
  if ( v82 )
    *v82 = 0LL;
  v13 = MI_READ_PTE_LOCK_FREE(a2);
  if ( a3 )
  {
    *(_QWORD *)v71 = v13;
    BugCheckParameter4 = (volatile signed __int32 *)(48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v71) - 0x58000000000LL);
    goto LABEL_17;
  }
  BugCheckParameter3 = v13;
  v14 = v13;
  if ( (v13 & 0x800) == 0 )
    return 3221226548LL;
  while ( 1 )
  {
    if ( !(unsigned int)MiInvalidPteConforms(v14) )
      goto LABEL_12;
    v15 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&BugCheckParameter3);
    if ( !MiIsPfnInline(v15) )
      goto LABEL_12;
    BugCheckParameter4 = (volatile signed __int32 *)(v17 + 48 * v16);
    v73 = 0;
    while ( _interlockedbittestandset64(BugCheckParameter4 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v73);
      while ( (*((_QWORD *)BugCheckParameter4 + 3) & 0x8000000000000000uLL) != 0 );
    }
    v19 = MI_READ_PTE_LOCK_FREE(a2);
    if ( v19 == BugCheckParameter3 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, v20);
LABEL_12:
    BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(a2);
    v14 = BugCheckParameter3;
    if ( (BugCheckParameter3 & 0x800) == 0 )
      return 3221226548LL;
  }
  if ( (*((_QWORD *)BugCheckParameter4 + 1) | 0x8000000000000000uLL) != a2 )
    KeBugCheckEx(0x1Au, 0x411uLL, a2, BugCheckParameter3, *((_QWORD *)BugCheckParameter4 + 1));
  *(_QWORD *)v71 = MI_READ_PTE_LOCK_FREE(a2);
LABEL_17:
  v23 = a5;
  v78 = a5 & 1;
  if ( (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePfnPriority(BugCheckParameter4, *(_DWORD *)((a5 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
    goto LABEL_30;
  }
  __incgsdword(0x2E98u);
  v24 = *((_QWORD *)BugCheckParameter4 + 5);
  v25 = *((_BYTE *)BugCheckParameter4 + 34);
  v77 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((v24 >> 40) & 0x3FF));
  if ( (v25 & 0x20) == 0 )
  {
    if ( (v12 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0)
      && (v24 & 0x200000000000000LL) != 0
      && (BugCheckParameter4[4] & 0x400LL) != 0
      && ((v24 >> 54) & 7) != 3 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(*((_QWORD *)BugCheckParameter4 + 2), a5 & 1, v22, 1LL);
      v33 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
      {
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 96) + 8LL);
        if ( v34 )
        {
          if ( (v34 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v34 & 3) != 2 )
          {
            if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v33 + 92) & 0xC0000) != 0
              || (Address = MiLocateAddress(v12)) == 0
              || (v38 = *(_DWORD *)(Address + 48), (v38 & 7) != 2)
              || (v38 & 0xF8) != 8
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v36 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v37 + 34) & 2) == 0) )
            {
              ImagePageOk = MiMakeImagePageOk(v12, a2, v71[0], v81, (ULONG_PTR)BugCheckParameter4, a3);
              if ( ImagePageOk < 0 )
                goto LABEL_84;
              v12 = a1;
            }
          }
        }
      }
    }
    if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) == 0
      && a2 != (*((_QWORD *)BugCheckParameter4 + 1) | 0x8000000000000000uLL) )
    {
      KeBugCheckEx(0x1Au, 0x888AuLL, a2, *((_QWORD *)BugCheckParameter4 + 1), (ULONG_PTR)BugCheckParameter4);
    }
    if ( !(unsigned int)MiUnlinkPageFromList((ULONG_PTR)BugCheckParameter4) )
    {
      MiDiscardTransitionPte(BugCheckParameter4);
      _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
        MiUnlockProtoPoolPage(a3, 0x11u);
      return 3221226548LL;
    }
    LODWORD(v39) = v81;
    LOBYTE(v82) = 0;
    P = 0LL;
    if ( (*(_BYTE *)(v81 + 192) & 7) != 0 || *((_WORD *)BugCheckParameter4 + 16) )
      goto LABEL_114;
    v40 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
    if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
    {
      if ( (BugCheckParameter4[4] & 0x400LL) != 0 )
        goto LABEL_114;
      v41 = *(_QWORD *)(v40 + 264) == 0LL;
    }
    else
    {
      v41 = *(_QWORD *)(v40 + 256) == 0LL;
    }
    if ( !v41 )
    {
      v42 = MiLocateAddress(v12);
      if ( v42 )
      {
        v43 = *(_DWORD *)(v42 + 48);
        if ( (v43 & 0x100000) != 0
          && ((*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) == 0 || (v43 & 0x8000) == 0)
          && (((*((_QWORD *)BugCheckParameter4 + 5) >> 57) & 1LL) != 0 || (v43 & 0x8000) != 0) )
        {
          v44 = MiIdealClusterPage(v12, v42, a2, v71[0], v39, (void *)BugCheckParameter4, a3, a8, (__int64)va);
          v45 = v44;
          if ( v44 )
          {
            BugCheckParameter4 = (volatile signed __int32 *)v44;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( a3 )
              MiUnlockProtoPoolPage(a3, 0x11u);
          }
          if ( (_BYTE)v82 )
            goto LABEL_115;
          if ( !v45 )
            return 3221226548LL;
          LODWORD(v39) = v81;
        }
      }
    }
LABEL_114:
    v45 = MiMigratePfn(v39, a1, (_DWORD)BugCheckParameter4, a3, v23, (__int64)&P);
    BugCheckParameter4 = (volatile signed __int32 *)v45;
LABEL_115:
    if ( v45 )
    {
      v47 = *((_QWORD *)BugCheckParameter4 + 3);
      ++*((_WORD *)BugCheckParameter4 + 16);
      *((_QWORD *)BugCheckParameter4 + 3) = v47 & 0xC000000000000000uLL | 1;
      *((_BYTE *)BugCheckParameter4 + 34) = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
      goto LABEL_121;
    }
    v46 = P;
    if ( P )
    {
      if ( *((int *)P + 44) > 1 )
        KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
      MiFreeInPageSupportBlock(v46);
      return 3221226548LL;
    }
    return 3221226548LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    LODWORD(v9) = -1073741663;
    goto LABEL_30;
  }
  if ( (a5 & 1) == 0
    || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 5
    || (*(_DWORD *)((a5 & 0xFFFFFFFFFFFFFFFEuLL) + 48) & 4) == 0 )
  {
    if ( !v8 )
    {
      LODWORD(v9) = -1073740748;
      goto LABEL_30;
    }
    if ( (v25 & 8) == 0 )
    {
      v27 = *(_QWORD *)BugCheckParameter4 - 32LL;
      P = (PVOID)v27;
      v28 = *(_BYTE *)(v27 + 189);
      v29 = (v28 & 0x40) != 0 && (int)PsGetIoPriorityThread(CurrentThread) >= 2
         || CurrentThread == *(struct _KTHREAD **)(v27 + 152)
         || (CurrentThread->MiscFlags & 0x8000) != 0
         || LODWORD(CurrentThread->Process[2].ActiveProcessors.Bitmap[11]) && (*(_QWORD *)(v27 + 248) || (v28 & 4) != 0);
      if ( (v24 & 0x200000000000000LL) != 0 )
      {
        if ( (BugCheckParameter4[4] & 0x400LL) != 0 )
        {
          if ( (CurrentThread->WaitBlock[3].SpareLong || (CurrentThread->MiscFlags & 0x400) != 0 || a7 || v29)
            && (v28 & 0x10) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            return MiResolveMappedFileFault(a1, a2, a3, v81, 0LL, v8);
          }
          goto LABEL_55;
        }
        if ( !BYTE6(CurrentThread[1].Queue) && (v28 & 4) == 0 && !v29 || (v28 & 0x10) != 0 )
        {
LABEL_55:
          MiObtainProtoReference(a3, 1LL);
          goto LABEL_60;
        }
      }
      else if ( !BYTE6(CurrentThread[1].Queue) && (v28 & 4) == 0 && !v29 || (v28 & 0x10) != 0 )
      {
LABEL_60:
        v80 = 0;
        result = MiWaitForCollidedFaultComplete((_DWORD)BugCheckParameter4, a3, a1, v81, a7, 2, (__int64)&v80);
        ImagePageOk = result;
        if ( v80 == 1 )
          return result;
        if ( a3 )
        {
          MiLockNestedPageAtDpcInline(a3);
          MiRemoveLockedPageChargeAndDecRef(a3);
          _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( !ImagePageOk )
        {
          MiAddLockedPageCharge(BugCheckParameter4);
          v31 = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
          *((_QWORD *)BugCheckParameter4 + 3) ^= (((*((_QWORD *)BugCheckParameter4 + 3) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *((_QWORD *)BugCheckParameter4 + 3)) & 0x3FFFFFFFFFFFFFFFLL;
          *((_BYTE *)BugCheckParameter4 + 34) = v31;
          MiRemoveLockedPageChargeAndDecRef(BugCheckParameter4);
          P = 0LL;
LABEL_121:
          if ( v78 && *(_BYTE *)(v23 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
          {
            *(_QWORD *)v71 = *(_QWORD *)v71 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
            *(_QWORD *)a2 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          }
          if ( ((*(_QWORD *)v71 >> 5) & 0x1F) == 0x18 )
            MiMakeProtoReadOnly(a2, BugCheckParameter4);
          v76 = MI_READ_PTE_LOCK_FREE(a2);
          v48 = v76;
          v49 = ((MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v76) & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[(v48 >> 5) & 0x1F] & 0xFFFF000000000E7FuLL | 0x21;
          if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v49 |= 0x100uLL;
          }
          else
          {
            if ( a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL )
            {
              if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
                v49 |= 0x8000000000000000uLL;
              else
                v49 &= ~0x8000000000000000uLL;
              if ( (unsigned int)MiUserPdeOrAbove(a2) )
                v49 |= 4uLL;
            }
            if ( a2 <= 0xFFFFF6BFFFFFFF78uLL )
              v49 |= 4uLL;
            if ( (unsigned int)MiIsAddressGlobal((__int64)(a2 << 25) >> 16) )
              v49 |= 0x100uLL;
            v9 = 0LL;
          }
          v52 = 0LL;
          v53 = v49 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
          v54 = *((_QWORD *)BugCheckParameter4 + 2);
          v76 = v53;
          *(_QWORD *)v71 = v53;
          if ( (v54 & 0x400) == 0
            && (v54 & 4) != 0
            && (unsigned __int16)v54 >> 12 == HIDWORD(v77[49].Header.WaitListHead.Flink) )
          {
            v52 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
          }
          v55 = a6;
          if ( (v53 & 0x800) != 0 )
          {
            if ( (*((_BYTE *)BugCheckParameter4 + 34) & 0x10) == 0 )
            {
              if ( !a6 )
                goto LABEL_154;
              if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
              {
LABEL_155:
                *(_QWORD *)a2 = v53;
                if ( (unsigned int)MiPteInShadowRange(a2) )
                  MiWritePteShadow(v56);
LABEL_157:
                _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
                if ( !a3 )
                  goto LABEL_205;
                v74 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v74);
                    while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
                  v55 = a6;
                }
                v57 = *(unsigned __int16 *)(a3 + 32);
                *(_BYTE *)(a3 + 34) &= ~0x20u;
                if ( !(_WORD)v57 )
                  MiBadRefCount(a3, v57, v50, v51);
                v41 = (_WORD)v57 == 1;
                v58 = v57 - 1;
                *(_WORD *)(a3 + 32) = v58;
                if ( v41 && (unsigned int)MiIsPfnFileOnly(a3) )
                  goto LABEL_203;
                CurrentPrcb = *(_QWORD *)(a3 + 40);
                if ( (CurrentPrcb & 0x10000000000000LL) != 0 )
                {
LABEL_204:
                  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v9 = 0LL;
LABEL_205:
                  if ( v52 )
                    MiReleasePageFileInfo(v77, v52, 1);
                  v67 = P;
                  if ( P )
                  {
                    if ( *((int *)P + 44) > 1 )
                      KeSetEvent((PRKEVENT)((char *)P + 56), 0, 0);
                    MiFreeInPageSupportBlock(v67);
                  }
                  if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) != 0 )
                  {
                    LODWORD(v70) = 0;
                    result = MiCompleteProtoPteFault(v81, a7, a1, *(_QWORD *)v71, v55, v70, a5);
                    if ( (int)result < 0 )
                      return result;
                    return 272LL;
                  }
                  if ( v78 )
                  {
                    switch ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) )
                    {
                      case 4:
                        *(_QWORD *)a2 = *(_QWORD *)v71;
                        if ( (unsigned int)MiPteInShadowRange(a2) )
                          MiWritePteShadow(v68);
                        *(_QWORD *)BugCheckParameter4 = 0LL;
                        return 272LL;
                      case 3:
                        v69 = *(_QWORD *)v71 & 0xFFFFFFFFFFFFFFDFuLL;
                        goto LABEL_225;
                      case 5:
                        v9 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
                        break;
                    }
                  }
                  v69 = *(_QWORD *)v71;
LABEL_225:
                  if ( !(unsigned int)MiAllocateWsle(v81, (__int64 *)a2, (__int64)BugCheckParameter4, 0, v69, v9) )
                  {
                    MiLockAndDecrementShareCount(BugCheckParameter4, 0LL);
                    return 3221225495LL;
                  }
                  return 272LL;
                }
                v60 = *(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
                if ( v58 )
                {
                  if ( v58 == 1 )
                  {
                    if ( v60 )
                      goto LABEL_175;
                  }
                  else if ( v58 != 2 || !v60 )
                  {
                    goto LABEL_204;
                  }
                  if ( (*(_BYTE *)(a3 + 34) & 8) == 0 )
                    goto LABEL_204;
                }
                else
                {
                  LODWORD(v9) = 1;
                }
LABEL_175:
                v61 = *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL;
                if ( (v61 > 0xFFFFF6BFFFFFFF78uLL || v61 < 0xFFFFF68000000000uLL)
                  && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
                {
                  *(_BYTE *)(a3 + 35) &= ~0x20u;
                  goto LABEL_202;
                }
                v62 = 0;
                if ( (CurrentPrcb & 0x200000000000000LL) != 0 && (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
                {
                  v62 = 1;
                }
                else if ( v61 <= 0xFFFFF6BFFFFFFF78uLL
                       && v61 >= 0xFFFFF68000000000uLL
                       && ((*(unsigned __int8 *)(a3 + 35) >> 5) & 1) != 0 )
                {
                  v62 = 1;
                }
                else if ( (_DWORD)v9 == 1 && (*(_QWORD *)(a3 + 24) & 0x4000000000000000LL) != 0 )
                {
                  v62 = 1;
                }
                CurrentPrcb = (CurrentPrcb >> 40) & 0x3FF;
                v63 = *(_QWORD *)(qword_14036C8F8 + 8 * CurrentPrcb);
                if ( v62 == 1 )
                  MiReturnCommit(*(_QWORD *)(qword_14036C8F8 + 8 * CurrentPrcb), 1LL);
                if ( (ULONG_PTR *)v63 == &MiSystemPartition )
                {
                  CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
                  v64 = 1LL;
                  v65 = *(int *)(CurrentPrcb + 24764);
                  if ( (_DWORD)v65 != -1 )
                  {
                    if ( (unsigned __int64)(v65 + 1) <= 0x100 )
                    {
                      while ( 1 )
                      {
                        v66 = _InterlockedCompareExchange(
                                (volatile signed __int32 *)(CurrentPrcb + 24764),
                                v65 + 1,
                                v65);
                        v41 = (_DWORD)v65 == v66;
                        LODWORD(v65) = v66;
                        if ( v41 )
                          break;
                        if ( v66 == -1 || (unsigned __int64)(v66 + 1LL) > 0x100 )
                          goto LABEL_197;
                      }
LABEL_202:
                      if ( (_DWORD)v9 )
                      {
LABEL_203:
                        MiPfnReferenceCountIsZero(a3, (a3 + 0x58000000000LL) / 48, CurrentPrcb);
                        goto LABEL_204;
                      }
                      goto LABEL_204;
                    }
LABEL_197:
                    if ( (int)v65 > 192
                      && (_DWORD)v65 == _InterlockedCompareExchange(
                                          (volatile signed __int32 *)(CurrentPrcb + 24764),
                                          192,
                                          v65) )
                    {
                      v64 = (int)v65 - 192 + 1LL;
                    }
                  }
                  _InterlockedExchangeAdd64(&qword_1403818C0, v64);
                  goto LABEL_202;
                }
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v63 + 5824), 1uLL);
                goto LABEL_202;
              }
              v52 = MiCaptureDirtyBitToPfn(BugCheckParameter4);
              goto LABEL_153;
            }
            if ( a6 || a1 >= 0xFFFF800000000000uLL )
            {
LABEL_153:
              v53 |= 0x42uLL;
              *(_QWORD *)v71 = v53;
            }
          }
LABEL_154:
          if ( (*((_QWORD *)BugCheckParameter4 + 5) & 0x200000000000000LL) == 0 )
            goto LABEL_157;
          goto LABEL_155;
        }
LABEL_84:
        _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 )
          MiUnlockProtoPoolPage(a3, 0x11u);
        return (unsigned int)ImagePageOk;
      }
      _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      return MiResolvePageFileFault(a1, a2, a3, v81, v23, v8);
    }
  }
  LODWORD(v9) = -1073741801;
LABEL_30:
  _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
    MiUnlockProtoPoolPage(a3, 0x11u);
  return (unsigned int)v9;
}
