/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038CC0
 * Callers:
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800398E0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008C840 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(CSurfaceBrush *this, __int64 a2, const struct D2D_SIZE_F *a3, _DWORD *a4)
{
  char v4; // r14
  CRectanglesShape *v6; // rcx
  unsigned int v7; // edi
  bool (__fastcall *v10)(CSpriteVisualContent *__hidden); // rax
  bool IsEmptyDrawing; // al
  char v12; // si
  CRectanglesShape **v13; // r15
  struct CShape *v14; // r14
  struct CShape *v15; // r8
  __int64 (__fastcall *v16)(CRectanglesShape *, _DWORD *, _QWORD); // rax
  int TightBounds; // eax
  void *(__fastcall *v18)(CRectanglesShape *__hidden, unsigned int); // rax
  CRectanglesShape *v20; // rcx
  void *(__fastcall *v21)(CRectanglesShape *__hidden, unsigned int); // rax
  CRectanglesShape *v22; // [rsp+30h] [rbp-50h] BYREF
  CRectanglesShape **v23; // [rsp+38h] [rbp-48h]
  struct CShape *v24; // [rsp+40h] [rbp-40h] BYREF
  char v25; // [rsp+48h] [rbp-38h]
  char v26[40]; // [rsp+50h] [rbp-30h] BYREF

  v4 = 0;
  v6 = 0LL;
  v7 = 0;
  v22 = 0LL;
  if ( !a3 || a3->width <= 0.0 || a3->height <= 0.0 )
    goto LABEL_25;
  v10 = *(bool (__fastcall **)(CSpriteVisualContent *__hidden))(*(_QWORD *)this + 176LL);
  if ( v10 == CSpriteVisualContent::IsEmptyDrawing )
    IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing(this);
  else
    IsEmptyDrawing = v10(this);
  if ( IsEmptyDrawing
    || (v24 = 0LL,
        v23 = &v22,
        v25 = 1,
        v4 = 1,
        (int)CSurfaceBrush::ComputeLayout(this, a3, 0LL, (struct CSurfaceBrush::LayoutData *)v26, &v24) < 0) )
  {
    v6 = v22;
LABEL_25:
    v12 = 0;
    goto LABEL_9;
  }
  v6 = v22;
  v12 = 1;
LABEL_9:
  if ( (v4 & 1) != 0 )
  {
    if ( v25 )
    {
      v13 = v23;
      v14 = v24;
      v15 = *v23;
      if ( v24 != *v23 )
      {
        if ( v15 )
        {
          v20 = *v23;
          v21 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v15;
          if ( v21 == CRectanglesShape::`scalar deleting destructor' )
            CRectanglesShape::`scalar deleting destructor'(v20, 1u);
          else
            v21(v20, 1u);
        }
        *v13 = v14;
        v6 = v22;
      }
    }
  }
  if ( v12 )
  {
    v16 = *(__int64 (__fastcall **)(CRectanglesShape *, _DWORD *, _QWORD))(*(_QWORD *)v6 + 32LL);
    if ( (char *)v16 == (char *)CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds(v6, a4, 0LL);
    else
      TightBounds = v16(v6, a4, 0LL);
    v7 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x139u);
    v6 = v22;
  }
  else
  {
    a4[3] = 0;
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  if ( v6 )
  {
    v18 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v6;
    if ( v18 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v6, 1u);
    else
      v18(v6, 1u);
  }
  return v7;
}
