/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006D04 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006DD4 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x180017568 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180092770 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180093A70 (-QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180093C70 (-HasContent@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180093C80 (-IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ.c)
 *     ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x180093CA0 (-GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180094DF4 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18013C274 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     McTemplateU0dffffq @ 0x180170938 (McTemplateU0dffffq.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180186ED0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct CContentBounder *a2,
        struct COcclusionContext *a3,
        struct COcclusionInfo *a4)
{
  __int64 v5; // rcx
  int RenderBounds; // ebx
  __int64 v9; // r13
  CRectanglesShape **v10; // r14
  __int64 v11; // r12
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  char v15; // r12
  CRectanglesShape *v16; // rdx
  __int64 v17; // r13
  int v18; // eax
  CRectanglesShape *v19; // r15
  float v20; // xmm8_4
  float v21; // xmm6_4
  signed int v22; // eax
  __m128i v23; // xmm9
  int v24; // eax
  LONG right; // xmm9_4
  float v26; // xmm7_4
  __int64 (__fastcall *v27)(__int64, __int64, CMILMatrix *); // rax
  int TightBounds; // eax
  char (__fastcall *v29)(CRectanglesShape *, unsigned int *); // rax
  char IsRectangles; // al
  struct tagRECT *v31; // rax
  CGdiSpriteBitmap *v32; // rcx
  struct tagRECT v33; // xmm0
  __int64 v34; // rax
  __int64 (*v35)(void); // rax
  struct CResource *Resource; // rax
  CGdiSpriteBitmap *v37; // r10
  int bottom; // r15d
  int v39; // r13d
  CRectanglesShape *v40; // rdx
  LONG left; // eax
  int v42; // ecx
  float v43; // xmm8_4
  float v44; // xmm6_4
  float v45; // xmm7_4
  char v46; // r15
  int v47; // eax
  CMILMatrix *v48; // rcx
  int v49; // eax
  __m128 v50; // xmm1
  float v51; // xmm3_4
  float v52; // xmm0_4
  float v53; // xmm2_4
  int v54; // eax
  unsigned int v55; // edx
  float v56; // xmm2_4
  unsigned int v57; // r8d
  unsigned int v58; // ecx
  __int64 v59; // rax
  unsigned int v60; // r8d
  CRectanglesShape *v61; // rcx
  __int64 v62; // rdx
  int (*v64)(CGdiSpriteBitmap *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  CGdiSpriteBitmap *v66; // rbx
  bool (__fastcall *v67)(CGdiSpriteBitmap *__hidden); // rax
  bool HasContent; // al
  bool (__fastcall *v69)(CGdiSpriteBitmap *__hidden); // rax
  bool IsOpaque; // al
  LONG v71; // ecx
  LONG v72; // eax
  LONG top; // ecx
  LONG v74; // r9d
  LONG v75; // r8d
  int v76; // eax
  int v77; // eax
  __int64 v78; // r8
  CRectanglesShape *v79; // rdx
  char *v80; // r9
  int v81; // eax
  __int64 v82; // rbx
  _QWORD *DxClipShape; // rax
  __int64 v84; // rdx
  __int64 *v85; // rax
  __int64 v86; // rax
  struct IImageSource *v87; // rdx
  int v88; // eax
  __int64 v89; // rbx
  CShape **v90; // rax
  _QWORD *v91; // r8
  __int64 v92; // r8
  _DWORD *v93; // r10
  char *v94; // r9
  int v95; // eax
  __m128 *v96; // rcx
  __m128 v97; // xmm0
  bool v98; // cc
  float v99; // xmm4_4
  float v100; // xmm0_4
  __m128 v101; // xmm1
  float v102; // xmm2_4
  __m128 v103; // xmm1
  float v104; // xmm3_4
  __m128 v105; // xmm1
  int v106; // eax
  unsigned int v107; // [rsp+20h] [rbp-E0h]
  char v108[8]; // [rsp+40h] [rbp-C0h] BYREF
  CGdiSpriteBitmap *v109; // [rsp+48h] [rbp-B8h] BYREF
  LONG v110; // [rsp+50h] [rbp-B0h]
  _OWORD v111[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v112; // [rsp+A0h] [rbp-60h]
  __m128 v113; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT rcDst; // [rsp+C0h] [rbp-40h] BYREF
  CRectanglesShape *v115; // [rsp+D0h] [rbp-30h] BYREF
  float v116; // [rsp+D8h] [rbp-28h]
  float v117; // [rsp+DCh] [rbp-24h]
  __int128 v118; // [rsp+E0h] [rbp-20h] BYREF
  int v119; // [rsp+F0h] [rbp-10h]
  char v120[16]; // [rsp+F8h] [rbp-8h] BYREF

  v5 = *((_QWORD *)this + 31);
  RenderBounds = 0;
  if ( v5 )
  {
    v77 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v5 + 152LL))(
            v5,
            a3,
            (char *)this + 132);
    RenderBounds = v77;
    if ( v77 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0xDDCu);
  }
  if ( RenderBounds < 0 )
  {
    v107 = 1775;
    goto LABEL_177;
  }
  LODWORD(v9) = *((_DWORD *)a3 + 106);
  v10 = (CRectanglesShape **)((char *)a3 + 400);
  v11 = *((_QWORD *)a3 + 50);
  RenderBounds = 0;
  if ( (_DWORD)v9 )
  {
    while ( 1 )
    {
      v78 = *((unsigned int *)a3 + 258);
      v9 = (unsigned int)(v9 - 1);
      LODWORD(v109) = v78;
      *((_DWORD *)a3 + 258) = v78 + 2;
      v79 = (CRectanglesShape *)(v11 + 20 * v9);
      v115 = v79;
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
        v79 = v115;
        v78 = (unsigned int)v109;
      }
      if ( !*((_DWORD *)v79 + 4) )
      {
        v80 = (char *)a3 + 820;
        if ( !*((_BYTE *)a3 + 816) )
          v80 = 0LL;
        v81 = (*(__int64 (__fastcall **)(_QWORD, CRectanglesShape *, __int64, char *))(**((_QWORD **)a3 + 49) + 32LL))(
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x35Cu);
  }
LABEL_4:
  *((_DWORD *)a3 + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a3 + 400, 0x14u);
  if ( RenderBounds < 0 )
  {
    v107 = 1776;
    goto LABEL_177;
  }
  v13 = *((_DWORD *)a3 + 258);
  *((_DWORD *)a4 + 7) = v13;
  *((_DWORD *)a4 + 8) = v13;
  v14 = *((_QWORD *)this + 108);
  if ( v14 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v14 + 64)) )
  {
    v82 = *((_QWORD *)this + 108);
    DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &rcDst);
    v84 = v82 + 64;
    if ( !v82 )
      v84 = 0LL;
    RenderBounds = CWindowNode::GetRenderBounds(this, v84, *DxClipShape, &v113, v108, 0LL);
    CShapePtr::Release((CRectanglesShape **)&rcDst);
    if ( RenderBounds < 0 )
    {
      v107 = 1798;
      goto LABEL_177;
    }
    rcDst = *(struct tagRECT *)CMilRectLFromMilRectF(&v118, &v113);
    v85 = (__int64 *)CWindowNode::GetDxClipShape(this, &v115);
    v15 = v108[0];
    RenderBounds = CWindowNode::CollectOcclusionHelper(
                     (_DWORD)this,
                     *((_QWORD *)this + 108),
                     (unsigned int)&rcDst,
                     (_DWORD)a3,
                     *v85,
                     v108[0]);
    CShapePtr::Release(&v115);
    if ( RenderBounds < 0 )
    {
      v107 = 1804;
      goto LABEL_177;
    }
    if ( *((_BYTE *)a3 + 817) )
    {
      v86 = *((_QWORD *)this + 108);
      v87 = (struct IImageSource *)(v86 + 64);
      if ( !v86 )
        v87 = 0LL;
      v112 = 32085;
      v111[0] = _xmm;
      v111[1] = _xmm;
      v111[2] = _xmm;
      v111[3] = _xmm;
      v88 = CWindowNode::ApplyTextureToLocalTransform(this, v87, (struct CMILMatrix *)v111);
      RenderBounds = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0x716u);
        return (unsigned int)RenderBounds;
      }
      v89 = *((_QWORD *)this + 108);
      v90 = (CShape **)CWindowNode::GetDxClipShape(this, &rcDst);
      v91 = (_QWORD *)(v89 + 56);
      if ( !v89 )
        v91 = 0LL;
      RenderBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                       (__int64)a3,
                       (__int64)this,
                       v91,
                       (__int64)v111,
                       *v90,
                       *((_DWORD *)this + 209));
      CShapePtr::Release((CRectanglesShape **)&rcDst);
      if ( RenderBounds < 0 )
      {
        v107 = 1820;
        goto LABEL_177;
      }
    }
  }
  else
  {
    v15 = v108[0];
  }
  v16 = *v10;
  RenderBounds = 0;
  LODWORD(v17) = *((_DWORD *)a3 + 106);
  v115 = *v10;
  if ( !(_DWORD)v17 )
    goto LABEL_8;
  while ( 1 )
  {
    v92 = *((unsigned int *)a3 + 258);
    v17 = (unsigned int)(v17 - 1);
    LODWORD(v109) = v92;
    *((_DWORD *)a3 + 258) = v92 + 2;
    v93 = (_DWORD *)((char *)v16 + 20 * v17);
    *(_QWORD *)&v118 = v93;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0dffffq(5 * v17, (_DWORD)v16, v92, v12, v93[1], v93[2], v93[3], v93[4]);
      v16 = v115;
      v93 = (_DWORD *)v118;
      v92 = (unsigned int)v109;
    }
    if ( v93[4] )
      goto LABEL_143;
    v94 = (char *)a3 + 820;
    if ( !*((_BYTE *)a3 + 816) )
      v94 = 0LL;
    v95 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)a3 + 49) + 32LL))(
            *((_QWORD *)a3 + 49),
            v93,
            v92,
            v94);
    RenderBounds = v95;
    if ( v95 < 0 )
      break;
    v16 = v115;
LABEL_143:
    if ( !(_DWORD)v17 )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x35Cu);
LABEL_8:
  *((_DWORD *)a3 + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)a3 + 400, 0x14u);
  if ( RenderBounds < 0 )
  {
    v107 = 1830;
    goto LABEL_177;
  }
  *((_DWORD *)a4 + 6) = *((_DWORD *)a3 + 258);
  if ( !*((_QWORD *)this + 90) || *((_BYTE *)this + 914) || (*((_BYTE *)this + 836) & 2) != 0 )
    return (unsigned int)RenderBounds;
  v18 = CWindowNode::EnsureEffectiveSpriteClip(this);
  RenderBounds = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x72Eu);
    return (unsigned int)RenderBounds;
  }
  v19 = (CRectanglesShape *)*((_QWORD *)this + 113);
  RenderBounds = 0;
  v20 = 0.0;
  v21 = 0.0;
  v113.m128_u64[0] = 0LL;
  if ( *((_QWORD *)this + 90) )
  {
    v22 = *((_DWORD *)this + 174) - *((_DWORD *)this + 172);
    if ( v22 < 0 )
      v22 = 0;
    v23 = _mm_cvtsi32_si128(v22);
    v24 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
    right = _mm_cvtepi32_ps(v23).m128_u32[0];
    v113.m128_i32[2] = right;
    if ( v24 < 0 )
      v24 = 0;
    v26 = (float)v24;
  }
  else
  {
    *(float *)&right = 0.0;
    v26 = 0.0;
    v113.m128_i32[2] = 0;
  }
  v113.m128_f32[3] = v26;
  if ( v19 )
  {
    v27 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)v19 + 32LL);
    if ( v27 == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v19, (__int64)&rcDst, 0LL);
    else
      TightBounds = v27((__int64)v19, (__int64)&rcDst, 0LL);
    RenderBounds = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x653u);
    }
    else
    {
      if ( *(float *)&rcDst.left > 0.0 )
      {
        v113.m128_i32[0] = rcDst.left;
        v20 = *(float *)&rcDst.left;
      }
      if ( *(float *)&rcDst.top > 0.0 )
      {
        v113.m128_i32[1] = rcDst.top;
        v21 = *(float *)&rcDst.top;
      }
      if ( *(float *)&right > *(float *)&rcDst.right )
      {
        v113.m128_i32[2] = rcDst.right;
        right = rcDst.right;
      }
      if ( v26 > *(float *)&rcDst.bottom )
      {
        v113.m128_i32[3] = rcDst.bottom;
        v26 = *(float *)&rcDst.bottom;
      }
      if ( *(float *)&right <= v20 || v26 <= v21 )
        v113 = 0uLL;
      v15 = 0;
      v29 = *(char (__fastcall **)(CRectanglesShape *, unsigned int *))(*(_QWORD *)v19 + 40LL);
      if ( v29 == CRectanglesShape::IsRectangles )
        IsRectangles = CRectanglesShape::IsRectangles(v19, (unsigned int *)&v109);
      else
        IsRectangles = v29(v19, (unsigned int *)&v109);
      if ( IsRectangles && (_DWORD)v109 == 1 )
        goto LABEL_37;
    }
  }
  else
  {
LABEL_37:
    v15 = 1;
  }
  if ( RenderBounds < 0 )
  {
    v107 = 1843;
    goto LABEL_177;
  }
  v31 = (struct tagRECT *)CMilRectLFromMilRectF(v120, &v113);
  v32 = (CGdiSpriteBitmap *)*((_QWORD *)this + 90);
  v33 = *v31;
  v34 = *(_QWORD *)v32;
  rcDst = v33;
  v35 = *(__int64 (**)(void))(v34 + 152);
  if ( (char *)v35 == (char *)CGdiSpriteBitmap::GetResource )
    Resource = CGdiSpriteBitmap::GetResource(v32);
  else
    Resource = (struct CResource *)v35();
  v37 = Resource;
  bottom = rcDst.bottom - *((_DWORD *)this + 208);
  RenderBounds = 0;
  v39 = rcDst.right - *((_DWORD *)this + 206);
  v40 = (CRectanglesShape *)*((_QWORD *)this + 113);
  *(_QWORD *)&v118 = Resource;
  v110 = *((_DWORD *)this + 205) + rcDst.left;
  LODWORD(v109) = *((_DWORD *)this + 207) + rcDst.top;
  left = v110;
  v115 = v40;
  if ( v39 <= v110 )
  {
    v39 = v110;
    left = v110;
  }
  if ( bottom <= (int)v109 )
    bottom = (int)v109;
  v42 = *((_DWORD *)this + 210);
  if ( v42 || *((_DWORD *)this + 212) || *((_DWORD *)this + 211) || *((_DWORD *)this + 213) )
  {
    v71 = *((_DWORD *)this + 160) + v42;
    rcDst.right = *((_DWORD *)this + 162) - *((_DWORD *)this + 211);
    rcDst.top = *((_DWORD *)this + 212) + *((_DWORD *)this + 161);
    v72 = *((_DWORD *)this + 163) - *((_DWORD *)this + 213);
    rcDst.left = v71;
    rcDst.bottom = v72;
    IntersectRect(&rcDst, &rcDst, (const RECT *)this + 43);
    if ( EqualRect(&rcDst, (const RECT *)this + 43) )
    {
      left = v110;
    }
    else
    {
      OffsetRect(&rcDst, -*((_DWORD *)this + 172), -*((_DWORD *)this + 173));
      left = v110;
      if ( rcDst.left > v110 )
        left = rcDst.left;
      top = (int)v109;
      if ( rcDst.top > (int)v109 )
      {
        top = rcDst.top;
        LODWORD(v109) = rcDst.top;
      }
      v74 = v39;
      if ( rcDst.right < v39 )
      {
        v39 = rcDst.right;
        v74 = rcDst.right;
      }
      v75 = bottom;
      if ( rcDst.bottom < bottom )
      {
        bottom = rcDst.bottom;
        v75 = rcDst.bottom;
      }
      if ( v74 <= left || v75 <= top )
      {
        v37 = (CGdiSpriteBitmap *)v118;
        v40 = v115;
        bottom = 0;
        v39 = 0;
        LODWORD(v109) = 0;
        left = 0;
        goto LABEL_49;
      }
    }
    v40 = v115;
    v37 = (CGdiSpriteBitmap *)v118;
  }
LABEL_49:
  v43 = (float)left;
  v44 = (float)(int)v109;
  v113.m128_f32[0] = (float)left;
  v113.m128_f32[1] = (float)(int)v109;
  v45 = (float)bottom;
  v113.m128_f32[2] = (float)v39;
  v113.m128_f32[3] = (float)bottom;
  if ( !v15 )
  {
    if ( v40 )
    {
      v76 = COcclusionContext::DrawClippedImage(
              (__int64)a3,
              (__int64)v37,
              v113.m128_f32,
              (__int64)v40,
              *((_DWORD *)this + 209));
      RenderBounds = v76;
      if ( v76 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x771u);
    }
    goto LABEL_103;
  }
  if ( *((_DWORD *)a3 + 259) )
  {
    RenderBounds = 0;
LABEL_103:
    if ( RenderBounds >= 0 )
      return (unsigned int)RenderBounds;
    v107 = 1849;
LABEL_177:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderBounds, v107);
    return (unsigned int)RenderBounds;
  }
  v46 = 0;
  v109 = 0LL;
  if ( v37 )
  {
    if ( (*((_BYTE *)this + 836) & 1) != 0 )
      goto LABEL_53;
    v64 = **(int (***)(CGdiSpriteBitmap *__hidden, const struct _GUID *, void **))v37;
    if ( v64 == CGdiSpriteBitmap::QueryInterface )
      Interface = CGdiSpriteBitmap::QueryInterface(v37, &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552, (void **)&v109);
    else
      Interface = ((__int64 (__fastcall *)(CGdiSpriteBitmap *, GUID *, CGdiSpriteBitmap **))v64)(
                    v37,
                    &GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552,
                    &v109);
    v66 = v109;
    if ( Interface >= 0 )
    {
      v67 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v109 + 88LL);
      if ( v67 == CGdiSpriteBitmap::HasContent )
      {
        HasContent = CGdiSpriteBitmap::HasContent(v109);
      }
      else
      {
        HasContent = v67(v109);
        v66 = v109;
      }
      if ( HasContent )
      {
        v69 = *(bool (__fastcall **)(CGdiSpriteBitmap *__hidden))(*(_QWORD *)v66 + 104LL);
        if ( v69 == CGdiSpriteBitmap::IsOpaque )
        {
          IsOpaque = CGdiSpriteBitmap::IsOpaque(v66);
        }
        else
        {
          IsOpaque = v69(v66);
          v66 = v109;
        }
        if ( IsOpaque )
          v46 = 1;
      }
    }
    if ( v66 )
      (*(void (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v66 + 16LL))(v66);
  }
  RenderBounds = 0;
  if ( v46 )
  {
LABEL_53:
    RenderBounds = 0;
    if ( (float)v39 > v43 && v45 > v44 )
    {
      v47 = *((_DWORD *)a3 + 2);
      v119 = 0;
      v48 = v47
          ? (CMILMatrix *)(*((_QWORD *)a3 + 3) + 68LL * (unsigned int)(v47 - 1))
          : (CMILMatrix *)&CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<0>(v48);
      v49 = *((_DWORD *)a3 + 30);
      if ( v49 )
      {
        v96 = (__m128 *)(*((_QWORD *)a3 + 17) + 16LL * (unsigned int)(v49 - 1));
        v97 = *v96;
        v98 = *(float *)&v115 <= COERCE_FLOAT(*v96);
        v113 = v97;
        v113.m128_i32[0] = v97.m128_i32[0];
        v50 = v97;
        v99 = v97.m128_f32[0];
        if ( !v98 )
        {
          v50 = v113;
          v99 = *(float *)&v115;
          v50.m128_f32[0] = *(float *)&v115;
          v113 = v50;
        }
        v100 = _mm_shuffle_ps(v50, v50, 85).m128_f32[0];
        if ( *((float *)&v115 + 1) > v100 )
        {
          v100 = *((float *)&v115 + 1);
          v101 = _mm_shuffle_ps(v113, v113, 225);
          v101.m128_f32[0] = *((float *)&v115 + 1);
          v50 = _mm_shuffle_ps(v101, v101, 225);
          v113 = v50;
        }
        v102 = _mm_shuffle_ps(v50, v50, 170).m128_f32[0];
        if ( v102 > v116 )
        {
          v102 = v116;
          v103 = _mm_shuffle_ps(v113, v113, 210);
          v103.m128_f32[0] = v116;
          v50 = _mm_shuffle_ps(v103, v103, 201);
          v113 = v50;
        }
        v104 = _mm_shuffle_ps(v50, v50, 255).m128_f32[0];
        if ( v104 > v117 )
        {
          v104 = v117;
          v105 = _mm_shuffle_ps(v113, v113, 147);
          v105.m128_f32[0] = v117;
          v50 = _mm_shuffle_ps(v105, v105, 57);
          v113 = v50;
        }
        if ( v102 <= v99 || v104 <= v100 )
        {
          v113 = 0uLL;
          v50 = 0uLL;
        }
        v113 = v50;
        v51 = v50.m128_f32[1];
        LODWORD(v53) = _mm_shuffle_ps(v50, v50, 255).m128_u32[0];
        v52 = v50.m128_f32[2];
      }
      else
      {
        v50.m128_i32[0] = (int)v115;
        v51 = *((float *)&v115 + 1);
        v52 = v116;
        v53 = v117;
      }
      v54 = *((_DWORD *)a3 + 270);
      v55 = -1;
      *((_QWORD *)&v118 + 1) = __PAIR64__(LODWORD(v53), LODWORD(v52));
      *(_QWORD *)&v118 = __PAIR64__(LODWORD(v51), v50.m128_u32[0]);
      v56 = (float)(v53 - v51) * (float)(v52 - v50.m128_f32[0]);
      if ( v54 )
        v55 = *(_DWORD *)(*((_QWORD *)a3 + 137) + 4LL * (unsigned int)(v54 - 1));
      v57 = *((_DWORD *)a3 + 160);
      v58 = 0;
      if ( v57 )
      {
        while ( ((v55 >> v58) & 1) == 0 || v56 <= (float)(*((float *)a3 + v58 + 193) * 0.25) )
        {
          if ( ++v58 >= v57 )
            goto LABEL_67;
        }
        v59 = *((unsigned int *)a3 + 106);
        v60 = v59 + 1;
        if ( (int)v59 + 1 < (unsigned int)v59 )
        {
          RenderBounds = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        else
        {
          if ( v60 <= *((_DWORD *)a3 + 105) )
          {
            v61 = *v10;
            v62 = 5 * v59;
            *(_OWORD *)((char *)v61 + 4 * v62) = v118;
            *((_DWORD *)v61 + v62 + 4) = v119;
            *((_DWORD *)a3 + 106) = v60;
            goto LABEL_67;
          }
          v106 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a3 + 400, 0x14u, 1, &v118);
          RenderBounds = v106;
          if ( v106 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0xC0u);
        }
        if ( RenderBounds >= 0 )
          return (unsigned int)RenderBounds;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderBounds, 0x746u);
      }
    }
LABEL_67:
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderBounds, 0x544u);
      goto LABEL_83;
    }
    return (unsigned int)RenderBounds;
  }
LABEL_83:
  if ( RenderBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderBounds, 0x76Au);
    goto LABEL_103;
  }
  return (unsigned int)RenderBounds;
}
