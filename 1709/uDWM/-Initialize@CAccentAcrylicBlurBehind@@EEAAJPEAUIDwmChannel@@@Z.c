/*
 * XREFs of ?Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x180076AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180035E44 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18006E4F8 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007568C (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075704 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180075740 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Initialize(CAccentAcrylicBlurBehind *this, struct IDwmChannel *a2)
{
  int v3; // eax
  CDesktopManager *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // r12
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int inserted; // eax
  __int64 v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+38h] [rbp-8h] BYREF
  __int64 v32; // [rsp+90h] [rbp+50h] BYREF
  __int64 v33; // [rsp+98h] [rbp+58h] BYREF

  v3 = CVisual::Initialize(this, a2);
  v5 = v3;
  if ( v3 >= 0 )
  {
    if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(v4) < 0 )
      v6 = 0LL;
    else
      v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
    v7 = (_QWORD *)((char *)this + 288);
    if ( *((_QWORD *)this + 36) != v6 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v32 = *v7;
      *v7 = v6;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
    }
    if ( !*((_QWORD *)this + 35) )
    {
      v8 = *v7;
      v9 = (_QWORD *)((char *)this + 296);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 296);
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v8 + 216LL))(
              v8,
              &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
              (char *)this + 296);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v7 + 224LL))(*v7, *v9, (char *)this + 344);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v32 = 0LL;
          v12 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
                  (_QWORD *)this + 36,
                  (__int64)&v32);
          v5 = v12;
          if ( v12 >= 0 )
          {
            v13 = v32;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 328);
            v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 176LL))(v13, (char *)this + 328);
            v5 = v14;
            if ( v14 >= 0 )
            {
              v33 = 0LL;
              v15 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                      (_QWORD *)this + 41,
                      (__int64)&v33);
              v5 = v15;
              if ( v15 >= 0 )
              {
                v16 = *v7;
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 304);
                v17 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 48LL))(v16, (char *)this + 304);
                v5 = v17;
                if ( v17 >= 0 )
                {
                  v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
                  v5 = v18;
                  if ( v18 >= 0 )
                  {
                    v31 = 0LL;
                    v19 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
                            (_QWORD *)this + 38,
                            (__int64)&v31);
                    v5 = v19;
                    if ( v19 >= 0 )
                    {
                      v30 = 0LL;
                      v20 = v31;
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
                      v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 376LL))(v20, &v30);
                      v5 = v21;
                      if ( v21 >= 0 )
                      {
                        v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 72LL))(v30, v33);
                        v5 = v22;
                        if ( v22 >= 0 )
                        {
                          v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(
                                  *v9,
                                  *((_QWORD *)this + 38));
                          v5 = v23;
                          if ( v23 >= 0 )
                          {
                            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 120LL))(
                                    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                                    *((_QWORD *)this + 43),
                                    38LL,
                                    (char *)this + 336);
                            v5 = v24;
                            if ( v24 >= 0 )
                            {
                              v25 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                      + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
                              v5 = v25;
                              if ( v25 >= 0 )
                              {
                                v26 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
                                v5 = v26;
                                if ( v26 >= 0 )
                                {
                                  v27 = CVisual::WrapExistingResource(
                                          *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                                          *((_DWORD *)this + 84),
                                          (struct CResource ***)this + 35);
                                  v5 = v27;
                                  if ( v27 >= 0 )
                                  {
                                    inserted = VisualCollection::InsertRelative(
                                                 (CAccentAcrylicBlurBehind *)((char *)this + 32),
                                                 *((struct CVisual ***)this + 35),
                                                 0LL,
                                                 0,
                                                 1);
                                    v5 = inserted;
                                    if ( inserted < 0 )
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x702u);
                                  }
                                  else
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x6FFu);
                                  }
                                }
                                else
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x6FCu);
                                }
                              }
                              else
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x6FAu);
                              }
                            }
                            else
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x6F9u);
                            }
                          }
                          else
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x6F5u);
                          }
                        }
                        else
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x6F2u);
                        }
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x6F1u);
                      }
                      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x6EFu);
                    }
                    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x6EBu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x6EAu);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x6E7u);
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x6E4u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6E1u);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v32);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6DDu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6DAu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x6D2u);
  }
  return v5;
}
