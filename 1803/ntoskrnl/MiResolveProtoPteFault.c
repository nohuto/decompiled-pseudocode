/*
 * XREFs of MiResolveProtoPteFault @ 0x140015220
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x1400B5494 (MiAllowGuardFault.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 */

__int64 __fastcall MiResolveProtoPteFault(unsigned __int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // r15
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rbp
  int v13; // r12d
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int PfnPriority; // eax
  __int64 v32; // rdx
  __int64 result; // rax
  unsigned __int64 v34; // rcx
  __int64 PrototypePteDirect; // r11
  __int64 v36; // rdx
  __int64 v37; // r10
  __int64 Address; // rax
  char v39; // r10
  __int64 v40; // r11
  unsigned int ImagePageOk; // ebx
  unsigned __int64 v42; // rdx
  int v43; // r15d
  __int16 v44; // dx
  bool v45; // zf
  __int16 v46; // dx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // r14
  int v50; // esi
  unsigned __int64 v51; // rdx
  char v52; // al
  __int64 v53; // rcx
  __int64 v54; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v57; // eax
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // r11
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int16 v66; // ax
  __int64 v67; // r8
  char v68; // r10
  int v69; // r11d
  __int64 v70; // r9
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rcx
  __int64 v74; // r10
  __int64 v75; // rax
  char v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int16 v80; // ax
  void *v81; // rax
  unsigned __int64 v82; // rbx
  char v83; // cl
  int v84; // ebx
  __int64 v85; // rcx
  __int64 DemandZeroPte; // rax
  unsigned __int64 v87; // r10
  unsigned __int64 v89; // rcx
  __int16 v90; // ax
  void *v91; // rax
  int v92; // ebx
  unsigned __int64 v93; // [rsp+30h] [rbp-98h]
  unsigned __int64 v94; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v95; // [rsp+40h] [rbp-88h]
  __int64 v96; // [rsp+48h] [rbp-80h]
  __int64 v97; // [rsp+50h] [rbp-78h] BYREF
  int v98; // [rsp+58h] [rbp-70h] BYREF
  int v99; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned __int64 v100; // [rsp+60h] [rbp-68h]
  unsigned __int64 v101; // [rsp+68h] [rbp-60h]
  __int64 v102; // [rsp+70h] [rbp-58h]
  __int64 *v103; // [rsp+78h] [rbp-50h]
  int v107; // [rsp+E8h] [rbp+20h] BYREF

  v95 = a1[7];
  v3 = a1;
  v93 = *a1;
  v4 = a1[12];
  v103 = (__int64 *)(((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = *v5;
  if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v4 >> 9, v5, v6, a1)
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8 * ((v7 >> 3) & 0x1FF));
      v10 = v6 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v6;
      v6 = v10;
      if ( (v9 & 0x42) != 0 )
        v6 = v10 | 0x42;
    }
  }
  v102 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL);
  v11 = v3[2];
  v12 = v102 - 0x58000000000LL;
  v13 = 0;
  v96 = v11 & 1;
  if ( (v11 & 1) == 0
    || (v14 = v11 & 0xFFFFFFFFFFFFFFFEuLL,
        v100 = v11 & 0xFFFFFFFFFFFFFFFEuLL,
        *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v14 = 0LL;
    v100 = 0LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v4);
      v94 = v15;
      v20 = v15;
      if ( (v15 & 1) == 0 )
        break;
      if ( (unsigned __int64)&v94 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v94 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v94, v16, v17, v15)
        && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        v21 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( !v21 )
        {
          v22 = (v94 >> 12) & 0xFFFFFFFFFLL;
          goto LABEL_32;
        }
        v23 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v94 >> 3) & 0x1FF));
        if ( (v23 & 0x20) != 0 )
          v20 |= 0x20uLL;
        if ( (v23 & 0x42) != 0 )
          v20 |= 0x42uLL;
      }
      v22 = (v20 >> 12) & 0xFFFFFFFFFLL;
LABEL_32:
      if ( v22 <= qword_1403CB780 && (!MmPhysicalMemoryBlock || (*(_QWORD *)(v18 + 48 * v22) & v19) != 0) )
      {
        v24 = 48 * v22 - 0x58000000000LL;
        v107 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v107);
          while ( *(__int64 *)(v24 + 24) < 0 );
        }
        v25 = MI_READ_PTE_LOCK_FREE(v4);
        if ( v25 == v94 )
          goto LABEL_41;
        _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
      break;
    if ( (unsigned int)MiInvalidPteConforms(v15) )
    {
      v22 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v94);
      goto LABEL_32;
    }
  }
  v24 = 0LL;
LABEL_41:
  v26 = *(_QWORD *)v4;
  v27 = *(_QWORD *)v4;
  v28 = 0xFFFFF6FB7DBED000uLL;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL, v17, v26)
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      v29 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v29 )
      {
        v27 |= 0x20uLL;
        v30 = *(_QWORD *)(v29 + 8 * ((v4 >> 3) & 0x1FF));
        if ( (v30 & 0x20) == 0 )
          v27 = v26;
        if ( (v30 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
    v28 = 0xFFFFF6FB7DBED000uLL;
  }
  v97 = v27;
  if ( (v27 & 1) == 0 )
  {
    if ( !v27 )
    {
      LOBYTE(v28) = 17;
      MiUnlockProtoPoolPage(v12, v28);
      return 3221225477LL;
    }
    v58 = *v103;
    if ( (unsigned __int64)v103 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v103 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL, v17, v26)
      && (v58 & 1) != 0
      && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
    {
      v60 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v60 )
      {
        v61 = *(_QWORD *)(v60 + 8 * ((v59 >> 3) & 0x1FF));
        v62 = v58 | 0x20;
        if ( (v61 & 0x20) == 0 )
          v62 = v58;
        v58 = v62;
        if ( (v61 & 0x42) != 0 )
          v58 = v62 | 0x42;
      }
    }
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v58) && (v58 & 8) == 0 )
    {
      v74 = (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v97);
      if ( v4 >= 0xFFFFF6FB7DBED000uLL
        && v4 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v63, v64, v65)
        && (v65 & 1) != 0
        && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
      {
        v63 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v63 )
        {
          v75 = *(_QWORD *)(v63 + 8 * ((v4 >> 3) & 0x1FF));
          v63 = v65 | 0x20;
          if ( (v75 & 0x20) == 0 )
            v63 = v65;
          v65 = v63;
          if ( (v75 & 0x42) != 0 )
            v65 = v63 | 0x42;
        }
      }
      v101 = v65;
      if ( (v65 & 1) != 0 )
      {
        if ( a2 && (v65 & 0x800) == 0 && (v65 & 0x200) == 0 )
        {
          ImagePageOk = -1073741819;
LABEL_195:
          if ( v24 )
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v63) = 17;
          MiUnlockProtoPoolPage(v12, v63);
          return ImagePageOk;
        }
      }
      else
      {
        v63 = a2;
        if ( a2 )
          v63 = 1LL;
        v64 = v74;
        if ( MiReadWrite[v74 & 7] - (char)v63 < 10 )
        {
          ImagePageOk = -1073741819;
          goto LABEL_195;
        }
        if ( (v74 & 0xFFFFFFF8) == 0x10 && (!v96 || *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
        {
          if ( (unsigned int)MiAllowGuardFault(v11, v63, v74) )
          {
            v101 = v77 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v76 & 0xF));
            *(_QWORD *)v4 = v101;
            if ( MiPteInShadowRange(v4) )
              MiWritePteShadow(v78, v79);
            ImagePageOk = -2147483647;
          }
          else
          {
            ImagePageOk = -1073741819;
          }
          goto LABEL_195;
        }
      }
    }
    v66 = MiReverseSwizzleInvalidPte(v27, v63, v64, v65);
    if ( (v66 & 0x400) != 0 || (v66 & 0x800) != 0 )
    {
      v70 = a2;
    }
    else
    {
      v70 = a2;
      if ( (v66 & 4) == 0 && (v68 & 5) == 5 && (a2 || (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v97) & 5) != 4) )
      {
        v71 = v95;
        if ( (*(_BYTE *)(v95 + 184) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
        {
          v72 = v93;
          if ( (MiFlags & 0x10000) == 0 || v93 < 0xFFFF800000000000uLL || (v68 & 2) == 0 )
          {
            v99 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v99);
              while ( *(__int64 *)(v12 + 24) < 0 );
            }
            *(_BYTE *)(v12 + 34) &= ~0x20u;
            if ( (unsigned int)MiRemoveLockedPageCharge(v12, v71, v67, v70) )
              MiPfnReferenceCountIsZero(v12, v102 / 48);
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v100 )
            {
              if ( !v96 )
                return 0LL;
              v73 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v73 + 80) & 0x4000) == 0 )
                return 0LL;
            }
            else
            {
              v73 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
            }
            if ( v96 )
            {
              if ( *(_BYTE *)v73 == 1 )
                goto LABEL_212;
            }
            else
            {
              v73 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
            }
            if ( v96 )
            {
              if ( *(_BYTE *)v73 != 3 )
                goto LABEL_213;
            }
            else
            {
              if ( !v11 )
                goto LABEL_213;
              v80 = *(_WORD *)(v11 + 368);
              if ( v80 == 16 )
              {
                v81 = &ExpInterlockedPopEntrySListFault;
              }
              else
              {
                if ( v80 != 51 )
                  goto LABEL_213;
                v81 = (void *)KeUserPopEntrySListFault;
              }
              if ( *(void **)(v11 + 360) != v81 )
                goto LABEL_213;
            }
LABEL_212:
            if ( v93 >= 0xFFFF800000000000uLL )
              return 3221225477LL;
LABEL_213:
            if ( (unsigned int)MiIsPrototypePteVadLookup(v58) )
              v82 = v58 >> 5;
            else
              LOBYTE(v82) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v97);
            v83 = v82;
            v84 = v82 & 0x18;
            v85 = v83 & 2 | 4u;
            if ( v84 == 8 )
            {
              v85 = (unsigned int)v85 | 8;
            }
            else if ( v84 == 24 )
            {
              v85 = (unsigned int)v85 | 0x18;
            }
            DemandZeroPte = MiMakeDemandZeroPte(v85);
            v87 = (unsigned __int64)v103;
            *v103 = DemandZeroPte;
            if ( v87 >= 0xFFFFF6FB7DBED000uLL && v87 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v87, DemandZeroPte);
            return MiResolveDemandZeroFault(a1, v87, 0LL, a2);
          }
LABEL_227:
          if ( (v27 & 0x400) != 0 )
          {
            if ( !a3 )
            {
LABEL_229:
              LOBYTE(v71) = 17;
              MiUnlockProtoPoolPage(v12, v71);
              return 3221226548LL;
            }
            return (unsigned int)MiResolveMappedFileFault(v72, v4, v12, v71, v11, (__int64)a3);
          }
          if ( (v27 & 0x800) != 0 )
            return (unsigned int)MiResolveTransitionFault(a1, v4, v12, v70, a3);
          if ( (v27 & 4) != 0 )
          {
            if ( !a3 )
              goto LABEL_229;
            return (unsigned int)MiResolvePageFileFault(v72, v4, v12, v71, v11, (__int64)a3);
          }
          if ( v100 )
          {
            if ( !v96
              || (v89 = v11 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
              || (*(_DWORD *)(v89 + 80) & 0x4000) == 0 )
            {
              LOBYTE(v71) = 17;
              MiUnlockProtoPoolPage(v12, v71);
              ImagePageOk = 0;
              goto LABEL_260;
            }
          }
          else
          {
            v89 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v96 )
          {
            if ( *(_BYTE *)v89 == 1 )
              goto LABEL_253;
          }
          else
          {
            v89 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v96 )
          {
            if ( *(_BYTE *)v89 != 3 )
              goto LABEL_259;
          }
          else
          {
            if ( !v11 )
              goto LABEL_259;
            v90 = *(_WORD *)(v11 + 368);
            if ( v90 == 16 )
            {
              v91 = &ExpInterlockedPopEntrySListFault;
            }
            else
            {
              if ( v90 != 51 )
                goto LABEL_259;
              v91 = (void *)KeUserPopEntrySListFault;
            }
            if ( *(void **)(v11 + 360) != v91 )
              goto LABEL_259;
          }
LABEL_253:
          if ( v72 >= 0xFFFF800000000000uLL )
          {
            v92 = v69 ? (v58 >> 5) & 0x1F : MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v97);
            if ( (v92 & 0xFFFFFFF8) == 0x10 )
            {
              LOBYTE(v71) = 17;
              MiUnlockProtoPoolPage(v12, v71);
              ImagePageOk = -1073741819;
              goto LABEL_260;
            }
          }
LABEL_259:
          ImagePageOk = MiResolveDemandZeroFault(a1, v4, v12, v70);
LABEL_260:
          if ( a3 )
            *a3 = 0LL;
          return ImagePageOk;
        }
LABEL_226:
        v72 = v93;
        goto LABEL_227;
      }
    }
    v71 = v95;
    goto LABEL_226;
  }
  if ( v14 )
  {
    PfnPriority = MiGetPfnPriority(v24);
    if ( (unsigned int)v32 > PfnPriority )
      *(_BYTE *)(v24 + 35) ^= (v32 ^ *(_BYTE *)(v24 + 35)) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v32) = 17;
    MiUnlockProtoPoolPage(v12, v32);
    return 0LL;
  }
  v34 = *(_QWORD *)(v24 + 40);
  if ( (v34 & 0x200000000000000LL) == 0
    || (*(_DWORD *)(v24 + 16) & 0x400LL) == 0
    || ((v34 >> 54) & 7) == 3
    || (PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v24 + 16)),
        v36 = *(_QWORD *)PrototypePteDirect,
        (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0)
    || (v37 = *(_QWORD *)(*(_QWORD *)(v36 + 96) + 40LL)) == 0
    || (v37 & 0xFFFFFFFFFFFFFFF8uLL) == 8
    || (v37 & 3) == 2
    || ((MiFlags & 0x4000) == 0 || (*(_DWORD *)(v36 + 92) & 0xC0000) == 0)
    && (v93 >= 0xFFFF800000000000uLL && (MiFlags & 0x10000) == 0
     || (Address = MiLocateAddress()) != 0
     && (v36 = *(unsigned int *)(Address + 48), (*(_DWORD *)(Address + 48) & 7) == 2)
     && ((v36 & 0xF8) == 8
      || (*(_DWORD *)(Address + 64) & 0x8000000) != 0 && (v39 & 4) == 0
      || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v40 + 34) & 2) != 0)) )
  {
    v43 = (int)a1;
  }
  else
  {
    if ( (v11 & 1) != 0 && *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      ImagePageOk = -1073740748;
      goto LABEL_80;
    }
    v42 = v4;
    v43 = (int)a1;
    ImagePageOk = MiMakeImagePageOk(a1, v42, v27, v24, v12);
    if ( (ImagePageOk & 0x80000000) != 0 )
    {
LABEL_80:
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v36) = 17;
      MiUnlockProtoPoolPage(v12, v36);
      return ImagePageOk;
    }
  }
  *(_QWORD *)(v24 + 24) ^= ((*(_QWORD *)(v24 + 24) + 1LL) ^ *(_QWORD *)(v24 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v98 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v98);
    while ( *(__int64 *)(v12 + 24) < 0 );
  }
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  v44 = *(_WORD *)(v12 + 32);
  if ( !v44 )
    MiBadRefCount(v12);
  v45 = v44 == 1;
  v46 = v44 - 1;
  *(_WORD *)(v12 + 32) = v46;
  if ( v45 && (unsigned int)MiIsPfnFileOnly(v12) )
    goto LABEL_126;
  v47 = *(_QWORD *)(v12 + 40);
  if ( (v47 & 0x10000000000000LL) == 0 )
  {
    v48 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v49 = 1LL;
    if ( !v46 )
    {
      v50 = 1;
      goto LABEL_98;
    }
    if ( v46 != 1 )
    {
      if ( v46 == 2 && v48 )
      {
LABEL_95:
        if ( (*(_BYTE *)(v12 + 34) & 8) != 0 )
          goto LABEL_96;
      }
      goto LABEL_127;
    }
    if ( !v48 )
      goto LABEL_95;
LABEL_96:
    v50 = 0;
LABEL_98:
    v51 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
    if ( v51 > 0xFFFFF6BFFFFFFF78uLL || v51 < 0xFFFFF68000000000uLL )
    {
      v52 = *(_BYTE *)(v12 + 35);
      if ( (v52 & 0x20) != 0 )
      {
        *(_BYTE *)(v12 + 35) = v52 & 0xDF;
        goto LABEL_125;
      }
    }
    if ( (v47 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
    {
      v13 = 1;
    }
    else if ( v51 <= 0xFFFFF6BFFFFFFF78uLL && v51 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v12 + 35) & 0x20) != 0 )
    {
      v13 = 1;
    }
    else if ( v50 == 1 && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
    {
      v13 = 1;
    }
    v53 = (v47 >> 40) & 0x3FF;
    v54 = *(_QWORD *)(qword_1403CBD88 + 8 * v53);
    if ( v13 == 1 )
      MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8 * v53), 1uLL);
    if ( (ULONG_PTR *)v54 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 7104), 1uLL);
      goto LABEL_125;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v57 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v45 = (_DWORD)CachedResidentAvailable == v57;
          LODWORD(CachedResidentAvailable) = v57;
          if ( v45 )
            break;
          if ( v57 == -1 || (unsigned __int64)(v57 + 1LL) > 0x100 )
            goto LABEL_120;
        }
LABEL_125:
        if ( v50 )
LABEL_126:
          MiPfnReferenceCountIsZero(v12, v102 / 48);
        goto LABEL_127;
      }
LABEL_120:
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v49 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_1403CFB00, v49);
    goto LABEL_125;
  }
LABEL_127:
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(v43, v27, a2, 0, v11);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
