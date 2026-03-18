/*
 * XREFs of MiResolveProtoPteFault @ 0x1400C0C90
 * Callers:
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 * Callees:
 *     MiAllowGuardFault @ 0x140027A0C (MiAllowGuardFault.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 */

__int64 MiResolveProtoPteFault(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, char a5, ...)
{
  unsigned __int64 *v5; // r15
  int v6; // esi
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  ULONG_PTR BugCheckParameter2; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int PfnPriority; // eax
  unsigned int v22; // edx
  __int64 result; // rax
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rcx
  _BYTE *PrototypePteDirect; // rbx
  int v27; // r11d
  __int64 v28; // rdx
  __int64 v29; // r10
  __int64 Address; // rax
  char v31; // r10
  int v32; // edx
  int ImagePageOk; // ebx
  __int64 v34; // rdx
  bool v35; // zf
  __int16 v36; // dx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  int v41; // esi
  unsigned __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rdi
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v46; // eax
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r11
  __int16 v52; // ax
  char v53; // r9
  __int64 v54; // r10
  __int16 v55; // r11
  __int64 v56; // rbp
  int v57; // r10d
  __int64 v58; // r8
  int v59; // eax
  void *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdi
  char v63; // bl
  __int64 v64; // rcx
  unsigned __int64 v65; // r13
  char v66; // si
  char v67; // cl
  int v68; // esi
  __int64 v69; // rcx
  __int64 v70; // rcx
  unsigned __int64 v71; // r10
  unsigned __int64 v73; // r10
  int v74; // eax
  void *v75; // rax
  __int64 v76; // [rsp+28h] [rbp-A0h]
  int v77; // [rsp+50h] [rbp-78h] BYREF
  int v78; // [rsp+54h] [rbp-74h] BYREF
  __int64 v79; // [rsp+58h] [rbp-70h] BYREF
  __int64 v80; // [rsp+60h] [rbp-68h]
  __int64 v81; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v82; // [rsp+70h] [rbp-58h]
  __int64 v83; // [rsp+78h] [rbp-50h]
  unsigned __int64 *v88; // [rsp+F8h] [rbp+30h] BYREF
  va_list va; // [rsp+F8h] [rbp+30h]
  __int64 v90; // [rsp+100h] [rbp+38h]
  __int64 v91; // [rsp+108h] [rbp+40h]
  _QWORD *v92; // [rsp+110h] [rbp+48h]
  va_list va1; // [rsp+118h] [rbp+50h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v88 = va_arg(va1, unsigned __int64 *);
  v90 = va_arg(va1, _QWORD);
  v91 = va_arg(va1, _QWORD);
  v92 = va_arg(va1, _QWORD *);
  v5 = v88;
  v6 = a4;
  v83 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((((unsigned __int64)v88 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = v90;
  v9 = v83 - 0x58000000000LL;
  v10 = v90 & 1;
  v80 = v10;
  if ( (v90 & 1) == 0 || (v11 = v90 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v90 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v11 = 0LL;
  while ( 1 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(v5);
    v81 = v12;
    if ( (v12 & 1) != 0 )
    {
      v13 = MI_GET_PAGE_FRAME_FROM_PTE(&v81);
      goto LABEL_10;
    }
    if ( (v12 & 0x400) != 0 || (v12 & 0x800) == 0 )
      break;
    if ( (unsigned int)MiInvalidPteConforms(v12) )
    {
      v13 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v81);
LABEL_10:
      if ( v13 <= qword_14036C290 && (!MmPhysicalMemoryBlock || (*(_QWORD *)(v14 + 48 * v13) & v15) != 0) )
      {
        BugCheckParameter2 = 48 * v13 - 0x58000000000LL;
        LODWORD(v88) = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx((unsigned __int64 **)va);
            while ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
          v6 = a4;
        }
        v17 = MI_READ_PTE_LOCK_FREE(v5);
        if ( v17 == v81 )
          goto LABEL_20;
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  BugCheckParameter2 = 0LL;
LABEL_20:
  v18 = MI_READ_PTE_LOCK_FREE(v5);
  v79 = v18;
  if ( (v18 & 1) == 0 )
  {
    if ( !v18 )
    {
      MiUnlockProtoPoolPage(v9, 0x11u);
      return 3221225477LL;
    }
    v47 = MI_READ_PTE_LOCK_FREE(a3);
    if ( (unsigned int)MiIsPrototypePteVadLookup(v47) )
    {
      v50 = (v47 >> 5) & 0x1F;
LABEL_101:
      v52 = MiReverseSwizzleInvalidPte(v51, v48, v49, v50);
      if ( (v52 & 0x400) != 0
        || (v52 & 0x800) != 0
        || (v52 & 4) != 0
        || (v53 & 5) != 5
        || !v54 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v79) & 5) == 4 )
      {
        v56 = a4;
      }
      else
      {
        v56 = a4;
        if ( (*(_BYTE *)(a4 + 192) & 7) != 0
          || (v55 = v79, !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12]) )
        {
          if ( (MiFlags & 0x10000) == 0 || (v57 = a2, a2 < 0xFFFF800000000000uLL) || (v53 & 2) == 0 )
          {
            v78 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v78);
                while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
              v8 = v90;
            }
            *(_BYTE *)(v9 + 34) &= ~0x20u;
            if ( (unsigned int)MiRemoveLockedPageCharge(v9) )
              MiPfnReferenceCountIsZero(v9, v83 / 48, v58);
            _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v11
              && (!v10
               || *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) != 1
               || (*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0) )
            {
              return 0LL;
            }
            if ( v10 )
            {
              if ( ((*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
                goto LABEL_155;
LABEL_153:
              v65 = a2;
              if ( a2 >= 0xFFFF800000000000uLL )
                return 3221225477LL;
              goto LABEL_156;
            }
            if ( v8 )
            {
              v59 = *(unsigned __int16 *)(v8 + 368);
              if ( v59 == 16 )
              {
                v60 = &ExpInterlockedPopEntrySListFault;
              }
              else
              {
                if ( v59 != 51 )
                  goto LABEL_155;
                v60 = (void *)KeUserPopEntrySListFault;
              }
              if ( *(void **)(v8 + 360) == v60 )
                goto LABEL_153;
            }
LABEL_155:
            v65 = a2;
LABEL_156:
            if ( (unsigned int)MiIsPrototypePteVadLookup(v47) )
              v66 = (v47 >> 5) & 0x1F;
            else
              v66 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v79);
            v67 = v66;
            v68 = v66 & 0x18;
            v69 = v67 & 2 | 4u;
            if ( v68 == 8 )
            {
              v69 = (unsigned int)v69 | 8;
            }
            else if ( v68 == 24 )
            {
              v69 = (unsigned int)v69 | 0x18;
            }
            *a3 = MiMakeDemandZeroPte(v69);
            if ( (unsigned int)MiPteInShadowRange(a3) )
              MiWritePteShadow(v70);
            return MiResolveDemandZeroFault(v65, v71, 0LL, a4, v8, a1, a5);
          }
LABEL_168:
          if ( (v55 & 0x400) != 0 )
          {
            if ( !v92 )
            {
LABEL_170:
              MiUnlockProtoPoolPage(v9, 0x11u);
              return 3221226548LL;
            }
            return (unsigned int)MiResolveMappedFileFault(v57, (_DWORD)v5, v9, v56, v8, (__int64)v92);
          }
          if ( (v55 & 0x800) != 0 )
            return (unsigned int)MiResolveTransitionFault(v57, (_DWORD)v5, v9, v8, a1, a5, v91, (__int64)v92);
          if ( (MI_READ_PTE_LOCK_FREE(&v79) & 4) != 0 )
          {
            if ( !v92 )
              goto LABEL_170;
            return (unsigned int)MiResolvePageFileFault(v73, (unsigned __int64)v5, v9, v56, v8, v92);
          }
          if ( v11
            && (!v10
             || *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) != 1
             || (*(_DWORD *)((v8 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 0x4000) == 0) )
          {
            MiUnlockProtoPoolPage(v9, 0x11u);
            ImagePageOk = 0;
            goto LABEL_192;
          }
          if ( v10 )
          {
            if ( ((*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
              goto LABEL_191;
          }
          else
          {
            if ( !v8 )
              goto LABEL_191;
            v74 = *(unsigned __int16 *)(v8 + 368);
            if ( v74 == 16 )
            {
              v75 = &ExpInterlockedPopEntrySListFault;
            }
            else
            {
              if ( v74 != 51 )
                goto LABEL_191;
              v75 = (void *)KeUserPopEntrySListFault;
            }
            if ( *(void **)(v8 + 360) != v75 )
              goto LABEL_191;
          }
          if ( v73 >= 0xFFFF800000000000uLL )
          {
            MiUnlockProtoPoolPage(v9, 0x11u);
            ImagePageOk = -1073741819;
            goto LABEL_192;
          }
LABEL_191:
          ImagePageOk = MiResolveDemandZeroFault(v73, (unsigned __int64)v5, v9, v56, v8, a1, a5);
LABEL_192:
          if ( v92 )
            *v92 = 0LL;
          return (unsigned int)ImagePageOk;
        }
      }
      v57 = a2;
      goto LABEL_168;
    }
    if ( (v47 & 8) != 0 )
      goto LABEL_101;
    MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v79);
    v61 = MI_READ_PTE_LOCK_FREE(v5);
    v62 = v61;
    v82 = v61;
    if ( (v61 & 1) != 0 )
    {
      if ( a1 && (v61 & 0x800) == 0 && (v61 & 0x200) == 0 )
      {
        ImagePageOk = -1073741819;
        goto LABEL_147;
      }
LABEL_150:
      v10 = v80;
      goto LABEL_101;
    }
    v48 = a1;
    if ( a1 )
      v48 = 1LL;
    v63 = v50;
    if ( MiReadWrite[v50 & 7] - (char)v48 >= 10 )
    {
      if ( (v50 & 0xFFFFFFF8) != 0x10 || v80 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
        goto LABEL_150;
      if ( (unsigned int)MiAllowGuardFault(v8) )
      {
        v82 = v62 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v63 & 0xF));
        *v5 = v82;
        if ( (unsigned int)MiPteInShadowRange(v5) )
          MiWritePteShadow(v64);
        ImagePageOk = -2147483647;
      }
      else
      {
        ImagePageOk = -1073741819;
      }
    }
    else
    {
      ImagePageOk = -1073741819;
    }
LABEL_147:
    if ( !BugCheckParameter2 )
    {
LABEL_149:
      MiUnlockProtoPoolPage(v9, 0x11u);
      return (unsigned int)ImagePageOk;
    }
LABEL_148:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_149;
  }
  if ( v11 )
  {
    PfnPriority = MiGetPfnPriority(BugCheckParameter2);
    if ( v22 > PfnPriority )
      *(_BYTE *)(BugCheckParameter2 + 35) ^= (v22 ^ *(_BYTE *)(BugCheckParameter2 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v9, 0x11u);
    return 0LL;
  }
  v24 = a2;
  if ( a2 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0 )
  {
    v25 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v25 & 0x200000000000000LL) != 0
      && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
      && ((v25 >> 54) & 7) != 3 )
    {
      PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(
                                      *(_QWORD *)(BugCheckParameter2 + 16),
                                      0x200000000000000LL,
                                      v19,
                                      v20);
      v28 = *(_QWORD *)PrototypePteDirect;
      if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(v28 + 96) + 8LL);
        if ( v29 )
        {
          if ( (v29 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v29 & 3) != 2 )
          {
            if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v28 + 92) & 0xC0000) != 0
              || (Address = MiLocateAddress(a2)) == 0
              || (v32 = *(_DWORD *)(Address + 48), (v32 & 7) != 2)
              || (v32 & 0xF8) != 8
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v31 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (PrototypePteDirect[34] & 2) == 0) )
            {
              if ( v10 && *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
              {
                ImagePageOk = -1073740748;
                goto LABEL_148;
              }
              ImagePageOk = MiMakeImagePageOk(a2, (int)v5, v27, v6, BugCheckParameter2, v9);
              if ( ImagePageOk < 0 )
                goto LABEL_148;
            }
          }
        }
      }
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 24) ^= (((*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(BugCheckParameter2 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v77 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v77);
      while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    v24 = a2;
  }
  v34 = *(unsigned __int16 *)(v9 + 32);
  *(_BYTE *)(v9 + 34) &= ~0x20u;
  if ( !(_WORD)v34 )
    MiBadRefCount(v9, v34, v19, v20);
  v35 = (_WORD)v34 == 1;
  v36 = v34 - 1;
  *(_WORD *)(v9 + 32) = v36;
  if ( v35 && (unsigned int)MiIsPfnFileOnly(v9) )
    goto LABEL_93;
  v38 = *(_QWORD *)(v9 + 40);
  CurrentPrcb = (struct _KPRCB *)((*(_QWORD *)(v9 + 24) >> 62) & 1LL);
  if ( (v38 & 0x10000000000000LL) == 0 )
  {
    v39 = *(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v40 = 1LL;
    if ( !v36 )
    {
      v41 = 1;
      goto LABEL_65;
    }
    if ( v36 != 1 )
    {
      if ( v36 == 2 && v39 )
      {
LABEL_62:
        if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
          goto LABEL_63;
      }
      goto LABEL_94;
    }
    if ( !v39 )
      goto LABEL_62;
LABEL_63:
    v41 = 0;
LABEL_65:
    v42 = *(_QWORD *)(v9 + 8) | 0x8000000000000000uLL;
    if ( (v42 > 0xFFFFF6BFFFFFFF78uLL || v42 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v9 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(v9 + 35) &= ~0x20u;
      goto LABEL_92;
    }
    v43 = 0;
    if ( (v38 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
    {
      v43 = 1;
    }
    else if ( v42 <= 0xFFFFF6BFFFFFFF78uLL
           && v42 >= 0xFFFFF68000000000uLL
           && ((*(unsigned __int8 *)(v9 + 35) >> 5) & 1) != 0 )
    {
      v43 = 1;
    }
    else if ( v41 == 1 && (_DWORD)CurrentPrcb )
    {
      v43 = 1;
    }
    v44 = *(_QWORD *)(qword_14036C8F8 + 8 * ((v38 >> 40) & 0x3FF));
    if ( v43 == 1 )
      MiReturnCommit(v44, 1LL);
    if ( (ULONG_PTR *)v44 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 5824), 1uLL);
      goto LABEL_92;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v46 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v35 = (_DWORD)CachedResidentAvailable == v46;
          LODWORD(CachedResidentAvailable) = v46;
          if ( v35 )
            break;
          if ( v46 == -1 || (unsigned __int64)(v46 + 1LL) > 0x100 )
            goto LABEL_87;
        }
LABEL_92:
        if ( v41 )
LABEL_93:
          MiPfnReferenceCountIsZero(v9, v83 / 48, CurrentPrcb);
        goto LABEL_94;
      }
LABEL_87:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v40 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_1403818C0, v40);
    goto LABEL_92;
  }
LABEL_94:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  LODWORD(v76) = 0;
  result = MiCompleteProtoPteFault(a4, a5, v24, v79, a1, v76, v8);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
