/*
 * XREFs of ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180186FC0
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180186E54 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18004735C (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::InternalGetD2DBitmap(
        CCompositionSurfaceBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // ebx

  *a3 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 0) )
  {
    LOBYTE(v6) = *((_BYTE *)this + 146);
    v7 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)(*((_QWORD *)this + 12) + 144LL) + 136LL))(
           *((_QWORD *)this + 12) + 144LL,
           a2,
           0LL,
           v6,
           a3);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x52u);
  }
  else
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x56u);
  }
  return v8;
}
