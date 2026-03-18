/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000A980 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001CA6C (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180041280 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004D47C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A6A40 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA6A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CA-AW4wi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE36C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1800BEEA4 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x1800BEFF0 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800BFCFC (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800BFE40 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C44D4 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  __int64 v5; // r10
  unsigned int v6; // esi
  int v7; // r13d
  char *v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // eax
  CVisualTree *v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  struct CComposition *v17; // r12
  CVisual *v18; // r11
  CVisual *v19; // rax
  CVisual *v20; // rcx
  char *v21; // rdi
  unsigned __int64 v22; // rsi
  struct _LIST_ENTRY *v23; // rax
  __int64 (__fastcall *v24)(const void **, struct CComposition *, const struct CVisualTree *, struct CVisual *, unsigned __int64); // rax
  const void **v25; // rcx
  int v26; // eax
  __int64 (__fastcall *v27)(CTransformParentPreComputeHelper *, const struct CVisualTree *, __int64, char); // rax
  CTransformParentPreComputeHelper *v28; // rcx
  int v29; // eax
  unsigned int v30; // edi
  int v31; // eax
  int v32; // eax
  __int64 v33; // r15
  int v34; // r12d
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdi
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  CVisualTree *v65; // rdx
  unsigned int v67; // eax
  __int64 v68; // rsi
  unsigned int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rdi
  unsigned int v73; // eax
  __int64 v74; // rdi
  unsigned int v75; // eax
  __int64 v76; // rdi
  unsigned int v77; // eax
  __int64 v78; // rdi
  unsigned int v79; // eax
  __int64 v80; // rdi
  unsigned int v81; // eax
  __int64 v82; // rdi
  unsigned int v83; // eax
  __int64 v84; // rdi
  unsigned int v85; // eax
  __int64 v86; // rdi
  unsigned int v87; // eax
  __int64 v88; // rdi
  unsigned int v89; // eax
  int v90; // eax
  int v91; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v93; // r10
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v95; // r14
  _BYTE *v96; // rcx
  const struct CVisual *v97; // rax
  struct CVisual *v98; // r9
  int v99; // eax
  SIZE_T v100; // r8
  LPVOID v101; // rsi
  int v102; // r9d
  SIZE_T v103; // r8
  LPVOID v104; // rsi
  int v105; // r9d
  SIZE_T v106; // r8
  LPVOID v107; // rsi
  int v108; // r9d
  SIZE_T v109; // r8
  LPVOID v110; // rsi
  int v111; // r9d
  LPVOID v112; // rsi
  int v113; // r9d
  SIZE_T v114; // r8
  LPVOID v115; // rsi
  int v116; // r9d
  SIZE_T v117; // r8
  LPVOID v118; // rsi
  int v119; // r9d
  SIZE_T v120; // r8
  LPVOID v121; // rsi
  int v122; // r9d
  SIZE_T v123; // r8
  LPVOID v124; // rsi
  int v125; // r9d
  SIZE_T v126; // r8
  LPVOID v127; // rsi
  int v128; // r9d
  SIZE_T v129; // r8
  LPVOID v130; // r14
  int v131; // r9d
  SIZE_T v132; // r8
  LPVOID v133; // rsi
  int v134; // r9d
  SIZE_T v135; // r8
  LPVOID v136; // rsi
  int v137; // r9d
  SIZE_T v138; // r8
  LPVOID v139; // rdi
  unsigned int v140[4]; // [rsp+20h] [rbp-48h]
  unsigned int v141; // [rsp+20h] [rbp-48h]
  __int64 v142; // [rsp+30h] [rbp-38h] BYREF
  int v143; // [rsp+38h] [rbp-30h]
  void *lpMem; // [rsp+40h] [rbp-28h]
  int v145; // [rsp+48h] [rbp-20h]
  CVisual *v146; // [rsp+90h] [rbp+28h] BYREF
  CVisualTree *v147; // [rsp+98h] [rbp+30h]

  v147 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)this + 512LL);
  if ( v5 && *(_BYTE *)(v5 + 24) )
    *(_BYTE *)(v5 + 26) = 1;
  v6 = 0;
  *((_QWORD *)this + 83) = a3;
  *((_QWORD *)this + 84) = a4;
  v7 = 0;
  if ( !*((_QWORD *)this + 74) )
  {
    v90 = CContentBounder::Create(*(struct CComposition **)this, (struct CContentBounder **)this + 74);
    v7 = v90;
    if ( v90 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v90, 0x402u);
  }
  if ( v7 < 0 )
  {
    v141 = 55;
    goto LABEL_315;
  }
  v8 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  LODWORD(v146) = 1;
  v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 8, &v146);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3Au);
    goto LABEL_76;
  }
  LODWORD(v146) = 1;
  *((_DWORD *)this + 10) = 0;
  v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 40, &v146);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3Du);
    goto LABEL_76;
  }
  LODWORD(v146) = 0;
  *((_DWORD *)this + 18) = 0;
  v11 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 72, &v146);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x40u);
    goto LABEL_76;
  }
  *((_DWORD *)this + 26) = 0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetCachedFeatureEnabledState();
  *(float *)&v146 = FLOAT_1_0;
  *((_DWORD *)this + 34) = 0;
  *((_BYTE *)this + 1104) = 0;
  CWatermarkStack<float,2,2,10>::Push((char *)this + 136, &v146);
  *((_DWORD *)this + 42) = 0;
  v146 = (CVisual *)_mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)this + 168, &v146);
  v12 = v147;
  v7 = 0;
  v13 = *((_QWORD *)v147 + 3);
  v14 = *(_QWORD *)(v13 + 80);
  if ( v14 && (*(_BYTE *)(v14 + 88) & 1) != 0 )
  {
    v146 = *(CVisual **)(v13 + 80);
    v142 = 0LL;
    lpMem = 0LL;
    v143 = 0;
    v145 = 0;
    do
    {
      v91 = CWatermarkStack<CVisual *,64,2,10>::Push(&v142, &v146);
      v7 = v91;
      if ( v91 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0x445u);
        goto LABEL_160;
      }
      v14 = *(_QWORD *)(v14 + 80);
      v146 = (CVisual *)v14;
    }
    while ( v14 );
    do
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(&v142, &v146);
      CVisual::ComputeLayoutSize(v146);
    }
    while ( (_DWORD)v142 );
LABEL_160:
    operator delete(lpMem);
    v12 = v147;
  }
  if ( v7 < 0 )
  {
    v141 = 76;
    goto LABEL_315;
  }
  v7 = 0;
  v15 = 0;
  v16 = *(_DWORD *)(*(_QWORD *)this + 1040LL);
  LODWORD(v146) = v16;
  if ( !v16 )
    goto LABEL_37;
  while ( 1 )
  {
    v17 = *(struct CComposition **)this;
    v18 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)this + 1016LL) + 8LL * v15);
    v19 = v18;
    v20 = v18;
    if ( v18 )
      break;
LABEL_36:
    if ( ++v15 >= v16 )
      goto LABEL_37;
  }
  while ( v19 != *((CVisual **)v12 + 3) )
  {
    if ( v20 )
    {
      v20 = (CVisual *)*((_QWORD *)v20 + 10);
      if ( v20 )
        v20 = (CVisual *)*((_QWORD *)v20 + 10);
    }
    if ( v19 != v20 )
    {
      v19 = (CVisual *)*((_QWORD *)v19 + 10);
      if ( v19 )
        continue;
    }
    goto LABEL_36;
  }
  v21 = (char *)this + 1024;
  v7 = 0;
  *((_DWORD *)this + 258) = 0;
  v22 = *((_QWORD *)v17 + 48);
  if ( *((_BYTE *)v12 + 32) )
  {
    v23 = (struct _LIST_ENTRY *)((char *)v18 + 288);
    goto LABEL_24;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead(v18);
  v93 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink != TreeDataListHead )
    {
      while ( 1 )
      {
        v23 = Flink - 14;
        if ( (CVisualTree *)Flink[2].Flink == v147 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v93 )
          goto LABEL_165;
      }
      v16 = (unsigned int)v146;
      v12 = v147;
LABEL_24:
      if ( v23 && v23[7].Blink >= (struct _LIST_ENTRY *)v22 )
        goto LABEL_34;
      goto LABEL_26;
    }
  }
LABEL_165:
  v12 = v147;
LABEL_26:
  v140[1] = HIDWORD(v22);
  v24 = **(__int64 (__fastcall ***)(const void **, struct CComposition *, const struct CVisualTree *, struct CVisual *, unsigned __int64))v21;
  v25 = (const void **)((char *)this + 1024);
  if ( v24 == CTransformParentPreComputeHelper::BuildTransformParentStack )
    v26 = CTransformParentPreComputeHelper::BuildTransformParentStack(v25, v17, v12, v18, v22);
  else
    v26 = ((__int64 (__fastcall *)(const void **, struct CComposition *, CVisualTree *, CVisual *))v24)(
            v25,
            v17,
            v12,
            v18);
  v7 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x20u);
  }
  else
  {
    v27 = *(__int64 (__fastcall **)(CTransformParentPreComputeHelper *, const struct CVisualTree *, __int64, char))(*(_QWORD *)v21 + 8LL);
    v28 = (CPreComputeContext *)((char *)this + 1024);
    if ( v27 == CTransformParentPreComputeHelper::ProcessTransformParentStack )
      v29 = CTransformParentPreComputeHelper::ProcessTransformParentStack(v28, v147, v22, 0);
    else
      v29 = v27(v28, v147, v22, 0);
    v7 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x22u);
  }
  v16 = (unsigned int)v146;
  v12 = v147;
LABEL_34:
  if ( v7 >= 0 )
  {
    v6 = 0;
    goto LABEL_36;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x481u);
  v12 = v147;
  v6 = 0;
LABEL_37:
  if ( v7 < 0 )
  {
    v141 = 81;
LABEL_315:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v141);
    goto LABEL_76;
  }
  v7 = 0;
  v30 = *(_DWORD *)(*(_QWORD *)this + 1072LL);
  if ( !v30 )
    goto LABEL_39;
  v95 = 0LL;
  while ( 2 )
  {
    v96 = *(_BYTE **)(v95 + *(_QWORD *)(*(_QWORD *)this + 1048LL));
    if ( !v96[154]
      || (v97 = (const struct CVisual *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v96 + 168LL))(v96),
          !CVisualTree::IsInTree(v147, v97)) )
    {
LABEL_177:
      ++v6;
      v95 += 8LL;
      if ( v6 >= v30 )
        goto LABEL_180;
      continue;
    }
    break;
  }
  v99 = CPreComputeHelper::DirtyIfChanged(
          (CPreComputeContext *)((char *)this + 1064),
          *(struct CComposition **)this,
          v12,
          v98,
          0);
  v7 = v99;
  if ( v99 >= 0 )
  {
    v12 = v147;
    goto LABEL_177;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x49Eu);
  v12 = v147;
LABEL_180:
  v8 = (char *)this + 8;
LABEL_39:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x56u);
  }
  else
  {
    v140[0] = 1;
    v31 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
            (char *)this + 512,
            v12,
            *((_QWORD *)v12 + 3),
            this,
            *(_QWORD *)v140);
    v7 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x5Du);
    }
    else
    {
      if ( *(_DWORD *)v8 )
        --*(_DWORD *)v8;
      v32 = *((_DWORD *)v8 + 2);
      v33 = 64LL;
      v34 = -2147024882;
      if ( v32 != 10 )
      {
        v35 = v32 + 1;
        goto LABEL_45;
      }
      v70 = 64LL;
      if ( *((_DWORD *)v8 + 6) > 0x40u )
        v70 = *((unsigned int *)v8 + 6);
      if ( (unsigned __int64)(3 * v70) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v70) <= *((_DWORD *)v8 + 1) )
      {
        if ( (_DWORD)v70 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v70 > 4 )
        {
          v100 = 4 * v70;
          if ( !(4 * v70) )
            v100 = 1LL;
          v101 = HeapAlloc(WPF::g_processHeap, 0, v100);
          if ( v101 )
          {
            operator delete(*((void **)v8 + 2));
            *((_QWORD *)v8 + 2) = v101;
            *((_DWORD *)v8 + 1) = v70;
            goto LABEL_97;
          }
          v102 = -2147024882;
        }
        else
        {
          v102 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v102, 0x100u);
      }
LABEL_97:
      *((_DWORD *)v8 + 6) = 0;
      v35 = 0;
LABEL_45:
      *((_DWORD *)v8 + 2) = v35;
      v36 = *((_DWORD *)this + 10);
      if ( v36 )
        *((_DWORD *)this + 10) = v36 - 1;
      v37 = *((_DWORD *)this + 12);
      if ( v37 != 10 )
      {
        v38 = v37 + 1;
        goto LABEL_49;
      }
      v71 = 64LL;
      if ( *((_DWORD *)this + 16) > 0x40u )
        v71 = *((unsigned int *)this + 16);
      if ( (unsigned __int64)(3 * v71) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v71) <= *((_DWORD *)this + 11) )
      {
        if ( (_DWORD)v71 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v71 > 4 )
        {
          v103 = 4 * v71;
          if ( !(4 * v71) )
            v103 = 1LL;
          v104 = HeapAlloc(WPF::g_processHeap, 0, v103);
          if ( v104 )
          {
            operator delete(*((void **)this + 7));
            *((_QWORD *)this + 7) = v104;
            *((_DWORD *)this + 11) = v71;
            goto LABEL_102;
          }
          v105 = -2147024882;
        }
        else
        {
          v105 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v105, 0x100u);
      }
LABEL_102:
      *((_DWORD *)this + 16) = 0;
      v38 = 0;
LABEL_49:
      *((_DWORD *)this + 12) = v38;
      v39 = *((_DWORD *)this + 18);
      if ( v39 )
        *((_DWORD *)this + 18) = v39 - 1;
      v40 = *((_DWORD *)this + 20);
      if ( v40 != 10 )
      {
        v41 = v40 + 1;
        goto LABEL_53;
      }
      v72 = 64LL;
      if ( *((_DWORD *)this + 24) > 0x40u )
        v72 = *((unsigned int *)this + 24);
      if ( (unsigned __int64)(3 * v72) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v72) <= *((_DWORD *)this + 19) )
      {
        if ( (_DWORD)v72 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v72 > 4 )
        {
          v106 = 4 * v72;
          if ( !(4 * v72) )
            v106 = 1LL;
          v107 = HeapAlloc(WPF::g_processHeap, 0, v106);
          if ( v107 )
          {
            operator delete(*((void **)this + 11));
            *((_QWORD *)this + 11) = v107;
            *((_DWORD *)this + 19) = v72;
            goto LABEL_107;
          }
          v108 = -2147024882;
        }
        else
        {
          v108 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v108, 0x100u);
      }
LABEL_107:
      *((_DWORD *)this + 24) = 0;
      v41 = 0;
LABEL_53:
      *((_DWORD *)this + 20) = v41;
      v42 = *((_DWORD *)this + 28);
      if ( v42 != 10 )
      {
        v43 = v42 + 1;
        goto LABEL_55;
      }
      v73 = *((_DWORD *)this + 32);
      v74 = 64LL;
      if ( v73 > 0x40 )
        v74 = v73;
      if ( (unsigned __int64)(3 * v74) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v74) <= *((_DWORD *)this + 27) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v74 <= 0x10 )
        {
          v111 = -2147024809;
        }
        else
        {
          v109 = 16LL * (unsigned int)v74;
          if ( !v109 )
            v109 = 1LL;
          v110 = HeapAlloc(WPF::g_processHeap, 0, v109);
          if ( v110 )
          {
            operator delete(*((void **)this + 15));
            *((_QWORD *)this + 15) = v110;
            *((_DWORD *)this + 27) = v74;
            goto LABEL_112;
          }
          v111 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v111, 0x100u);
      }
LABEL_112:
      *((_DWORD *)this + 32) = 0;
      v43 = 0;
LABEL_55:
      *((_DWORD *)this + 28) = v43;
      v44 = *((_DWORD *)this + 250);
      if ( v44 != 10 )
      {
        v45 = v44 + 1;
        goto LABEL_57;
      }
      v75 = *((_DWORD *)this + 254);
      v76 = 64LL;
      if ( v75 > 0x40 )
        v76 = v75;
      if ( (unsigned __int64)(3 * v76) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v76) <= *((_DWORD *)this + 249) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v76 <= 1 )
        {
          v113 = -2147024809;
        }
        else
        {
          v112 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v76);
          if ( v112 )
          {
            operator delete(*((void **)this + 126));
            *((_QWORD *)this + 126) = v112;
            *((_DWORD *)this + 249) = v76;
            goto LABEL_117;
          }
          v113 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v113, 0x100u);
      }
LABEL_117:
      *((_DWORD *)this + 254) = 0;
      v45 = 0;
LABEL_57:
      *((_DWORD *)this + 250) = v45;
      v46 = *((_DWORD *)this + 242);
      if ( v46 != 10 )
      {
        v47 = v46 + 1;
        goto LABEL_59;
      }
      v77 = *((_DWORD *)this + 246);
      v78 = 64LL;
      if ( v77 > 0x40 )
        v78 = v77;
      if ( (unsigned __int64)(3 * v78) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v78) <= *((_DWORD *)this + 241) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v78 <= 4 )
        {
          v116 = -2147024809;
        }
        else
        {
          v114 = 4 * v78;
          if ( !(4 * v78) )
            v114 = 1LL;
          v115 = HeapAlloc(WPF::g_processHeap, 0, v114);
          if ( v115 )
          {
            operator delete(*((void **)this + 122));
            *((_QWORD *)this + 122) = v115;
            *((_DWORD *)this + 241) = v78;
            goto LABEL_122;
          }
          v116 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v116, 0x100u);
      }
LABEL_122:
      *((_DWORD *)this + 246) = 0;
      v47 = 0;
LABEL_59:
      *((_DWORD *)this + 242) = v47;
      v48 = *((_DWORD *)this + 234);
      if ( v48 != 10 )
      {
        v49 = v48 + 1;
        goto LABEL_61;
      }
      v79 = *((_DWORD *)this + 238);
      v80 = 64LL;
      if ( v79 > 0x40 )
        v80 = v79;
      if ( (unsigned __int64)(3 * v80) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v80) <= *((_DWORD *)this + 233) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v80 <= 4 )
        {
          v119 = -2147024809;
        }
        else
        {
          v117 = 4 * v80;
          if ( !(4 * v80) )
            v117 = 1LL;
          v118 = HeapAlloc(WPF::g_processHeap, 0, v117);
          if ( v118 )
          {
            operator delete(*((void **)this + 118));
            *((_QWORD *)this + 118) = v118;
            *((_DWORD *)this + 233) = v80;
            goto LABEL_127;
          }
          v119 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v119, 0x100u);
      }
LABEL_127:
      *((_DWORD *)this + 238) = 0;
      v49 = 0;
LABEL_61:
      *((_DWORD *)this + 234) = v49;
      v50 = *((_DWORD *)this + 226);
      if ( v50 != 10 )
      {
        v51 = v50 + 1;
        goto LABEL_63;
      }
      v81 = *((_DWORD *)this + 230);
      v82 = 64LL;
      if ( v81 > 0x40 )
        v82 = v81;
      if ( (unsigned __int64)(3 * v82) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v82) <= *((_DWORD *)this + 225) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v82 <= 4 )
        {
          v122 = -2147024809;
        }
        else
        {
          v120 = 4 * v82;
          if ( !(4 * v82) )
            v120 = 1LL;
          v121 = HeapAlloc(WPF::g_processHeap, 0, v120);
          if ( v121 )
          {
            operator delete(*((void **)this + 114));
            *((_QWORD *)this + 114) = v121;
            *((_DWORD *)this + 225) = v82;
            goto LABEL_132;
          }
          v122 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0x100u);
      }
LABEL_132:
      *((_DWORD *)this + 230) = 0;
      v51 = 0;
LABEL_63:
      *((_DWORD *)this + 226) = v51;
      v52 = *((_DWORD *)this + 218);
      if ( v52 != 10 )
      {
        v53 = v52 + 1;
        goto LABEL_65;
      }
      v83 = *((_DWORD *)this + 222);
      v84 = 64LL;
      if ( v83 > 0x40 )
        v84 = v83;
      if ( (unsigned __int64)(3 * v84) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v84) <= *((_DWORD *)this + 217) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v84 <= 4 )
        {
          v125 = -2147024809;
        }
        else
        {
          v123 = 4 * v84;
          if ( !(4 * v84) )
            v123 = 1LL;
          v124 = HeapAlloc(WPF::g_processHeap, 0, v123);
          if ( v124 )
          {
            operator delete(*((void **)this + 110));
            *((_QWORD *)this + 110) = v124;
            *((_DWORD *)this + 217) = v84;
            goto LABEL_137;
          }
          v125 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v125, 0x100u);
      }
LABEL_137:
      *((_DWORD *)this + 222) = 0;
      v53 = 0;
LABEL_65:
      *((_DWORD *)this + 218) = v53;
      v54 = *((_DWORD *)this + 210);
      if ( v54 != 10 )
      {
        v55 = v54 + 1;
        goto LABEL_67;
      }
      v85 = *((_DWORD *)this + 214);
      v86 = 64LL;
      if ( v85 > 0x40 )
        v86 = v85;
      if ( (unsigned __int64)(3 * v86) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v86) <= *((_DWORD *)this + 209) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v86 <= 4 )
        {
          v128 = -2147024809;
        }
        else
        {
          v126 = 4 * v86;
          if ( !(4 * v86) )
            v126 = 1LL;
          v127 = HeapAlloc(WPF::g_processHeap, 0, v126);
          if ( v127 )
          {
            operator delete(*((void **)this + 106));
            *((_QWORD *)this + 106) = v127;
            *((_DWORD *)this + 209) = v86;
            goto LABEL_142;
          }
          v128 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v128, 0x100u);
      }
LABEL_142:
      *((_DWORD *)this + 214) = 0;
      v55 = 0;
LABEL_67:
      *((_DWORD *)this + 210) = v55;
      v56 = 8LL;
      v57 = *((_DWORD *)this + 202);
      if ( v57 != 8 )
      {
        v58 = v57 + 1;
        goto LABEL_69;
      }
      v67 = *((_DWORD *)this + 206);
      v68 = 8LL;
      if ( v67 > 8 )
        v68 = v67;
      if ( (unsigned __int64)(3 * v68) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v68) <= *((_DWORD *)this + 201) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v68 <= 0x44 )
        {
          v131 = -2147024809;
        }
        else
        {
          v129 = 68LL * (unsigned int)v68;
          if ( !v129 )
            v129 = 1LL;
          v130 = HeapAlloc(WPF::g_processHeap, 0, v129);
          if ( v130 )
          {
            operator delete(*((void **)this + 102));
            *((_QWORD *)this + 102) = v130;
            *((_DWORD *)this + 201) = v68;
            goto LABEL_87;
          }
          v131 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v131, 0x100u);
      }
LABEL_87:
      *((_DWORD *)this + 206) = 0;
      v58 = 0;
LABEL_69:
      *((_DWORD *)this + 202) = v58;
      v59 = *((_DWORD *)this + 194);
      if ( v59 != 8 )
      {
        v60 = v59 + 1;
        goto LABEL_71;
      }
      v69 = *((_DWORD *)this + 198);
      if ( v69 > 8 )
        v56 = v69;
      if ( (unsigned __int64)(3 * v56) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v56) <= *((_DWORD *)this + 193) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v56 <= 0x44 )
        {
          v134 = -2147024809;
        }
        else
        {
          v132 = 68LL * (unsigned int)v56;
          if ( !v132 )
            v132 = 1LL;
          v133 = HeapAlloc(WPF::g_processHeap, 0, v132);
          if ( v133 )
          {
            operator delete(*((void **)this + 98));
            *((_QWORD *)this + 98) = v133;
            *((_DWORD *)this + 193) = v56;
            goto LABEL_92;
          }
          v134 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v134, 0x100u);
      }
LABEL_92:
      *((_DWORD *)this + 198) = 0;
      v60 = 0;
LABEL_71:
      *((_DWORD *)this + 194) = v60;
      v61 = *((_DWORD *)this + 186);
      if ( v61 != 10 )
      {
        v62 = v61 + 1;
        goto LABEL_73;
      }
      v87 = *((_DWORD *)this + 190);
      v88 = 64LL;
      if ( v87 > 0x40 )
        v88 = v87;
      if ( (unsigned __int64)(3 * v88) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v88) <= *((_DWORD *)this + 185) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v88 <= 8 )
        {
          v137 = -2147024809;
        }
        else
        {
          v135 = 8 * v88;
          if ( !(8 * v88) )
            v135 = 1LL;
          v136 = HeapAlloc(WPF::g_processHeap, 0, v135);
          if ( v136 )
          {
            operator delete(*((void **)this + 94));
            *((_QWORD *)this + 94) = v136;
            *((_DWORD *)this + 185) = v88;
            goto LABEL_147;
          }
          v137 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v137, 0x100u);
      }
LABEL_147:
      *((_DWORD *)this + 190) = 0;
      v62 = 0;
LABEL_73:
      *((_DWORD *)this + 186) = v62;
      v63 = *((_DWORD *)this + 178);
      if ( v63 != 10 )
      {
        v64 = v63 + 1;
        goto LABEL_75;
      }
      v89 = *((_DWORD *)this + 182);
      if ( v89 > 0x40 )
        v33 = v89;
      if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 177) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 <= 8 )
        {
          v34 = -2147024809;
        }
        else
        {
          v138 = 8 * v33;
          if ( !(8 * v33) )
            v138 = 1LL;
          v139 = HeapAlloc(WPF::g_processHeap, 0, v138);
          if ( v139 )
          {
            operator delete(*((void **)this + 90));
            *((_QWORD *)this + 90) = v139;
            *((_DWORD *)this + 177) = v33;
            goto LABEL_152;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x100u);
      }
LABEL_152:
      *((_DWORD *)this + 182) = 0;
      v64 = 0;
LABEL_75:
      *((_DWORD *)this + 178) = v64;
    }
  }
LABEL_76:
  v65 = v147;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 42) = 0;
  if ( *((_BYTE *)v65 + 32) )
  {
    if ( *((_DWORD *)this + 156) )
      UpdateWindowInputSinkHints(*((_QWORD *)this + 75));
    *((_DWORD *)this + 156) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 600, 0x10u);
    if ( *((_DWORD *)this + 164) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 79));
    *((_DWORD *)this + 164) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 632, 0x48u);
  }
  return (unsigned int)v7;
}
