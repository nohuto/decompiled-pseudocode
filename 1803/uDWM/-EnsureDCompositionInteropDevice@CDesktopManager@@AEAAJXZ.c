/*
 * XREFs of ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18003BB50
 * Callers:
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18003BB2C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800475AC (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180075348 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180048AA8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompositionInteropDevice(CDesktopManager *this)
{
  CDesktopManager *v1; // rdi
  unsigned int v2; // ebx
  char *v3; // rsi
  HRESULT v5; // eax
  int v6; // eax
  HRESULT v7; // eax
  int v8; // eax
  int ActivationFactory; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-9h] BYREF
  __int64 v16; // [rsp+60h] [rbp-1h] BYREF
  void *ppIFactory; // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+78h] [rbp+17h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+1Fh] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+88h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+A8h] [rbp+47h]

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v3 = (char *)CDesktopManager::s_pDesktopManagerInstance + 208;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26) )
  {
    ppDevice = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppDevice);
    v5 = D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_HARDWARE, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, 0LL);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1DAu);
    }
    else
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
      v6 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
             ppDevice,
             &GUID_77db970f_6276_48ba_ba28_070143b4392c,
             &v16);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1DDu);
      }
      else
      {
        ppIFactory = 0LL;
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppIFactory);
        v7 = D2D1CreateFactory(
               D2D1_FACTORY_TYPE_SINGLE_THREADED,
               &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
               0LL,
               &ppIFactory);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1E0u);
        }
        else
        {
          v8 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppIFactory + 136LL))(
                 ppIFactory,
                 v16,
                 (__int64)v1 + 216);
          v2 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1E2u);
          }
          else
          {
            v18 = 0LL;
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v18);
            v23 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.UI.Composition.Compositor",
              0x22u,
              0x21u);
            ActivationFactory = RoGetActivationFactory(v23, &GUID_00000035_0000_0000_c000_000000000046, &v18);
            v2 = ActivationFactory;
            if ( ActivationFactory < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ActivationFactory, 0x1E6u);
            }
            else
            {
              v19 = 0LL;
              v10 = v18;
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v19);
              v11 = (**v10)(v10, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v19);
              v2 = v11;
              if ( v11 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1EAu);
              }
              else
              {
                v20 = 0LL;
                v12 = v19;
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v20);
                v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v12 + 48LL))(
                        v12,
                        *((_QWORD *)v1 + 27),
                        0LL,
                        &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
                        &v20);
                v2 = v13;
                if ( v13 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1EEu);
                }
                else
                {
                  v14 = (**v20)(v20, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, v3);
                  v2 = v14;
                  if ( v14 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1F1u);
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v20);
              }
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v19);
            }
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v18);
          }
        }
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppIFactory);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&ppDevice);
  }
  return v2;
}
