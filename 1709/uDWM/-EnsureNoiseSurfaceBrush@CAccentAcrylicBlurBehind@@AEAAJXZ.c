/*
 * XREFs of ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180076234
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180075B70 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18006E4F8 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ??$As@UICompositionBrush@Composition@UI@Windows@@@?$ComPtr@UICompositionSurfaceBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800755D8 (--$As@UICompositionBrush@Composition@UI@Windows@@@-$ComPtr@UICompositionSurfaceBrush@Composition.c)
 *     ??$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075614 (--$As@UICompositionDrawingSurfaceInterop@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingS.c)
 *     ??$As@UICompositionSurface@Composition@UI@Windows@@@?$ComPtr@UICompositionDrawingSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075650 (--$As@UICompositionSurface@Composition@UI@Windows@@@-$ComPtr@UICompositionDrawingSurface@Composi.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007568C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UICompositorInterop@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositorInterop@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800756C8 (--$As@UICompositorInterop@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(CAccentAcrylicBlurBehind *this)
{
  char *v1; // r14
  unsigned int v3; // edi
  HMODULE ModuleHandleW; // rdi
  HRSRC ResourceW; // rbx
  HGLOBAL Resource; // rax
  LPVOID v7; // r15
  DWORD v8; // r12d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdi
  CDesktopManager *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdi
  __m128 v25; // xmm7
  __m128 v26; // xmm6
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v40; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  int v53; // [rsp+B0h] [rbp-58h] BYREF
  int v54; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h] BYREF
  int v56; // [rsp+C0h] [rbp-48h] BYREF
  int v57; // [rsp+C4h] [rbp-44h]
  int v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+CCh] [rbp-3Ch]
  float v60; // [rsp+D0h] [rbp-38h]
  float v61; // [rsp+D4h] [rbp-34h]
  float v62[4]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = (char *)this + 320;
  v3 = 0;
  if ( !*((_QWORD *)this + 40) )
  {
    ModuleHandleW = GetModuleHandleW(L"Windows.UI.Xaml.Controls.dll");
    ResourceW = FindResourceW(ModuleHandleW, (LPCWSTR)0x7D0, (LPCWSTR)0xA);
    Resource = LoadResource(ModuleHandleW, ResourceW);
    v7 = LockResource(Resource);
    v8 = SizeofResource(ModuleHandleW, ResourceW);
    v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34));
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 112LL))(v9, &v40);
    v3 = v10;
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v40 + 128LL))(v40, v7, v8);
      v3 = v11;
      if ( v11 >= 0 )
      {
        v41 = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
                v9,
                v40,
                0LL,
                1LL,
                &v41);
        v3 = v12;
        if ( v12 >= 0 )
        {
          v13 = v41;
          v43 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, 0LL, &v43);
          v3 = v14;
          if ( v14 >= 0 )
          {
            v42 = 0LL;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
            v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL))(v9, &v42);
            v3 = v15;
            if ( v15 >= 0 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v42 + 64LL))(
                      v42,
                      v43,
                      &GUID_WICPixelFormat32bppPBGRA,
                      0LL,
                      0LL,
                      0LL,
                      1);
              v3 = v16;
              if ( v16 >= 0 )
              {
                v44 = 0LL;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
                v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 144LL))(
                        v9,
                        v42,
                        2LL,
                        &v44);
                v3 = v17;
                if ( v17 >= 0 )
                {
                  v53 = 0;
                  v54 = 0;
                  v18 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v44 + 24LL))(v44, &v53, &v54);
                  v3 = v18;
                  if ( v18 >= 0 )
                  {
                    v47 = 0LL;
                    v19 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositorInterop>(
                            (_QWORD *)this + 36,
                            (__int64)&v47);
                    v3 = v19;
                    if ( v19 >= 0 )
                    {
                      v20 = v47;
                      v46 = 0LL;
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
                      if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v21) < 0 )
                        v22 = 0LL;
                      else
                        v22 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
                      v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v20 + 40LL))(
                              v20,
                              v22,
                              &v46);
                      v3 = v23;
                      if ( v23 >= 0 )
                      {
                        v24 = v46;
                        v25 = 0LL;
                        v26 = 0LL;
                        v45 = 0LL;
                        v25.m128_f32[0] = (float)v53;
                        v26.m128_f32[0] = (float)v54;
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
                        v27 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, __int64, __int64 *))(*(_QWORD *)v24 + 48LL))(
                                v24,
                                _mm_unpacklo_ps(v25, v26).m128_u64[0],
                                87LL,
                                1LL,
                                &v45);
                        v3 = v27;
                        if ( v27 >= 0 )
                        {
                          v49 = 0LL;
                          v28 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionDrawingSurfaceInterop>(
                                  &v45,
                                  (__int64)&v49);
                          v3 = v28;
                          if ( v28 >= 0 )
                          {
                            v29 = v49;
                            v48 = 0LL;
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
                            v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *, int *))(*(_QWORD *)v29 + 24LL))(
                                    v29,
                                    0LL,
                                    &GUID_e8f7fe7a_191c_466d_ad95_975678bda998,
                                    &v48,
                                    &v56);
                            v3 = v30;
                            if ( v30 >= 0 )
                            {
                              v50 = 0LL;
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v50);
                              v31 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v48 + 40LL))(
                                      v48,
                                      v44,
                                      0LL,
                                      &v50);
                              v3 = v31;
                              if ( v31 >= 0 )
                              {
                                v58 = 0;
                                v59 = 0;
                                v60 = (float)v53;
                                v62[0] = (float)v56;
                                v62[2] = (float)v53 + (float)v56;
                                v61 = (float)v54;
                                v62[1] = (float)v57;
                                v62[3] = (float)v54 + (float)v57;
                                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 624LL))(v48, 1LL);
                                (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v48 + 208LL))(
                                  v48,
                                  v50,
                                  v62);
                                v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
                                v3 = v32;
                                if ( v32 >= 0 )
                                {
                                  v52 = 0LL;
                                  v33 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                                          (_QWORD *)this + 36,
                                          (__int64)&v52);
                                  v3 = v33;
                                  if ( v33 >= 0 )
                                  {
                                    v55 = 0LL;
                                    v34 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionDrawingSurface>::As<Windows::UI::Composition::ICompositionSurface>(
                                            &v45,
                                            (__int64)&v55);
                                    v3 = v34;
                                    if ( v34 >= 0 )
                                    {
                                      v35 = v52;
                                      v51 = 0LL;
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                      v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v35 + 192LL))(
                                              v35,
                                              v55,
                                              &v51);
                                      v3 = v36;
                                      if ( v36 >= 0 )
                                      {
                                        v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 88LL))(
                                                v51,
                                                0LL);
                                        v3 = v37;
                                        if ( v37 >= 0 )
                                        {
                                          v38 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurfaceBrush>::As<Windows::UI::Composition::ICompositionBrush>(
                                                  &v51,
                                                  (__int64)v1);
                                          v3 = v38;
                                          if ( v38 < 0 )
                                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x79Du);
                                        }
                                        else
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x79Au);
                                        }
                                      }
                                      else
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x799u);
                                      }
                                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
                                    }
                                    else
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x795u);
                                    }
                                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v55);
                                  }
                                  else
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x791u);
                                  }
                                  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
                                }
                                else
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x78Eu);
                                }
                              }
                              else
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x779u);
                              }
                              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v50);
                            }
                            else
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x775u);
                            }
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v48);
                          }
                          else
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x770u);
                          }
                          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v49);
                        }
                        else
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x76Du);
                        }
                        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v45);
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x767u);
                      }
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v46);
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x764u);
                    }
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x760u);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x75Bu);
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x758u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x757u);
            }
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x754u);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v43);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x751u);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x74Eu);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x74Du);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v40);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return v3;
}
