/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x180035270 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D170 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D4FC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18009A3E0 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18009B468 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D1F0 (-QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D3F0 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D400 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x18009D420 (-GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009E574 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18011A1C8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     McTemplateU0dffffq @ 0x180148148 (McTemplateU0dffffq.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18015DF20 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?DisplayBufferReady@CFlipChain@@QEAA_NXZ @ 0x180165398 (-DisplayBufferReady@CFlipChain@@QEAA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180178CC8 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v5; // rcx
  signed int RenderBounds; // ebx
  __int64 v9; // rdi
  CRegionShape **v10; // r15
  __int64 v11; // r12
  int v12; // r9d
  int v13; // eax
  CFlipChain *v14; // rcx
  __int64 v15; // rcx
  char v16; // r12
  CRegionShape *v17; // rdx
  __int64 v18; // rdi
  signed int v19; // eax
  CRectanglesShape *v20; // rdi
  float v21; // xmm9_4
  float v22; // xmm8_4
  signed int v23; // eax
  __m128i v24; // xmm10
  int v25; // eax
  LONG right; // xmm10_4
  float v27; // xmm6_4
  __int64 (__fastcall *v28)(__int64, __int64, __int64); // rax
  signed int TightBounds; // eax
  char (__fastcall *v30)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  RECT *v32; // rax
  CGdiSpriteBitmap *v33; // rcx
  RECT v34; // xmm0
  __int64 v35; // rax
  __int64 (*v36)(void); // rax
  struct CResource *Resource; // rax
  CGdiSpriteBitmap *v38; // rcx
  int v39; // edi
  int bottom; // r13d
  CRegionShape *v41; // rdx
  int v42; // eax
  int top; // edi
  float v44; // xmm8_4
  float v45; // xmm6_4
  float v46; // xmm9_4
  char v47; // di
  int v48; // eax
  void *v49; // rcx
  int v50; // eax
  __m128 v51; // xmm1
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm2_4
  int v55; // eax
  unsigned int v56; // edx
  float v57; // xmm2_4
  unsigned int v58; // r8d
  unsigned int v59; // ecx
  __int64 v60; // rax
  unsigned int v61; // r8d
  CRegionShape *v62; // rcx
  __int64 v63; // rdx
  int (*v65)(CGdiSpriteBitmap *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  CGdiSpriteBitmap *v67; // rbx
  bool (__fastcall *v68)(CGdiSpriteBitmap *__hidden); // rax
  bool HasContent; // al
  bool (__fastcall *v70)(CGdiSpriteBitmap *__hidden); // rax
  bool IsOpaque; // al
  LONG v72; // edx
  LONG v73; // r8d
  LONG v74; // eax
  LONG v75; // eax
  signed int v76; // eax
  signed int v77; // eax
  __int64 v78; // r8
  CRegionShape *v79; // rdx
  char *v80; // r9
  signed int v81; // eax
  signed int LastKnownGoodDxClipShape; // eax
  CRegionShape *v83; // r12
  __int64 v84; // rdi
  char v85; // bl
  __int64 v86; // rax
  __int64 v87; // rdx
  signed int v88; // eax
  __int128 *v89; // rax
  __int64 v90; // r8
  int v91; // edx
  signed int v92; // eax
  __int64 v93; // rbx
  _QWORD *DxClipShape; // rax
  __int64 v95; // rdx
  __int64 *v96; // rax
  __int64 v97; // rax
  struct IImageSource *v98; // rdx
  signed int v99; // eax
  __int64 v100; // rbx
  CShape **v101; // rax
  CCompositionSurfaceBitmap *v102; // r8
  __int64 v103; // r8
  _DWORD *v104; // r10
  char *v105; // r9
  signed int v106; // eax
  __m128 *v107; // rcx
  __m128 v108; // xmm0
  bool v109; // cc
  float v110; // xmm5_4
  float v111; // xmm2_4
  __m128 v112; // xmm1
  float v113; // xmm3_4
  __m128 v114; // xmm1
  float v115; // xmm4_4
  __m128 v116; // xmm1
  signed int v117; // eax
  unsigned int v118; // [rsp+20h] [rbp-E0h]
  char v119; // [rsp+40h] [rbp-C0h]
  LONG left; // [rsp+50h] [rbp-B0h]
  _OWORD v121[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v122; // [rsp+A0h] [rbp-60h]
  __m128 v123; // [rsp+B0h] [rbp-50h] BYREF
  RECT rcSrc1; // [rsp+C0h] [rbp-40h] BYREF
  CRegionShape *v125; // [rsp+D0h] [rbp-30h] BYREF
  float v126; // [rsp+D8h] [rbp-28h]
  float v127; // [rsp+DCh] [rbp-24h]
  CGdiSpriteBitmap *v128[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v129; // [rsp+F0h] [rbp-10h] BYREF
  int v130; // [rsp+100h] [rbp+0h]
  char v131[16]; // [rsp+110h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 30);
  RenderBounds = 0;
  if ( v5 )
  {
    v77 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v5 + 152LL))(
            v5,
            a3,
            (char *)this + 132);
    RenderBounds = v77;
    if ( v77 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v77, 0xCC7u);
  }
  if ( RenderBounds < 0 )
  {
    v118 = 2427;
    goto LABEL_194;
  }
  LODWORD(v9) = *((_DWORD *)a3 + 106);
  v10 = (CRegionShape **)((char *)a3 + 400);
  v11 = *((_QWORD *)a3 + 50);
  RenderBounds = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v78 = *((unsigned int *)a3 + 258);
      v9 = (unsigned int)(v9 - 1);
      LODWORD(v128[0]) = v78;
      v79 = (CRegionShape *)(v11 + 20 * v9);
      *((_DWORD *)a3 + 258) = v78 + 2;
      v125 = v79;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        McTemplateU0dffffq(
          5 * v9,
          (_DWORD)v79,
          v78,
          (_DWORD)a4,
          *((_DWORD *)v79 + 1),
          *((_DWORD *)v79 + 2),
          *((_DWORD *)v79 + 3),
          *((_DWORD *)v79 + 4));
        v79 = v125;
        v78 = LODWORD(v128[0]);
      }
      if ( !*((_DWORD *)v79 + 4) )
      {
        v80 = (char *)a3 + 820;
        if ( !*((_BYTE *)a3 + 816) )
          v80 = 0LL;
        v81 = (*(__int64 (__fastcall **)(_QWORD, CRegionShape *, __int64, char *))(**((_QWORD **)a3 + 49) + 32LL))(
                *((_QWORD *)a3 + 49),
                v79,
                v78,
                v80);
        RenderBounds = v81;
        if ( v81 < 0 )
          break;
      }
      if ( !(_DWORD)v9 )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v81, 0x352u);
  }
LABEL_4:
  *((_DWORD *)a3 + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a3 + 400, 0x14u);
  if ( RenderBounds < 0 )
  {
    v118 = 2428;
    goto LABEL_194;
  }
  v13 = *((_DWORD *)a3 + 258);
  *((_DWORD *)a4 + 7) = v13;
  *((_DWORD *)a4 + 8) = v13;
  *((_DWORD *)a4 + 9) = v13;
  v14 = (CFlipChain *)*((_QWORD *)this + 115);
  if ( !v14 )
  {
    v15 = *((_QWORD *)this + 118);
    if ( v15 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v15 + 64)) )
    {
      v93 = *((_QWORD *)this + 118);
      DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &rcSrc1);
      v95 = v93 + 64;
      if ( !v93 )
        v95 = 0LL;
      RenderBounds = CWindowNode::GetRenderBounds(this, v95, *DxClipShape, &v123);
      CShapePtr::Release((CRegionShape **)&rcSrc1);
      if ( RenderBounds < 0 )
      {
        v118 = 2479;
        goto LABEL_194;
      }
      rcSrc1 = *(RECT *)CMilRectLFromMilRectF(&v129, &v123);
      v96 = (__int64 *)CWindowNode::GetDxClipShape(this, &v125);
      v16 = v119;
      RenderBounds = CWindowNode::CollectOcclusionHelper(
                       (_DWORD)this,
                       *((_QWORD *)this + 118),
                       (unsigned int)&rcSrc1,
                       (_DWORD)a3,
                       *v96);
      CShapePtr::Release(&v125);
      if ( RenderBounds < 0 )
      {
        v118 = 2485;
        goto LABEL_194;
      }
      if ( *((_BYTE *)a3 + 817) )
      {
        v97 = *((_QWORD *)this + 118);
        v98 = (struct IImageSource *)(v97 + 64);
        if ( !v97 )
          v98 = 0LL;
        v122 = 32085;
        v121[0] = _xmm;
        v121[1] = _xmm;
        v121[2] = _xmm;
        v121[3] = _xmm;
        v99 = CWindowNode::ApplyTextureToLocalTransform(this, v98, (struct CMILMatrix *)v121);
        RenderBounds = v99;
        if ( v99 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v99, 0x9BFu);
          return (unsigned int)RenderBounds;
        }
        v100 = *((_QWORD *)this + 118);
        v101 = (CShape **)CWindowNode::GetDxClipShape(this, &rcSrc1);
        v102 = (CCompositionSurfaceBitmap *)(v100 + 56);
        if ( !v100 )
          v102 = 0LL;
        RenderBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                         (__int64)a3,
                         (__int64)this,
                         v102,
                         (__int64)v121,
                         *v101,
                         *((_DWORD *)this + 225));
        CShapePtr::Release((CRegionShape **)&rcSrc1);
        if ( RenderBounds < 0 )
        {
          v118 = 2501;
          goto LABEL_194;
        }
      }
    }
    else
    {
      v16 = v119;
    }
    goto LABEL_8;
  }
  *(_QWORD *)&rcSrc1.left = 0LL;
  LOBYTE(rcSrc1.right) = 0;
  if ( CFlipChain::DisplayBufferReady(v14) || !*((_QWORD *)this + 116) )
  {
    v84 = CWindowNode::GetDxClipShape(this, &v123);
    v85 = *(_BYTE *)(v84 + 8);
    v125 = *(CRegionShape **)v84;
    v83 = v125;
    CShapePtr::Release((CRegionShape **)&rcSrc1);
    *(_QWORD *)&rcSrc1.left = v83;
    LOBYTE(rcSrc1.right) = v85;
    *(_QWORD *)v84 = 0LL;
    *(_BYTE *)(v84 + 8) = 0;
    CShapePtr::Release((CRegionShape **)&v123);
  }
  else
  {
    LastKnownGoodDxClipShape = CWindowNode::GetLastKnownGoodDxClipShape(this, (struct CShapePtr *)&rcSrc1);
    RenderBounds = LastKnownGoodDxClipShape;
    if ( LastKnownGoodDxClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LastKnownGoodDxClipShape, 0x99Au);
LABEL_126:
      CShapePtr::Release((CRegionShape **)&rcSrc1);
      return (unsigned int)RenderBounds;
    }
    v83 = *(CRegionShape **)&rcSrc1.left;
    v125 = *(CRegionShape **)&rcSrc1.left;
  }
  v86 = *((_QWORD *)this + 115);
  v87 = v86 + 8;
  if ( !v86 )
    v87 = 0LL;
  v88 = CWindowNode::GetRenderBounds(this, v87, v83, &v123);
  RenderBounds = v88;
  if ( v88 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v88, 0x9A0u);
    goto LABEL_126;
  }
  v89 = (__int128 *)CMilRectLFromMilRectF(v128, &v123);
  v16 = v119;
  v91 = v90 + 16;
  if ( !v90 )
    v91 = 0;
  v129 = *v89;
  v92 = CWindowNode::CollectOcclusionHelper((_DWORD)this, v91, (unsigned int)&v129, (_DWORD)a3, (__int64)v125);
  RenderBounds = v92;
  if ( v92 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v92, 0x9A6u);
    goto LABEL_126;
  }
  CShapePtr::Release((CRegionShape **)&rcSrc1);
LABEL_8:
  v17 = *v10;
  LODWORD(v18) = *((_DWORD *)a3 + 106);
  RenderBounds = 0;
  v125 = *v10;
  if ( !(_DWORD)v18 )
    goto LABEL_9;
  while ( 1 )
  {
    v103 = *((unsigned int *)a3 + 258);
    v18 = (unsigned int)(v18 - 1);
    LODWORD(v128[0]) = v103;
    v104 = (_DWORD *)((char *)v17 + 20 * v18);
    *((_DWORD *)a3 + 258) = v103 + 2;
    *(_QWORD *)&v129 = v104;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0dffffq(5 * v18, (_DWORD)v17, v103, v12, v104[1], v104[2], v104[3], v104[4]);
      v17 = v125;
      v104 = (_DWORD *)v129;
      v103 = LODWORD(v128[0]);
    }
    if ( v104[4] )
      goto LABEL_160;
    v105 = (char *)a3 + 820;
    if ( !*((_BYTE *)a3 + 816) )
      v105 = 0LL;
    v106 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)a3 + 49) + 32LL))(
             *((_QWORD *)a3 + 49),
             v104,
             v103,
             v105);
    RenderBounds = v106;
    if ( v106 < 0 )
      break;
    v17 = v125;
LABEL_160:
    if ( !(_DWORD)v18 )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v106, 0x352u);
LABEL_9:
  *((_DWORD *)a3 + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a3 + 400, 0x14u);
  if ( RenderBounds < 0 )
  {
    v118 = 2511;
    goto LABEL_194;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 258);
  if ( !*((_QWORD *)this + 98) || *((_BYTE *)this + 1010) || (*((_BYTE *)this + 900) & 2) != 0 )
    return (unsigned int)RenderBounds;
  v19 = CWindowNode::EnsureEffectiveSpriteClip(this);
  RenderBounds = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x9D7u);
    return (unsigned int)RenderBounds;
  }
  v20 = (CRectanglesShape *)*((_QWORD *)this + 124);
  RenderBounds = 0;
  v21 = 0.0;
  v22 = 0.0;
  v123.m128_u64[0] = 0LL;
  if ( *((_QWORD *)this + 98) )
  {
    v23 = *((_DWORD *)this + 172) - *((_DWORD *)this + 170);
    if ( v23 < 0 )
      v23 = 0;
    v24 = _mm_cvtsi32_si128(v23);
    v25 = *((_DWORD *)this + 173) - *((_DWORD *)this + 171);
    right = _mm_cvtepi32_ps(v24).m128_u32[0];
    v123.m128_i32[2] = right;
    if ( v25 < 0 )
      v25 = 0;
    v27 = (float)v25;
  }
  else
  {
    *(float *)&right = 0.0;
    v27 = 0.0;
    v123.m128_i32[2] = 0;
  }
  v123.m128_f32[3] = v27;
  if ( v20 )
  {
    v28 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v20 + 32LL);
    if ( v28 == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v20, (__int64)&rcSrc1, 0LL);
    else
      TightBounds = v28((__int64)v20, (__int64)&rcSrc1, 0LL);
    RenderBounds = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TightBounds, 0x8CFu);
    }
    else
    {
      if ( *(float *)&rcSrc1.left > 0.0 )
      {
        v123.m128_i32[0] = rcSrc1.left;
        v21 = *(float *)&rcSrc1.left;
      }
      if ( *(float *)&rcSrc1.top > 0.0 )
      {
        v123.m128_i32[1] = rcSrc1.top;
        v22 = *(float *)&rcSrc1.top;
      }
      if ( *(float *)&right > *(float *)&rcSrc1.right )
      {
        v123.m128_i32[2] = rcSrc1.right;
        right = rcSrc1.right;
      }
      if ( v27 > *(float *)&rcSrc1.bottom )
      {
        v123.m128_i32[3] = rcSrc1.bottom;
        v27 = *(float *)&rcSrc1.bottom;
      }
      if ( *(float *)&right <= v21 || v27 <= v22 )
        v123 = 0uLL;
      v16 = 0;
      v30 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v20 + 40LL);
      if ( v30 == CRectanglesShape::IsRectangles )
        IsRectangles = CRectanglesShape::IsRectangles(v20, (unsigned int *)v128);
      else
        IsRectangles = v30(v20, (unsigned int *)v128);
      if ( IsRectangles && LODWORD(v128[0]) == 1 )
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
    v118 = 2524;
    goto LABEL_194;
  }
  v32 = (RECT *)CMilRectLFromMilRectF(v131, &v123);
  v33 = (CGdiSpriteBitmap *)*((_QWORD *)this + 98);
  v34 = *v32;
  v35 = *(_QWORD *)v33;
  rcSrc1 = v34;
  v36 = *(__int64 (**)(void))(v35 + 152);
  if ( (char *)v36 == (char *)CGdiSpriteBitmap::GetResource )
    Resource = CGdiSpriteBitmap::GetResource(v33);
  else
    Resource = (struct CResource *)v36();
  v38 = Resource;
  v39 = rcSrc1.right - *((_DWORD *)this + 222);
  RenderBounds = 0;
  bottom = rcSrc1.bottom - *((_DWORD *)this + 224);
  v41 = (CRegionShape *)*((_QWORD *)this + 124);
  *(_QWORD *)&v129 = Resource;
  v42 = *((_DWORD *)this + 221) + rcSrc1.left;
  LODWORD(v128[0]) = v39;
  top = *((_DWORD *)this + 223) + rcSrc1.top;
  left = v42;
  v125 = v41;
  if ( SLODWORD(v128[0]) <= v42 )
    LODWORD(v128[0]) = v42;
  if ( bottom <= top )
    bottom = top;
  if ( *((_DWORD *)this + 226) || *((_DWORD *)this + 228) || *((_DWORD *)this + 227) || *((_DWORD *)this + 229) )
  {
    v72 = *((_DWORD *)this + 228) + *((_DWORD *)this + 159);
    v73 = *((_DWORD *)this + 161) - *((_DWORD *)this + 229);
    v74 = *((_DWORD *)this + 226) + *((_DWORD *)this + 158);
    rcSrc1.right = *((_DWORD *)this + 160) - *((_DWORD *)this + 227);
    rcSrc1.top = v72;
    rcSrc1.bottom = v73;
    rcSrc1.left = v74;
    IntersectRect(&rcSrc1, &rcSrc1, (const RECT *)((char *)this + 680));
    if ( EqualRect(&rcSrc1, (const RECT *)((char *)this + 680)) )
      goto LABEL_97;
    OffsetRect(&rcSrc1, -*((_DWORD *)this + 170), -*((_DWORD *)this + 171));
    if ( rcSrc1.left > left )
      left = rcSrc1.left;
    if ( rcSrc1.top > top )
      top = rcSrc1.top;
    v75 = (LONG)v128[0];
    if ( rcSrc1.right < SLODWORD(v128[0]) )
    {
      v75 = rcSrc1.right;
      LODWORD(v128[0]) = rcSrc1.right;
    }
    if ( rcSrc1.bottom < bottom )
      bottom = rcSrc1.bottom;
    if ( v75 > left && bottom > top )
    {
LABEL_97:
      v42 = left;
    }
    else
    {
      bottom = 0;
      LODWORD(v128[0]) = 0;
      top = 0;
      v42 = 0;
    }
    v38 = (CGdiSpriteBitmap *)v129;
    v41 = v125;
  }
  v44 = (float)v42;
  v45 = (float)top;
  v123.m128_f32[0] = (float)v42;
  v123.m128_f32[1] = (float)top;
  v46 = (float)SLODWORD(v128[0]);
  v123.m128_f32[2] = (float)SLODWORD(v128[0]);
  v123.m128_f32[3] = (float)bottom;
  if ( !v16 )
  {
    if ( v41 )
    {
      v76 = COcclusionContext::DrawClippedImage(
              (__int64)a3,
              (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v38,
              v123.m128_f32,
              (__int64)v41,
              *((_DWORD *)this + 225));
      RenderBounds = v76;
      if ( v76 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v76, 0xA1Bu);
    }
    goto LABEL_104;
  }
  if ( *((_DWORD *)a3 + 259) )
  {
    RenderBounds = 0;
LABEL_104:
    if ( RenderBounds >= 0 )
      return (unsigned int)RenderBounds;
    v118 = 2530;
LABEL_194:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderBounds, v118);
    return (unsigned int)RenderBounds;
  }
  v47 = 0;
  v128[0] = 0LL;
  if ( v38 )
  {
    if ( (*((_BYTE *)this + 900) & 1) != 0 )
      goto LABEL_54;
    v65 = **(int (***)(CGdiSpriteBitmap *__hidden, const struct _GUID *, void **))v38;
    if ( v65 == CGdiSpriteBitmap::QueryInterface )
      Interface = CGdiSpriteBitmap::QueryInterface(v38, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, (void **)v128);
    else
      Interface = ((__int64 (__fastcall *)(CGdiSpriteBitmap *, GUID *, CGdiSpriteBitmap **))v65)(
                    v38,
                    &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
                    v128);
    v67 = v128[0];
    if ( Interface >= 0 )
    {
      v68 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v128[0] + 88LL);
      if ( v68 == CGdiSpriteBitmap::HasContent )
      {
        HasContent = CGdiSpriteBitmap::HasContent(v128[0]);
      }
      else
      {
        HasContent = v68(v128[0]);
        v67 = v128[0];
      }
      if ( HasContent )
      {
        v70 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v67 + 104LL);
        if ( v70 == CGdiSpriteBitmap::IsOpaque )
        {
          IsOpaque = CGdiSpriteBitmap::IsOpaque(v67);
        }
        else
        {
          IsOpaque = v70(v67);
          v67 = v128[0];
        }
        if ( IsOpaque )
          v47 = 1;
      }
    }
    if ( v67 )
      (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v67 + 16LL))(v67);
  }
  RenderBounds = 0;
  if ( v47 )
  {
LABEL_54:
    RenderBounds = 0;
    if ( v46 > v44 && (float)bottom > v45 )
    {
      v48 = *((_DWORD *)a3 + 2);
      v130 = 0;
      v49 = v48 ? (void *)(*((_QWORD *)a3 + 3) + 68LL * (unsigned int)(v48 - 1)) : &CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v49, (__int64)&v123, (float *)&v125);
      v50 = *((_DWORD *)a3 + 30);
      if ( v50 )
      {
        v107 = (__m128 *)(*((_QWORD *)a3 + 17) + 16LL * (unsigned int)(v50 - 1));
        v108 = *v107;
        v109 = *(float *)&v125 <= COERCE_FLOAT(*v107);
        v123 = v108;
        v123.m128_i32[0] = v108.m128_i32[0];
        v51 = v108;
        v110 = v108.m128_f32[0];
        if ( !v109 )
        {
          v51 = v123;
          v110 = *(float *)&v125;
          v51.m128_f32[0] = *(float *)&v125;
          v123 = v51;
        }
        v111 = _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
        v123.m128_f32[1] = v111;
        if ( *((float *)&v125 + 1) > v111 )
        {
          v111 = *((float *)&v125 + 1);
          v112 = _mm_shuffle_ps(v123, v123, 225);
          v112.m128_f32[0] = *((float *)&v125 + 1);
          v51 = _mm_shuffle_ps(v112, v112, 225);
          v123 = v51;
        }
        v113 = _mm_shuffle_ps(v51, v51, 170).m128_f32[0];
        v123.m128_f32[2] = v113;
        if ( v113 > v126 )
        {
          v113 = v126;
          v114 = _mm_shuffle_ps(v123, v123, 210);
          v114.m128_f32[0] = v126;
          v51 = _mm_shuffle_ps(v114, v114, 201);
          v123 = v51;
        }
        v115 = _mm_shuffle_ps(v51, v51, 255).m128_f32[0];
        if ( v115 > v127 )
        {
          v115 = v127;
          v116 = _mm_shuffle_ps(v123, v123, 147);
          v116.m128_f32[0] = v127;
          v51 = _mm_shuffle_ps(v116, v116, 57);
          v123 = v51;
        }
        if ( v113 <= v110 || v115 <= v111 )
        {
          v123 = 0uLL;
          v51 = 0uLL;
        }
        v123 = v51;
        v52 = v51.m128_f32[1];
        LODWORD(v54) = _mm_shuffle_ps(v51, v51, 255).m128_u32[0];
        v53 = v51.m128_f32[2];
      }
      else
      {
        v51.m128_i32[0] = (int)v125;
        v52 = *((float *)&v125 + 1);
        v53 = v126;
        v54 = v127;
      }
      v55 = *((_DWORD *)a3 + 270);
      v56 = -1;
      *((_QWORD *)&v129 + 1) = __PAIR64__(LODWORD(v54), LODWORD(v53));
      *(_QWORD *)&v129 = __PAIR64__(LODWORD(v52), v51.m128_u32[0]);
      v57 = (float)(v54 - v52) * (float)(v53 - v51.m128_f32[0]);
      if ( v55 )
        v56 = *(_DWORD *)(*((_QWORD *)a3 + 137) + 4LL * (unsigned int)(v55 - 1));
      v58 = *((_DWORD *)a3 + 160);
      v59 = 0;
      if ( v58 )
      {
        while ( ((v56 >> v59) & 1) == 0 || v57 <= (float)(*((float *)a3 + v59 + 193) * 0.25) )
        {
          if ( ++v59 >= v58 )
            goto LABEL_68;
        }
        v60 = *((unsigned int *)a3 + 106);
        v61 = v60 + 1;
        if ( (int)v60 + 1 < (unsigned int)v60 )
        {
          RenderBounds = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0xB5u);
        }
        else
        {
          if ( v61 <= *((_DWORD *)a3 + 105) )
          {
            v62 = *v10;
            v63 = 5 * v60;
            *(_OWORD *)((char *)v62 + 4 * v63) = v129;
            *((_DWORD *)v62 + v63 + 4) = v130;
            *((_DWORD *)a3 + 106) = v61;
            goto LABEL_68;
          }
          v117 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 400, 0x14u, 1, &v129);
          RenderBounds = v117;
          if ( v117 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v117, 0xC0u);
        }
        if ( RenderBounds >= 0 )
          return (unsigned int)RenderBounds;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderBounds, 0x73Cu);
      }
    }
LABEL_68:
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderBounds, 0x53Au);
      goto LABEL_83;
    }
    return (unsigned int)RenderBounds;
  }
LABEL_83:
  if ( RenderBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderBounds, 0xA14u);
    goto LABEL_104;
  }
  return (unsigned int)RenderBounds;
}
