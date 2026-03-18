/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180196644
 * Callers:
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180196D10 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180023B5C (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180079250 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBlackBitmapTargets(CD3DDeviceLevel1 *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  const char *v5; // rsi
  unsigned int v7; // [rsp+20h] [rbp-50h]
  const char *v8; // [rsp+40h] [rbp-30h] BYREF
  const char *v9; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-20h]
  _BYTE v11[16]; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 105) )
  {
    v8 = 0LL;
    v3 = PixelFormatInfoFromDXGIFormatAndAlphaMode(
           DXGI_FORMAT_B8G8R8A8_UNORM,
           DXGI_ALPHA_MODE_PREMULTIPLIED,
           (struct PixelFormatInfo *)v11);
    v2 = v3;
    if ( v3 < 0 )
    {
      v7 = 1294;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v8);
      v10 = 22;
      v9 = "DWM stock black bitmap";
      v3 = CD3DDeviceLevel1::CreateRenderTargetBitmap(
             (__int64)this,
             (__int64)&v9,
             1u,
             1u,
             DisplayId::None,
             (__int64)v11,
             0,
             &v8);
      v2 = v3;
      if ( v3 >= 0 )
      {
        v4 = *(_QWORD *)((*(__int64 (__fastcall **)(const char *))(*(_QWORD *)v8 + 120LL))(v8) + 200);
        if ( v4 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 81) + 400LL))(
            *((_QWORD *)this + 81),
            v4,
            &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
          v5 = v8;
          if ( *((const char **)this + 105) != v8 )
          {
            v9 = v8;
            Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v9);
            v9 = (const char *)*((_QWORD *)this + 105);
            *((_QWORD *)this + 105) = v5;
            Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v9);
          }
        }
        else
        {
          v2 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x51Au);
        }
        goto LABEL_11;
      }
      v7 = 1302;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v7);
LABEL_11:
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v8);
  }
  return v2;
}
