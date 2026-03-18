/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800480B0
 * Callers:
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18004765C (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180047764 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A8680 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5DF0 (-GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180048068 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B6B98 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x18012B740 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, bool a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v7; // r14
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 v10; // r14
  int Bounds; // eax
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-40h]
  float v18; // [rsp+30h] [rbp-30h] BYREF
  float v19; // [rsp+34h] [rbp-2Ch] BYREF
  float v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 315) )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 336);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 316) )
  {
    v7 = *(_QWORD *)(a1 + 120);
    v21 = *(_OWORD *)(a1 + 104);
    if ( v7 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 55LL) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
        v17 = 439;
LABEL_26:
        v4 = -2147024809;
        v16 = -2147024809;
        goto LABEL_27;
      }
      v21 = *(_OWORD *)(v7 + 56);
    }
    v8 = *(double *)&v21;
    if ( *(double *)&v21 != 0.0 )
    {
      v9 = *((double *)&v21 + 1);
      goto LABEL_8;
    }
    v9 = *((double *)&v21 + 1);
    if ( *((double *)&v21 + 1) != 0.0 )
    {
LABEL_8:
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      *(float *)(a4 + 8) = v8;
      *(float *)(a4 + 12) = v9;
      return v4;
    }
    v10 = *(_QWORD *)(a1 + 96);
    v21 = *(_OWORD *)(a1 + 80);
    if ( !v10 )
    {
LABEL_7:
      v8 = (float)(*((float *)&v21 + 2) - *(float *)&v21);
      v9 = (float)(*((float *)&v21 + 3) - *((float *)&v21 + 1));
      goto LABEL_8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 54LL) )
    {
      v21 = *(_OWORD *)(v10 + 56);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v17 = 450;
    goto LABEL_26;
  }
  if ( !*(_QWORD *)(a1 + 128) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
    return v4;
  }
  Bounds = CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)(a1 - 8), a2, a3);
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v17 = 409;
    goto LABEL_24;
  }
  Bounds = CVisualTree::GetBounds(*(_QWORD *)(a1 + 168), &v21);
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v17 = 411;
LABEL_24:
    v16 = Bounds;
LABEL_27:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    return v4;
  }
  *(_OWORD *)a4 = v21;
  if ( *(_BYTE *)(a1 + 314) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 128), &v19, &v18, &v20) )
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
