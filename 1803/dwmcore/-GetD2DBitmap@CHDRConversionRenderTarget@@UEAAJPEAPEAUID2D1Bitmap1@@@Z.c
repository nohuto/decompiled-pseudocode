/*
 * XREFs of ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801F2B30
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@WNI@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800DE290 (-GetD2DBitmap@CHDRConversionRenderTarget@@WNI@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801F2A6C (-EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::GetD2DBitmap(CHDRConversionRenderTarget *this, struct ID2D1Bitmap1 **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CHDRConversionRenderTarget::EnsureHDRIntermediateTargetBitmap(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x52u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 76) + 88LL))(
           *((_QWORD *)this + 76),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x54u);
  }
  return v5;
}
