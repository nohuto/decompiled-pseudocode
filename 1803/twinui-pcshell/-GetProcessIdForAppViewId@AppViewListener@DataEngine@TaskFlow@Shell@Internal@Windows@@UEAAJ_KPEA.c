/*
 * XREFs of ?GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAI@Z @ 0x18001F390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180008D20 (-GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D0D0 (-GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetProcessIdForAppViewId(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        HWND a2,
        unsigned int *a3)
{
  __int64 (__fastcall *v3)(CWin32ApplicationView *, GUID *, CWinRTApplicationView **); // r12
  int v6; // ebx
  CApplicationViewManager *v7; // rdi
  __int64 (__fastcall *v8)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **); // rax
  int ViewForHwnd; // eax
  CWin32ApplicationView *v10; // rcx
  __int64 (__fastcall *v11)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  void **v12; // r8
  int v13; // eax
  bool v14; // si
  __int64 (__fastcall *v15)(CWin32ApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int v16; // eax
  unsigned __int64 v17; // rdi
  __int64 (__fastcall *v18)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  CWinRTApplicationView *v20; // rcx
  __int64 (__fastcall *v21)(unsigned __int64, __int64, GUID *, CImmersiveApplicationWindow **); // rax
  int Windows; // eax
  CImmersiveApplicationWindow *v23; // rcx
  __int64 (__fastcall *v24)(HWND *, unsigned int *); // rax
  DWORD *p_dwProcessId; // rdx
  int ProcessId; // eax
  const char *v27; // r9
  __int64 (__fastcall *v28)(CWinRTApplicationView *); // rax
  __int64 result; // rax
  GUID *v30; // rdx
  __int64 v31; // rcx
  signed int LastError; // eax
  int v33; // [rsp+20h] [rbp-78h]
  struct IImmersiveApplication *v34; // [rsp+30h] [rbp-68h] BYREF
  CWin32ApplicationView *v35; // [rsp+38h] [rbp-60h] BYREF
  CWinRTApplicationView *v36; // [rsp+40h] [rbp-58h] BYREF
  CImmersiveApplicationWindow *v37; // [rsp+48h] [rbp-50h] BYREF
  void *v38; // [rsp+50h] [rbp-48h] BYREF
  int v39; // [rsp+58h] [rbp-40h]
  struct IImmersiveApplication *v40; // [rsp+60h] [rbp-38h]
  __int64 v41; // [rsp+68h] [rbp-30h]
  __int64 v42; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  DWORD dwProcessId; // [rsp+B8h] [rbp+20h] BYREF

  v41 = -2LL;
  try
  {
    v6 = 0;
    v35 = 0LL;
    v7 = (CApplicationViewManager *)*((_QWORD *)this + 8);
    v35 = 0LL;
    v8 = *(__int64 (__fastcall **)(CApplicationViewManager *__hidden, HWND, struct IApplicationView **))(*(_QWORD *)v7 + 48LL);
    if ( v8 == CApplicationViewManager::GetViewForHwnd )
      ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v7, a2, &v35);
    else
      ViewForHwnd = v8(v7, a2, &v35);
    if ( ViewForHwnd < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x69,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)ViewForHwnd,
        v33);
    }
    else
    {
      v10 = v35;
      v38 = 0LL;
      v11 = **(__int64 (__fastcall ***)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))v35;
      v3 = (__int64 (__fastcall *)(CWin32ApplicationView *, GUID *, CWinRTApplicationView **))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface;
      v12 = &v38;
      if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
      {
        v13 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                v35,
                &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                &v38);
        goto LABEL_7;
      }
      v30 = &GUID_e99a73b1_cde0_477b_91b8_e995fa037387;
      if ( v11 == CWin32ApplicationView::QueryInterface )
      {
        v13 = CWin32ApplicationView::QueryInterface(v35, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v38);
        goto LABEL_7;
      }
    }
    v13 = v11(v10, v30, v12);
LABEL_7:
    v14 = v13 >= 0;
    if ( v38 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v38 + 16LL))(v38);
    dwProcessId = 0;
    if ( !v14 )
    {
      if ( GetWindowThreadProcessId(a2, &dwProcessId) )
        goto LABEL_33;
      goto LABEL_55;
    }
    v34 = 0LL;
    v36 = 0LL;
    v15 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, GUID *, CWinRTApplicationView **))v35;
    if ( v15 == v3 )
      v16 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
              v35,
              &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
              &v36);
    else
      v16 = v15(v35, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v36);
    v17 = (unsigned int)v16;
    if ( v16 < 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    }
    else
    {
      v18 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v36 + 24LL);
      if ( v18 == CWinRTApplicationView::GetApplication )
        Application = CWinRTApplicationView::GetApplication(v36, &v34);
      else
        Application = v18(v36, &v34);
      v17 = (unsigned int)Application;
      if ( Application < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59,
          (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
          (const char *)(unsigned int)Application,
          v33);
      v20 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    if ( (v17 & 0x80000000) != 0LL )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x10B,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v17,
        v33);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    else
    {
      v17 = (unsigned __int64)v34;
      v40 = v34;
      v42 = 0LL;
      v37 = 0LL;
    }
    v21 = *(__int64 (__fastcall **)(unsigned __int64, __int64, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v17 + 24LL);
    if ( (char *)v21 == (char *)CImmersiveApp::GetWindows )
      Windows = CImmersiveApp::GetWindows(v17, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v37);
    else
      Windows = v21(v17, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v37);
    if ( Windows < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x10E,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)Windows,
        v33);
    }
    else
    {
      v23 = v37;
      v24 = *(__int64 (__fastcall **)(HWND *, unsigned int *))(*(_QWORD *)v37 + 48LL);
      p_dwProcessId = &dwProcessId;
      if ( v24 == CImmersiveApplicationWindow::GetProcessId )
      {
        ProcessId = CImmersiveApplicationWindow::GetProcessId((HWND *)v37, &dwProcessId);
LABEL_26:
        if ( ProcessId == -2147023496 )
          v39 = 0;
        else
          v6 = ProcessId;
        if ( v6 >= 0 )
        {
          if ( v37 )
            (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v37 + 16LL))(v37);
          if ( v34 )
            (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v34 + 16LL))(v34);
          goto LABEL_33;
        }
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x113,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v6,
          v33);
LABEL_55:
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError != -2147023496 )
          v6 = LastError;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x11D,
            (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
            (const char *)(unsigned int)v6,
            v33);
          goto LABEL_61;
        }
LABEL_33:
        *a3 = dwProcessId;
        if ( !v35 )
          return 0LL;
        v28 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v35 + 16LL);
        if ( v28 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v35);
          return 0LL;
        }
        if ( v28 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(v35);
          return 0LL;
        }
LABEL_61:
        ((void (*)(void))v28)();
        return 0LL;
      }
    }
    ProcessId = v24((HWND *)v23, p_dwProcessId);
    goto LABEL_26;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6D,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           v27);
  }
  return result;
}
