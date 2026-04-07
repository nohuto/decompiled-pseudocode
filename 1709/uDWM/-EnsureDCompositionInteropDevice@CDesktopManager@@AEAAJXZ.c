/*
 * XREFs of ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18006E4F8
 * Callers:
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180076234 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x180076AE0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180069084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CDesktopManager::EnsureDCompositionInteropDevice(CDesktopManager *this)
{
  CDesktopManager *v1; // rdi
  unsigned int v2; // ebx
  char *v3; // rsi
  int v4; // eax
  HRESULT v5; // eax
  int v6; // eax
  int ActivationFactory; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+58h] [rbp-9h] BYREF
  ID3D11Device *ppDevice; // [rsp+60h] [rbp-1h] BYREF
  void *ppIFactory; // [rsp+68h] [rbp+7h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+78h] [rbp+17h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+1Fh] BYREF
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+88h] [rbp+27h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v22; // [rsp+A8h] [rbp+47h]

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v3 = (char *)CDesktopManager::s_pDesktopManagerInstance + 208;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26) )
  {
    ppDevice = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppDevice);
    D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_WARP, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, 0LL);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v4 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))ppDevice->lpVtbl->QueryInterface)(
           ppDevice,
           &GUID_77db970f_6276_48ba_ba28_070143b4392c,
           &v14);
    v2 = v4;
    if ( v4 >= 0 )
    {
      ppIFactory = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppIFactory);
      v5 = D2D1CreateFactory(
             D2D1_FACTORY_TYPE_SINGLE_THREADED,
             &GUID_94f81a73_9212_4376_9c58_b16a3a0d3992,
             0LL,
             &ppIFactory);
      v2 = v5;
      if ( v5 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppIFactory + 136LL))(
               ppIFactory,
               v14,
               (__int64)v1 + 216);
        v2 = v6;
        if ( v6 >= 0 )
        {
          v17 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
          v22 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.UI.Composition.Compositor",
            0x22u,
            0x21u);
          ActivationFactory = RoGetActivationFactory(v22, &GUID_00000035_0000_0000_c000_000000000046, &v17);
          v2 = ActivationFactory;
          if ( ActivationFactory >= 0 )
          {
            v18 = 0LL;
            v8 = v17;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
            v9 = (**v8)(v8, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v18);
            v2 = v9;
            if ( v9 >= 0 )
            {
              v19 = 0LL;
              v10 = v18;
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
              v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v10 + 48LL))(
                      v10,
                      *((_QWORD *)v1 + 27),
                      0LL,
                      &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8,
                      &v19);
              v2 = v11;
              if ( v11 >= 0 )
              {
                v12 = (**v19)(v19, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, v3);
                v2 = v12;
                if ( v12 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1F1u);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1EEu);
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1EAu);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ActivationFactory, 0x1E6u);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1E2u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1E0u);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppIFactory);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1DDu);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&ppDevice);
  }
  return v2;
}
