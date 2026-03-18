/*
 * XREFs of ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801F2948
 * Callers:
 *     ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801F2A6C (-EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F3010 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800765E0 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C8A00 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
        CHDRConversionRenderTarget *this,
        enum DXGI_ALPHA_MODE a2)
{
  __int64 **v2; // r14
  __int64 v3; // rax
  char v5; // al
  int RenderTargetBitmap; // eax
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD); // rax
  const char *v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  _DWORD v13[4]; // [rsp+50h] [rbp-38h] BYREF

  v13[0] = 10;
  v11 = "HDR intermediate target bitmap";
  v2 = (__int64 **)((char *)this + 608);
  v3 = *(_QWORD *)this;
  v13[1] = a2;
  v13[2] = 1;
  v12 = 30;
  v5 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *))(v3 + 160))(this);
  RenderTargetBitmap = CD3DDeviceLevel1::CreateRenderTargetBitmap(
                         *((_QWORD *)this + 28),
                         (__int64)&v11,
                         *((_DWORD *)this + 64),
                         *((_DWORD *)this + 65),
                         *((_DWORD *)this + 29),
                         (__int64)v13,
                         v5,
                         v2);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetBitmap, 0x2FFu);
  }
  else
  {
    v8 = **v2;
    (*(void (__fastcall **)(CHDRConversionRenderTarget *))(*(_QWORD *)this + 168LL))(this);
    (*(void (__fastcall **)(__int64 *))(v8 + 176))(*v2);
    v9 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(**v2 + 112))(*v2);
    ReplaceInterface<CRegionWrapper,CRegionWrapper>((__int64 *)this + 25, v9);
  }
  return v7;
}
