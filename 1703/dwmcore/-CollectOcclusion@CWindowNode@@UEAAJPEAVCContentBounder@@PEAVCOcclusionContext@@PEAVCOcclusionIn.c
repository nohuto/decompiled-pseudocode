/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D8EC (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D9BC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001E2BC (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004FDD0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEAVCShape@@_N@Z @ 0x180051FE4 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180052B18 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180054700 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180054710 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x1800547D0 (-GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180093F00 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x1800B0F54 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_dffffq @ 0x18015482C (Template_dffffq.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180162730 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801643B0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v6; // rcx
  int RenderBounds; // ebx
  __int64 v9; // rdi
  __int64 *v10; // r15
  __int64 v11; // r12
  int v12; // r9d
  int v13; // eax
  CFlipChain *v14; // rcx
  __int64 v15; // rcx
  char v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // eax
  CRectanglesShape *v20; // rdi
  float v21; // xmm10_4
  float v22; // xmm9_4
  signed int v23; // eax
  __m128i v24; // xmm7
  int v25; // eax
  LONG right; // xmm7_4
  float v27; // xmm6_4
  __int64 (__fastcall *v28)(CRectanglesShape *, RECT *, _QWORD); // rax
  int TightBounds; // eax
  bool (__fastcall *v30)(CRectanglesShape *__hidden, unsigned int *); // rax
  bool IsRectangles; // al
  RECT *v32; // rax
  CGdiSpriteBitmap *v33; // rcx
  RECT v34; // xmm0
  __int64 v35; // rax
  __int64 (*v36)(void); // rax
  struct CResource *Resource; // rax
  struct CResource *v38; // rcx
  int v39; // edi
  int bottom; // r13d
  __int64 v41; // rdx
  int v42; // eax
  int top; // edi
  int v44; // eax
  float v45; // xmm8_4
  float v46; // xmm6_4
  float v47; // xmm9_4
  int v48; // eax
  char v49; // di
  int v50; // eax
  void *v51; // rcx
  int v52; // eax
  __m128 v53; // xmm1
  float v54; // xmm3_4
  float v55; // xmm0_4
  float v56; // xmm2_4
  int v57; // eax
  unsigned int v58; // edx
  float v59; // xmm2_4
  unsigned int v60; // r8d
  unsigned int v61; // ecx
  __int64 v62; // rax
  unsigned int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v67; // eax
  CGdiSpriteBitmap *v68; // rbx
  bool (__fastcall *v69)(CGdiSpriteBitmap *__hidden); // rax
  bool HasContent; // al
  bool (__fastcall *v71)(CGdiSpriteBitmap *__hidden); // rax
  bool IsOpaque; // al
  LONG v73; // edx
  LONG v74; // r8d
  LONG v75; // eax
  LONG v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // edx
  __int64 v80; // rcx
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  float v84; // xmm3_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  float v90; // xmm2_4
  unsigned int v91; // edx
  int v92; // eax
  int LastKnownGoodDxClipShape; // eax
  __int64 v94; // r12
  __int64 v95; // rdi
  char v96; // bl
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // eax
  int *v100; // rax
  __int64 v101; // r8
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rbx
  _QWORD *DxClipShape; // rax
  __int64 v106; // rdx
  __int64 *v107; // rax
  __int64 v108; // rax
  struct IImageSource *v109; // rdx
  int v110; // eax
  __int64 v111; // rbx
  CShape **v112; // rax
  CCompositionSurfaceBitmap *v113; // r8
  int v114; // r8d
  __int64 v115; // rdx
  float v116; // xmm2_4
  float v117; // xmm1_4
  float v118; // xmm0_4
  float v119; // xmm3_4
  float v120; // xmm1_4
  float v121; // xmm0_4
  float v122; // xmm2_4
  float v123; // xmm1_4
  float v124; // xmm0_4
  float v125; // xmm2_4
  int v126; // eax
  __m128 *v127; // rcx
  __m128 v128; // xmm0
  bool v129; // cc
  float v130; // xmm5_4
  float v131; // xmm2_4
  __m128 v132; // xmm1
  float v133; // xmm3_4
  __m128 v134; // xmm1
  float v135; // xmm4_4
  __m128 v136; // xmm1
  int v137; // eax
  unsigned int v138; // [rsp+20h] [rbp-E0h]
  char v139[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+50h] [rbp-B0h]
  _OWORD v141[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v142; // [rsp+A0h] [rbp-60h]
  RECT rcSrc1; // [rsp+B0h] [rbp-50h] BYREF
  __m128 v144; // [rsp+C0h] [rbp-40h] BYREF
  CGdiSpriteBitmap *v145[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v146; // [rsp+E0h] [rbp-20h] BYREF
  float v147; // [rsp+E8h] [rbp-18h]
  float v148; // [rsp+ECh] [rbp-14h]
  __int128 v149; // [rsp+F0h] [rbp-10h] BYREF
  int v150; // [rsp+100h] [rbp+0h]
  int v151[4]; // [rsp+110h] [rbp+10h] BYREF

  v6 = *((_QWORD *)this + 30);
  RenderBounds = 0;
  if ( v6 )
  {
    v78 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v6 + 136LL))(
            v6,
            a3,
            (char *)this + 128);
    RenderBounds = v78;
    if ( v78 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0xC8Eu);
  }
  if ( RenderBounds < 0 )
  {
    v138 = 2481;
    goto LABEL_206;
  }
  LODWORD(v9) = *((_DWORD *)a3 + 84);
  v10 = (__int64 *)((char *)a3 + 312);
  v11 = *((_QWORD *)a3 + 39);
  RenderBounds = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v79 = *((_DWORD *)a3 + 236);
      v9 = (unsigned int)(v9 - 1);
      LODWORD(v145[0]) = v79;
      *((_DWORD *)a3 + 236) = v79 + 2;
      v80 = 5 * v9;
      v140 = 5 * v9;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        Template_dffffq(
          v80,
          v79,
          v79,
          (_DWORD)a4,
          *(_DWORD *)(v11 + 20 * v9 + 4),
          *(_DWORD *)(v11 + 20 * v9 + 8),
          *(_DWORD *)(v11 + 20 * v9 + 12),
          *(_DWORD *)(v11 + 20 * v9 + 16));
        v80 = v140;
      }
      if ( !*(_DWORD *)(v11 + 4 * v80 + 16) )
      {
        v81 = *(float *)(v11 + 4 * v80);
        v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v81) & _xmm);
        if ( v82 < 8388608.0 )
        {
          v83 = ceilf_0(*(float *)(v11 + 4 * v80));
          v80 = v140;
          v81 = (float)(int)v83;
        }
        v84 = *(float *)(v11 + 4 * v80 + 4);
        *(float *)&rcSrc1.left = v81;
        v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v84) & _xmm);
        if ( v85 < 8388608.0 )
        {
          v86 = ceilf_0(v84);
          v80 = v140;
          v84 = (float)(int)v86;
        }
        v87 = *(float *)(v11 + 4 * v80 + 8);
        *(float *)&rcSrc1.top = v84;
        v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v87) & _xmm);
        if ( v88 < 8388608.0 )
        {
          v89 = floorf_0(v87);
          v80 = v140;
          v87 = (float)(int)v89;
        }
        *(float *)&rcSrc1.right = v87;
        v90 = *(float *)(v11 + 4 * v80 + 12);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v90) & _xmm) < 8388608.0 )
          v90 = (float)(int)floorf_0(*(float *)(v11 + 4 * v80 + 12));
        *(float *)&rcSrc1.bottom = v90;
        if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&rcSrc1) )
        {
          v92 = (*(__int64 (__fastcall **)(_QWORD, RECT *, _QWORD))(**((_QWORD **)a3 + 38) + 24LL))(
                  *((_QWORD *)a3 + 38),
                  &rcSrc1,
                  v91);
          RenderBounds = v92;
          if ( v92 < 0 )
            break;
        }
      }
      if ( !(_DWORD)v9 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0x339u);
  }
LABEL_4:
  *((_DWORD *)a3 + 84) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a3 + 312, 20LL);
  if ( RenderBounds < 0 )
  {
    v138 = 2482;
    goto LABEL_206;
  }
  v13 = *((_DWORD *)a3 + 236);
  *((_DWORD *)a4 + 7) = v13;
  *((_DWORD *)a4 + 8) = v13;
  *((_DWORD *)a4 + 9) = v13;
  v14 = (CFlipChain *)*((_QWORD *)this + 112);
  if ( !v14 )
  {
    v15 = *((_QWORD *)this + 115);
    if ( v15 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v15 + 64)) )
    {
      v104 = *((_QWORD *)this + 115);
      DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &rcSrc1);
      v106 = v104 + 64;
      if ( !v104 )
        v106 = 0LL;
      RenderBounds = CWindowNode::GetRenderBounds(this, v106, *DxClipShape, &v144, v139, 0LL);
      CShapePtr::Release((CShapePtr *)&rcSrc1);
      if ( RenderBounds < 0 )
      {
        v138 = 2533;
        goto LABEL_206;
      }
      rcSrc1 = *(RECT *)CMilRectLFromMilRectF((int *)&v149, (__int64)&v144);
      v107 = (__int64 *)CWindowNode::GetDxClipShape(this, &v146);
      v16 = v139[0];
      RenderBounds = CWindowNode::CollectOcclusionHelper(
                       this,
                       *((_QWORD *)this + 115),
                       &rcSrc1.left,
                       (__int64)a3,
                       *v107,
                       v139[0]);
      CShapePtr::Release((CShapePtr *)&v146);
      if ( RenderBounds < 0 )
      {
        v138 = 2539;
        goto LABEL_206;
      }
      if ( *((_BYTE *)a3 + 729) )
      {
        v108 = *((_QWORD *)this + 115);
        v109 = (struct IImageSource *)(v108 + 64);
        v142 = 32085;
        if ( !v108 )
          v109 = 0LL;
        v141[0] = _xmm;
        v141[1] = _xmm;
        v141[2] = _xmm;
        v141[3] = _xmm;
        v110 = CWindowNode::ApplyTextureToLocalTransform(this, v109, (struct CMILMatrix *)v141);
        RenderBounds = v110;
        if ( v110 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v110, 0x9F5u);
          return (unsigned int)RenderBounds;
        }
        v111 = *((_QWORD *)this + 115);
        v112 = (CShape **)CWindowNode::GetDxClipShape(this, &rcSrc1);
        v113 = (CCompositionSurfaceBitmap *)(v111 + 56);
        if ( !v111 )
          v113 = 0LL;
        RenderBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                         (__int64)a3,
                         (__int64)this,
                         v113,
                         (__int64)v141,
                         *v112,
                         *((_DWORD *)this + 219));
        CShapePtr::Release((CShapePtr *)&rcSrc1);
        if ( RenderBounds < 0 )
        {
          v138 = 2555;
          goto LABEL_206;
        }
      }
    }
    else
    {
      v16 = v139[0];
    }
    goto LABEL_8;
  }
  *(_QWORD *)&rcSrc1.left = 0LL;
  LOBYTE(rcSrc1.right) = 0;
  if ( CFlipChain::DisplayBufferReady(v14) || !*((_QWORD *)this + 113) )
  {
    v95 = CWindowNode::GetDxClipShape(this, &v144);
    v96 = *(_BYTE *)(v95 + 8);
    v146 = *(_QWORD *)v95;
    v94 = v146;
    CShapePtr::Release((CShapePtr *)&rcSrc1);
    *(_QWORD *)&rcSrc1.left = v94;
    *(_QWORD *)v95 = 0LL;
    *(_BYTE *)(v95 + 8) = 0;
    LOBYTE(rcSrc1.right) = v96;
    CShapePtr::Release((CShapePtr *)&v144);
  }
  else
  {
    LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, (struct CShapePtr *)&rcSrc1);
    RenderBounds = LastKnownGoodDxClipShape;
    if ( LastKnownGoodDxClipShape < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastKnownGoodDxClipShape, 0x9D0u);
LABEL_132:
      CShapePtr::Release((CShapePtr *)&rcSrc1);
      return (unsigned int)RenderBounds;
    }
    v94 = *(_QWORD *)&rcSrc1.left;
    v146 = *(_QWORD *)&rcSrc1.left;
  }
  v97 = *((_QWORD *)this + 112);
  v98 = v97 + 8;
  if ( !v97 )
    v98 = 0LL;
  v99 = CWindowNode::GetRenderBounds(this, v98, v94, &v144, v139, 0LL);
  RenderBounds = v99;
  if ( v99 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x9D6u);
    goto LABEL_132;
  }
  v100 = CMilRectLFromMilRectF((int *)v145, (__int64)&v144);
  v16 = v139[0];
  v102 = v101 + 16;
  if ( !v101 )
    v102 = 0LL;
  v149 = *(_OWORD *)v100;
  v103 = CWindowNode::CollectOcclusionHelper(this, v102, (LONG *)&v149, (__int64)a3, v146, v139[0]);
  RenderBounds = v103;
  if ( v103 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0x9DCu);
    goto LABEL_132;
  }
  CShapePtr::Release((CShapePtr *)&rcSrc1);
LABEL_8:
  v17 = *v10;
  RenderBounds = 0;
  LODWORD(v18) = *((_DWORD *)a3 + 84);
  v140 = *v10;
  if ( !(_DWORD)v18 )
    goto LABEL_9;
  while ( 1 )
  {
    v114 = *((_DWORD *)a3 + 236);
    v18 = (unsigned int)(v18 - 1);
    LODWORD(v145[0]) = v114;
    *((_DWORD *)a3 + 236) = v114 + 2;
    v115 = 5 * v18;
    *(_QWORD *)&v149 = 5 * v18;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_dffffq(
        v17,
        v115,
        v114,
        v12,
        *(_DWORD *)(v17 + 20 * v18 + 4),
        *(_DWORD *)(v17 + 20 * v18 + 8),
        *(_DWORD *)(v17 + 20 * v18 + 12),
        *(_DWORD *)(v17 + 20 * v18 + 16));
      v17 = v140;
      v115 = v149;
    }
    if ( *(_DWORD *)(v17 + 4 * v115 + 16) )
      goto LABEL_174;
    v116 = *(float *)(v17 + 4 * v115);
    v117 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v116) & _xmm);
    if ( v117 < 8388608.0 )
    {
      v118 = ceilf_0(*(float *)(v17 + 4 * v115));
      v17 = v140;
      v115 = v149;
      v116 = (float)(int)v118;
    }
    v119 = *(float *)(v17 + 4 * v115 + 4);
    *(float *)&rcSrc1.left = v116;
    v120 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v119) & _xmm);
    if ( v120 < 8388608.0 )
    {
      v121 = ceilf_0(v119);
      v17 = v140;
      v115 = v149;
      v119 = (float)(int)v121;
    }
    v122 = *(float *)(v17 + 4 * v115 + 8);
    *(float *)&rcSrc1.top = v119;
    v123 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v122) & _xmm);
    if ( v123 < 8388608.0 )
    {
      v124 = floorf_0(v122);
      v17 = v140;
      v115 = v149;
      v122 = (float)(int)v124;
    }
    *(float *)&rcSrc1.right = v122;
    v125 = *(float *)(v17 + 4 * v115 + 12);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v125) & _xmm) < 8388608.0 )
      v125 = (float)(int)floorf_0(*(float *)(v17 + 4 * v115 + 12));
    *(float *)&rcSrc1.bottom = v125;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&rcSrc1) )
    {
      v126 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)a3 + 38) + 24LL))(*((_QWORD *)a3 + 38), &rcSrc1);
      RenderBounds = v126;
      if ( v126 < 0 )
        break;
    }
    v17 = v140;
LABEL_174:
    if ( !(_DWORD)v18 )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v126, 0x339u);
LABEL_9:
  *((_DWORD *)a3 + 84) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a3 + 312, 20LL);
  if ( RenderBounds < 0 )
  {
    v138 = 2565;
    goto LABEL_206;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 236);
  if ( !*((_QWORD *)this + 95) || *((_BYTE *)this + 986) || (*((_BYTE *)this + 876) & 2) != 0 )
    return (unsigned int)RenderBounds;
  v19 = CWindowNode::EnsureEffectiveSpriteClip(this);
  RenderBounds = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xA0Du);
    return (unsigned int)RenderBounds;
  }
  v20 = (CRectanglesShape *)*((_QWORD *)this + 121);
  RenderBounds = 0;
  v21 = 0.0;
  v22 = 0.0;
  v144.m128_u64[0] = 0LL;
  if ( *((_QWORD *)this + 95) )
  {
    v23 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
    if ( v23 < 0 )
      v23 = 0;
    v24 = _mm_cvtsi32_si128(v23);
    v25 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
    right = _mm_cvtepi32_ps(v24).m128_u32[0];
    v144.m128_i32[2] = right;
    if ( v25 < 0 )
      v25 = 0;
    v27 = (float)v25;
  }
  else
  {
    *(float *)&right = 0.0;
    v27 = 0.0;
    v144.m128_i32[2] = 0;
  }
  v144.m128_f32[3] = v27;
  if ( v20 )
  {
    v28 = *(__int64 (__fastcall **)(CRectanglesShape *, RECT *, _QWORD))(*(_QWORD *)v20 + 32LL);
    if ( (char *)v28 == (char *)CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds(v20, &rcSrc1, 0LL);
    else
      TightBounds = v28(v20, &rcSrc1, 0LL);
    RenderBounds = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x8FDu);
    }
    else
    {
      if ( *(float *)&rcSrc1.left > 0.0 )
      {
        v144.m128_i32[0] = rcSrc1.left;
        v21 = *(float *)&rcSrc1.left;
      }
      if ( *(float *)&rcSrc1.top > 0.0 )
      {
        v144.m128_i32[1] = rcSrc1.top;
        v22 = *(float *)&rcSrc1.top;
      }
      if ( *(float *)&right > *(float *)&rcSrc1.right )
      {
        v144.m128_i32[2] = rcSrc1.right;
        right = rcSrc1.right;
      }
      if ( v27 > *(float *)&rcSrc1.bottom )
      {
        v144.m128_i32[3] = rcSrc1.bottom;
        v27 = *(float *)&rcSrc1.bottom;
      }
      if ( *(float *)&right <= v21 || v27 <= v22 )
        v144 = 0uLL;
      v16 = 0;
      v30 = *(bool (__fastcall **)(CRectanglesShape *__hidden, unsigned int *))(*(_QWORD *)v20 + 40LL);
      if ( v30 == CRectanglesShape::IsRectangles )
        IsRectangles = CRectanglesShape::IsRectangles(v20, (unsigned int *)v145);
      else
        IsRectangles = v30(v20, (unsigned int *)v145);
      if ( IsRectangles && LODWORD(v145[0]) == 1 )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v16 = 1;
  }
  if ( RenderBounds < 0 )
  {
    v138 = 2578;
    goto LABEL_206;
  }
  v32 = (RECT *)CMilRectLFromMilRectF(v151, (__int64)&v144);
  v33 = (CGdiSpriteBitmap *)*((_QWORD *)this + 95);
  v34 = *v32;
  v35 = *(_QWORD *)v33;
  rcSrc1 = v34;
  v36 = *(__int64 (**)(void))(v35 + 144);
  if ( (char *)v36 == (char *)CGdiSpriteBitmap::GetResource )
    Resource = CGdiSpriteBitmap::GetResource(v33);
  else
    Resource = (struct CResource *)v36();
  v38 = Resource;
  v39 = rcSrc1.right - *((_DWORD *)this + 216);
  RenderBounds = 0;
  bottom = rcSrc1.bottom - *((_DWORD *)this + 218);
  v41 = *((_QWORD *)this + 121);
  *(_QWORD *)&v149 = Resource;
  v42 = *((_DWORD *)this + 215) + rcSrc1.left;
  LODWORD(v145[0]) = v39;
  top = *((_DWORD *)this + 217) + rcSrc1.top;
  LODWORD(v140) = v42;
  v146 = v41;
  if ( SLODWORD(v145[0]) <= v42 )
    LODWORD(v145[0]) = v140;
  if ( bottom <= top )
    bottom = top;
  if ( *((_DWORD *)this + 220) || *((_DWORD *)this + 222) || *((_DWORD *)this + 221) || *((_DWORD *)this + 223) )
  {
    v73 = *((_DWORD *)this + 222) + *((_DWORD *)this + 152);
    v74 = *((_DWORD *)this + 154) - *((_DWORD *)this + 223);
    v75 = *((_DWORD *)this + 220) + *((_DWORD *)this + 151);
    rcSrc1.right = *((_DWORD *)this + 153) - *((_DWORD *)this + 221);
    rcSrc1.top = v73;
    rcSrc1.bottom = v74;
    rcSrc1.left = v75;
    IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)this + 652));
    if ( EqualRect(&rcSrc1, (const RECT *)((char *)this + 652)) )
      goto LABEL_97;
    OffsetRect(&rcSrc1, -*((_DWORD *)this + 163), -*((_DWORD *)this + 164));
    if ( rcSrc1.left > (int)v140 )
      LODWORD(v140) = rcSrc1.left;
    if ( rcSrc1.top > top )
      top = rcSrc1.top;
    v76 = (LONG)v145[0];
    if ( rcSrc1.right < SLODWORD(v145[0]) )
    {
      v76 = rcSrc1.right;
      LODWORD(v145[0]) = rcSrc1.right;
    }
    if ( rcSrc1.bottom < bottom )
      bottom = rcSrc1.bottom;
    if ( v76 > (int)v140 && bottom > top )
    {
LABEL_97:
      v44 = v140;
    }
    else
    {
      v44 = 0;
      bottom = 0;
      LODWORD(v145[0]) = 0;
      top = 0;
    }
    v38 = (struct CResource *)v149;
    v41 = v146;
  }
  else
  {
    v44 = v140;
  }
  v45 = (float)v44;
  v46 = (float)top;
  v144.m128_f32[0] = (float)v44;
  v144.m128_f32[1] = (float)top;
  v47 = (float)SLODWORD(v145[0]);
  v144.m128_f32[2] = (float)SLODWORD(v145[0]);
  v144.m128_f32[3] = (float)bottom;
  if ( v16 )
  {
    v48 = *((_DWORD *)this + 219);
    if ( *((_DWORD *)a3 + 237) )
      goto LABEL_104;
    v49 = 0;
    v145[0] = 0LL;
    if ( v38 && (v48 & 2) == 0 )
    {
      if ( (v48 & 1) != 0 )
        goto LABEL_56;
      v67 = (**(__int64 (__fastcall ***)(struct CResource *, GUID *, CGdiSpriteBitmap **))v38)(
              v38,
              &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
              v145);
      v68 = v145[0];
      if ( v67 >= 0 )
      {
        v69 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v145[0] + 80LL);
        if ( v69 == CGdiSpriteBitmap::HasContent )
        {
          HasContent = CGdiSpriteBitmap::HasContent(v145[0]);
        }
        else
        {
          HasContent = v69(v145[0]);
          v68 = v145[0];
        }
        if ( HasContent )
        {
          v71 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v68 + 96LL);
          if ( v71 == CGdiSpriteBitmap::IsOpaque )
          {
            IsOpaque = CGdiSpriteBitmap::IsOpaque(v68);
          }
          else
          {
            IsOpaque = v71(v68);
            v68 = v145[0];
          }
          if ( IsOpaque )
            v49 = 1;
        }
      }
      if ( v68 )
        (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v68 + 16LL))(v68);
    }
    RenderBounds = 0;
    if ( !v49 )
    {
LABEL_84:
      if ( RenderBounds < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0xA4Au);
        goto LABEL_104;
      }
      return (unsigned int)RenderBounds;
    }
LABEL_56:
    RenderBounds = 0;
    if ( v47 > v45 && (float)bottom > v46 )
    {
      v50 = *((_DWORD *)a3 + 2);
      v150 = 0;
      v51 = v50 ? (void *)(*((_QWORD *)a3 + 3) + 68LL * (unsigned int)(v50 - 1)) : &CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<0>(v51, &v144, &v146);
      v52 = *((_DWORD *)a3 + 30);
      if ( v52 )
      {
        v127 = (__m128 *)(*((_QWORD *)a3 + 17) + 16LL * (unsigned int)(v52 - 1));
        v128 = *v127;
        v129 = *(float *)&v146 <= COERCE_FLOAT(*v127);
        v144 = v128;
        v144.m128_i32[0] = v128.m128_i32[0];
        v53 = v128;
        v130 = v128.m128_f32[0];
        if ( !v129 )
        {
          v53 = v144;
          v130 = *(float *)&v146;
          v53.m128_f32[0] = *(float *)&v146;
          v144 = v53;
        }
        v131 = _mm_shuffle_ps(v53, v53, 85).m128_f32[0];
        v144.m128_f32[1] = v131;
        if ( *((float *)&v146 + 1) > v131 )
        {
          v131 = *((float *)&v146 + 1);
          v132 = _mm_shuffle_ps(v144, v144, 225);
          v132.m128_f32[0] = *((float *)&v146 + 1);
          v53 = _mm_shuffle_ps(v132, v132, 225);
          v144 = v53;
        }
        v133 = _mm_shuffle_ps(v53, v53, 170).m128_f32[0];
        v144.m128_f32[2] = v133;
        if ( v133 > v147 )
        {
          v133 = v147;
          v134 = _mm_shuffle_ps(v144, v144, 210);
          v134.m128_f32[0] = v147;
          v53 = _mm_shuffle_ps(v134, v134, 201);
          v144 = v53;
        }
        v135 = _mm_shuffle_ps(v53, v53, 255).m128_f32[0];
        if ( v135 > v148 )
        {
          v135 = v148;
          v136 = _mm_shuffle_ps(v144, v144, 147);
          v136.m128_f32[0] = v148;
          v53 = _mm_shuffle_ps(v136, v136, 57);
          v144 = v53;
        }
        if ( v133 <= v130 || v135 <= v131 )
        {
          v144 = 0uLL;
          v53 = 0uLL;
        }
        v144 = v53;
        v54 = v53.m128_f32[1];
        LODWORD(v56) = _mm_shuffle_ps(v53, v53, 255).m128_u32[0];
        v55 = v53.m128_f32[2];
      }
      else
      {
        v53.m128_i32[0] = v146;
        v54 = *((float *)&v146 + 1);
        v55 = v147;
        v56 = v148;
      }
      v57 = *((_DWORD *)a3 + 246);
      v58 = -1;
      *((_QWORD *)&v149 + 1) = __PAIR64__(LODWORD(v56), LODWORD(v55));
      *(_QWORD *)&v149 = __PAIR64__(LODWORD(v54), v53.m128_u32[0]);
      v59 = (float)(v56 - v54) * (float)(v55 - v53.m128_f32[0]);
      if ( v57 )
        v58 = *(_DWORD *)(*((_QWORD *)a3 + 125) + 4LL * (unsigned int)(v57 - 1));
      v60 = *((_DWORD *)a3 + 138);
      v61 = 0;
      if ( v60 )
      {
        while ( ((v58 >> v61) & 1) == 0 || v59 <= (float)(*((float *)a3 + v61 + 171) * 0.25) )
        {
          if ( ++v61 >= v60 )
            goto LABEL_70;
        }
        v62 = *((unsigned int *)a3 + 84);
        v63 = v62 + 1;
        if ( (int)v62 + 1 < (unsigned int)v62 )
        {
          RenderBounds = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else
        {
          if ( v63 <= *((_DWORD *)a3 + 83) )
          {
            v64 = *v10;
            v65 = 5 * v62;
            *(_OWORD *)(v64 + 4 * v65) = v149;
            *(_DWORD *)(v64 + 4 * v65 + 16) = v150;
            *((_DWORD *)a3 + 84) = v63;
            goto LABEL_70;
          }
          v137 = DynArrayImpl<0>::AddMultipleAndSet((char *)a3 + 312, 20LL, 1LL, &v149);
          RenderBounds = v137;
          if ( v137 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v137, 0xC0u);
        }
        if ( RenderBounds >= 0 )
          return (unsigned int)RenderBounds;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0x73Eu);
      }
    }
LABEL_70:
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0x54Eu);
      goto LABEL_84;
    }
    return (unsigned int)RenderBounds;
  }
  if ( v41 )
  {
    v77 = COcclusionContext::DrawClippedImage((__int64)a3, (__int64)v38, v144.m128_f32, v41, *((_DWORD *)this + 219));
    RenderBounds = v77;
    if ( v77 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0xA51u);
  }
LABEL_104:
  if ( RenderBounds < 0 )
  {
    v138 = 2584;
LABEL_206:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, v138);
  }
  return (unsigned int)RenderBounds;
}
