/*
 * XREFs of ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801B9118
 * Callers:
 *     ?EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ @ 0x1801B923C (-EnsureHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@IEAAJXZ.c)
 *     ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B97A0 (-Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializ.c)
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180021A78 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
        CHDRConversionRenderTarget *this,
        enum DXGI_ALPHA_MODE a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  char v5; // al
  signed int RenderTargetBitmap; // eax
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  void (__fastcall ***v10)(_QWORD); // rbx
  const char *v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  _DWORD v14[4]; // [rsp+50h] [rbp-28h] BYREF

  v14[0] = 10;
  v12 = "HDR intermediate target bitmap";
  v2 = (_QWORD *)((char *)this + 568);
  v3 = *(_QWORD *)this;
  v14[1] = a2;
  v14[2] = 1;
  v13 = 30;
  v5 = (*(__int64 (__fastcall **)(CHDRConversionRenderTarget *))(v3 + 152))(this);
  RenderTargetBitmap = CD3DDeviceLevel1::CreateRenderTargetBitmap(
                         *((_QWORD *)this + 25),
                         (__int64)&v12,
                         *((_DWORD *)this + 60),
                         *((_DWORD *)this + 61),
                         *((_DWORD *)this + 29),
                         (__int64)v14,
                         v5,
                         v2);
  v7 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RenderTargetBitmap, 0x2E7u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 104LL))(*v2);
    v9 = *((_QWORD *)this + 23);
    v10 = (void (__fastcall ***)(_QWORD))v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *((_QWORD *)this + 23) = v10;
    if ( v10 )
      (**v10)(v10);
  }
  return v7;
}
