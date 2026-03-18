/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801A709C
 * Callers:
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801A78CC (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180021A78 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18008893C (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x1800C0CCC (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBlackBitmapTargets(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  signed int v4; // eax
  __int64 v5; // rdx
  unsigned int v7; // [rsp+20h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  const char *v9; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-20h]
  _BYTE v11[16]; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 856);
  if ( !*((_QWORD *)this + 107) )
  {
    v8 = 0LL;
    v4 = PixelFormatInfoFromDXGIFormatAndAlphaMode(87, DXGI_ALPHA_MODE_PREMULTIPLIED, (struct PixelFormatInfo *)v11);
    v1 = v4;
    if ( v4 < 0 )
    {
      v7 = 1205;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
      v10 = 22;
      v9 = "DWM stock black bitmap";
      v4 = CD3DDeviceLevel1::CreateRenderTargetBitmap(
             (__int64)this,
             (__int64)&v9,
             1u,
             1u,
             DisplayId::None,
             (__int64)v11,
             0,
             &v8);
      v1 = v4;
      if ( v4 >= 0 )
      {
        v5 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 104LL))(v8) + 192);
        if ( v5 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 82) + 400LL))(
            *((_QWORD *)this + 82),
            v5,
            &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(v2, &v8);
        }
        else
        {
          v1 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x4C1u);
        }
        goto LABEL_10;
      }
      v7 = 1213;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v7);
LABEL_10:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v8);
  }
  return v1;
}
