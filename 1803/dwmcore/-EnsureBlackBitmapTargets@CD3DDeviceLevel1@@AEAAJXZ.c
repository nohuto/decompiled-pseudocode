/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000D4F0
 * Callers:
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180007D10 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000DE94 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180013600 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800765E0 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBlackBitmapTargets(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx
  char *v2; // rsi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v7; // [rsp+20h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  const char *v9; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-20h]
  _BYTE v11[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (char *)this + 856;
  if ( !*((_QWORD *)this + 107) )
  {
    v8 = 0LL;
    v4 = PixelFormatInfoFromDXGIFormatAndAlphaMode(
           DXGI_FORMAT_B8G8R8A8_UNORM,
           DXGI_ALPHA_MODE_PREMULTIPLIED,
           (struct PixelFormatInfo *)v11);
    v1 = v4;
    if ( v4 < 0 )
    {
      v7 = 1226;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
      v10 = 22;
      v9 = "DWM stock black bitmap";
      v4 = CD3DDeviceLevel1::CreateRenderTargetBitmap(this, &v9, 1LL);
      v1 = v4;
      if ( v4 >= 0 )
      {
        v5 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 112LL))(v8) + 192);
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, void *))(**((_QWORD **)this + 82) + 400LL))(
            *((_QWORD *)this + 82),
            v5,
            &unk_18024FF28);
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(v2, &v8);
        }
        else
        {
          v1 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x4D6u);
        }
        goto LABEL_6;
      }
      v7 = 1234;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v7);
LABEL_6:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
  }
  return v1;
}
