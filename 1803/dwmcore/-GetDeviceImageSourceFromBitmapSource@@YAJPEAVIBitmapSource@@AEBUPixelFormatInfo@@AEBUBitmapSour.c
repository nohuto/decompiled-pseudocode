/*
 * XREFs of ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70
 * Callers:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800678EC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180214100 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180089958 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801C6138 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801E6CC4 (-GetImageSourceWrapperNoRef@CHwTexturedColorSource@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1801E6D84 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 */

__int64 __fastcall GetDeviceImageSourceFromBitmapSource(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        struct IImageSource **a4)
{
  int ExistingDevice; // eax
  int v7; // edi
  int v8; // eax
  CHwTexturedColorSource *v9; // rbx
  int ImageSourceWrapperNoRef; // eax
  __int64 v11; // rax
  CHwTexturedColorSource *v13; // [rsp+40h] [rbp-10h] BYREF
  struct CD3DDeviceLevel1 *v14; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v14);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     *(struct _LUID *)a3,
                     &v14);
  v15 = ExistingDevice;
  v7 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ExistingDevice, 0x2AAu);
  }
  else
  {
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
    v8 = CHwTexturedColorSource::RealizeFromBitmapSource(v14, *((_DWORD *)a3 + 4), *((_QWORD *)a3 + 3), (__int64)&v13);
    v15 = v8;
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2B3u);
    }
    else
    {
      v9 = v13;
      ImageSourceWrapperNoRef = CHwTexturedColorSource::GetImageSourceWrapperNoRef(v13, a4);
      v15 = ImageSourceWrapperNoRef;
      v7 = ImageSourceWrapperNoRef;
      if ( ImageSourceWrapperNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ImageSourceWrapperNoRef, 0x2B5u);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
        if ( g_LockAndReadTexture )
        {
          v11 = (*(__int64 (__fastcall **)(CHwTexturedColorSource *))(*(_QWORD *)v9 + 56LL))(v9);
          DebugInspectTexture(*(struct ID3D11Texture2D **)(v11 + 120), 0);
        }
      }
    }
  }
  TranslateDXGIorD3DErrorInContext(v7, 0, &v15);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v14);
  return v15;
}
