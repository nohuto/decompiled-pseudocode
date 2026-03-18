/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180091AB0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18002813C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180049F10 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18004CCB4 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18008FE20 (-ShouldHitTest@CWindowNode@@MEBA_NXZ.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800C3038 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x1801A9AE4 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x18020F824 (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  unsigned int v9; // esi
  int v10; // ecx
  float v11; // xmm8_4
  __m128i v12; // xmm9
  unsigned int v13; // eax
  float v14; // xmm9_4
  __m128i v15; // xmm7
  int v16; // eax
  CGeometry *v17; // rcx
  float v18; // xmm7_4
  float v19; // xmm6_4
  const struct MilRectF *TouchTargetBounds; // rax
  float x; // xmm0_4
  bool v22; // cc
  int ShapeData; // eax
  int v24; // eax
  __int64 v25; // rcx
  bool v26; // al
  struct D2D_POINT_2F v28; // [rsp+38h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v29; // [rsp+40h] [rbp-51h] BYREF
  float v30[4]; // [rsp+50h] [rbp-41h] BYREF
  __m128 v31; // [rsp+60h] [rbp-31h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x786u);
    return v9;
  }
  if ( !CWindowNode::ShouldHitTest(this) || *a4 )
    return v9;
  v10 = *((_DWORD *)this + 173);
  v11 = (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 172));
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 161) - v10);
  v13 = *((_DWORD *)this + 162) - *((_DWORD *)this + 172);
  v30[0] = v11;
  LODWORD(v14) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v15 = _mm_cvtsi32_si128(v13);
  v16 = *((_DWORD *)this + 163) - v10;
  v30[1] = v14;
  v17 = (CGeometry *)*((_QWORD *)this + 97);
  LODWORD(v18) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v30[2] = v18;
  v19 = (float)v16;
  v30[3] = (float)v16;
  if ( !v17 )
  {
    *a4 = IsPointInRect(a3, (const struct MilRectF *)v30);
    goto LABEL_6;
  }
  if ( !*((_BYTE *)v17 + 152) )
  {
    *(_QWORD *)&v29.r = 0LL;
    LOBYTE(v29.b) = 0;
    ShapeData = CGeometry::GetShapeData(v17, (const struct D2D_SIZE_F *)((char *)this + 132), (CRectanglesShape **)&v29);
    v9 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x79Fu);
    }
    else
    {
      v24 = CShapePtr::FillContainsPoint((CShape **)&v29, a3, a4);
      v9 = v24;
      if ( v24 >= 0 )
      {
        if ( *a4 )
          *a4 = IsPointInRect(a3, (const struct MilRectF *)v30);
        CShapePtr::Release((CRectanglesShape **)&v29);
        goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x7A2u);
    }
LABEL_19:
    CShapePtr::Release((CRectanglesShape **)&v29);
    return v9;
  }
LABEL_6:
  v28 = *a3;
  if ( !*a4 )
  {
    if ( a2 )
    {
      TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds((__int64)this, &v31);
      if ( IsPointInRect(a3, TouchTargetBounds) )
      {
        x = v28.x;
        v22 = v11 <= v28.x;
        *a4 = 1;
        if ( v22 )
        {
          if ( x >= v18 )
            v28.x = v18 - 1.0;
        }
        else
        {
          v28.x = v11;
        }
        if ( v14 > v28.y )
        {
          v28.y = v14;
          goto LABEL_27;
        }
        if ( v28.y < v19 )
          goto LABEL_27;
        v28.y = v19 - 1.0;
      }
    }
    if ( !*a4 )
    {
LABEL_39:
      if ( !*((_QWORD *)this + 108) )
        return v9;
      *(_QWORD *)&v29.r = 0LL;
      LOBYTE(v29.b) = 0;
      CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v29);
      if ( *(_QWORD *)&v29.r )
        CShapePtr::FillContainsPoint((CShape **)&v29, a3, a4);
      else
        *a4 = IsPointInRect(a3, (const struct MilRectF *)v30);
      goto LABEL_19;
    }
  }
LABEL_27:
  v25 = *((_QWORD *)this + 90);
  if ( v25
    && (*((_BYTE *)this + 836) & 0xA) != 0
    && (*(int (__fastcall **)(__int64, struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(*(_QWORD *)v25 + 224LL))(
         v25,
         &v28,
         &v29) >= 0 )
  {
    if ( (*((_BYTE *)this + 836) & 2) != 0 )
    {
      if ( *((_BYTE *)this + 922) )
      {
        v31.m128_u64[0] = __PAIR64__(LODWORD(v29.g), LODWORD(v29.b));
        v31.m128_u64[1] = __PAIR64__(LODWORD(v29.a), LODWORD(v29.r));
        v29.r = v29.b;
        LODWORD(v29.a) = _mm_shuffle_ps(v31, v31, 255).m128_u32[0];
        LODWORD(v29.g) = _mm_shuffle_ps(v31, v31, 85).m128_u32[0];
        LODWORD(v29.b) = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
      }
      v26 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 784), &v29);
      *a4 = v26;
    }
    else
    {
      v26 = *a4;
    }
    if ( v26 && (*((_BYTE *)this + 836) & 8) != 0 )
      *a4 = v29.a > 0.0;
  }
  if ( !*a4 )
    goto LABEL_39;
  return v9;
}
