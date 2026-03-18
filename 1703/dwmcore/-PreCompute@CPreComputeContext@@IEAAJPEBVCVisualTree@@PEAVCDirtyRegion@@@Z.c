/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x1800B6D20 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180012E60 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18001DDF0 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001DE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x180021CB8 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x1800867A0 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180094380 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800946B0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18009F610 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x1800B6BF8 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800C194C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800C1A68 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C5A08 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v4; // r9
  __int64 v5; // rdi
  int v6; // r13d
  _DWORD *v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const struct CVisualTree *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // r12d
  struct CComposition *v16; // r15
  CVisual *v17; // r11
  CVisual *v18; // rax
  CVisual *v19; // rcx
  CVisual *v20; // rdx
  char *v21; // rbx
  unsigned __int64 v22; // rdi
  struct _LIST_ENTRY *v23; // rax
  __int64 (__fastcall *v24)(const void **, struct CComposition *, struct CVisual **, struct CVisual *, unsigned __int64); // rax
  const void **v25; // rcx
  int v26; // eax
  __int64 (__fastcall *v27)(CTransformParentPreComputeHelper *, const struct CVisualTree *, __int64, char); // rax
  CTransformParentPreComputeHelper *v28; // rcx
  int v29; // eax
  unsigned int v30; // ebx
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // r12
  float *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 *v38; // rsi
  int v39; // eax
  __int64 v40; // rsi
  int v41; // r15d
  int v42; // eax
  _DWORD *v43; // rdi
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // rdi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  LPVOID v51; // rdi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  unsigned int v62; // eax
  __int64 v63; // rbx
  unsigned int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rbx
  __int64 v67; // rbx
  unsigned int v68; // eax
  __int64 v69; // rbx
  unsigned int v70; // eax
  __int64 v71; // rbx
  unsigned int v72; // eax
  __int64 v73; // rbx
  unsigned int v74; // eax
  __int64 v75; // rbx
  unsigned int v76; // eax
  __int64 v77; // rbx
  unsigned int v78; // eax
  __int64 v79; // rbx
  unsigned int v80; // eax
  __int64 v81; // rbx
  unsigned int v82; // eax
  __int64 v83; // rbx
  struct CVisual *v84; // r10
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r10
  int v88; // eax
  __int128 v89; // xmm0
  unsigned int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rax
  int v93; // eax
  int v94; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v96; // r10
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v98; // rsi
  __int64 v99; // rcx
  const struct CVisual *v100; // rax
  struct CVisual *v101; // r10
  const struct CVisualTree *v102; // r11
  int v103; // eax
  unsigned int i; // r10d
  int v105; // r10d
  SIZE_T v106; // r8
  LPVOID v107; // rdi
  int v108; // r9d
  SIZE_T v109; // r8
  LPVOID v110; // rdi
  int v111; // r9d
  SIZE_T v112; // r8
  LPVOID v113; // rdi
  int v114; // r9d
  LPVOID v115; // rdi
  int v116; // r9d
  SIZE_T v117; // r8
  int v118; // r9d
  SIZE_T v119; // r8
  int v120; // r9d
  SIZE_T v121; // r8
  int v122; // r9d
  SIZE_T v123; // r8
  int v124; // r9d
  SIZE_T v125; // r8
  int v126; // r9d
  SIZE_T v127; // r8
  int v128; // r9d
  SIZE_T v129; // r8
  LPVOID v130; // rbx
  int v131; // r9d
  SIZE_T v132; // r8
  int v133; // r9d
  SIZE_T v134; // r8
  LPVOID v135; // rbx
  bool v136[8]; // [rsp+20h] [rbp-39h]
  unsigned int v137; // [rsp+20h] [rbp-39h]
  CVisual *v139[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v140; // [rsp+58h] [rbp-1h] BYREF
  int v141; // [rsp+60h] [rbp+7h]
  void *lpMem; // [rsp+68h] [rbp+Fh]
  int v143; // [rsp+70h] [rbp+17h]

  v4 = *(_QWORD *)(*(_QWORD *)this + 536LL);
  if ( v4 && *(_BYTE *)(v4 + 24) )
    *(_BYTE *)(v4 + 26) = 1;
  LODWORD(v5) = 0;
  *((_QWORD *)this + 41) = a3;
  v6 = 0;
  if ( !*((_QWORD *)this + 32) )
  {
    v93 = CContentBounder::Create(*(struct CComposition **)this, (struct CContentBounder **)this + 32);
    v6 = v93;
    if ( v93 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0x34Au);
  }
  if ( v6 < 0 )
  {
    v137 = 72;
    goto LABEL_322;
  }
  v7 = (_DWORD *)((char *)this + 8);
  *((_DWORD *)this + 2) = 0;
  LODWORD(v139[0]) = 1;
  v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 2, v139);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Bu);
    goto LABEL_77;
  }
  *((_DWORD *)this + 10) = 0;
  LODWORD(v139[0]) = 1;
  v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 10, v139);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4Eu);
    goto LABEL_77;
  }
  *((_DWORD *)this + 18) = 0;
  LODWORD(v139[0]) = 0;
  v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 18, v139);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x51u);
    goto LABEL_77;
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 0x18u);
  if ( *(_DWORD *)(*(_QWORD *)this + 1112LL) )
  {
    v83 = 0LL;
    v5 = *(unsigned int *)(*(_QWORD *)this + 1112LL);
    do
    {
      if ( CVisualTree::IsInTree(a2, *(const struct CVisual **)(v83 + *(_QWORD *)(*(_QWORD *)this + 1088LL))) )
        CVisual::PropagateFlags(v84, 1, 0, 0, 0, 0, 0, 0);
      v83 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  v11 = a2;
  v6 = 0;
  v12 = *((_QWORD *)a2 + 3);
  v13 = *(_QWORD *)(v12 + 80);
  if ( v13 && (*(_BYTE *)(v13 + 88) & 1) != 0 )
  {
    v139[0] = *(CVisual **)(v12 + 80);
    v140 = 0LL;
    lpMem = 0LL;
    v141 = 0;
    v143 = 0;
    do
    {
      v94 = CWatermarkStack<CVisual *,64,2,10>::Push(&v140, v139);
      v6 = v94;
      if ( v94 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, 0x38Cu);
        goto LABEL_171;
      }
      v13 = *(_QWORD *)(v13 + 80);
      v139[0] = (CVisual *)v13;
    }
    while ( v13 );
    do
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(&v140, v139);
      CVisual::ComputeLayoutSize(v139[0]);
    }
    while ( (_DWORD)v140 );
LABEL_171:
    WPF::ProcessHeapImpl::Free(lpMem);
    v11 = a2;
  }
  if ( v6 < 0 )
  {
    v137 = 87;
    goto LABEL_322;
  }
  v6 = 0;
  v14 = 0;
  v15 = *(_DWORD *)(*(_QWORD *)this + 1048LL);
  if ( !v15 )
    goto LABEL_36;
  while ( 1 )
  {
    v16 = *(struct CComposition **)this;
    v17 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)this + 1024LL) + 8LL * v14);
    v18 = v17;
    v19 = v17;
    if ( !v17 )
      goto LABEL_34;
    v20 = (CVisual *)*((_QWORD *)v11 + 3);
    while ( v18 != v20 )
    {
      if ( v19 )
      {
        v19 = (CVisual *)*((_QWORD *)v19 + 10);
        if ( v19 )
          v19 = (CVisual *)*((_QWORD *)v19 + 10);
      }
      if ( v18 != v19 )
      {
        v18 = (CVisual *)*((_QWORD *)v18 + 10);
        if ( v18 )
          continue;
      }
      goto LABEL_33;
    }
    v11 = a2;
    v21 = (char *)this + 688;
    *((_DWORD *)this + 174) = 0;
    v6 = 0;
    v22 = *((_QWORD *)v16 + 50);
    if ( !*((_BYTE *)a2 + 32) )
      break;
    v23 = (struct _LIST_ENTRY *)((char *)v17 + 264);
LABEL_24:
    if ( !v23 || v23[7].Blink < (struct _LIST_ENTRY *)v22 )
      goto LABEL_26;
    LODWORD(v5) = 0;
LABEL_34:
    if ( ++v14 >= v15 )
      goto LABEL_35;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead(v17);
  v11 = a2;
  v96 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink != TreeDataListHead )
    {
      do
      {
        v23 = Flink - 14;
        if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
          goto LABEL_24;
        Flink = Flink->Flink;
      }
      while ( Flink != v96 );
    }
  }
LABEL_26:
  *(_DWORD *)&v136[4] = HIDWORD(v22);
  v24 = **(__int64 (__fastcall ***)(const void **, struct CComposition *, struct CVisual **, struct CVisual *, unsigned __int64))v21;
  v25 = (const void **)((char *)this + 688);
  if ( v24 == CTransformParentPreComputeHelper::BuildTransformParentStack )
    v26 = CTransformParentPreComputeHelper::BuildTransformParentStack(v25, v16, (struct CVisual **)v11, v17, v22);
  else
    v26 = ((__int64 (__fastcall *)(const void **, struct CComposition *, const struct CVisualTree *, CVisual *))v24)(
            v25,
            v16,
            v11,
            v17);
  v6 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x20u);
  }
  else
  {
    v27 = *(__int64 (__fastcall **)(CTransformParentPreComputeHelper *, const struct CVisualTree *, __int64, char))(*(_QWORD *)v21 + 8LL);
    v28 = (CPreComputeContext *)((char *)this + 688);
    if ( v27 == CTransformParentPreComputeHelper::ProcessTransformParentStack )
      v29 = CTransformParentPreComputeHelper::ProcessTransformParentStack(v28, a2, v22, 0);
    else
      v29 = v27(v28, a2, v22, 0);
    v6 = v29;
    if ( v29 >= 0 )
      goto LABEL_32;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x22u);
  }
  if ( v6 >= 0 )
  {
LABEL_32:
    LODWORD(v5) = 0;
LABEL_33:
    v11 = a2;
    goto LABEL_34;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3C8u);
  v11 = a2;
  LODWORD(v5) = 0;
LABEL_35:
  v7 = (_DWORD *)((char *)this + 8);
LABEL_36:
  if ( v6 < 0 )
  {
    v137 = 92;
    goto LABEL_322;
  }
  v6 = 0;
  v30 = *(_DWORD *)(*(_QWORD *)this + 1080LL);
  if ( v30 )
  {
    v98 = 0LL;
    while ( 1 )
    {
      v99 = *(_QWORD *)(v98 + *(_QWORD *)(*(_QWORD *)this + 1056LL));
      v100 = (const struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 144LL))(v99);
      if ( CVisualTree::IsInTree(a2, v100) )
      {
        v103 = CPreComputeHelper::DirtyIfChanged(
                 (CPreComputeContext *)((char *)this + 728),
                 *(struct CComposition **)this,
                 v102,
                 v101,
                 0);
        v6 = v103;
        if ( v103 < 0 )
          break;
      }
      LODWORD(v5) = v5 + 1;
      v98 += 8LL;
      if ( (unsigned int)v5 >= v30 )
        goto LABEL_190;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0x3E3u);
LABEL_190:
    v11 = a2;
  }
  if ( v6 < 0 )
  {
    v137 = 97;
    goto LABEL_322;
  }
  *(_DWORD *)v136 = 1;
  v31 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
          (char *)this + 176,
          v11,
          *((_QWORD *)v11 + 3),
          this,
          *(_QWORD *)v136);
  v6 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x68u);
    goto LABEL_77;
  }
  v32 = *((_QWORD *)this + 41);
  v33 = 8LL;
  v6 = 0;
  v139[1] = 0LL;
  v139[0] = 0LL;
  if ( *(_BYTE *)(v32 + 2726) )
  {
    for ( i = 0; i < *(_DWORD *)(v32 + 1120); i = v105 + 1 )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v139, (float *)(v32 + 16 * (i + 60LL)));
  }
  else
  {
    v34 = (float *)(v32 + 24);
    do
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v139, v34);
      v34 = (float *)(v35 + 16);
    }
    while ( v36 != 1 );
  }
  v37 = 0LL;
  v38 = (__int64 *)((char *)this + 336);
  while ( (unsigned int)v37 < *((_DWORD *)this + 90) )
  {
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
           (float *)v139,
           (float *)(*v38 + 8 + 24 * v37)) )
    {
      LOBYTE(v86) = 1;
      v88 = CDirtyRegion::Add(*((CDirtyRegion **)this + 41), *(_QWORD *)(v87 + 24 * v37), v86, v85);
      v6 = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x415u);
        break;
      }
      v89 = *(_OWORD *)CDirtyRegion::GetRectBounds(*((_QWORD *)this + 41), &v140);
      v90 = *((_DWORD *)this + 90);
      *(_OWORD *)v139 = v89;
      if ( (unsigned int)v37 >= v90 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x216u);
      }
      else
      {
        v91 = *v38;
        v92 = v90 - 1;
        if ( (unsigned int)v37 < (unsigned int)v92 )
        {
          *(_OWORD *)(v91 + 24 * v37) = *(_OWORD *)(v91 + 24 * v92);
          *(_QWORD *)(v91 + 24 * v37 + 16) = *(_QWORD *)(v91 + 24 * v92 + 16);
        }
        --*((_DWORD *)this + 90);
      }
      v37 = 0LL;
    }
    else
    {
      v37 = (unsigned int)(v37 + 1);
    }
  }
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 0x18u);
  if ( v6 < 0 )
  {
    v137 = 106;
LABEL_322:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v137);
    goto LABEL_77;
  }
  if ( *v7 )
    --*v7;
  v39 = v7[2];
  v40 = 64LL;
  v41 = -2147024882;
  if ( v39 != 10 )
  {
    *((_DWORD *)this + 4) = v39 + 1;
    goto LABEL_49;
  }
  v65 = 64LL;
  if ( *((_DWORD *)this + 8) > 0x40u )
    v65 = *((unsigned int *)this + 8);
  if ( (unsigned __int64)(3 * v65) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v65) <= *((_DWORD *)this + 3) )
  {
    if ( (_DWORD)v65 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v65 > 4 )
    {
      v106 = 4 * v65;
      if ( !(4 * v65) )
        v106 = 1LL;
      v107 = HeapAlloc(WPF::g_processHeap, 0, v106);
      if ( v107 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 3));
        *((_QWORD *)this + 3) = v107;
        *((_DWORD *)this + 3) = v65;
        goto LABEL_98;
      }
      v108 = -2147024882;
    }
    else
    {
      v108 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v108, 0xF3u);
  }
LABEL_98:
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 4) = 0;
LABEL_49:
  v42 = *((_DWORD *)this + 10);
  v43 = (_DWORD *)((char *)this + 40);
  if ( v42 )
    *v43 = v42 - 1;
  v44 = *((_DWORD *)this + 12);
  if ( v44 != 10 )
  {
    v45 = v44 + 1;
    goto LABEL_53;
  }
  v66 = 64LL;
  if ( *((_DWORD *)this + 16) > 0x40u )
    v66 = *((unsigned int *)this + 16);
  if ( (unsigned __int64)(3 * v66) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v66) <= *((_DWORD *)this + 11) )
  {
    if ( (_DWORD)v66 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v66 > 4 )
    {
      v109 = 4 * v66;
      if ( !(4 * v66) )
        v109 = 1LL;
      v110 = HeapAlloc(WPF::g_processHeap, 0, v109);
      if ( v110 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 7));
        *((_QWORD *)this + 7) = v110;
        v43 = (_DWORD *)((char *)this + 40);
        *((_DWORD *)this + 11) = v66;
        goto LABEL_103;
      }
      v111 = -2147024882;
      v43 = (_DWORD *)((char *)this + 40);
    }
    else
    {
      v111 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0xF3u);
  }
LABEL_103:
  v45 = 0;
  v43[6] = 0;
LABEL_53:
  v43[2] = v45;
  v46 = (_DWORD *)((char *)this + 72);
  v47 = *((_DWORD *)this + 18);
  if ( v47 )
    *v46 = v47 - 1;
  v48 = *((_DWORD *)this + 20);
  if ( v48 != 10 )
  {
    v49 = v48 + 1;
    goto LABEL_57;
  }
  v67 = 64LL;
  if ( *((_DWORD *)this + 24) > 0x40u )
    v67 = *((unsigned int *)this + 24);
  if ( (unsigned __int64)(3 * v67) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v67) <= *((_DWORD *)this + 19) )
  {
    if ( (_DWORD)v67 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v67 > 4 )
    {
      v112 = 4 * v67;
      if ( !(4 * v67) )
        v112 = 1LL;
      v113 = HeapAlloc(WPF::g_processHeap, 0, v112);
      if ( v113 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 11));
        *((_QWORD *)this + 11) = v113;
        v46 = (_DWORD *)((char *)this + 72);
        *((_DWORD *)this + 19) = v67;
        goto LABEL_108;
      }
      v114 = -2147024882;
      v46 = (_DWORD *)((char *)this + 72);
    }
    else
    {
      v114 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0xF3u);
  }
LABEL_108:
  v49 = 0;
  v46[6] = 0;
LABEL_57:
  v46[2] = v49;
  v50 = *((_DWORD *)this + 166);
  if ( v50 != 10 )
  {
    *((_DWORD *)this + 166) = v50 + 1;
    LODWORD(v51) = 0;
    goto LABEL_59;
  }
  v68 = *((_DWORD *)this + 170);
  v69 = 64LL;
  if ( v68 > 0x40 )
    v69 = v68;
  if ( (unsigned __int64)(3 * v69) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v69) <= *((_DWORD *)this + 165) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v69 <= 1 )
    {
      v116 = -2147024809;
    }
    else
    {
      v115 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v69);
      if ( v115 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 84));
        *((_QWORD *)this + 84) = v115;
        *((_DWORD *)this + 165) = v69;
        goto LABEL_113;
      }
      v116 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v116, 0xF3u);
  }
LABEL_113:
  LODWORD(v51) = 0;
  *((_DWORD *)this + 170) = 0;
  *((_DWORD *)this + 166) = 0;
LABEL_59:
  v52 = *((_DWORD *)this + 158);
  if ( v52 != 10 )
  {
    *((_DWORD *)this + 158) = v52 + 1;
    goto LABEL_61;
  }
  v70 = *((_DWORD *)this + 162);
  v71 = 64LL;
  if ( v70 > 0x40 )
    v71 = v70;
  if ( (unsigned __int64)(3 * v71) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v71) <= *((_DWORD *)this + 157) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v71 <= 4 )
    {
      v118 = -2147024809;
    }
    else
    {
      v117 = 4 * v71;
      if ( !(4 * v71) )
        v117 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v117);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 80));
        *((_QWORD *)this + 80) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 157) = v71;
        goto LABEL_118;
      }
      v118 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0xF3u);
  }
LABEL_118:
  *((_DWORD *)this + 162) = (_DWORD)v51;
  *((_DWORD *)this + 158) = (_DWORD)v51;
LABEL_61:
  v53 = *((_DWORD *)this + 150);
  if ( v53 != 10 )
  {
    *((_DWORD *)this + 150) = v53 + 1;
    goto LABEL_63;
  }
  v72 = *((_DWORD *)this + 154);
  v73 = 64LL;
  if ( v72 > 0x40 )
    v73 = v72;
  if ( (unsigned __int64)(3 * v73) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v73) <= *((_DWORD *)this + 149) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v73 <= 4 )
    {
      v120 = -2147024809;
    }
    else
    {
      v119 = 4 * v73;
      if ( !(4 * v73) )
        v119 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v119);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 76));
        *((_QWORD *)this + 76) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 149) = v73;
        goto LABEL_123;
      }
      v120 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v120, 0xF3u);
  }
LABEL_123:
  *((_DWORD *)this + 154) = (_DWORD)v51;
  *((_DWORD *)this + 150) = (_DWORD)v51;
LABEL_63:
  v54 = *((_DWORD *)this + 142);
  if ( v54 != 10 )
  {
    *((_DWORD *)this + 142) = v54 + 1;
    goto LABEL_65;
  }
  v74 = *((_DWORD *)this + 146);
  v75 = 64LL;
  if ( v74 > 0x40 )
    v75 = v74;
  if ( (unsigned __int64)(3 * v75) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v75) <= *((_DWORD *)this + 141) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v75 <= 4 )
    {
      v122 = -2147024809;
    }
    else
    {
      v121 = 4 * v75;
      if ( !(4 * v75) )
        v121 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v121);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 72));
        *((_QWORD *)this + 72) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 141) = v75;
        goto LABEL_128;
      }
      v122 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v122, 0xF3u);
  }
LABEL_128:
  *((_DWORD *)this + 146) = (_DWORD)v51;
  *((_DWORD *)this + 142) = (_DWORD)v51;
LABEL_65:
  v55 = *((_DWORD *)this + 134);
  if ( v55 != 10 )
  {
    *((_DWORD *)this + 134) = v55 + 1;
    goto LABEL_67;
  }
  v76 = *((_DWORD *)this + 138);
  v77 = 64LL;
  if ( v76 > 0x40 )
    v77 = v76;
  if ( (unsigned __int64)(3 * v77) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v77) <= *((_DWORD *)this + 133) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v77 <= 4 )
    {
      v124 = -2147024809;
    }
    else
    {
      v123 = 4 * v77;
      if ( !(4 * v77) )
        v123 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v123);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 68));
        *((_QWORD *)this + 68) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 133) = v77;
        goto LABEL_133;
      }
      v124 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v124, 0xF3u);
  }
LABEL_133:
  *((_DWORD *)this + 138) = (_DWORD)v51;
  *((_DWORD *)this + 134) = (_DWORD)v51;
LABEL_67:
  v56 = *((_DWORD *)this + 126);
  if ( v56 != 10 )
  {
    *((_DWORD *)this + 126) = v56 + 1;
    goto LABEL_69;
  }
  v78 = *((_DWORD *)this + 130);
  v79 = 64LL;
  if ( v78 > 0x40 )
    v79 = v78;
  if ( (unsigned __int64)(3 * v79) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v79) <= *((_DWORD *)this + 125) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v79 <= 4 )
    {
      v126 = -2147024809;
    }
    else
    {
      v125 = 4 * v79;
      if ( !(4 * v79) )
        v125 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v125);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 64));
        *((_QWORD *)this + 64) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 125) = v79;
        goto LABEL_138;
      }
      v126 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0xF3u);
  }
LABEL_138:
  *((_DWORD *)this + 130) = (_DWORD)v51;
  *((_DWORD *)this + 126) = (_DWORD)v51;
LABEL_69:
  v57 = *((_DWORD *)this + 118);
  if ( v57 != 8 )
  {
    *((_DWORD *)this + 118) = v57 + 1;
    goto LABEL_71;
  }
  v62 = *((_DWORD *)this + 122);
  v63 = 8LL;
  if ( v62 > 8 )
    v63 = v62;
  if ( (unsigned __int64)(3 * v63) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v63) <= *((_DWORD *)this + 117) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v63 <= 0x44 )
    {
      v128 = -2147024809;
    }
    else
    {
      v127 = 68LL * (unsigned int)v63;
      if ( !v127 )
        v127 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v127);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 60));
        *((_QWORD *)this + 60) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 117) = v63;
        goto LABEL_88;
      }
      v128 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v128, 0xF3u);
  }
LABEL_88:
  *((_DWORD *)this + 122) = (_DWORD)v51;
  *((_DWORD *)this + 118) = (_DWORD)v51;
LABEL_71:
  v58 = *((_DWORD *)this + 110);
  if ( v58 != 8 )
  {
    *((_DWORD *)this + 110) = v58 + 1;
    goto LABEL_73;
  }
  v64 = *((_DWORD *)this + 114);
  if ( v64 > 8 )
    v33 = v64;
  if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 109) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 <= 0x44 )
    {
      v131 = -2147024809;
    }
    else
    {
      v129 = 68LL * (unsigned int)v33;
      if ( !v129 )
        v129 = 1LL;
      v130 = HeapAlloc(WPF::g_processHeap, 0, v129);
      if ( v130 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 56));
        *((_QWORD *)this + 56) = v130;
        *((_DWORD *)this + 109) = v33;
        goto LABEL_93;
      }
      v131 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v131, 0xF3u);
  }
LABEL_93:
  *((_DWORD *)this + 114) = (_DWORD)v51;
  *((_DWORD *)this + 110) = (_DWORD)v51;
LABEL_73:
  v59 = *((_DWORD *)this + 102);
  if ( v59 != 10 )
  {
    *((_DWORD *)this + 102) = v59 + 1;
    goto LABEL_75;
  }
  v80 = *((_DWORD *)this + 106);
  v81 = 64LL;
  if ( v80 > 0x40 )
    v81 = v80;
  if ( (unsigned __int64)(3 * v81) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v81) <= *((_DWORD *)this + 101) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v81 <= 8 )
    {
      v133 = -2147024809;
    }
    else
    {
      v132 = 8 * v81;
      if ( !(8 * v81) )
        v132 = 1LL;
      v51 = HeapAlloc(WPF::g_processHeap, 0, v132);
      if ( v51 )
      {
        WPF::ProcessHeapImpl::Free(*((void **)this + 52));
        *((_QWORD *)this + 52) = v51;
        LODWORD(v51) = 0;
        *((_DWORD *)this + 101) = v81;
        goto LABEL_143;
      }
      v133 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v133, 0xF3u);
  }
LABEL_143:
  *((_DWORD *)this + 106) = (_DWORD)v51;
  *((_DWORD *)this + 102) = (_DWORD)v51;
LABEL_75:
  v60 = *((_DWORD *)this + 94);
  if ( v60 != 10 )
  {
    *((_DWORD *)this + 94) = v60 + 1;
    goto LABEL_77;
  }
  v82 = *((_DWORD *)this + 98);
  if ( v82 > 0x40 )
    v40 = v82;
  if ( (unsigned __int64)(3 * v40) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    goto LABEL_148;
  }
  if ( (unsigned int)(3 * v40) > *((_DWORD *)this + 93) )
    goto LABEL_148;
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v40 <= 8 )
  {
    v41 = -2147024809;
  }
  else
  {
    v134 = 8 * v40;
    if ( !(8 * v40) )
      v134 = 1LL;
    v135 = HeapAlloc(WPF::g_processHeap, 0, v134);
    if ( v135 )
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 48));
      *((_QWORD *)this + 48) = v135;
      *((_DWORD *)this + 93) = v40;
      goto LABEL_148;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xF3u);
LABEL_148:
  *((_DWORD *)this + 98) = (_DWORD)v51;
  *((_DWORD *)this + 94) = (_DWORD)v51;
LABEL_77:
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 90) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 336, 0x18u);
  if ( *((_BYTE *)a2 + 32) )
  {
    if ( *((_DWORD *)this + 72) )
      UpdateWindowInputSinkHints(*((_QWORD *)this + 33));
    *((_DWORD *)this + 72) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 264, 0x10u);
    if ( *((_DWORD *)this + 80) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 37));
    *((_DWORD *)this + 80) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 296, 0x48u);
  }
  return (unsigned int)v6;
}
