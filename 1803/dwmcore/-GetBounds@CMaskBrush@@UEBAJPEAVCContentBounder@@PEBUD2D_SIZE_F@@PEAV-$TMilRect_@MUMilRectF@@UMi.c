/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800990E0
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DBF0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099D20 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009D360 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 (*v10)(void); // rax
  int Bounds; // eax
  CSurfaceBrush *v12; // rcx
  __int64 (__fastcall *v13)(CSurfaceBrush *); // rax
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v20; // [rsp+30h] [rbp-48h] BYREF
  float v21; // [rsp+34h] [rbp-44h]
  float v22; // [rsp+38h] [rbp-40h]
  float v23; // [rsp+3Ch] [rbp-3Ch]

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
  {
    v10 = *(__int64 (**)(void))(*(_QWORD *)v6 + 168LL);
    if ( v10 == CSpriteVisualContent::GetBounds )
      Bounds = CSpriteVisualContent::GetBounds();
    else
      Bounds = v10();
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x61u);
    }
    else
    {
      v12 = *(CSurfaceBrush **)(a1 + 72);
      if ( v12 )
      {
        v13 = *(__int64 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v12 + 168LL);
        if ( v13 == CSurfaceBrush::GetBounds )
          v14 = CSurfaceBrush::GetBounds(v12);
        else
          v14 = ((__int64 (__fastcall *)(CSurfaceBrush *, __int64, __int64, float *))v13)(v12, a2, a3, &v20);
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x66u);
        }
        else
        {
          if ( v20 > *a4 )
            *a4 = v20;
          if ( v21 > a4[1] )
            a4[1] = v21;
          v15 = a4[2];
          v16 = v22;
          if ( v15 > v22 )
          {
            a4[2] = v22;
            v15 = v16;
          }
          v17 = a4[3];
          v18 = v23;
          if ( v17 > v23 )
          {
            a4[3] = v23;
            v17 = v18;
            v15 = a4[2];
          }
          if ( v15 <= *a4 || v17 <= a4[1] )
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
  else
  {
    a4[3] = 0.0;
    a4[2] = 0.0;
    a4[1] = 0.0;
    *a4 = 0.0;
  }
  return v5;
}
