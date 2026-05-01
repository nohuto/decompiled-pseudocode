/*
 * XREFs of ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180174424
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180077510 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x180172CA4 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x180174804 (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 *     ?CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z @ 0x1802FE7B8 (-CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1802FE8F0 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartExperienceManager::SetBackgroundImage(CStartExperienceManager *this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int MonitorInformation; // eax
  struct CSingleViewShellExperience *v7; // rdx
  __int64 v8; // rdx
  HWND v9; // r14
  char v10; // r15
  int started; // eax
  __int64 v12; // rbx
  HWND v13; // rsi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v19; // [rsp+48h] [rbp-19h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-11h] BYREF
  __int64 v21; // [rsp+58h] [rbp-9h] BYREF
  __int64 v22; // [rsp+60h] [rbp-1h] BYREF
  struct IDCompositionDevice *v23; // [rsp+68h] [rbp+7h] BYREF
  __int64 v24; // [rsp+70h] [rbp+Fh] BYREF
  struct tagRECT v25; // [rsp+78h] [rbp+17h] BYREF
  struct tagRECT v26; // [rsp+88h] [rbp+27h] BYREF
  __int64 v27; // [rsp+98h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v27 = -2LL;
  if ( *((_QWORD *)this + 77) )
    CStartExperienceManager::UnsetBackgroundImage(this);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v4 = DesktopWallpaperHelpers::CreateDCompDevice(&v23);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    MonitorInformation = (**(__int64 (__fastcall ***)(struct IDCompositionDevice *, GUID *, __int64 *))v23)(
                           v23,
                           &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0,
                           &v22);
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v8 = 939LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorInformation);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_28;
    }
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           this,
                           v7,
                           &v25,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&hWnd,
                           &v19,
                           &v26,
                           0LL);
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v8 = 947LL;
      goto LABEL_11;
    }
    MonitorInformation = DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
                           (const struct Geometry::CRect *)&v25,
                           &hWnd);
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v8 = 954LL;
      goto LABEL_11;
    }
    v9 = hWnd;
    *(_QWORD *)&v26.left = hWnd;
    v10 = 1;
    LOBYTE(v26.right) = 1;
    v21 = 0LL;
    *(_QWORD *)&v25.left = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    started = Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
                &v21,
                &hWnd,
                (struct IDCompositionDevice **)&v25);
    v5 = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C0,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)started);
      goto LABEL_25;
    }
    hWnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
    v12 = v21;
    v13 = *(HWND *)(v21 + 40);
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v21 + 40));
      v13 = *(HWND *)(v12 + 40);
    }
    hWnd = v13;
    v24 = 0LL;
    v14 = v22;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v15 = (*(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v14 + 232LL))(
            v14,
            a2,
            &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
            &v24);
    v5 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, HWND))(*(_QWORD *)v24 + 24LL))(v24, v13);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 24LL))(v22);
        v5 = v15;
        if ( v15 >= 0 )
        {
          v17 = v21;
          v21 = *((_QWORD *)this + 77);
          *((_QWORD *)this + 77) = v17;
          *((_QWORD *)this + 78) = v9;
          v10 = 0;
          v5 = 0;
          goto LABEL_24;
        }
        v16 = 974LL;
      }
      else
      {
        v16 = 973LL;
      }
    }
    else
    {
      v16 = 970LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hWnd);
LABEL_25:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( v10 )
      DestroyWindow(v9);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v5;
}
