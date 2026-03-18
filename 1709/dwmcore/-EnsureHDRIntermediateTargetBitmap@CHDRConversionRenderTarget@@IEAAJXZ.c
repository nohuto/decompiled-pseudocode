/*
 * XREFs of ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801B923C
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B92C0 (-GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801B9118 (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::EnsureHDRIntermediateTargetBitmap(CHDRConversionRenderTarget *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  signed int HDRIntermediateTargetBitmap; // eax
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 71) )
  {
    v3 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _BYTE *))(*(_QWORD *)this + 24LL))(this, v6);
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*(_DWORD *)(v3 + 4));
    v1 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, HDRIntermediateTargetBitmap, 0x2F6u);
  }
  return v1;
}
