/*
 * XREFs of ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801F2A6C
 * Callers:
 *     ?GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801F2B30 (-GetD2DBitmap@CHDRConversionRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801F2948 (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::EnsureHDRIntermediateTargetBitmap(CHDRConversionRenderTarget *this)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  int HDRIntermediateTargetBitmap; // eax
  __int64 v5; // rbx
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 76) )
  {
    v3 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *, _BYTE *))(*(_QWORD *)this + 24LL))(this, v7);
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*(_DWORD *)(v3 + 4));
    v1 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HDRIntermediateTargetBitmap, 0x311u);
  }
  v5 = **((_QWORD **)this + 76);
  (*(void (__fastcall **)(CHDRConversionRenderTarget *))(*(_QWORD *)this + 168LL))(this);
  (*(void (__fastcall **)(_QWORD))(v5 + 176))(*((_QWORD *)this + 76));
  return v1;
}
