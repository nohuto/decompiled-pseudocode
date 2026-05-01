/*
 * XREFs of ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801939E8
 * Callers:
 *     ?GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z @ 0x1801939A0 (-GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x180193C30 (-GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$reset@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z @ 0x1801933D8 (--$reset@VDDAScreenCapture@@@-$shared_ptr@VDDAScreenCapture@@@std@@QEAAXPEAVDDAScreenCapture@@@Z.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x180193C6C (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x180198520 (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1801985E8 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  DDAScreenCapture **v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT Instance; // eax
  int ScreenCaptureAsWicBitmapSource; // eax
  __int64 v11; // rdx
  struct IWICImagingFactory *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  struct DDAScreenCapture *v15; // rax
  struct IWICBitmapSource *v17[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct DDAScreenCapture *v20; // [rsp+80h] [rbp+20h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+98h] [rbp+38h] BYREF

  v17[1] = (struct IWICBitmapSource *)-2LL;
  if ( a4 )
    *a4 = 0LL;
  v6 = (DDAScreenCapture **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
LABEL_7:
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_7b816b45_1996_4476_b132_de9e247c8af0,
                 (LPVOID *)&ppv);
    v8 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)Instance);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      return v8;
    }
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    ScreenCaptureAsWicBitmapSource = DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(*v6, ppv, v17);
    v8 = ScreenCaptureAsWicBitmapSource;
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
      v11 = 92LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)ScreenCaptureAsWicBitmapSource);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
      goto LABEL_23;
    }
    v18 = GUID_WICPixelFormat32bppBGRA;
    ScreenCaptureAsWicBitmapSource = GetStreamOfWICBitmapSourceWithOptions(
                                       ppv,
                                       v17[0],
                                       &GUID_ContainerFormatBmp,
                                       &v18,
                                       1,
                                       a3);
    v8 = ScreenCaptureAsWicBitmapSource;
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
      v11 = 99LL;
      goto LABEL_13;
    }
    if ( a4 )
    {
      v20 = 0LL;
      v12 = ppv;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v13 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct DDAScreenCapture **))v12->lpVtbl->CreateFormatConverter)(
              v12,
              &v20);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 105LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        goto LABEL_22;
      }
      v13 = (*(__int64 (__fastcall **)(struct DDAScreenCapture *, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v20 + 64LL))(
              v20,
              v17[0],
              &GUID_WICPixelFormat32bppPBGRA,
              0LL,
              0LL,
              0LL,
              1);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 112LL;
        goto LABEL_19;
      }
      v15 = v20;
      v20 = 0LL;
      *a4 = (struct IWICBitmapSource *)v15;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    }
    v8 = 0;
    goto LABEL_22;
  }
  v7 = DDAScreenCapture::CreateInstance(&v20, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    std::shared_ptr<DDAScreenCapture>::reset<DDAScreenCapture>(v6, v20);
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x50,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
