/*
 * XREFs of ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1800B8A6C
 * Callers:
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B6FB0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VStartExperienceWallpaperBackground@@@WRL@Microsoft@@@012@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x1800B9E90 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1801C31E4 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 *     ?CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801C3410 (-CreateDCompDevice@DesktopWallpaperHelpers@@SAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartExperienceManager::SetBackgroundImage(CStartExperienceManager *this, void *a2)
{
  HWND v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  int MonitorInformation; // eax
  struct CSingleViewShellExperience *v9; // rdx
  __int64 v10; // rdx
  HWND v11; // r15
  char v12; // r14
  int started; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct IDCompositionDevice *v23; // rcx
  bool v25[8]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  struct IDCompositionDevice *v28; // [rsp+60h] [rbp-11h] BYREF
  __int64 v29; // [rsp+68h] [rbp-9h] BYREF
  HWND hWnd; // [rsp+70h] [rbp-1h] BYREF
  struct tagRECT v31; // [rsp+78h] [rbp+7h] BYREF
  struct tagRECT v32; // [rsp+88h] [rbp+17h] BYREF
  __int64 v33; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v33 = -2LL;
  if ( *((_QWORD *)this + 77) )
  {
    v4 = (HWND)*((_QWORD *)this + 78);
    if ( v4 )
      DestroyWindow(v4);
    v5 = *((_QWORD *)this + 77);
    if ( v5 )
    {
      *((_QWORD *)this + 77) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v28 = 0LL;
  v6 = DesktopWallpaperHelpers::CreateDCompDevice(&v28);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_37;
  }
  v27 = 0LL;
  MonitorInformation = (**(__int64 (__fastcall ***)(struct IDCompositionDevice *, GUID *, __int64 *))v28)(
                         v28,
                         &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0,
                         &v27);
  v7 = MonitorInformation;
  if ( MonitorInformation >= 0 )
  {
    MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                           this,
                           v9,
                           &v31,
                           (enum EDGEUI_TRAYSTUCKPLACE *)&hWnd,
                           v25,
                           &v32,
                           0LL);
    v7 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v10 = 1092LL;
      goto LABEL_14;
    }
    MonitorInformation = DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(
                           (const struct Geometry::CRect *)&v31,
                           &hWnd);
    v7 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v10 = 1099LL;
      goto LABEL_14;
    }
    v11 = hWnd;
    *(_QWORD *)&v31.left = hWnd;
    v12 = 1;
    LOBYTE(v31.right) = 1;
    v26 = 0LL;
    *(_QWORD *)&v32.left = v28;
    started = Microsoft::WRL::Details::MakeAndInitialize<StartExperienceWallpaperBackground,StartExperienceWallpaperBackground,HWND__ * &,IDCompositionDevice *>(
                &v26,
                &hWnd,
                &v32);
    v7 = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x451,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)started);
LABEL_31:
      v21 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      if ( v12 )
        DestroyWindow(v11);
      goto LABEL_35;
    }
    *(_QWORD *)&v32.left = 0LL;
    v14 = v26;
    v15 = *(_QWORD *)(v26 + 40);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = *(_QWORD *)(v14 + 40);
    *(_QWORD *)&v32.left = v16;
    v29 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v27 + 232LL))(
            v27,
            a2,
            &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
            &v29);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, v16);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
        v7 = v17;
        if ( v17 >= 0 )
        {
          v19 = v26;
          v26 = *((_QWORD *)this + 77);
          *((_QWORD *)this + 77) = v19;
          *((_QWORD *)this + 78) = v11;
          v12 = 0;
          LOBYTE(v31.right) = 0;
          v7 = 0;
          goto LABEL_27;
        }
        v18 = 1119LL;
      }
      else
      {
        v18 = 1118LL;
      }
    }
    else
    {
      v18 = 1115LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
LABEL_27:
    v20 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_31;
  }
  v10 = 1084LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)MonitorInformation);
LABEL_35:
  v22 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_37:
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v7;
}
