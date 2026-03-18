/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180024DB0
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022460 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022CC0 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x180022D50 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180025960 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(CSpriteVisualContent *this, __int64 a2, _DWORD *a3, float *a4)
{
  unsigned int v5; // edi
  __int64 (*v9)(void); // rax
  char IsEmptyDrawing; // al
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *, __int64); // rax
  int Bounds; // eax
  CSpriteVisualContent *v14; // rcx
  __int64 (__fastcall *v15)(CSpriteVisualContent *); // rax
  int v16; // eax
  float v18; // [rsp+30h] [rbp-48h] BYREF
  float v19; // [rsp+34h] [rbp-44h]
  float v20; // [rsp+38h] [rbp-40h]
  float v21; // [rsp+3Ch] [rbp-3Ch]

  v5 = 0;
  v9 = *(__int64 (**)(void))(*(_QWORD *)this + 192LL);
  if ( (char *)v9 == (char *)CSpriteVisualContent::IsEmptyDrawing )
    IsEmptyDrawing = CSpriteVisualContent::IsEmptyDrawing(this);
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
    v11 = *((_QWORD *)this + 11);
    v12 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v11 + 168LL);
    if ( v12 == CSpriteVisualContent::GetBounds )
      Bounds = CSpriteVisualContent::GetBounds(v11, a2, a3, (__int64)a4);
    else
      Bounds = v12(v11, a2, a3, (__int64)a4);
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x4Fu);
    }
    else
    {
      v14 = (CSpriteVisualContent *)*((_QWORD *)this + 10);
      if ( v14 )
      {
        v15 = *(__int64 (__fastcall **)(CSpriteVisualContent *))(*(_QWORD *)v14 + 168LL);
        if ( v15 == CSurfaceBrush::GetBounds )
          v16 = CSurfaceBrush::GetBounds(v14);
        else
          v16 = ((__int64 (__fastcall *)(CSpriteVisualContent *, __int64, _DWORD *, float *))v15)(v14, a2, a3, &v18);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x54u);
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
