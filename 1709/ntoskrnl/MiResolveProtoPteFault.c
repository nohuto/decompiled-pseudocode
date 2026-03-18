/*
 * XREFs of MiResolveProtoPteFault @ 0x140043FB0
 * Callers:
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 * Callees:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiAllowGuardFault @ 0x14011D07C (MiAllowGuardFault.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017C8D0 (MiReverseSwizzleInvalidPte.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 */

__int64 MiResolveProtoPteFault(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 a4, unsigned __int8 a5, ...)
{
  __int64 *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r11
  __int64 PteShadow; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  ULONG_PTR BugCheckParameter2; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int PfnPriority; // eax
  unsigned int v21; // edx
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v25; // rdx
  __int64 v26; // r10
  int v27; // ebx
  __int64 Address; // rax
  char v29; // r10
  __int64 v30; // r11
  int v31; // edx
  int v32; // r13d
  __int64 v33; // rdx
  unsigned int ImagePageOk; // ebx
  bool v35; // zf
  __int16 v36; // dx
  unsigned __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  int v40; // esi
  unsigned __int64 v41; // rdx
  char v42; // al
  int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v48; // eax
  unsigned __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int16 v52; // ax
  __int64 v53; // r8
  char v54; // r11
  __int64 v55; // r9
  unsigned __int64 v56; // rsi
  int v57; // eax
  void *v58; // rax
  unsigned __int64 v59; // r9
  __int64 v60; // r10
  int v61; // r11d
  char v62; // r9
  __int64 v63; // r10
  unsigned __int64 v64; // r9
  unsigned __int64 v65; // rbx
  char v66; // cl
  int v67; // ebx
  __int64 v68; // rcx
  __int64 DemandZeroPte; // rax
  int v70; // r10d
  int v72; // eax
  void *v73; // rax
  int v74; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-70h]
  __int64 v76; // [rsp+60h] [rbp-68h] BYREF
  __int64 v77; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v78; // [rsp+70h] [rbp-58h]
  __int64 v79; // [rsp+78h] [rbp-50h]
  __int64 *v84; // [rsp+F8h] [rbp+30h] BYREF
  va_list va; // [rsp+F8h] [rbp+30h]
  __int64 v86; // [rsp+100h] [rbp+38h] BYREF
  va_list va1; // [rsp+100h] [rbp+38h]
  __int64 v88; // [rsp+108h] [rbp+40h]
  _QWORD *v89; // [rsp+110h] [rbp+48h]
  va_list va2; // [rsp+118h] [rbp+50h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v84 = va_arg(va1, __int64 *);
  va_copy(va2, va1);
  v86 = va_arg(va2, _QWORD);
  v88 = va_arg(va2, _QWORD);
  v89 = va_arg(va2, _QWORD *);
  v5 = v84;
  v79 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((((unsigned __int64)v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = v86;
  v10 = v79 - 0x58000000000LL;
  v11 = v86 & 1;
  if ( (v86 & 1) == 0
    || (v12 = v86 & 0xFFFFFFFFFFFFFFFEuLL,
        v75 = v86 & 0xFFFFFFFFFFFFFFFEuLL,
        *(_BYTE *)(v86 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v12 = 0LL;
    v75 = 0LL;
  }
  v13 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v5;
    if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= v13 )
      PteShadow = MiReadPteShadow(v5, *v5);
    v77 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v15 = MI_GET_PAGE_FRAME_FROM_PTE(&v77);
      goto LABEL_14;
    }
    if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
      break;
    if ( (unsigned int)MiInvalidPteConforms(PteShadow, v6, v7, v8) )
    {
      v15 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v77);
LABEL_14:
      v8 = v15;
      if ( v15 <= qword_1403885E0 && (!MmPhysicalMemoryBlock || (*(_QWORD *)(v16 + 48 * v15) & 0x20000000000000LL) != 0) )
      {
        BugCheckParameter2 = 48 * v15 - 0x58000000000LL;
        LODWORD(v84) = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx((__int64 **)va);
            while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
          v13 = 0xFFFFF6FB7DBED7F8uLL;
        }
        v18 = *v5;
        if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= v13 )
          v18 = MiReadPteShadow(v5, *v5);
        if ( v18 == PteShadow )
          goto LABEL_27;
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  BugCheckParameter2 = 0LL;
LABEL_27:
  v19 = *v5;
  if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= v13 )
    v19 = MiReadPteShadow(v5, *v5);
  v76 = v19;
  if ( (v19 & 1) == 0 )
  {
    if ( !v19 )
    {
      MiUnlockProtoPoolPage(v10, 0x11u);
      return 3221225477LL;
    }
    v49 = *a3;
    if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
      v49 = MiReadPteShadow(a3, *a3);
    if ( (unsigned int)MiIsPrototypePteVadLookup(v49) || (v49 & 8) != 0 )
    {
      v51 = a1;
    }
    else
    {
      v61 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v76);
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= v59 )
        v60 = MiReadPteShadow(v5, v60);
      v51 = a1;
      v78 = v60;
      if ( (v60 & 1) != 0 )
      {
        if ( a1 && (v60 & 0x800) == 0 && (v60 & 0x200) == 0 )
        {
          ImagePageOk = -1073741819;
LABEL_168:
          if ( BugCheckParameter2 )
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiUnlockProtoPoolPage(v10, 0x11u);
          return ImagePageOk;
        }
      }
      else
      {
        v50 = a1;
        if ( a1 )
          v50 = 1LL;
        if ( MiReadWrite[v61 & 7] - (char)v50 < 10 )
        {
          ImagePageOk = -1073741819;
          goto LABEL_168;
        }
        if ( (v61 & 0xFFFFFFF8) == 0x10 && (!v11 || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
        {
          if ( (unsigned int)MiAllowGuardFault(v9) )
          {
            v64 = v63 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v62 & 0xF));
            v78 = v64;
            *v5 = v64;
            if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v5, v64);
            ImagePageOk = -2147483647;
          }
          else
          {
            ImagePageOk = -1073741819;
          }
          goto LABEL_168;
        }
      }
    }
    v52 = MiReverseSwizzleInvalidPte(v19, v50, v51);
    if ( (v52 & 0x400) != 0
      || (v52 & 0x800) != 0
      || (v52 & 4) != 0
      || (v54 & 5) != 5
      || !v53 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v76) & 5) == 4 )
    {
      v55 = a4;
    }
    else
    {
      v55 = a4;
      if ( (*(_BYTE *)(a4 + 192) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
      {
        v56 = a2;
        if ( (MiFlags & 0x10000) == 0 || a2 < 0xFFFF800000000000uLL || (v54 & 2) == 0 )
        {
          v74 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v74);
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          *(_BYTE *)(v10 + 34) &= ~0x20u;
          if ( (unsigned int)MiRemoveLockedPageCharge(v10) )
            MiPfnReferenceCountIsZero(v10, v79 / 48);
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v75
            && (!v11
             || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1
             || (*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0) )
          {
            return 0LL;
          }
          if ( v11 )
          {
            if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
              goto LABEL_174;
          }
          else
          {
            if ( !v9 )
              goto LABEL_174;
            v57 = *(unsigned __int16 *)(v9 + 368);
            if ( v57 == 16 )
            {
              v58 = &ExpInterlockedPopEntrySListFault;
            }
            else
            {
              if ( v57 != 51 )
                goto LABEL_174;
              v58 = (void *)KeUserPopEntrySListFault;
            }
            if ( *(void **)(v9 + 360) != v58 )
              goto LABEL_174;
          }
          if ( a2 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_174:
          if ( (unsigned int)MiIsPrototypePteVadLookup(v49) )
            v65 = v49 >> 5;
          else
            LOBYTE(v65) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v76);
          v66 = v65;
          v67 = v65 & 0x18;
          v68 = v66 & 2 | 4u;
          if ( v67 == 8 )
          {
            v68 = (unsigned int)v68 | 8;
          }
          else if ( v67 == 24 )
          {
            v68 = (unsigned int)v68 | 0x18;
          }
          DemandZeroPte = MiMakeDemandZeroPte(v68);
          v70 = (int)a3;
          *a3 = DemandZeroPte;
          if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(a3, DemandZeroPte);
          return MiResolveDemandZeroFault(a2, v70, 0, a4, v9, a1, a5);
        }
LABEL_187:
        if ( (v19 & 0x400) != 0 )
        {
          if ( !v89 )
          {
LABEL_189:
            MiUnlockProtoPoolPage(v10, 0x11u);
            return 3221226548LL;
          }
          return (unsigned int)MiResolveMappedFileFault(v56, v5, v10);
        }
        if ( (v19 & 0x800) != 0 )
          return (unsigned int)MiResolveTransitionFault(v56, v5, v10, v55, v9, a1, a5, (_BYTE)v88, v89);
        if ( (unsigned __int64)&v76 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v76 <= 0xFFFFF6FB7DBED7F8uLL )
          LOBYTE(v19) = MiReadPteShadow(&v76, v19);
        if ( (v19 & 4) != 0 )
        {
          if ( !v89 )
            goto LABEL_189;
          return (unsigned int)MiResolvePageFileFault(v56, (_DWORD)v5, v10, v55, v9, (__int64)v89);
        }
        if ( v75
          && (!v11
           || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1
           || (*(_DWORD *)((v9 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0) )
        {
          MiUnlockProtoPoolPage(v10, 0x11u);
          ImagePageOk = 0;
          goto LABEL_215;
        }
        if ( v11 )
        {
          if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
            goto LABEL_214;
        }
        else
        {
          if ( !v9 )
            goto LABEL_214;
          v72 = *(unsigned __int16 *)(v9 + 368);
          if ( v72 == 16 )
          {
            v73 = &ExpInterlockedPopEntrySListFault;
          }
          else
          {
            if ( v72 != 51 )
              goto LABEL_214;
            v73 = (void *)KeUserPopEntrySListFault;
          }
          if ( *(void **)(v9 + 360) != v73 )
            goto LABEL_214;
        }
        if ( v56 >= 0xFFFF800000000000uLL )
        {
          MiUnlockProtoPoolPage(v10, 0x11u);
          ImagePageOk = -1073741819;
          goto LABEL_215;
        }
LABEL_214:
        ImagePageOk = MiResolveDemandZeroFault(v56, (_DWORD)v5, v10, v55, v9, a1, a5);
LABEL_215:
        if ( v89 )
          *v89 = 0LL;
        return ImagePageOk;
      }
    }
    v56 = a2;
    goto LABEL_187;
  }
  if ( v12 )
  {
    PfnPriority = MiGetPfnPriority(BugCheckParameter2, *(_DWORD *)(v12 + 80) & 7);
    if ( v21 > PfnPriority )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (v21 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v10, 0x11u);
    return 0LL;
  }
  v23 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (v23 & 0x200000000000000LL) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
    && ((v23 >> 54) & 7) != 3
    && (PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(BugCheckParameter2 + 16)),
        v25 = *(_QWORD *)PrototypePteDirect,
        (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0)
    && (v26 = *(_QWORD *)(*(_QWORD *)(v25 + 96) + 8LL)) != 0
    && (v26 & 0xFFFFFFFFFFFFFFF8uLL) != 8
    && (v26 & 3) != 2 )
  {
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v25 + 92) & 0xC0000) != 0 )
    {
      v27 = a2;
    }
    else
    {
      v27 = a2;
      if ( a2 >= 0xFFFF800000000000uLL && (MiFlags & 0x10000) == 0 )
        goto LABEL_54;
      Address = MiLocateAddress(a2);
      if ( Address )
      {
        v31 = *(_DWORD *)(Address + 48);
        if ( (v31 & 7) == 2
          && ((v31 & 0xF8) == 8
           || (*(_DWORD *)(Address + 64) & 0x8000000) != 0 && (v29 & 4) == 0
           || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v30 + 34) & 2) != 0) )
        {
          goto LABEL_54;
        }
      }
    }
    if ( v11 && *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      ImagePageOk = -1073740748;
      goto LABEL_65;
    }
    v32 = a4;
    ImagePageOk = MiMakeImagePageOk(v27, (int)v5, v19, a4, BugCheckParameter2, v10);
    if ( (ImagePageOk & 0x80000000) != 0 )
    {
LABEL_65:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v10, 0x11u);
      return ImagePageOk;
    }
  }
  else
  {
LABEL_54:
    v32 = a4;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) ^= ((*(_QWORD *)(BugCheckParameter2 + 24) + 1LL) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v86) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx((__int64 *)va1);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_BYTE *)(v10 + 34) &= ~0x20u;
  v33 = *(unsigned __int16 *)(v10 + 32);
  if ( !(_WORD)v33 )
    MiBadRefCount(v10, v33);
  v35 = (_WORD)v33 == 1;
  v36 = v33 - 1;
  *(_WORD *)(v10 + 32) = v36;
  if ( v35 && (unsigned int)MiIsPfnFileOnly(v10) )
    goto LABEL_106;
  v37 = *(_QWORD *)(v10 + 40);
  if ( (v37 & 0x10000000000000LL) == 0 )
  {
    v38 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v39 = 1LL;
    if ( !v36 )
    {
      v40 = 1;
      goto LABEL_78;
    }
    if ( v36 != 1 )
    {
      if ( v36 == 2 && v38 )
      {
LABEL_75:
        if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
          goto LABEL_76;
      }
      goto LABEL_107;
    }
    if ( !v38 )
      goto LABEL_75;
LABEL_76:
    v40 = 0;
LABEL_78:
    v41 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    if ( v41 > 0xFFFFF6BFFFFFFF78uLL || v41 < 0xFFFFF68000000000uLL )
    {
      v42 = *(_BYTE *)(v10 + 35);
      if ( (v42 & 0x20) != 0 )
      {
        *(_BYTE *)(v10 + 35) = v42 & 0xDF;
        goto LABEL_105;
      }
    }
    v43 = 0;
    if ( (v37 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
    {
      v43 = 1;
    }
    else if ( v41 <= 0xFFFFF6BFFFFFFF78uLL && v41 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v10 + 35) & 0x20) != 0 )
    {
      v43 = 1;
    }
    else if ( v40 == 1 && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
    {
      v43 = 1;
    }
    v44 = (v37 >> 40) & 0x3FF;
    v45 = *(_QWORD *)(qword_140388AF0 + 8 * v44);
    if ( v43 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_140388AF0 + 8 * v44), 1uLL);
    if ( (ULONG_PTR *)v45 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v45 + 6016), 1uLL);
      goto LABEL_105;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v48 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v35 = (_DWORD)CachedResidentAvailable == v48;
          LODWORD(CachedResidentAvailable) = v48;
          if ( v35 )
            break;
          if ( v48 == -1 || (unsigned __int64)(v48 + 1LL) > 0x100 )
            goto LABEL_100;
        }
LABEL_105:
        if ( v40 )
LABEL_106:
          MiPfnReferenceCountIsZero(v10, v79 / 48);
        goto LABEL_107;
      }
LABEL_100:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v39 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_14038B840, v39);
    goto LABEL_105;
  }
LABEL_107:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(v32, a5, a2, v19, a1, 0, v9);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
