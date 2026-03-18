/*
 * XREFs of ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180048820
 * Callers:
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 * Callees:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180046F60 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNee.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ??$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z @ 0x18004B1C0 (--$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        struct ID2D1Bitmap1 **a5)
{
  struct ID2D1Bitmap1 **v5; // r14
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax
  int D2DBitmap; // eax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v17 = 0LL;
  *a5 = 0LL;
  v9 = CCachedVisualImage::EnsureRenderTargetBitmap(a1 - 80, *(_QWORD *)a2, *(_DWORD *)(a2 + 8), &v17);
  v11 = v17;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, v9, 0x7BAu);
  }
  else if ( v17 )
  {
    v13 = v17 + 104;
    LOBYTE(v10) = a4;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(v17 + 104) + 112LL);
    if ( (char *)v14 == (char *)CRenderTargetBitmap::GetD2DBitmap )
      D2DBitmap = CRenderTargetBitmap::GetD2DBitmap(v13, (_QWORD *)a2, a3, v10, v5);
    else
      D2DBitmap = v14(v13, a2, a3, v10);
    v12 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, D2DBitmap, 0x7C5u);
  }
  ReleaseInterfaceNoNULL<CRenderTargetBitmap>(v11);
  return v12;
}
