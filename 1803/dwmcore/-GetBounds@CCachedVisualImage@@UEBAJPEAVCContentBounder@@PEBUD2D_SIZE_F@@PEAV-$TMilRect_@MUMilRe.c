/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0
 * Callers:
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18001C4A4 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x1800B414C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800B41FC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DDB70 (-GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800412BC (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800B4B70 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18013C8CC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  double *v7; // rsi
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 v10; // rsi
  int Bounds; // eax
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  float v18; // [rsp+30h] [rbp-30h] BYREF
  float v19; // [rsp+34h] [rbp-2Ch] BYREF
  float v20; // [rsp+38h] [rbp-28h] BYREF
  float v21[6]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 370) )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 392);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 371) )
  {
    v7 = *(double **)(a1 + 176);
    v8 = *(double *)(a1 + 160);
    v9 = *(double *)(a1 + 168);
    if ( v7 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v7 + 48LL))(*(_QWORD *)(a1 + 176), 132LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
        v17 = 452;
LABEL_25:
        v4 = -2147024809;
        v16 = -2147024809;
        goto LABEL_26;
      }
      v8 = v7[7];
      v9 = v7[8];
    }
    if ( v8 != 0.0 || v9 != 0.0 )
      goto LABEL_8;
    v10 = *(_QWORD *)(a1 + 152);
    *(_OWORD *)v21 = *(_OWORD *)(a1 + 136);
    if ( !v10 )
    {
LABEL_7:
      v8 = (float)(v21[2] - v21[0]);
      v9 = (float)(v21[3] - v21[1]);
LABEL_8:
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      v4 = 0;
      *(float *)(a4 + 8) = v8;
      *(float *)(a4 + 12) = v9;
      return v4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 117LL) )
    {
      *(_OWORD *)v21 = *(_OWORD *)(v10 + 56);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
    v17 = 463;
    goto LABEL_25;
  }
  if ( !*(_QWORD *)(a1 + 184) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
    return v4;
  }
  Bounds = CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)(a1 - 8));
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v17 = 422;
    goto LABEL_23;
  }
  Bounds = CVisualTree::GetBounds(*(struct CVisualTree **)(a1 + 224), (__int64)v21);
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v17 = 424;
LABEL_23:
    v16 = Bounds;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17);
    return v4;
  }
  *(_OWORD *)a4 = *(_OWORD *)v21;
  if ( *(_BYTE *)(a1 + 369) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 184), &v19, &v18, &v20) )
  {
    v13 = COERCE_FLOAT(LODWORD(v18) ^ _xmm) + *(float *)(a4 + 12);
    v14 = COERCE_FLOAT(LODWORD(v19) ^ _xmm) + *(float *)a4;
    v15 = COERCE_FLOAT(LODWORD(v19) ^ _xmm) + *(float *)(a4 + 8);
    *(float *)(a4 + 4) = COERCE_FLOAT(LODWORD(v18) ^ _xmm) + *(float *)(a4 + 4);
    *(float *)(a4 + 12) = v13;
    *(float *)a4 = v14;
    *(float *)(a4 + 8) = v15;
  }
  return v4;
}
