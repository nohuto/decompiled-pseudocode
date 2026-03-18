/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A8680
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1800A7630 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x18017BB50 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800480B0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A79A4 (-DrawBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4Fl.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct IBitmapResource *a2, int a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v7)(__int64, __int64, bool, __int64); // rax
  int Bounds; // eax
  unsigned int v9; // edi
  int v10; // eax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+40h] [rbp-58h]
  struct IBitmapSource *v15; // [rsp+60h] [rbp-38h] BYREF
  __int128 v16; // [rsp+68h] [rbp-30h] BYREF

  v3 = *(_QWORD *)a2;
  v15 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, bool, __int64))(v3 + 112);
  if ( v7 == CCachedVisualImage::GetBounds )
    Bounds = CCachedVisualImage::GetBounds((__int64)a2, 0LL, 0, (__int64)&v16);
  else
    Bounds = v7((__int64)a2, 0LL, 0, (__int64)&v16);
  v9 = Bounds;
  if ( Bounds < 0 )
  {
    v13 = 1749;
    v12 = Bounds;
    goto LABEL_14;
  }
  v9 = CDrawingContext::DrawBitmapWithPartialOcclusion(
         this,
         a2,
         (struct MilRectF *)&v16,
         (struct MilRectF *)&v16,
         1.0,
         *((_DWORD *)this + 1674),
         *((_DWORD *)this + 67),
         a3,
         v14,
         0,
         0LL);
  if ( v9 != -2147467261 )
    goto LABEL_8;
  v10 = CDrawingContext::ImageSourceToBitmapSource(this, a2, 0LL, &v16, &v15);
  v9 = v10;
  if ( v10 < 0 )
  {
    v13 = 1772;
    goto LABEL_12;
  }
  if ( v15 )
  {
    v10 = CDrawingContext::DrawBitmapSource(
            this,
            (__int64)v15,
            (__int64)&v16,
            (float *)&v16,
            *((_DWORD *)this + 1674),
            a3,
            *((_DWORD *)this + 72),
            0LL);
    v9 = v10;
    if ( v10 < 0 )
    {
      v13 = 1781;
LABEL_12:
      v12 = v10;
LABEL_14:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
    }
  }
LABEL_8:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v15);
  return v9;
}
