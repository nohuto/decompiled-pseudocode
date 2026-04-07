/*
 * XREFs of ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180075B70
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x1800778B0 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180069084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007568C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180076234 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::EnsureAcrylicBrushForAccent(CAccentAcrylicBlurBehind *this, int a2)
{
  unsigned int v4; // ebx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v15; // [rsp+20h] [rbp-49h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-19h]
  unsigned int v19; // [rsp+54h] [rbp-15h]
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+68h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+17h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+37h]

  v4 = 0;
  if ( *((_DWORD *)this + 92) != a2 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Media.AcrylicBrush",
      0x23u,
      0x22u);
    ActivationFactory = RoGetActivationFactory(v25, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v16);
    v4 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v6 = v16;
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      v7 = (**v6)(v6, &GUID_e4e9ec98_6f5f_40b8_8738_b934e188548f, &v17);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v21 = 0LL;
        v8 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
               (_QWORD *)this + 36,
               (__int64)&v21);
        v4 = v8;
        if ( v8 >= 0 )
        {
          v9 = v17;
          v20 = 0LL;
          LOBYTE(v19) = HIBYTE(a2);
          HIBYTE(v19) = BYTE2(a2);
          v18 = 255;
          *(_WORD *)((char *)&v19 + 1) = a2;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
          v15 = 0;
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, __int64 *))(*(_QWORD *)v9 + 48LL))(
                  v9,
                  v21,
                  v19,
                  v18,
                  v15,
                  &v20);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v11 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
            v4 = v11;
            if ( v11 >= 0 )
            {
              v23 = 0LL;
              Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"Noise", 6u, 5u);
              v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v20 + 56LL))(
                      v20,
                      v23,
                      *((_QWORD *)this + 40));
              v4 = v12;
              if ( v12 >= 0 )
              {
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 312);
                v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v20)(
                        v20,
                        &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
                        (char *)this + 312);
                v4 = v13;
                if ( v13 >= 0 )
                  *((_DWORD *)this + 92) = a2;
                else
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x72Fu);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x72Cu);
              }
              v23 = 0LL;
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x728u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x724u);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x719u);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x715u);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ActivationFactory, 0x711u);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  }
  return v4;
}
