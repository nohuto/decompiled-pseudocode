/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18009A770
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180054250 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180097FB8 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?ShouldHitTest@CWindowNode@@AEBA_NXZ @ 0x180098C9C (-ShouldHitTest@CWindowNode@@AEBA_NXZ.c)
 *     ?GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A8F0 (-GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsPointInRect@CWindowNode@@SA_NAEBUD2D_POINT_2F@@AEBUtagRECT@@@Z @ 0x1800BC548 (-IsPointInRect@CWindowNode@@SA_NAEBUD2D_POINT_2F@@AEBUtagRECT@@@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800BC75C (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180178C18 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x1801CEFF4 (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v5; // esi
  __int64 v9; // rdx
  CVisual *v10; // rcx
  const struct D2D_POINT_2F *v11; // r8
  bool *v12; // r9
  signed int v13; // eax
  int v14; // r8d
  int v15; // edx
  LONG v16; // eax
  int v17; // ecx
  LONG v18; // eax
  CGeometry *v19; // rcx
  __int64 v20; // rcx
  signed int ShapeData; // eax
  signed int v23; // eax
  struct tagRECT v24; // [rsp+30h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+40h] [rbp-30h] BYREF
  __m128 v26; // [rsp+50h] [rbp-20h] BYREF

  v5 = 0;
  if ( !CWindowNode::ShouldHitTest(this) )
  {
    *v12 = 0;
    return v5;
  }
  v13 = CVisual::HitTestContent(v10, v9, v11, v12);
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xA43u);
    return v5;
  }
  if ( *a4 )
    return v5;
  v14 = *((_DWORD *)this + 170);
  v15 = *((_DWORD *)this + 171);
  v16 = *((_DWORD *)this + 160) - v14;
  v24.left = *((_DWORD *)this + 158) - v14;
  v17 = *((_DWORD *)this + 159);
  v24.right = v16;
  v18 = *((_DWORD *)this + 161) - v15;
  v24.top = v17 - v15;
  v24.bottom = v18;
  if ( a2 && (unsigned __int8)CWindowNode::GetTouchTargetBounds(this, &v26) )
    *a4 = IsPointInRect(a3, (const struct MilRectF *)&v26);
  if ( *a4 )
    return v5;
  v19 = (CGeometry *)*((_QWORD *)this + 105);
  if ( !v19 )
  {
    *a4 = CWindowNode::IsPointInRect(a3, &v24);
    goto LABEL_8;
  }
  if ( !*((_BYTE *)v19 + 120) )
  {
    *(_QWORD *)&v25.r = 0LL;
    LOBYTE(v25.b) = 0;
    ShapeData = CGeometry::GetShapeData(v19, (const struct D2D_SIZE_F *)((char *)this + 132), (struct CShapePtr *)&v25);
    v5 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ShapeData, 0xA63u);
    }
    else
    {
      v23 = CShapePtr::FillContainsPoint((CShape **)&v25, a3, a4);
      v5 = v23;
      if ( v23 >= 0 )
      {
        if ( *a4 )
          *a4 = CWindowNode::IsPointInRect(a3, &v24);
        CShapePtr::Release((CRegionShape **)&v25);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xA66u);
    }
LABEL_28:
    CShapePtr::Release((CRegionShape **)&v25);
    return v5;
  }
LABEL_8:
  if ( !*a4 )
    goto LABEL_19;
  v20 = *((_QWORD *)this + 98);
  if ( v20
    && (*((_BYTE *)this + 900) & 0xA) != 0
    && (*(int (__fastcall **)(__int64, const struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(*(_QWORD *)v20 + 224LL))(
         v20,
         a3,
         &v25) >= 0 )
  {
    if ( (*((_BYTE *)this + 900) & 2) != 0 )
    {
      if ( *((_BYTE *)this + 1018) )
      {
        v26.m128_u64[0] = __PAIR64__(LODWORD(v25.g), LODWORD(v25.b));
        v26.m128_u64[1] = __PAIR64__(LODWORD(v25.a), LODWORD(v25.r));
        v25.r = v25.b;
        LODWORD(v25.a) = _mm_shuffle_ps(v26, v26, 255).m128_u32[0];
        LODWORD(v25.g) = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
        LODWORD(v25.b) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
      }
      *a4 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 848), &v25);
    }
    if ( !*a4 )
      goto LABEL_19;
    if ( (*((_BYTE *)this + 900) & 8) != 0 )
      *a4 = v25.a > 0.0;
  }
  if ( *a4 )
    return v5;
LABEL_19:
  if ( *((_QWORD *)this + 118) || *((_QWORD *)this + 115) )
  {
    *(_QWORD *)&v25.r = 0LL;
    LOBYTE(v25.b) = 0;
    CWindowNode::GetDxClipShapeForHitTest(this, (struct CShapePtr *)&v25);
    if ( *(_QWORD *)&v25.r )
      CShapePtr::FillContainsPoint((CShape **)&v25, a3, a4);
    else
      *a4 = CWindowNode::IsPointInRect(a3, &v24);
    goto LABEL_28;
  }
  return v5;
}
