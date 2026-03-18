/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800925D0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180017664 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180019364 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004A7F0 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180092770 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEBVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180186ED0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, float *a3)
{
  int ContentBounds; // eax
  unsigned int RenderBounds; // ebx
  __int64 v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  float v11; // xmm0_4
  unsigned int v12; // eax
  __m128i v13; // xmm0
  int v14; // eax
  int WindowClipShape; // eax
  int TightBounds; // eax
  __int64 v18; // rbx
  _QWORD *DxClipShape; // rax
  unsigned int v20; // [rsp+20h] [rbp-40h]
  CRectanglesShape *v21; // [rsp+30h] [rbp-30h] BYREF
  char v22; // [rsp+38h] [rbp-28h]
  float v23[4]; // [rsp+40h] [rbp-20h] BYREF

  ContentBounds = CVisual::GetContentBounds(this, a2, a3);
  RenderBounds = ContentBounds;
  if ( ContentBounds < 0 )
  {
    v20 = 1679;
    goto LABEL_27;
  }
  if ( *((_BYTE *)this + 914) )
    return RenderBounds;
  if ( *((_QWORD *)this + 90) )
  {
    ContentBounds = CWindowNode::EnsureEffectiveSpriteClip(this);
    RenderBounds = ContentBounds;
    if ( ContentBounds < 0 )
    {
      v20 = 1692;
    }
    else
    {
      ContentBounds = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 90), *((_QWORD *)this + 113), v23, 0LL, 0LL);
      RenderBounds = ContentBounds;
      if ( ContentBounds >= 0 )
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v23);
        goto LABEL_4;
      }
      v20 = 1696;
    }
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ContentBounds, v20);
    return RenderBounds;
  }
LABEL_4:
  v7 = *((_QWORD *)this + 108);
  if ( v7 && CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v7 + 64)) )
  {
    v18 = *((_QWORD *)this + 108);
    DxClipShape = (_QWORD *)CWindowNode::GetDxClipShape(this, &v21);
    RenderBounds = CWindowNode::GetRenderBounds(this, (v18 + 64) & -(__int64)(v18 != 0), *DxClipShape, v23, 0LL, 0LL);
    CShapePtr::Release(&v21);
    if ( (RenderBounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderBounds, 0x6ABu);
      return RenderBounds;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v23);
  }
  if ( !*((_BYTE *)this + 914) && *((_QWORD *)this + 75) )
  {
    if ( !*((_QWORD *)this + 97) )
    {
      v8 = *((_DWORD *)this + 172);
      v9 = *((_DWORD *)this + 173);
      v10 = *((_DWORD *)this + 161) - v9;
      v23[0] = (float)(*((_DWORD *)this + 160) - v8);
      v11 = (float)v10;
      v12 = *((_DWORD *)this + 162) - v8;
      v23[1] = v11;
      v13 = _mm_cvtsi32_si128(v12);
      v14 = *((_DWORD *)this + 163) - v9;
      LODWORD(v23[2]) = _mm_cvtepi32_ps(v13).m128_u32[0];
      v23[3] = (float)v14;
LABEL_9:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v23);
      return RenderBounds;
    }
    v21 = 0LL;
    v22 = 0;
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v21);
    RenderBounds = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WindowClipShape, 0x6C6u);
    }
    else
    {
      TightBounds = CShapePtr::GetTightBounds(&v21);
      RenderBounds = TightBounds;
      if ( TightBounds >= 0 )
      {
        CShapePtr::Release(&v21);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x6C8u);
    }
    CShapePtr::Release(&v21);
  }
  return RenderBounds;
}
