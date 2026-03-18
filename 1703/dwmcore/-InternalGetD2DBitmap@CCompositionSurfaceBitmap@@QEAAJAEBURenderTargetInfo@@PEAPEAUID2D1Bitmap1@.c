/*
 * XREFs of ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000A8F8
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000B360 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 * Callees:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000B470 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180037200 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::InternalGetD2DBitmap(
        CCompositionSurfaceBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, const struct RenderTargetInfo *, _QWORD, __int64, struct ID2D1Bitmap1 **); // rax
  int D2DBitmap; // eax
  unsigned int v10; // ebx

  *a3 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 0) )
  {
    LOBYTE(v6) = *((_BYTE *)this + 522);
    v7 = *((_QWORD *)this + 59) + 104LL;
    v8 = *(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v7 + 112LL);
    if ( (char *)v8 == (char *)CDxHandleBitmapRealization::GetD2DBitmap )
      D2DBitmap = CDxHandleBitmapRealization::GetD2DBitmap(v7, a2, 0LL, v6, a3);
    else
      D2DBitmap = v8(v7, a2, 0LL, v6, a3);
    v10 = D2DBitmap;
    if ( D2DBitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x52u);
  }
  else
  {
    v10 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x56u);
  }
  return v10;
}
