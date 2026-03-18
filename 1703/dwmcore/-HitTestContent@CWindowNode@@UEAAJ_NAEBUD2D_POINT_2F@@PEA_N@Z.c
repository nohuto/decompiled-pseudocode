/*
 * XREFs of ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180013350 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180013AE8 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?IsPointInRect@CWindowNode@@SA_NAEBUD2D_POINT_2F@@AEBUtagRECT@@@Z @ 0x18001E6E0 (-IsPointInRect@CWindowNode@@SA_NAEBUD2D_POINT_2F@@AEBUtagRECT@@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001EA38 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ShouldHitTest@CWindowNode@@AEBA_NXZ @ 0x18004FEA0 (-ShouldHitTest@CWindowNode@@AEBA_NXZ.c)
 *     ?GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051F5C (-GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180162678 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z @ 0x1801B2C04 (-IsColorKey@CColorKey@@QEBA_NAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::HitTestContent(
        struct D2D_SIZE_F *this,
        char a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v5; // esi
  __int64 v9; // rdx
  CVisual *v10; // rcx
  const struct D2D_POINT_2F *v11; // r8
  bool *v12; // r9
  int v13; // eax
  FLOAT height; // r8d
  FLOAT width; // edx
  LONG v16; // eax
  FLOAT v17; // ecx
  LONG v18; // eax
  CGeometry *v19; // rcx
  struct D2D_SIZE_F v20; // rcx
  int ShapeData; // eax
  int v23; // eax
  struct tagRECT v24; // [rsp+30h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+40h] [rbp-20h] BYREF

  v5 = 0;
  if ( !CWindowNode::ShouldHitTest((CWindowNode *)this) )
  {
    *v12 = 0;
    return v5;
  }
  v13 = CVisual::HitTestContent(v10, v9, v11, v12);
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA79u);
    return v5;
  }
  if ( *a4 )
    return v5;
  height = this[81].height;
  width = this[82].width;
  v16 = LODWORD(this[76].height) - LODWORD(height);
  v24.left = LODWORD(this[75].height) - LODWORD(height);
  v17 = this[76].width;
  v24.right = v16;
  v18 = LODWORD(this[77].width) - LODWORD(width);
  v24.top = LODWORD(v17) - LODWORD(width);
  v24.bottom = v18;
  if ( a2 && (unsigned __int8)CWindowNode::GetTouchTargetBounds(this, &v25) )
    *a4 = IsPointInRect(a3, (const struct MilRectF *)&v25);
  if ( *a4 )
    return v5;
  v19 = (CGeometry *)this[102];
  if ( !v19 )
  {
    *a4 = CWindowNode::IsPointInRect(a3, &v24);
    goto LABEL_8;
  }
  if ( !*((_BYTE *)v19 + 120) )
  {
    *(_QWORD *)&v25.r = 0LL;
    LOBYTE(v25.b) = 0;
    ShapeData = CGeometry::GetShapeData(v19, this + 16, (struct CShapePtr *)&v25);
    v5 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0xA99u);
    }
    else
    {
      v23 = CShape::FillContainsPoint(*(CShape **)&v25.r, a3, a4);
      v5 = v23;
      if ( v23 >= 0 )
      {
        if ( *a4 )
          *a4 = CWindowNode::IsPointInRect(a3, &v24);
        CShapePtr::Release((CShapePtr *)&v25);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xA9Cu);
    }
LABEL_25:
    CShapePtr::Release((CShapePtr *)&v25);
    return v5;
  }
LABEL_8:
  if ( !*a4 )
    goto LABEL_32;
  v20 = this[95];
  if ( *(_QWORD *)&v20
    && (LOBYTE(this[109].height) & 0xA) != 0
    && (*(int (__fastcall **)(struct D2D_SIZE_F, const struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(**(_QWORD **)&v20 + 208LL))(
         v20,
         a3,
         &v25) >= 0 )
  {
    if ( (LOBYTE(this[109].height) & 2) != 0 )
      *a4 = !CColorKey::IsColorKey((CColorKey *)&this[103], &v25);
    if ( !*a4 )
      goto LABEL_32;
    if ( (LOBYTE(this[109].height) & 8) != 0 )
      *a4 = v25.a > 0.0;
  }
  if ( *a4 )
    return v5;
LABEL_32:
  if ( *(_QWORD *)&this[115] || *(_QWORD *)&this[112] )
  {
    *(_QWORD *)&v25.r = 0LL;
    LOBYTE(v25.b) = 0;
    CWindowNode::GetDxClipShapeForHitTest((CWindowNode *)this, (struct CShapePtr *)&v25);
    if ( *(_QWORD *)&v25.r )
      CShape::FillContainsPoint(*(CShape **)&v25.r, a3, a4);
    else
      *a4 = CWindowNode::IsPointInRect(a3, &v24);
    goto LABEL_25;
  }
  return v5;
}
