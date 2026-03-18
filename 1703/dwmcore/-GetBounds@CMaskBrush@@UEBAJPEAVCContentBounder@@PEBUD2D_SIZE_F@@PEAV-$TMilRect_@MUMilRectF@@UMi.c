/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800398E0
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008C840 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038CC0 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18008CA40 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008D480 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(CSurfaceBrush **this, __int64 a2, const struct D2D_SIZE_F *a3, float *a4)
{
  unsigned int v5; // edi
  __int64 (*v9)(void); // rax
  char IsEmptyDrawing; // al
  CSurfaceBrush *v11; // rcx
  __int64 (__fastcall *v12)(CSurfaceBrush *, __int64, const struct D2D_SIZE_F *, float *); // rax
  int Bounds; // eax
  CSurfaceBrush *v14; // rcx
  __int64 (__fastcall *v15)(CSurfaceBrush *, __int64, const struct D2D_SIZE_F *, float *); // rax
  int v16; // eax
  float v18; // [rsp+30h] [rbp-48h] BYREF
  float v19; // [rsp+34h] [rbp-44h]
  float v20; // [rsp+38h] [rbp-40h]
  float v21; // [rsp+3Ch] [rbp-3Ch]

  v5 = 0;
  v9 = (__int64 (*)(void))*((_QWORD *)*this + 22);
  if ( (char *)v9 == (char *)CSpriteVisualContent::IsEmptyDrawing )
    IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing((CSpriteVisualContent *)this);
  else
    IsEmptyDrawing = v9();
  if ( IsEmptyDrawing )
  {
    a4[3] = 0.0;
    a4[2] = 0.0;
    a4[1] = 0.0;
    *a4 = 0.0;
  }
  else
  {
    v11 = this[11];
    v12 = *(__int64 (__fastcall **)(CSurfaceBrush *, __int64, const struct D2D_SIZE_F *, float *))(*(_QWORD *)v11 + 152LL);
    if ( (char *)v12 == (char *)CSpriteVisualContent::GetBounds )
      Bounds = CSpriteVisualContent::GetBounds(v11, a2, a3, a4);
    else
      Bounds = v12(v11, a2, a3, a4);
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x4Fu);
    }
    else
    {
      v14 = this[10];
      if ( v14 )
      {
        v15 = *(__int64 (__fastcall **)(CSurfaceBrush *, __int64, const struct D2D_SIZE_F *, float *))(*(_QWORD *)v14 + 152LL);
        if ( (char *)v15 == (char *)CSurfaceBrush::GetBounds )
          v16 = CSurfaceBrush::GetBounds(v14, a2, a3, &v18);
        else
          v16 = v15(v14, a2, a3, &v18);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x54u);
        }
        else
        {
          if ( v18 > *a4 )
            *a4 = v18;
          if ( v19 > a4[1] )
            a4[1] = v19;
          if ( a4[2] > v20 )
            a4[2] = v20;
          if ( a4[3] > v21 )
            a4[3] = v21;
          if ( a4[2] <= *a4 || a4[3] <= a4[1] )
          {
            a4[3] = 0.0;
            a4[2] = 0.0;
            a4[1] = 0.0;
            *a4 = 0.0;
          }
        }
      }
    }
  }
  return v5;
}
