/*
 * XREFs of ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E709C
 * Callers:
 *     ?GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z @ 0x1800E7010 (-GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E7060 (-GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStr.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1800E6E34 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 *     ??$_Resetp@VDDAScreenCapture@@@?$shared_ptr@VDDAScreenCapture@@@std@@AEAAXPEAVDDAScreenCapture@@@Z @ 0x1800E778C (--$_Resetp@VDDAScreenCapture@@@-$shared_ptr@VDDAScreenCapture@@@std@@AEAAXPEAVDDAScreenCapture@@.c)
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1800ECECC (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800ED368 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  int Instance; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rbx
  HRESULT v12; // eax
  unsigned int v13; // edi
  int ScreenCaptureAsWicBitmapSource; // eax
  struct IWICBitmapSource *v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  struct IWICBitmapSource *v19; // rcx
  struct IWICImagingFactory *v20; // rcx
  struct IWICBitmapSource *v21; // [rsp+40h] [rbp-40h] BYREF
  struct DDAScreenCapture *v22[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  GUID v25; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IWICImagingFactory *ppv; // [rsp+B0h] [rbp+30h] BYREF
  struct IWICBitmapSource *v28; // [rsp+C8h] [rbp+48h] BYREF

  v22[1] = (struct DDAScreenCapture *)-2LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    Instance = DDAScreenCapture::CreateInstance(v22, a2);
    v8 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x50,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)Instance);
      return v8;
    }
    v24 = 0LL;
    std::shared_ptr<DDAScreenCapture>::_Resetp<DDAScreenCapture>(&v24, v22[0]);
    v23 = *((_QWORD *)&v24 + 1);
    *((_QWORD *)&v24 + 1) = *((_QWORD *)this + 8);
    v10 = *((_QWORD *)&v24 + 1);
    *((_QWORD *)this + 8) = v23;
    *((_QWORD *)this + 7) = v24;
    if ( v10 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
      {
        v11 = *((_QWORD *)&v24 + 1);
        (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
      }
    }
  }
  ppv = 0LL;
  v12 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_7b816b45_1996_4476_b132_de9e247c8af0, (LPVOID *)&ppv);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v21 = 0LL;
    ScreenCaptureAsWicBitmapSource = DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(
                                       *((DDAScreenCapture **)this + 7),
                                       ppv,
                                       &v21);
    v13 = ScreenCaptureAsWicBitmapSource;
    v15 = v21;
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
      v16 = 92LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
        (const char *)(unsigned int)ScreenCaptureAsWicBitmapSource);
      goto LABEL_26;
    }
    v25 = GUID_WICPixelFormat32bppBGRA;
    ScreenCaptureAsWicBitmapSource = GetStreamOfWICBitmapSourceWithOptions(
                                       ppv,
                                       (__int64)v21,
                                       (__int64)&GUID_ContainerFormatBmp,
                                       (__int128 *)&v25,
                                       1,
                                       a3);
    v13 = ScreenCaptureAsWicBitmapSource;
    if ( ScreenCaptureAsWicBitmapSource < 0 )
    {
      v16 = 99LL;
      goto LABEL_16;
    }
    if ( a4 )
    {
      v28 = 0LL;
      v17 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))ppv->lpVtbl->CreateFormatConverter)(
              ppv,
              &v28);
      v13 = v17;
      if ( v17 < 0 )
      {
        v18 = 105LL;
        goto LABEL_22;
      }
      v17 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, int))v28->lpVtbl[1].QueryInterface)(
              v28,
              v15,
              &GUID_WICPixelFormat32bppPBGRA,
              0LL,
              0LL,
              0LL,
              1);
      v13 = v17;
      if ( v17 < 0 )
      {
        v18 = 112LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
          (const char *)(unsigned int)v17);
        v19 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
        }
        goto LABEL_26;
      }
      *a4 = v28;
    }
    v13 = 0;
LABEL_26:
    if ( v15 )
      ((void (__fastcall *)(struct IWICBitmapSource *))v15->lpVtbl->Release)(v15);
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x59,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)v12);
LABEL_28:
  v20 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    ((void (__fastcall *)(struct IWICImagingFactory *))v20->lpVtbl->Release)(v20);
  }
  return v13;
}
