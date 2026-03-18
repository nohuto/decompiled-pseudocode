/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180214100
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180213DF0 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  CDxHandleAdvancedDirectFlipBitmapRealization *v5; // rcx
  int DeviceTexture; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  struct _LUID v11; // rax
  int DeviceImageSourceFromBitmapSource; // eax
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v17[4]; // [rsp+38h] [rbp-38h] BYREF
  struct _LUID v18; // [rsp+48h] [rbp-28h] BYREF
  DWORD LowPart; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+54h] [rbp-1Ch]
  int v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  struct IBitmapSource *v23; // [rsp+90h] [rbp+20h] BYREF
  struct IImageSource *v24; // [rsp+A8h] [rbp+38h] BYREF

  v5 = (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 144);
  if ( *((_OWORD *)v5 + 26) == 0LL )
  {
    DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(this, a2, a3);
    v8 = DeviceTexture;
    if ( DeviceTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTexture, 0xAEu);
  }
  else
  {
    v23 = 0LL;
    v16 = 0LL;
    v24 = 0LL;
    v9 = CDxHandleAdvancedDirectFlipBitmapRealization::EnsureRestoredContent(v5, (__int64)a2);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Au);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **))(**((_QWORD **)this + 34) + 232LL))(
              *((_QWORD *)this + 34),
              &v23);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Cu);
      }
      else if ( v23 )
      {
        v11 = *a2;
        v17[2] = 0;
        v20 = 0;
        v22 = 0LL;
        v18 = v11;
        LowPart = a2[1].LowPart;
        v17[0] = 87;
        v17[1] = 3;
        v21 = 1;
        Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v24);
        DeviceImageSourceFromBitmapSource = GetDeviceImageSourceFromBitmapSource(
                                              v23,
                                              (const struct PixelFormatInfo *)v17,
                                              (const struct BitmapSourceInfo *)&v18,
                                              &v24);
        v8 = DeviceImageSourceFromBitmapSource;
        if ( DeviceImageSourceFromBitmapSource < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceImageSourceFromBitmapSource, 0xA3u);
        }
        else
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
          v13 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)v24 + 80LL))(v24, &v16);
          v8 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA5u);
          }
          else
          {
            v14 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, struct IDeviceTexture **))(*(_QWORD *)v16 + 144LL))(
                    v16,
                    a2,
                    a3);
            v8 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA8u);
          }
        }
      }
      else
      {
        v8 = -2003292287;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292287, 0x8Fu);
      }
    }
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  }
  return v8;
}
