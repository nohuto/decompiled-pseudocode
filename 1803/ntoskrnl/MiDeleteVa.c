/*
 * XREFs of MiDeleteVa @ 0x140011580
 * Callers:
 *     <none>
 * Callees:
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiEvictPageTableLock @ 0x14003D960 (MiEvictPageTableLock.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiDecrementCombinedPte @ 0x1400AD0F8 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1400AD8A4 (MiDecrementCloneBlockReference.c)
 *     MiCompressTbFlushList @ 0x1400B06D0 (MiCompressTbFlushList.c)
 *     MiLockSetPfnPriority @ 0x1400BB5D8 (MiLockSetPfnPriority.c)
 *     MiUnmapFrameBuffer @ 0x1400C3D08 (MiUnmapFrameBuffer.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiWriteTopLevelPxe @ 0x140165CA8 (MiWriteTopLevelPxe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiDeleteLargeUserPde @ 0x14026A4BC (MiDeleteLargeUserPde.c)
 */

__int64 __fastcall MiDeleteVa(__int64 a1, ULONG_PTR *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r13
  int v6; // r10d
  __int64 v7; // r14
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // rbx
  int v10; // r11d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  char v23; // dl
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // edi
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  unsigned __int64 Process; // rcx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rcx
  unsigned int PfnPriority; // eax
  unsigned __int64 v51; // rbx
  BOOL v52; // r14d
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // r11
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r9
  int v59; // r15d
  char WsleContents; // si
  int v61; // edi
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r8
  unsigned __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r9
  char v71; // r10
  bool v72; // zf
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // r10
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rax
  unsigned __int64 *v81; // r10
  unsigned __int64 v82; // r11
  __int64 v83; // rsi
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // rdx
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // edx
  __int64 v91; // rdi
  unsigned __int64 v92; // rsi
  unsigned int v93; // r10d
  char v94; // r8
  __int64 v95; // r11
  __int64 v96; // rax
  unsigned __int64 v97; // r9
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // r9
  ULONG_PTR v105; // r10
  __int64 v106; // rdx
  int IsPrototypePteVadLookup; // r8d
  int v108; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v110; // rdx
  __int64 v111; // r9
  __int64 v112; // rax
  __int16 v113; // ax
  __int64 v114; // r15
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 v122; // rdx
  __int64 v123; // rbx
  int BugCheckParameter4; // [rsp+20h] [rbp-99h]
  char v126; // [rsp+30h] [rbp-89h]
  unsigned __int64 v127; // [rsp+38h] [rbp-81h] BYREF
  int v128; // [rsp+40h] [rbp-79h]
  int v129; // [rsp+44h] [rbp-75h]
  unsigned __int64 v130; // [rsp+48h] [rbp-71h]
  __int64 v131; // [rsp+50h] [rbp-69h]
  int v132; // [rsp+58h] [rbp-61h]
  int v133; // [rsp+5Ch] [rbp-5Dh] BYREF
  unsigned __int64 v134; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v135; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR v136; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 v137; // [rsp+78h] [rbp-41h] BYREF
  __int64 v138; // [rsp+80h] [rbp-39h]
  __int64 v139; // [rsp+88h] [rbp-31h]
  __int64 v140; // [rsp+90h] [rbp-29h]
  ULONG_PTR *v141; // [rsp+98h] [rbp-21h]
  __int64 v142; // [rsp+A0h] [rbp-19h]
  char v143[8]; // [rsp+A8h] [rbp-11h] BYREF
  _QWORD v144[4]; // [rsp+B0h] [rbp-9h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a3;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = (ULONG_PTR)a2;
  v9 = *a2;
  v10 = *(_DWORD *)(v3 + 32);
  v126 = v10;
  v128 = a3;
  v141 = a2;
  v138 = v3;
  v140 = v5;
  v131 = v7;
  v11 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8 * ((v8 >> 3) & 0x1FF));
      v14 = v9 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v9;
      v9 = v14;
      if ( (v13 & 0x42) != 0 )
        v9 = v14 | 0x42;
    }
  }
  v127 = v9;
  if ( !v9 )
    return 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v139 = 0LL;
  v129 = 0;
  v17 = (__int64)(v8 << 25) >> 16;
  v130 = v17;
  if ( (v9 & 1) == 0 )
  {
    if ( (v9 & 0x400) == 0 )
    {
      if ( (v9 & 0x800) != 0 )
        goto LABEL_349;
      if ( (v9 & 0x3E0) == 0 )
        KeBugCheckEx(0x1Au, 0x41792uLL, v8, v9, 0LL);
      Process = *(unsigned __int16 *)(v7 + 174);
      v136 = v9;
      v111 = *(_QWORD *)(qword_1403CBD88 + 8 * Process);
      if ( (v9 & 4) != 0 || (v9 & 2) != 0 )
        v112 = MI_READ_PTE_LOCK_FREE(&v136);
      else
        v112 = 0LL;
      v136 = v112;
      if ( v112 )
      {
        MiReleasePageFileInfo(v111, v112, 0LL);
        LOBYTE(v10) = v126;
      }
      if ( (*(_BYTE *)(v7 + 184) & 7) != 0
        || (v10 & 0x40) != 0
        && ((v113 = MiReverseSwizzleInvalidPte(v9, v16, v11, v111), (v113 & 0x400) != 0)
         || (v113 & 0x800) != 0
         || (v113 & 4) != 0) )
      {
        ++*(_QWORD *)(*(_QWORD *)(v3 + 24) + 24LL);
      }
      goto LABEL_315;
    }
    MiGetPrototypePteDirect(v9);
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v9);
    if ( IsPrototypePteVadLookup || (v9 & 0x800) == 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( !*(_QWORD *)(Process + 912) )
        goto LABEL_315;
      if ( IsPrototypePteVadLookup )
        goto LABEL_315;
      CloneAddress = MiLocateCloneAddress(Process, v106);
      if ( !CloneAddress )
        goto LABEL_315;
      v108 = MiDecrementCloneBlockReference(CloneAddress, v110);
    }
    else
    {
      v108 = MiDecrementCombinedPte(v7, v106);
    }
    if ( v108 == 3 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL);
    }
    else if ( v108 == 5 )
    {
      ++*(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL);
    }
LABEL_315:
    *(_QWORD *)v8 = ZeroPte;
    v105 = 0xFFFFF6FB7DBED000uLL;
    v104 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v8, ZeroPte);
      v104 = 0xFFFFF6FB7DBED7F8uLL;
    }
LABEL_318:
    if ( (v126 & 0x40) != 0 && (v8 < v105 || v8 > 0xFFFFF6FB7DBEDFFFuLL) )
    {
      v114 = (v17 >> 18) & 0x3FFFFFF8;
      v115 = *(_QWORD *)(v114 - 0x904C0000000LL);
      v116 = v114 - 0x904C0000000LL;
      if ( v114 - 0x904C0000000LL >= v105
        && v116 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v115, v116, 0xFFFFF6FB7DBED7F8uLL)
        && (v115 & 1) != 0
        && ((v115 & 0x20) == 0 || (v115 & 0x42) == 0) )
      {
        v117 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v117 )
        {
          v118 = *(_QWORD *)(v117 + 8 * ((v116 >> 3) & 0x1FF));
          v116 = v115 | 0x20;
          if ( (v118 & 0x20) == 0 )
            v116 = v115;
          v115 = v116;
          if ( (v118 & 0x42) != 0 )
            v115 = v116 | 0x42;
        }
      }
      v137 = v115;
      if ( (unsigned __int64)&v137 >= v105
        && (unsigned __int64)&v137 <= v104
        && (unsigned int)MiPteHasShadow(&v137, v115, v116, v104)
        && (v115 & 1) != 0
        && ((v115 & 0x20) == 0 || (v115 & 0x42) == 0) )
      {
        v119 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v119 )
        {
          v120 = *(_QWORD *)(v119 + 8 * (((unsigned __int64)&v137 >> 3) & 0x1FF));
          v121 = v115 | 0x20;
          if ( (v120 & 0x20) == 0 )
            v121 = v115;
          v115 = v121;
          if ( (v120 & 0x42) != 0 )
            v115 = v121 | 0x42;
        }
      }
      v122 = (v115 >> 12) & 0xFFFFFFFFFLL;
      v123 = 48 * v122 - 0x58000000000LL;
      if ( (*(_DWORD *)(v123 + 16) & 0x3FF0000) == 0 )
        KeBugCheckEx(0x1Au, 0x41790uLL, 48 * v122 - 0x58000000000LL, HIWORD(*(_DWORD *)(v123 + 16)) & 0x3FF, 1uLL);
      v133 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v123 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v133);
        while ( *(__int64 *)(v123 + 24) < 0 );
      }
      *(_QWORD *)(v123 + 16) ^= ((unsigned int)*(_QWORD *)(v123 + 16) ^ ((unsigned __int16)(WORD1(*(_QWORD *)(v123 + 16))
                                                                                          - 1) << 16)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v123 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v18 = v9;
  v19 = (unsigned __int64)&v127;
  if ( (unsigned __int64)&v127 >= 0xFFFFF6FB7DBED000uLL )
  {
    v19 = (unsigned __int64)&v127;
    if ( (unsigned __int64)&v127 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v127, v9, 0xFFFFF6FB7DBED7F8uLL, 0LL)
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v19 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v20 = *(_QWORD *)(v19 + 1544);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8 * (((unsigned __int64)&v127 >> 3) & 0x1FF));
        v18 = v9 | 0x20;
        v19 = (unsigned __int8)v21;
        LOBYTE(v19) = v21 & 0x20;
        if ( (v21 & 0x20) == 0 )
          v18 = v9;
        if ( (v21 & 0x42) != 0 )
          v18 |= 0x42uLL;
      }
      else
      {
        v18 = v9;
      }
    }
  }
  v22 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v6 < 1 )
    goto LABEL_74;
  if ( (v9 & 0x80u) != 0LL )
  {
    MiDeleteLargeUserPde(a1, v8, (unsigned int)v6);
    return 0LL;
  }
  v23 = *(_BYTE *)(v7 + 184) & 7;
  if ( v23 == 1 && v8 == 0xFFFFF6FB7DBEDF68uLL )
  {
LABEL_74:
    v28 = 0xFFFFFFFFFLL;
    goto LABEL_75;
  }
  v19 = (__int64)(v8 << 25) >> 16;
  if ( v17 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v19 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v19 = (__int64)((v19 << 25) - v15) >> 16;
    }
    while ( v19 >= 0xFFFFF68000000000uLL );
    v6 = v128;
  }
  if ( v19 > 0x7FFFFFFEFFFFLL )
  {
    if ( (*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      return 0LL;
    if ( v23 == 1 )
    {
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiLockPageTableInternal(v7, v8, 0LL);
      v29 = (__int64)(v8 << 25) >> 16;
      while ( 1 )
      {
        v30 = MI_READ_PTE_LOCK_FREE(v29);
        v142 = v30;
        if ( v30 )
        {
          if ( (v30 & 1) == 0 )
            break;
        }
        v29 = v31 + 8;
        if ( (v29 & 0xFFF) == 0 )
        {
          v32 = 1;
          goto LABEL_70;
        }
      }
      v32 = 0;
LABEL_70:
      if ( (*(_DWORD *)a1 & 4) != 0 )
        MiUnlockPageTableInternal(v7, v8);
      if ( !v32 )
        return 0LL;
      v6 = v128;
      LOBYTE(v10) = v126;
    }
    goto LABEL_74;
  }
  v22 = ((((__int64)((v17 << 25) - v15) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
  v24 = *(_QWORD *)v22;
  if ( v22 >= 0xFFFFF6FB7DBED000uLL
    && v22 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v24 & 1) != 0
    && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 8 * ((v22 >> 3) & 0x1FF));
      v22 = v24 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v22 = v24;
      v24 = v22;
      if ( (v26 & 0x42) != 0 )
        v24 = v22 | 0x42;
    }
  }
  v134 = v24;
  if ( (unsigned __int64)&v134 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v134 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v134, v24, v22, 0xFFFFF6FB7DBED7F8uLL)
    && (v24 & 1) != 0
    && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v22 )
    {
      v27 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v134 >> 3) & 0x1FF));
      v22 = v24 | 0x20;
      if ( (v27 & 0x20) == 0 )
        v22 = v24;
      v24 = v22;
      if ( (v27 & 0x42) != 0 )
        v24 = v22 | 0x42;
    }
  }
  v28 = 0xFFFFFFFFFLL;
  v19 = (unsigned __int64)*(unsigned int *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL) >> 16;
  if ( (v19 & 0x3FF) != 0 )
    return 0LL;
LABEL_75:
  if ( (*(_BYTE *)(v7 + 184) & 7) != 0 )
  {
    MiInsertTbFlushEntry(v5, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
    if ( v126 < 0 || v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_133;
    v127 = v9 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiEvictPageTableLock(v7, v8, v127, v128 > 1) )
      goto LABEL_277;
    return 0LL;
  }
  if ( !v6 )
  {
    if ( (v10 & 0x20) != 0 )
    {
      v33 = MI_READ_PTE_LOCK_FREE(&v127);
      if ( (unsigned int)MiIsPfnInline(v34 & (v33 >> 12)) )
      {
        v129 = 1;
        v35 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v37 = 48 * (v36 & (v35 >> 12)) - 0x58000000000LL;
        MiLockPageAtDpcInline(v37);
        *(_QWORD *)(v37 + 24) ^= (*(_QWORD *)(v37 + 24) ^ (*(_QWORD *)(v37 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v38 = 0LL;
      }
      else
      {
        v38 = v9 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      }
      v127 = v38;
      *(_QWORD *)v8 = v38;
      if ( (unsigned int)MiPteInShadowRange(v8) )
        MiWritePteShadow(v39, v38);
      MiInsertTbFlushEntry(v5, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
      goto LABEL_277;
    }
    if ( (v10 & 8) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v8) == 1 )
      {
        MiUnmapFrameBuffer(v8, 3LL, 0LL, v143);
        MiInsertTbFlushEntry(v5, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
        goto LABEL_277;
      }
      LOBYTE(v10) = v126;
    }
    if ( (v10 & 0x40) != 0 )
    {
      if ( (v10 & 2) != 0 && (*(_BYTE *)(v7 + 187) & 1) == 0 && dword_1403CBF28 )
      {
        if ( v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_107;
        v22 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v41 = *(_QWORD *)v22;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL
          && v22 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v19, v41, v22, v28)
          && (v41 & 1) != 0
          && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
        {
          v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v42 )
          {
            v43 = *(_QWORD *)(v42 + 8 * ((v22 >> 3) & 0x1FF));
            v22 = v41 | 0x20;
            if ( (v43 & 0x20) == 0 )
              v22 = v41;
            HIBYTE(v41) = HIBYTE(v22);
            if ( (v43 & 0x42) != 0 )
              HIBYTE(v41) = HIBYTE(v22);
          }
        }
        if ( (HIBYTE(v41) & 0xF) != 7 )
        {
LABEL_107:
          if ( (*(_BYTE *)v8 & 0x20) != 0 )
          {
            MiLogPageAccess(v7, v8);
            LOBYTE(v10) = v126;
          }
        }
      }
      v44 = v9;
      if ( (unsigned __int64)&v127 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v127 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(&v127, v9, v22, v28)
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&v127 >> 3) & 0x1FF));
          v44 = v9 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v44 = v9;
          if ( (v46 & 0x42) != 0 )
            v44 |= 0x42uLL;
        }
        else
        {
          v44 = v9;
        }
      }
      v47 = (v44 >> 12) & 0xFFFFFFFFFLL;
      v48 = 48 * v47 - 0x58000000000LL;
      if ( (*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        if ( (v10 & 1) != 0 && (unsigned int)MiGetPfnPriority(48 * v47 - 0x58000000000LL) - 3 <= 2 )
        {
          MiLockSetPfnPriority(v49, 2LL);
          LOBYTE(v10) = v126;
        }
        if ( (v10 & 4) != 0
          && !*(_QWORD *)(v138 + 40)
          && (v9 & 0x42) == 0
          && (*(_QWORD *)(v48 + 40) & 0x200000000000000LL) != 0
          && (*(_BYTE *)(v48 + 34) & 0x10) == 0 )
        {
          PfnPriority = MiGetPfnPriority(v48);
          if ( PfnPriority < 5 )
            *(_QWORD *)(v138 + 40) = MiCreateDecayPfn(PfnPriority);
        }
      }
    }
  }
  if ( v126 < 0 )
  {
    MiInsertTbFlushEntry(v5, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
    goto LABEL_133;
  }
  v132 = 0;
  v52 = 1;
  v53 = 0xFFFFF68000000000uLL;
  v54 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = 0xFFFFF6FB7DBED000uLL;
  v56 = *(_QWORD *)v54;
  if ( v54 >= 0xFFFFF6FB7DBED000uLL
    && v54 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v56, v22, v28)
    && (v56 & 1) != 0
    && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v22 )
    {
      v57 = *(_QWORD *)(v22 + 8 * ((v54 >> 3) & 0x1FF));
      v22 = v56 | 0x20;
      if ( (v57 & 0x20) == 0 )
        v22 = v56;
      v56 = v22;
      if ( (v57 & 0x42) != 0 )
        v56 = v22 | 0x42;
    }
  }
  v58 = 48 * ((v56 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v17 >= v53 && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v59 = 0;
    WsleContents = (*(_BYTE *)v58 >> 1) & 7;
    if ( !(unsigned int)MiEvictPageTableLock(v131, v54, ZeroPte, 0LL) )
      return 0LL;
    v61 = 1;
    goto LABEL_182;
  }
  v62 = *(_QWORD *)v54;
  v59 = 1;
  if ( v54 >= v55
    && v54 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v62, v22, v58)
    && (v62 & 1) != 0
    && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
  {
    v63 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v63 )
    {
      v64 = *(_QWORD *)(v63 + 8 * ((v54 >> 3) & 0x1FF));
      v65 = v62 | 0x20;
      if ( (v64 & 0x20) == 0 )
        v65 = v62;
      v62 = v65;
      if ( (v64 & 0x42) != 0 )
        v62 = v65 | 0x42;
    }
  }
  WsleContents = HIBYTE(v62) & 0xF | (16 * ((v62 >> 60) & 7));
  v52 = (*(_QWORD *)(v58 + 40) & 0x200000000000000LL) == 0;
  if ( (HIBYTE(v62) & 0xF) == 8 )
  {
    v66 = v130;
    MiUnlockWsle(v131, v130, v58);
    WsleContents = MiGetWsleContents(v67, v66);
    v55 = 0xFFFFF6FB7DBED000uLL;
  }
  v68 = ZeroPte;
  v69 = *(_QWORD *)v54;
  v70 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v54 >= v55
    && v54 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v69, ZeroPte, 0xFFFFF6FB7DBED7F8uLL) )
  {
    LOBYTE(v69) = v69 | 0x20;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v69) = 32;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v69 & 0x20) != 0 )
  {
    *(_QWORD *)v54 = v68;
    if ( v54 >= v55 && v54 <= v70 )
      MiWritePteShadow(v54, v68);
  }
  else
  {
    v71 = _InterlockedExchange64((volatile __int64 *)v54, v68);
    if ( v54 >= v55 && v54 <= v70 )
      MiWritePteShadow(v54, v68);
    if ( (v71 & 0x20) == 0 )
    {
      v61 = v132;
      goto LABEL_182;
    }
  }
  v61 = 1;
LABEL_182:
  BugCheckParameter4 = v52;
  v7 = v131;
  MiRemoveWsle(v131, v130, WsleContents, 10, BugCheckParameter4);
  v72 = v59 == 0;
  v17 = v130;
  if ( v72 )
    goto LABEL_239;
  v73 = ((v130 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v74 = 0xFFFFF6FB7DBED000uLL;
  v75 = *(_QWORD *)v73;
  v76 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v73 >= 0xFFFFF6FB7DBED000uLL && v73 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(Process, v75, 0xFFFFF6FB7DBED7F8uLL, v73)
      && (v75 & 1) != 0
      && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
    {
      v77 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v77 )
      {
        v78 = *(_QWORD *)(v77 + 8 * ((v73 >> 3) & 0x1FF));
        v79 = v75 | 0x20;
        if ( (v78 & 0x20) == 0 )
          v79 = v75;
        v75 = v79;
        if ( (v78 & 0x42) != 0 )
          v75 = v79 | 0x42;
      }
    }
    v76 = 0xFFFFF6FB7DBED7F8uLL;
  }
  v135 = v75;
  Process = (unsigned __int64)&v135;
  if ( (unsigned __int64)&v135 >= v74 )
  {
    Process = (unsigned __int64)&v135;
    if ( (unsigned __int64)&v135 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v135, v75, 0xFFFFF6FB7DBED7F8uLL, v73)
      && (v75 & 1) != 0
      && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v76 = *(_QWORD *)(Process + 1544);
      if ( v76 )
      {
        v80 = *(_QWORD *)(v76 + 8 * (((unsigned __int64)&v135 >> 3) & 0x1FF));
        v76 = v75 | 0x20;
        Process = (unsigned __int8)v80;
        LOBYTE(Process) = v80 & 0x20;
        if ( (v80 & 0x20) == 0 )
          v76 = v75;
        v75 = v76;
        if ( (v80 & 0x42) != 0 )
          v75 = v76 | 0x42;
      }
    }
  }
  v81 = (unsigned __int64 *)(48 * ((v75 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  v82 = *v81;
  if ( ((*v81 >> 4) & 0x3FF) != 0 )
    goto LABEL_239;
  v83 = v139;
  v84 = (__int64)((v73 << 25) - v139) >> 16;
  memset(v144, 0, sizeof(v144));
  do
  {
    v85 = *(_QWORD *)v84;
    if ( v84 >= 0xFFFFF6FB7DBED000uLL
      && v84 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v85, v76, v84) )
    {
      if ( (v85 & 1) == 0 )
        goto LABEL_233;
      if ( (v85 & 0x20) == 0 || (v85 & 0x42) == 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v76 = *(_QWORD *)(Process + 1544);
        if ( v76 )
        {
          v86 = *(_QWORD *)(v76 + 8 * ((v84 >> 3) & 0x1FF));
          v76 = v85 | 0x20;
          Process = (unsigned __int8)v86;
          LOBYTE(Process) = v86 & 0x20;
          if ( (v86 & 0x20) == 0 )
            v76 = v85;
          LOBYTE(v85) = v76;
          if ( (v86 & 0x42) != 0 )
            LOBYTE(v85) = v76 | 0x42;
        }
      }
    }
    if ( (v85 & 1) != 0 )
    {
      Process = (((__int64)((v84 << 25) - v83) >> 16) & 0xFFFFFFFFF000uLL) >> 9;
      v87 = *(_QWORD *)(Process - 0x98000000000LL);
      v76 = Process - 0x98000000000LL;
      if ( Process - 0x98000000000LL >= 0xFFFFF6FB7DBED000uLL
        && v76 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v87, v76, v84)
        && (v87 & 1) != 0
        && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v88 = *(_QWORD *)(Process + 1544);
        if ( v88 )
        {
          v89 = *(_QWORD *)(v88 + 8 * ((v76 >> 3) & 0x1FF));
          v76 = v87 | 0x20;
          Process = (unsigned __int8)v89;
          LOBYTE(Process) = v89 & 0x20;
          if ( (v89 & 0x20) == 0 )
            v76 = v87;
          HIBYTE(v87) = HIBYTE(v76);
          if ( (v89 & 0x42) != 0 )
            HIBYTE(v87) = HIBYTE(v76);
        }
      }
      if ( (unsigned __int8)((HIBYTE(v87) & 0xF) - 8) > 2u )
        ++*((_DWORD *)v144 + (HIBYTE(v87) & 0xF));
    }
LABEL_233:
    v84 += 8LL;
  }
  while ( (v84 & 0xFFF) != 0 );
  v5 = v140;
  LOBYTE(Process) = 8;
  v8 = (ULONG_PTR)v141;
  v17 = v130;
  v7 = v131;
  while ( 1 )
  {
    LOBYTE(Process) = Process - 1;
    v90 = *((_DWORD *)v144 + (unsigned __int8)Process);
    if ( v90 )
      break;
    if ( !(_BYTE)Process )
      goto LABEL_239;
  }
  *v81 = v82 & 0xFFFFFFFFFFFE000FuLL | (16 * (v90 & 0x3FF | ((Process & 7) << 10)));
LABEL_239:
  if ( v61 == 1 )
  {
    v91 = 1LL;
    v92 = v17;
    if ( *(_DWORD *)v5 != 1 )
    {
      Process = *(unsigned __int8 *)(v5 + 4);
      if ( (Process & 8) == 0 && v17 >= 0xFFFFF68000000000uLL && v17 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        LOBYTE(Process) = Process | 8;
        *(_BYTE *)(v5 + 4) = Process;
      }
    }
    v93 = *(_DWORD *)(v5 + 12);
    v94 = *(_BYTE *)(v5 + 4);
    if ( !v93 )
      goto LABEL_258;
    if ( (v94 & 4) == 0 )
    {
      v95 = 8LL * (v93 - 1);
      v96 = *(_QWORD *)(v95 + v5 + 24);
      if ( (v96 & 0xC00) == 0 )
      {
        v97 = *(_QWORD *)(v95 + v5 + 24) & 0x3FFLL;
        Process = v96 & 0xFFFFFFFFFFFFF000uLL;
        if ( (v96 & 0xFFFFFFFFFFFFF000uLL) + ((v97 + 1) << 12) == v17 )
        {
          Process = v97 + 1;
          if ( v97 + 1 >= v97 && Process <= 0x3FF )
          {
            ++*(_QWORD *)(v5 + 16);
            Process = v96 ^ ((unsigned __int16)v96 ^ (unsigned __int16)(v96 + 1)) & 0x3FF;
            *(_QWORD *)(v95 + v5 + 24) = Process;
            goto LABEL_133;
          }
        }
      }
    }
    if ( (v94 & 4) != 0
      || (v98 = 8LL * (v93 - 1), v99 = *(_QWORD *)(v98 + v5 + 24), (v99 & 0xC00) != 0)
      || (Process = v17 + 4096, (v99 & 0xFFFFFFFFFFFFF000uLL) != v17 + 4096)
      || (Process = *(_QWORD *)(v98 + v5 + 24) & 0x3FFLL, Process + 1 < Process)
      || Process + 1 > 0x3FF )
    {
LABEL_258:
      if ( v93 < *(_DWORD *)(v5 + 8) )
      {
        while ( 1 )
        {
          v100 = 1024LL;
          if ( (unsigned __int64)(v91 - 1) <= 0x3FF )
            v100 = v91;
          v91 -= v100;
          v101 = v92 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v100 - 1) & 0x3FF;
          v92 += v100 << 12;
          *(_QWORD *)(v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 12))++ + 24) = v101;
          Process = *(unsigned int *)(v5 + 12);
          *(_QWORD *)(v5 + 16) += v100;
          if ( (_DWORD)Process == *(_DWORD *)(v5 + 8) && (*(_BYTE *)(v5 + 4) & 4) == 0 )
          {
            qsort((void *)(v5 + 24), (unsigned int)Process, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(v5);
            v102 = *(unsigned int *)(v5 + 12);
            if ( (_DWORD)v102 == *(_DWORD *)(v5 + 8) )
              break;
          }
          if ( !v91 )
            goto LABEL_133;
        }
        if ( v91 )
        {
          *(_BYTE *)(v5 + 5) = 1;
          *(_QWORD *)(v5 + 16) = v102;
        }
      }
      else
      {
        *(_BYTE *)(v5 + 5) = 1;
      }
    }
    else
    {
      ++*(_QWORD *)(v5 + 16);
      Process = (v99 - 4096) ^ ((unsigned __int16)(v99 - 4096) ^ (unsigned __int16)(v99 - 4096 + 1)) & 0x3FF;
      *(_QWORD *)(v98 + v5 + 24) = Process;
    }
  }
LABEL_133:
  v51 = v9 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  v127 = v51;
  if ( v128 == 3 && (*(_BYTE *)(v7 + 184) & 7) != 0 )
  {
    MiWriteTopLevelPxe(v8, v51);
  }
  else
  {
    *(_QWORD *)v8 = v51;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v8, v51);
  }
LABEL_277:
  v103 = qword_1403CB708;
  if ( (*(_BYTE *)(v5 + 4) & 2) == 0 && *(_DWORD *)v5 == 1 )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    if ( *(_QWORD *)(Process + 1864) )
      v103 = -1LL;
  }
  if ( (*(_DWORD *)(v5 + 12) >= *(_DWORD *)(v5 + 8) || *(_BYTE *)(v5 + 5) || *(_QWORD *)(v5 + 16) > v103)
    && v103 >= 0x400
    && !*(_BYTE *)(v5 + 5) )
  {
    MiFlushTbList(v5);
  }
  if ( v129 )
  {
    v104 = 0xFFFFF6FB7DBED7F8uLL;
    v105 = 0xFFFFF6FB7DBED000uLL;
    goto LABEL_318;
  }
  v3 = v138;
LABEL_349:
  if ( !*(_QWORD *)v3 )
    *(_QWORD *)v3 = v8;
  *(_QWORD *)(v3 + 8) = v8;
  return 0LL;
}
