/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A6A40
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA6A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        unsigned __int64 a3,
        CPreComputeContext *a4,
        ...)
{
  CPreComputeContext *v5; // rbp
  __int64 v8; // r12
  CPtrArrayBase *Value; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // ebx
  unsigned __int64 v13; // r14
  CVisual *v14; // rbx
  int v15; // eax
  unsigned __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  CVisual *v19; // rdi
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 *v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rdx
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rcx
  _QWORD *v35; // r15
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 *v38; // r14
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  int v41; // ebp
  int v42; // eax
  __int64 v44; // r14
  void *v45; // rbx
  __int64 v46; // rcx
  unsigned int v47; // eax
  int v48; // ebp
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // r8d
  __int64 v52; // r11
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  unsigned __int64 *v55; // rcx
  unsigned __int64 v56; // r10
  unsigned int v57; // r15d
  SIZE_T v58; // r8
  void *v59; // r12
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rdi
  _QWORD *v63; // rcx
  __int64 v64; // rdi
  CPtrArrayBase *v65; // rax
  DWORD v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // eax
  int v69; // ecx
  _QWORD *v70; // rax
  DWORD v71; // ecx
  SIZE_T v72; // r8
  LPVOID v73; // rdi
  __int128 v74; // [rsp+30h] [rbp-68h]
  bool v75; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp+10h]
  struct CTreeData *v77; // [rsp+B0h] [rbp+18h] BYREF
  CPreComputeContext *v78; // [rsp+B8h] [rbp+20h]
  __int64 v79; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v79 = va_arg(va1, _QWORD);
  v78 = a4;
  *(_DWORD *)(a1 + 72) = v79;
  *(_QWORD *)(a1 + 64) = a2;
  v5 = a4;
  v76 = 0LL;
  v8 = 64LL;
  Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v65 = (CPtrArrayBase *)operator new(0xF8uLL);
    Value = v65;
    if ( !v65 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      v67 = 108;
      v12 = -2147024882;
      goto LABEL_111;
    }
    v66 = CThreadContext::s_dwTlsIndex;
    *(_QWORD *)v65 = 0LL;
    *((_QWORD *)v65 + 1) = 0LL;
    *((_QWORD *)v65 + 2) = 0LL;
    *((_QWORD *)v65 + 3) = 0LL;
    *((_QWORD *)v65 + 4) = 0LL;
    *((_QWORD *)v65 + 5) = 0LL;
    *((_QWORD *)v65 + 6) = 0LL;
    *((_QWORD *)v65 + 7) = 0LL;
    *((_QWORD *)v65 + 8) = 0LL;
    *((_QWORD *)v65 + 9) = 0LL;
    *((_QWORD *)v65 + 10) = 0LL;
    *((_QWORD *)v65 + 11) = 0LL;
    *((_QWORD *)v65 + 12) = 0LL;
    *((_QWORD *)v65 + 13) = 0LL;
    *((_QWORD *)v65 + 14) = 0LL;
    *((_QWORD *)v65 + 15) = 0LL;
    *((_QWORD *)v65 + 16) = 0LL;
    *((_QWORD *)v65 + 17) = 0LL;
    *((_QWORD *)v65 + 18) = 0LL;
    *((_QWORD *)v65 + 19) = 0LL;
    *((_QWORD *)v65 + 20) = 0LL;
    *((_QWORD *)v65 + 21) = 0LL;
    *((_QWORD *)v65 + 22) = 0LL;
    *((_QWORD *)v65 + 23) = 0LL;
    *((_QWORD *)v65 + 24) = 0LL;
    *((_QWORD *)v65 + 25) = 0LL;
    *((_QWORD *)v65 + 26) = 0LL;
    *((_QWORD *)v65 + 27) = 0LL;
    *((_QWORD *)v65 + 28) = 0LL;
    *((_QWORD *)v65 + 29) = 0LL;
    *((_QWORD *)v65 + 30) = 0LL;
    TlsSetValue(v66, v65);
  }
  if ( (*(_QWORD *)Value & 2) != 0 )
    v10 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v10 = *(_QWORD *)Value & 1LL;
  v11 = 0LL;
  if ( v10 )
  {
    while ( a3 != CPtrArrayBase::operator[](Value, v11) )
    {
      v11 = v61 + 1;
      if ( v11 >= v10 )
        goto LABEL_5;
    }
    v12 = -2147467260;
    v67 = 119;
  }
  else
  {
LABEL_5:
    v12 = CPtrArrayBase::InsertAt(Value, a3, v10);
    if ( v12 >= 0 )
    {
      v13 = a3;
      v76 = a3;
      *(_DWORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 24) = 0;
      goto LABEL_7;
    }
    v67 = 124;
  }
LABEL_111:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v67);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x40u);
  v13 = 0LL;
LABEL_7:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC3u);
    goto LABEL_39;
  }
  v14 = *(CVisual **)(a1 + 8);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetCachedFeatureEnabledState();
  v12 = CVisual::EnsureTreeData(v14, a2, &v77);
  if ( v12 < 0 )
    goto LABEL_133;
  while ( 1 )
  {
    v15 = CPreComputeContext::PreSubgraph(v5, a2, &v75);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xD7u);
      goto LABEL_38;
    }
    if ( !v75 )
      break;
    v19 = 0LL;
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v44 & 2) != 0 )
      v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v44) = v44 & 1;
    if ( !(_DWORD)v44 )
    {
      v12 = 1;
      goto LABEL_73;
    }
    v45 = 0LL;
    v46 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v74 = *(_QWORD *)(a1 + 16);
    DWORD2(v74) = *(_DWORD *)(a1 + 24);
    v47 = *(_DWORD *)(a1 + 32);
    if ( v47 != (_DWORD)v46 )
      goto LABEL_58;
    v57 = 2 * v46;
    if ( (unsigned __int64)(2 * v46) > 0xFFFFFFFF )
    {
      v48 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v12 = -2147024362;
LABEL_121:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x8Bu);
      v5 = v78;
      goto LABEL_73;
    }
    if ( v57 <= 0x40 )
      v57 = 64;
    v48 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v57 <= 0x10 )
    {
      v48 = -2147024809;
      goto LABEL_114;
    }
    v58 = 16LL * v57;
    if ( !v58 )
      v58 = 1LL;
    v45 = HeapAlloc(WPF::g_processHeap, 0, v58);
    v59 = v45;
    if ( !v45 )
    {
      v48 = -2147024882;
LABEL_114:
      v59 = 0LL;
    }
    if ( v48 < 0 )
    {
      v68 = 84;
    }
    else
    {
      v60 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v60 <= 0xFFFFFFFF )
      {
        memcpy_0(v45, *(const void **)(a1 + 48), (unsigned int)v60);
        operator delete(*(void **)(a1 + 48));
        v47 = *(_DWORD *)(a1 + 32);
        v8 = 64LL;
        *(_DWORD *)(a1 + 36) = v57;
        *(_QWORD *)(a1 + 48) = v45;
LABEL_58:
        v48 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v47) = v74;
        v49 = *(_DWORD *)(a1 + 56);
        v50 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v50;
        if ( v49 <= v50 )
          v49 = v50;
        *(_DWORD *)(a1 + 56) = v49;
        goto LABEL_61;
      }
      v48 = -2147024362;
      v68 = 86;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, v68);
    if ( v59 )
      HeapFree(WPF::g_processHeap, 0, v59);
    v8 = 64LL;
LABEL_61:
    v12 = v48;
    if ( v48 < 0 )
      goto LABEL_121;
    v51 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v44 - 1;
    *(_DWORD *)(a1 + 24) = v51;
    v52 = *(_QWORD *)(a1 + 8);
    v53 = *(_QWORD *)(v52 + 72) & 2LL;
    v54 = *(_QWORD *)(v52 + 72) & 1LL;
    v55 = (unsigned __int64 *)(*(_QWORD *)(v52 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    v56 = v53 ? *v55 : (unsigned int)v54;
    v16 = v51;
    if ( v56 <= v51 )
      goto LABEL_123;
    if ( v53 )
      v54 = *v55;
    if ( v51 >= v54 )
LABEL_123:
      v19 = 0LL;
    else
      v19 = (CVisual *)(v54 == 1 ? *(_QWORD *)(v52 + 72) & 0xFFFFFFFFFFFFFFFCuLL : v55[v51 + 2]);
    ++*(_DWORD *)(a1 + 4);
    v5 = v78;
    *(_QWORD *)(a1 + 16) = v52;
    *(_QWORD *)(a1 + 8) = v19;
LABEL_73:
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE6u);
      goto LABEL_38;
    }
    if ( !v19 )
      break;
LABEL_31:
    v12 = CVisual::EnsureTreeData(v19, a2, &v77);
    if ( v12 < 0 )
    {
      v13 = v76;
LABEL_133:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xD3u);
      goto LABEL_39;
    }
  }
  while ( 1 )
  {
    LOBYTE(v79) = 1;
    v17 = CPreComputeContext::PostSubgraph(
            v5,
            a2,
            (char (__fastcall *)(CCompositionSpotLight *, const struct CVisualTree *, const struct CVisual *))va,
            (CCompositionSpotLight *)v16);
    v12 = v17;
    if ( v17 < 0 )
      break;
    v18 = *(_QWORD *)(a1 + 16);
    if ( (_BYTE)v79 )
    {
      v12 = 0;
      v19 = 0LL;
      if ( !v18 )
        goto LABEL_33;
      v20 = *(_DWORD *)(a1 + 28);
      if ( v20 == 1 )
      {
        v21 = *(_DWORD *)(a1 + 24);
        if ( v21 != -1 )
        {
          v22 = *(_QWORD *)(v18 + 72);
          if ( (v22 & 2) != 0 )
            v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v23) = v22 & 1;
          v24 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v24 < (unsigned int)v23 )
            goto LABEL_21;
        }
LABEL_33:
        v12 = 1;
      }
      else
      {
        if ( v20 )
          goto LABEL_33;
        v69 = *(_DWORD *)(a1 + 24);
        if ( !v69 )
          goto LABEL_33;
        v22 = *(_QWORD *)(v18 + 72);
        v24 = (unsigned int)(v69 - 1);
LABEL_21:
        v16 = v22 & 2;
        if ( (v22 & 2) != 0 )
        {
          v25 = (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
          v26 = v22 & 1;
          v27 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        else
        {
          v27 = v22 & 1;
          v26 = v27;
          v25 = (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        if ( v27 <= (unsigned int)v24 )
          goto LABEL_129;
        if ( (v22 & 2) != 0 )
          v26 = *v25;
        if ( (unsigned int)v24 >= v26 )
        {
LABEL_129:
          v28 = 0LL;
        }
        else if ( v26 == 1 )
        {
          v28 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v28 = v25[v24 + 2];
        }
        *(_QWORD *)(a1 + 8) = v28;
        v19 = (CVisual *)v28;
        *(_DWORD *)(a1 + 24) = v24;
      }
      if ( v19 )
        goto LABEL_31;
    }
    v29 = *(_DWORD *)(a1 + 4);
    if ( v29 )
    {
      v30 = *(_DWORD *)(a1 + 32);
      v31 = 0LL;
      v32 = 0;
      if ( v30 )
      {
        v33 = (unsigned int)(v30 - 1);
        *(_DWORD *)(a1 + 32) = v33;
        v29 = *(_DWORD *)(a1 + 4);
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v33 + 8);
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v33);
      }
      v34 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v34;
      *(_QWORD *)(a1 + 16) = v31;
      *(_DWORD *)(a1 + 24) = v32;
      *(_DWORD *)(a1 + 4) = v29 - 1;
      if ( v34 )
        continue;
    }
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x100u);
LABEL_38:
  v13 = v76;
LABEL_39:
  if ( v12 == 1 || v12 == -2147467260 )
    v12 = 0;
  if ( !v13 )
    goto LABEL_50;
  v35 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( v35 )
    goto LABEL_43;
  v70 = operator new(0xF8uLL);
  v35 = v70;
  if ( v70 )
  {
    v71 = CThreadContext::s_dwTlsIndex;
    *v70 = 0LL;
    v70[1] = 0LL;
    v70[2] = 0LL;
    v70[3] = 0LL;
    v70[4] = 0LL;
    v70[5] = 0LL;
    v70[6] = 0LL;
    v70[7] = 0LL;
    v70[8] = 0LL;
    v70[9] = 0LL;
    v70[10] = 0LL;
    v70[11] = 0LL;
    v70[12] = 0LL;
    v70[13] = 0LL;
    v70[14] = 0LL;
    v70[15] = 0LL;
    v70[16] = 0LL;
    v70[17] = 0LL;
    v70[18] = 0LL;
    v70[19] = 0LL;
    v70[20] = 0LL;
    v70[21] = 0LL;
    v70[22] = 0LL;
    v70[23] = 0LL;
    v70[24] = 0LL;
    v70[25] = 0LL;
    v70[26] = 0LL;
    v70[27] = 0LL;
    v70[28] = 0LL;
    v70[29] = 0LL;
    v70[30] = 0LL;
    TlsSetValue(v71, v70);
LABEL_43:
    v36 = *v35 & 2LL;
    v37 = *v35 & 1LL;
    v38 = (unsigned __int64 *)(*v35 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v36 )
      v39 = *v38;
    else
      v39 = (unsigned int)v37;
    v40 = v39 - 1;
    if ( v36 )
      v37 = *v38;
    if ( v40 < v37 )
    {
      if ( v37 == 1 )
      {
        *v35 = 0LL;
      }
      else
      {
        v62 = v37 - 1;
        v63 = v38 + 2;
        if ( v62 == 1 )
        {
          v64 = v63[-v40 + 1];
          operator delete((void *)(*v35 & 0xFFFFFFFFFFFFFFFCuLL));
          *v35 = v64 | 1;
        }
        else
        {
          if ( v40 < v62 )
            memmove(&v63[v40], &v63[v40 + 1], 8 * (v62 - v40));
          *v38 = v62;
        }
      }
    }
LABEL_50:
    v41 = -2147024882;
  }
  else
  {
    v41 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v42 = *(_DWORD *)(a1 + 40);
  if ( v42 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v8 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
    }
    else if ( (unsigned int)(3 * v8) <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v8 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 > 0x10 )
      {
        v72 = 16LL * (unsigned int)v8;
        if ( !v72 )
          v72 = 1LL;
        v73 = HeapAlloc(WPF::g_processHeap, 0, v72);
        if ( v73 )
        {
          operator delete(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v73;
          *(_DWORD *)(a1 + 36) = v8;
          goto LABEL_85;
        }
      }
      else
      {
        v41 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x100u);
    }
LABEL_85:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v12;
  }
  *(_DWORD *)(a1 + 40) = v42 + 1;
  return (unsigned int)v12;
}
