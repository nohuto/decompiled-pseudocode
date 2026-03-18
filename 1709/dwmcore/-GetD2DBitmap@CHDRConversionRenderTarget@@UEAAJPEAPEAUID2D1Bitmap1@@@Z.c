/*
 * XREFs of ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B92C0
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800C6C10 (-GetD2DBitmap@CHDRConversionRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801B923C (-EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::GetD2DBitmap(CHDRConversionRenderTarget *this, struct ID2D1Bitmap1 **a2)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax

  v4 = CHDRConversionRenderTarget::EnsureHDRIntermediateTargetBitmap(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x52u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 71) + 96LL))(
           *((_QWORD *)this + 71),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x54u);
  }
  return v5;
}
