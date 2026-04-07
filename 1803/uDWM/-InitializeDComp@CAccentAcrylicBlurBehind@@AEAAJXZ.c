/*
 * XREFs of ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18003B65C
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z @ 0x18003B950 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJPEAUIDwmChannel@@@Z.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180047C10 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180037E84 (-WrapExistingResource@CVisual@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180038664 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180038F2C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003BA78 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003BAB4 (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003BAF0 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18003BB2C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::InitializeDComp(CAccentAcrylicBlurBehind *this)
{
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  __int64 *v3; // rsi
  struct IDCompositionDesktopDevicePartner *v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // r12
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int inserted; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+40h]
  __int64 v22; // [rsp+80h] [rbp+48h] BYREF
  __int64 v23; // [rsp+88h] [rbp+50h] BYREF
  __int64 v24; // [rsp+90h] [rbp+58h] BYREF
  __int64 v25; // [rsp+98h] [rbp+60h] BYREF

  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice();
  v3 = (__int64 *)((char *)this + 288);
  v4 = DCompositionInteropDevice;
  v5 = *((_QWORD *)this + 36);
  if ( (struct IDCompositionDesktopDevicePartner *)v5 != DCompositionInteropDevice )
  {
    if ( DCompositionInteropDevice )
    {
      (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice + 8LL))(DCompositionInteropDevice);
      v5 = *v3;
    }
    v22 = v5;
    *v3 = (__int64)v4;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v5 = *v3;
  }
  if ( !v5 )
    return 2147500037LL;
  if ( *((_QWORD *)this + 35) )
    return 0LL;
  v6 = (_QWORD *)((char *)this + 296);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  v7 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v5 + 216LL))(
         v5,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         (char *)this + 296);
  if ( v7 < 0 )
  {
    v16 = 1734LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)*v3 + 224LL))(*v3, *v6, (char *)this + 344);
    if ( v7 >= 0 )
    {
      v25 = 0LL;
      v8 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(
             (char *)this + 288,
             &v25);
      v7 = v8;
      if ( v8 < 0 )
      {
        v18 = 1741LL;
      }
      else
      {
        v9 = v25;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
        v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 176LL))(v9, (char *)this + 328);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v24 = 0LL;
          v10 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
                  (char *)this + 328,
                  &v24);
          v7 = v10;
          if ( v10 < 0 )
          {
            v19 = 1747LL;
          }
          else
          {
            v11 = *v3;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
            v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(v11, (char *)this + 304);
            v7 = v10;
            if ( v10 < 0 )
            {
              v19 = 1750LL;
            }
            else
            {
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 24LL))(*v3);
              v7 = v10;
              if ( v10 >= 0 )
              {
                v23 = 0LL;
                v12 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
                        (char *)this + 304,
                        &v23);
                v7 = v12;
                if ( v12 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x6DB,
                    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                    (const char *)(unsigned int)v12,
                    v20);
                }
                else
                {
                  v22 = 0LL;
                  v13 = v23;
                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
                  inserted = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 384LL))(v13, &v22);
                  v7 = inserted;
                  if ( inserted < 0 )
                  {
                    v17 = 1757LL;
                  }
                  else
                  {
                    inserted = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 72LL))(v22, v24);
                    v7 = inserted;
                    if ( inserted < 0 )
                    {
                      v17 = 1758LL;
                    }
                    else
                    {
                      inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(
                                   *v6,
                                   *((_QWORD *)this + 38));
                      v7 = inserted;
                      if ( inserted < 0 )
                      {
                        v17 = 1761LL;
                      }
                      else
                      {
                        inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 120LL))(
                                     *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                                     *((_QWORD *)this + 43),
                                     38LL,
                                     (char *)this + 336);
                        v7 = inserted;
                        if ( inserted < 0 )
                        {
                          v17 = 1765LL;
                        }
                        else
                        {
                          inserted = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
                          v7 = inserted;
                          if ( inserted < 0 )
                          {
                            v17 = 1766LL;
                          }
                          else
                          {
                            inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 24LL))(*v3);
                            v7 = inserted;
                            if ( inserted < 0 )
                            {
                              v17 = 1768LL;
                            }
                            else
                            {
                              inserted = CVisual::WrapExistingResource(
                                           *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                                           *((_DWORD *)this + 84),
                                           (struct CResource ***)this + 35);
                              v7 = inserted;
                              if ( inserted < 0 )
                              {
                                v17 = 1771LL;
                              }
                              else
                              {
                                inserted = VisualCollection::InsertRelative(
                                             (CAccentAcrylicBlurBehind *)((char *)this + 32),
                                             *((struct CVisual ***)this + 35),
                                             0LL,
                                             0,
                                             1);
                                v7 = inserted;
                                if ( inserted >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
                                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
                                  return 0LL;
                                }
                                v17 = 1774LL;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v17,
                    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
                    (const char *)(unsigned int)inserted,
                    v20);
                  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v22);
                }
                Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
                goto LABEL_32;
              }
              v19 = 1751LL;
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v10,
            v20);
LABEL_32:
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
LABEL_33:
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
          return (unsigned int)v7;
        }
        v18 = 1744LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v8,
        v20);
      goto LABEL_33;
    }
    v16 = 1737LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v7,
    v20);
  return (unsigned int)v7;
}
