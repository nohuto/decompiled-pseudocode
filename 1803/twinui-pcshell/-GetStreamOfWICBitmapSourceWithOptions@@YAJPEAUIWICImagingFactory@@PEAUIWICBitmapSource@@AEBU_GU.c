/*
 * XREFs of ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180193C6C
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801939E8 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 *     _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1802654E0 (_anonymous_namespace_--GetBitmapStreamFromHICON.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x180193560 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStreamOfWICBitmapSourceWithOptions(
        void *a1,
        struct IWICBitmapSource *a2,
        __int64 a3,
        struct _GUID *a4,
        char a5,
        LPVOID ppv)
{
  _QWORD *v9; // rsi
  int v10; // edi
  IStream *v11; // rbx
  LPVOID v12; // rdi
  __int64 v14[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF

  v14[1] = -2LL;
  v9 = ppv;
  *(_QWORD *)ppv = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&ppv);
  if ( ppv
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv),
        v10 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv),
        v10 >= 0) )
  {
    v14[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    v11 = SHCreateMemStream(0LL, 0);
    v14[0] = (__int64)v11;
    if ( v11 )
    {
      v16 = 0LL;
      v12 = ppv;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v10 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL))(
              v12,
              a3,
              &GUID_VendorMicrosoft,
              &v16);
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, IStream *, __int64))(*(_QWORD *)v16 + 24LL))(v16, v11, 2LL);
        if ( v10 >= 0 )
        {
          v15 = *a4;
          v10 = AddFrameToWICBitmap((struct IWICImagingFactory *)ppv, v16, a2, &v15, a5);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16);
            if ( v10 >= 0 )
            {
              v10 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 40LL))(
                      v11,
                      `GetStreamOfWICBitmapSourceWithOptions'::`23'::lnBeginning,
                      0LL,
                      0LL);
              if ( v10 >= 0 )
              {
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 8LL))(v11);
                *v9 = v11;
                v10 = 0;
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
    else
    {
      v10 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v10;
}
