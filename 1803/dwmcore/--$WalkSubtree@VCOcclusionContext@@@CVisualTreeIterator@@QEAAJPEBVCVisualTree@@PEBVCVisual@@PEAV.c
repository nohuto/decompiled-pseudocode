/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A81C0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800A89A8 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B9670 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA6A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        unsigned __int64 a3,
        COcclusionContext *a4,
        ...)
{
  COcclusionContext *v5; // rbp
  __int64 v8; // r12
  CPtrArrayBase *Value; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // ebx
  unsigned __int64 v13; // r14
  CVisual *v14; // rbx
  int v15; // eax
  CVisual *v16; // rdi
  __int64 v17; // r14
  void *v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ebp
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // r11
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // r10
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r11
  unsigned __int64 *v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // rdx
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rcx
  _QWORD *v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  unsigned __int64 *v49; // r14
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  int v52; // ebp
  int v53; // eax
  unsigned int v55; // r15d
  SIZE_T v56; // r8
  void *v57; // r12
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  _QWORD *v61; // rcx
  __int64 v62; // rdi
  CPtrArrayBase *v63; // rax
  DWORD v64; // ecx
  unsigned int v65; // eax
  unsigned int v66; // eax
  int v67; // r11d
  __int64 v68; // rcx
  _QWORD *v69; // rax
  DWORD v70; // ecx
  SIZE_T v71; // r8
  LPVOID v72; // rdi
  __int128 v73; // [rsp+30h] [rbp-68h]
  bool v74; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp+10h]
  struct CTreeData *v76; // [rsp+B0h] [rbp+18h] BYREF
  COcclusionContext *v77; // [rsp+B8h] [rbp+20h]
  __int64 v78; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v78 = va_arg(va1, _QWORD);
  v77 = a4;
  *(_DWORD *)(a1 + 72) = v78;
  *(_QWORD *)(a1 + 64) = a2;
  v5 = a4;
  v75 = 0LL;
  v8 = 64LL;
  Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v63 = (CPtrArrayBase *)operator new(0xF8uLL);
    Value = v63;
    if ( !v63 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
      v65 = 108;
      v12 = -2147024882;
      goto LABEL_108;
    }
    v64 = CThreadContext::s_dwTlsIndex;
    *(_QWORD *)v63 = 0LL;
    *((_QWORD *)v63 + 1) = 0LL;
    *((_QWORD *)v63 + 2) = 0LL;
    *((_QWORD *)v63 + 3) = 0LL;
    *((_QWORD *)v63 + 4) = 0LL;
    *((_QWORD *)v63 + 5) = 0LL;
    *((_QWORD *)v63 + 6) = 0LL;
    *((_QWORD *)v63 + 7) = 0LL;
    *((_QWORD *)v63 + 8) = 0LL;
    *((_QWORD *)v63 + 9) = 0LL;
    *((_QWORD *)v63 + 10) = 0LL;
    *((_QWORD *)v63 + 11) = 0LL;
    *((_QWORD *)v63 + 12) = 0LL;
    *((_QWORD *)v63 + 13) = 0LL;
    *((_QWORD *)v63 + 14) = 0LL;
    *((_QWORD *)v63 + 15) = 0LL;
    *((_QWORD *)v63 + 16) = 0LL;
    *((_QWORD *)v63 + 17) = 0LL;
    *((_QWORD *)v63 + 18) = 0LL;
    *((_QWORD *)v63 + 19) = 0LL;
    *((_QWORD *)v63 + 20) = 0LL;
    *((_QWORD *)v63 + 21) = 0LL;
    *((_QWORD *)v63 + 22) = 0LL;
    *((_QWORD *)v63 + 23) = 0LL;
    *((_QWORD *)v63 + 24) = 0LL;
    *((_QWORD *)v63 + 25) = 0LL;
    *((_QWORD *)v63 + 26) = 0LL;
    *((_QWORD *)v63 + 27) = 0LL;
    *((_QWORD *)v63 + 28) = 0LL;
    *((_QWORD *)v63 + 29) = 0LL;
    *((_QWORD *)v63 + 30) = 0LL;
    TlsSetValue(v64, v63);
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
      v11 = v59 + 1;
      if ( v11 >= v10 )
        goto LABEL_5;
    }
    v12 = -2147467260;
    v65 = 119;
  }
  else
  {
LABEL_5:
    v12 = CPtrArrayBase::InsertAt(Value, a3, v10);
    if ( v12 >= 0 )
    {
      v13 = a3;
      v75 = a3;
      *(_DWORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 24) = 0;
      goto LABEL_7;
    }
    v65 = 124;
  }
LABEL_108:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v65);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x40u);
  v13 = 0LL;
LABEL_7:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC3u);
    goto LABEL_59;
  }
  v14 = *(CVisual **)(a1 + 8);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetCachedFeatureEnabledState();
  v12 = CVisual::EnsureTreeData(v14, a2, &v76);
  if ( v12 < 0 )
    goto LABEL_133;
  while ( 1 )
  {
    v15 = COcclusionContext::PreSubgraph(v5, a2, &v74);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xD7u);
      goto LABEL_58;
    }
    if ( !v74 )
      break;
    v16 = 0LL;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( (v17 & 2) != 0 )
      v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v17) = v17 & 1;
    if ( !(_DWORD)v17 )
    {
      v12 = 1;
      goto LABEL_32;
    }
    v18 = 0LL;
    v19 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v73 = *(_QWORD *)(a1 + 16);
    DWORD2(v73) = *(_DWORD *)(a1 + 24);
    v20 = *(_DWORD *)(a1 + 32);
    if ( v20 != (_DWORD)v19 )
      goto LABEL_17;
    v55 = 2 * v19;
    if ( (unsigned __int64)(2 * v19) > 0xFFFFFFFF )
    {
      v21 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v12 = -2147024362;
LABEL_118:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x8Bu);
      v5 = v77;
      goto LABEL_32;
    }
    if ( v55 <= 0x40 )
      v55 = 64;
    v21 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v55 <= 0x10 )
    {
      v21 = -2147024809;
      goto LABEL_111;
    }
    v56 = 16LL * v55;
    if ( !v56 )
      v56 = 1LL;
    v18 = HeapAlloc(WPF::g_processHeap, 0, v56);
    v57 = v18;
    if ( !v18 )
    {
      v21 = -2147024882;
LABEL_111:
      v57 = 0LL;
    }
    if ( v21 < 0 )
    {
      v66 = 84;
    }
    else
    {
      v58 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v58 <= 0xFFFFFFFF )
      {
        memcpy_0(v18, *(const void **)(a1 + 48), (unsigned int)v58);
        operator delete(*(void **)(a1 + 48));
        v20 = *(_DWORD *)(a1 + 32);
        v8 = 64LL;
        *(_DWORD *)(a1 + 36) = v55;
        *(_QWORD *)(a1 + 48) = v18;
LABEL_17:
        v21 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v20) = v73;
        v22 = *(_DWORD *)(a1 + 56);
        v23 = *(_DWORD *)(a1 + 32) + 1;
        *(_DWORD *)(a1 + 32) = v23;
        if ( v22 <= v23 )
          v22 = v23;
        *(_DWORD *)(a1 + 56) = v22;
        goto LABEL_20;
      }
      v21 = -2147024362;
      v66 = 86;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v66);
    if ( v57 )
      HeapFree(WPF::g_processHeap, 0, v57);
    v8 = 64LL;
LABEL_20:
    v12 = v21;
    if ( v21 < 0 )
      goto LABEL_118;
    v24 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v17 - 1;
    *(_DWORD *)(a1 + 24) = v24;
    v25 = *(_QWORD *)(a1 + 8);
    v26 = *(_QWORD *)(v25 + 72) & 2LL;
    v27 = *(_QWORD *)(v25 + 72) & 1LL;
    v28 = (unsigned __int64 *)(*(_QWORD *)(v25 + 72) & 0xFFFFFFFFFFFFFFFCuLL);
    v29 = v26 ? *v28 : (unsigned int)v27;
    if ( v29 <= v24 )
      goto LABEL_120;
    if ( v26 )
      v27 = *v28;
    if ( v24 >= v27 )
LABEL_120:
      v16 = 0LL;
    else
      v16 = (CVisual *)(v27 == 1 ? *(_QWORD *)(v25 + 72) & 0xFFFFFFFFFFFFFFFCuLL : v28[v24 + 2]);
    ++*(_DWORD *)(a1 + 4);
    v5 = v77;
    *(_QWORD *)(a1 + 16) = v25;
    *(_QWORD *)(a1 + 8) = v16;
LABEL_32:
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE6u);
      goto LABEL_58;
    }
    if ( !v16 )
      break;
LABEL_51:
    v12 = CVisual::EnsureTreeData(v16, a2, &v76);
    if ( v12 < 0 )
    {
      v13 = v75;
LABEL_133:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xD3u);
      goto LABEL_59;
    }
  }
  while ( 1 )
  {
    LOBYTE(v78) = 1;
    v30 = COcclusionContext::PostSubgraph(v5, a2, (bool *)va);
    v12 = v30;
    if ( v30 < 0 )
      break;
    v31 = *(_QWORD *)(a1 + 16);
    if ( (_BYTE)v78 )
    {
      v12 = 0;
      v16 = 0LL;
      if ( v31 )
      {
        v32 = *(_DWORD *)(a1 + 28);
        if ( v32 == 1 )
        {
          v67 = *(_DWORD *)(a1 + 24);
          if ( v67 != -1 )
          {
            v34 = *(_QWORD *)(v31 + 72);
            if ( (v34 & 2) != 0 )
              v68 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v68) = v34 & 1;
            v35 = (unsigned int)(v67 + 1);
            if ( (unsigned int)v35 < (unsigned int)v68 )
              goto LABEL_41;
          }
        }
        else if ( !v32 )
        {
          v33 = *(_DWORD *)(a1 + 24);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v31 + 72);
            v35 = (unsigned int)(v33 - 1);
LABEL_41:
            if ( (v34 & 2) != 0 )
            {
              v36 = (unsigned __int64 *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
              v37 = v34 & 1;
              v38 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            else
            {
              v38 = v34 & 1;
              v37 = v38;
              v36 = (unsigned __int64 *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            if ( v38 <= (unsigned int)v35 )
              goto LABEL_129;
            if ( (v34 & 2) != 0 )
              v37 = *v36;
            if ( (unsigned int)v35 >= v37 )
            {
LABEL_129:
              v39 = 0LL;
            }
            else if ( v37 == 1 )
            {
              v39 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              v39 = v36[v35 + 2];
            }
            *(_QWORD *)(a1 + 8) = v39;
            v16 = (CVisual *)v39;
            *(_DWORD *)(a1 + 24) = v35;
LABEL_50:
            if ( v16 )
              goto LABEL_51;
            goto LABEL_54;
          }
        }
      }
      v12 = 1;
      goto LABEL_50;
    }
LABEL_54:
    v40 = *(_DWORD *)(a1 + 4);
    if ( v40 )
    {
      v41 = *(_DWORD *)(a1 + 32);
      v42 = 0LL;
      v43 = 0;
      if ( v41 )
      {
        v44 = (unsigned int)(v41 - 1);
        *(_DWORD *)(a1 + 32) = v44;
        v40 = *(_DWORD *)(a1 + 4);
        v43 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v44 + 8);
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v44);
      }
      v45 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v45;
      *(_QWORD *)(a1 + 16) = v42;
      *(_DWORD *)(a1 + 24) = v43;
      *(_DWORD *)(a1 + 4) = v40 - 1;
      if ( v45 )
        continue;
    }
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x100u);
LABEL_58:
  v13 = v75;
LABEL_59:
  if ( v12 == 1 || v12 == -2147467260 )
    v12 = 0;
  if ( !v13 )
    goto LABEL_70;
  v46 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( v46 )
    goto LABEL_63;
  v69 = operator new(0xF8uLL);
  v46 = v69;
  if ( v69 )
  {
    v70 = CThreadContext::s_dwTlsIndex;
    *v69 = 0LL;
    v69[1] = 0LL;
    v69[2] = 0LL;
    v69[3] = 0LL;
    v69[4] = 0LL;
    v69[5] = 0LL;
    v69[6] = 0LL;
    v69[7] = 0LL;
    v69[8] = 0LL;
    v69[9] = 0LL;
    v69[10] = 0LL;
    v69[11] = 0LL;
    v69[12] = 0LL;
    v69[13] = 0LL;
    v69[14] = 0LL;
    v69[15] = 0LL;
    v69[16] = 0LL;
    v69[17] = 0LL;
    v69[18] = 0LL;
    v69[19] = 0LL;
    v69[20] = 0LL;
    v69[21] = 0LL;
    v69[22] = 0LL;
    v69[23] = 0LL;
    v69[24] = 0LL;
    v69[25] = 0LL;
    v69[26] = 0LL;
    v69[27] = 0LL;
    v69[28] = 0LL;
    v69[29] = 0LL;
    v69[30] = 0LL;
    TlsSetValue(v70, v69);
LABEL_63:
    v47 = *v46 & 2LL;
    v48 = *v46 & 1LL;
    v49 = (unsigned __int64 *)(*v46 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v47 )
      v50 = *v49;
    else
      v50 = (unsigned int)v48;
    v51 = v50 - 1;
    if ( v47 )
      v48 = *v49;
    if ( v51 < v48 )
    {
      if ( v48 == 1 )
      {
        *v46 = 0LL;
      }
      else
      {
        v60 = v48 - 1;
        v61 = v49 + 2;
        if ( v60 == 1 )
        {
          v62 = v61[-v51 + 1];
          operator delete((void *)(*v46 & 0xFFFFFFFFFFFFFFFCuLL));
          *v46 = v62 | 1;
        }
        else
        {
          if ( v51 < v60 )
            memmove(&v61[v51], &v61[v51 + 1], 8 * (v60 - v51));
          *v49 = v60;
        }
      }
    }
LABEL_70:
    v52 = -2147024882;
  }
  else
  {
    v52 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Du);
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v53 = *(_DWORD *)(a1 + 40);
  if ( v53 == 10 )
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
        v71 = 16LL * (unsigned int)v8;
        if ( !v71 )
          v71 = 1LL;
        v72 = HeapAlloc(WPF::g_processHeap, 0, v71);
        if ( v72 )
        {
          operator delete(*(void **)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v72;
          *(_DWORD *)(a1 + 36) = v8;
          goto LABEL_82;
        }
      }
      else
      {
        v52 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x100u);
    }
LABEL_82:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v12;
  }
  *(_DWORD *)(a1 + 40) = v53 + 1;
  return (unsigned int)v12;
}
