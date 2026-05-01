/*
 * XREFs of ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180020090 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x1801A8B10 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z @ 0x180008D20 (-GetProcessId@CImmersiveApplicationWindow@@UEAAJPEAK@Z.c)
 *     ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180008D60 (-GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18000C6F4 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?IsSplashScreenPresented@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x18001BB00 (-IsSplashScreenPresented@CWinRTApplicationView@@UEAAJPEAH@Z.c)
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18002A470 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D0D0 (-GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState(
        __int64 a1,
        WINBOOL a2,
        WCHAR *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbx
  __int64 (__fastcall *v7)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v9)(WCHAR *, GUID *, CWinRTApplicationView **); // rax
  int v10; // eax
  WCHAR *v11; // r15
  __int64 (__fastcall *v12)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  HSTRING v14; // r13
  __int64 (__fastcall *v15)(struct IImmersiveApplication *, __int64, GUID *, CImmersiveApplicationWindow **); // rax
  int Windows; // eax
  __int64 (__fastcall *v17)(CImmersiveApplicationWindow *, HWND *); // rax
  CImmersiveApplicationWindow *v18; // rcx
  struct IImmersiveApplication *v19; // rcx
  CWinRTApplicationView *v20; // rcx
  HWND v21; // r14
  CWin32ApplicationView *v22; // rcx
  __int64 (__fastcall *v23)(CWinRTApplicationView *, int *); // rax
  int IsSplashScreenPresented; // eax
  __int64 (__fastcall *v25)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  void **v26; // r8
  GUID *v27; // rdx
  WCHAR *v28; // rcx
  int v29; // eax
  bool v30; // r12
  __int64 (__fastcall *v31)(WCHAR *, GUID *, CWinRTApplicationView **); // rax
  int v32; // eax
  unsigned __int64 v33; // rsi
  __int64 (__fastcall *v34)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int v35; // eax
  CWinRTApplicationView *v36; // rcx
  __int64 (__fastcall *v37)(unsigned __int64, __int64, GUID *, CImmersiveApplicationWindow **); // rax
  int v38; // eax
  CImmersiveApplicationWindow *v39; // rcx
  __int64 (__fastcall *v40)(HWND *, unsigned int *); // rax
  DWORD *p_dwProcessId; // rdx
  int ProcessId; // eax
  unsigned __int16 **v43; // r8
  __int64 (__fastcall *v44)(CWinRTApplicationView *, unsigned __int16 **); // rax
  unsigned __int16 **v45; // rdx
  CWinRTApplicationView *v46; // rcx
  int AppUserModelId; // eax
  HRESULT v48; // eax
  int ActivationFactory; // eax
  wil::details::in1diag3 *v50; // rcx
  const WCHAR *v51; // rcx
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  HRESULT v54; // eax
  __int64 (__fastcall ***v55)(_QWORD, _QWORD, _QWORD); // rcx
  WINBOOL v56; // r14d
  int v57; // eax
  int v58; // eax
  wil::details::in1diag3 *v59; // rcx
  const char *v60; // r9
  __int64 (__fastcall ***v61)(_QWORD, _QWORD, _QWORD); // rcx
  WCHAR *v62; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v64)(CWin32ApplicationView *__hidden, HWND *); // rax
  const struct _TlgProvider_t *v65; // rcx
  bool v66; // r14
  WCHAR *v67; // r12
  WCHAR *v68; // rsi
  struct IImmersiveApplication *v69; // rsi
  const struct _TlgProvider_t *v70; // rcx
  __int64 v71; // rcx
  signed int LastError; // eax
  TraceLoggingHProvider v73; // r10
  int cData; // [rsp+20h] [rbp-278h]
  int cDataa; // [rsp+20h] [rbp-278h]
  DWORD dwProcessId; // [rsp+58h] [rbp-240h] BYREF
  int v77; // [rsp+5Ch] [rbp-23Ch] BYREF
  struct IImmersiveApplication *v78; // [rsp+60h] [rbp-238h] BYREF
  WINBOOL v79; // [rsp+68h] [rbp-230h] BYREF
  WINBOOL v80; // [rsp+6Ch] [rbp-22Ch] BYREF
  CImmersiveApplicationWindow *v81; // [rsp+70h] [rbp-228h] BYREF
  PCWSTR sourceString; // [rsp+78h] [rbp-220h] BYREF
  struct IImmersiveApplication *v83; // [rsp+80h] [rbp-218h] BYREF
  CWin32ApplicationView *v84; // [rsp+88h] [rbp-210h] BYREF
  CWinRTApplicationView *v85; // [rsp+90h] [rbp-208h] BYREF
  CImmersiveApplicationWindow *v86; // [rsp+98h] [rbp-200h] BYREF
  __int64 (__fastcall ***v87)(_QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp-1F8h]
  int v88; // [rsp+A8h] [rbp-1F0h]
  CWinRTApplicationView *v89; // [rsp+B0h] [rbp-1E8h] BYREF
  HWND hWnd; // [rsp+B8h] [rbp-1E0h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-1D8h] BYREF
  void *v92; // [rsp+C8h] [rbp-1D0h] BYREF
  WCHAR *v93; // [rsp+D0h] [rbp-1C8h] BYREF
  int v94; // [rsp+D8h] [rbp-1C0h]
  LPVOID v95; // [rsp+E0h] [rbp-1B8h] BYREF
  WINBOOL fPending; // [rsp+E8h] [rbp-1B0h] BYREF
  HWND v97; // [rsp+F0h] [rbp-1A8h] BYREF
  PCWSTR *v98; // [rsp+F8h] [rbp-1A0h]
  unsigned __int16 *v99; // [rsp+100h] [rbp-198h] BYREF
  char v100; // [rsp+108h] [rbp-190h]
  PCWSTR *p_sourceString; // [rsp+110h] [rbp-188h]
  struct HWND__ v102[2]; // [rsp+118h] [rbp-180h] BYREF
  char v103; // [rsp+120h] [rbp-178h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+128h] [rbp-170h] BYREF
  _QWORD v105[12]; // [rsp+130h] [rbp-168h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+190h] [rbp-108h] BYREF
  HSTRING string; // [rsp+1A8h] [rbp-F0h] BYREF
  HSTRING_HEADER v108; // [rsp+1B0h] [rbp-E8h] BYREF
  HSTRING v109; // [rsp+1C8h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp-C8h] BYREF
  WINBOOL *v111; // [rsp+1F0h] [rbp-A8h]
  int v112; // [rsp+1F8h] [rbp-A0h]
  int v113; // [rsp+1FCh] [rbp-9Ch]
  _QWORD *v114; // [rsp+200h] [rbp-98h]
  int v115; // [rsp+208h] [rbp-90h]
  int v116; // [rsp+20Ch] [rbp-8Ch]
  HWND *v117; // [rsp+210h] [rbp-88h]
  int v118; // [rsp+218h] [rbp-80h]
  int v119; // [rsp+21Ch] [rbp-7Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+220h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v121; // [rsp+230h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  v105[1] = -2LL;
  Context = a4;
  v79 = a2;
  v5 = 0LL;
  v88 = 0;
  try
  {
    *a4 = 0LL;
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v105[2] = SystemTimeAsFileTime;
    v6 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
    v105[3] = v6;
    hWnd = 0LL;
    v84 = 0LL;
    v7 = **(__int64 (__fastcall ***)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))a3;
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    {
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                    a3,
                    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                    &v84);
    }
    else if ( v7 == CWin32ApplicationView::QueryInterface )
    {
      Interface = CWin32ApplicationView::QueryInterface(
                    (CWin32ApplicationView *)a3,
                    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                    (void **)&v84);
    }
    else
    {
      Interface = v7((CWin32ApplicationView *)a3, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, (void **)&v84);
    }
    if ( Interface >= 0 )
    {
      v64 = *(__int64 (__fastcall **)(CWin32ApplicationView *__hidden, HWND *))(*(_QWORD *)v84 + 24LL);
      if ( v64 == CWin32ApplicationView::GetWindow )
        CWin32ApplicationView::GetWindow(v84, &hWnd);
      else
        v64(v84, &hWnd);
      v11 = (WCHAR *)CWinRTApplicationView::GetApplication;
      v14 = (HSTRING)CImmersiveApp::GetWindows;
    }
    else
    {
      v89 = 0LL;
      v9 = **(__int64 (__fastcall ***)(WCHAR *, GUID *, CWinRTApplicationView **))a3;
      if ( (char *)v9 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
        v10 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                a3,
                &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                &v89);
      else
        v10 = v9(a3, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v89);
      v11 = (WCHAR *)CWinRTApplicationView::GetApplication;
      if ( v10 < 0 )
      {
        v14 = (HSTRING)CImmersiveApp::GetWindows;
      }
      else
      {
        v83 = 0LL;
        v12 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v89 + 24LL);
        if ( v12 == CWinRTApplicationView::GetApplication )
          Application = CWinRTApplicationView::GetApplication(v89, &v83);
        else
          Application = v12(v89, &v83);
        v14 = (HSTRING)CImmersiveApp::GetWindows;
        if ( Application >= 0 )
        {
          v81 = 0LL;
          v15 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v83 + 24LL);
          if ( (char *)v15 == (char *)CImmersiveApp::GetWindows )
            Windows = CImmersiveApp::GetWindows(v83, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v81);
          else
            Windows = v15(v83, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v81);
          v94 = Windows;
          if ( Windows == -2147023728 )
          {
            v69 = v83;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v81);
            Windows = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v69 + 24LL))(
                        v69,
                        0LL,
                        &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                        &v81);
            v94 = Windows;
            v5 = 0LL;
          }
          if ( Windows >= 0 )
          {
            v17 = *(__int64 (__fastcall **)(CImmersiveApplicationWindow *, HWND *))(*(_QWORD *)v81 + 32LL);
            if ( v17 == CImmersiveApplicationWindow::GetNativeWindow )
              CImmersiveApplicationWindow::GetNativeWindow(v81, &hWnd);
            else
              v17(v81, &hWnd);
          }
          v18 = v81;
          v105[4] = v81;
          if ( v81 )
          {
            v81 = 0LL;
            (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
        v19 = v83;
        v105[5] = v83;
        if ( v83 )
        {
          v83 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      v20 = v89;
      v105[6] = v89;
      if ( v89 )
      {
        v89 = 0LL;
        (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v21 = hWnd;
    v105[11] = hWnd;
    v22 = v84;
    v105[7] = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(CWin32ApplicationView *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( v21 )
    {
      v97 = v21;
      v77 = 0;
      v23 = *(__int64 (__fastcall **)(CWinRTApplicationView *, int *))(*(_QWORD *)a3 + 344LL);
      if ( v23 == CWinRTApplicationView::IsSplashScreenPresented )
        IsSplashScreenPresented = CWinRTApplicationView::IsSplashScreenPresented((CWinRTApplicationView *)a3, &v77);
      else
        IsSplashScreenPresented = v23((CWinRTApplicationView *)a3, &v77);
      if ( IsSplashScreenPresented < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xC2,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)IsSplashScreenPresented,
          cData);
      }
      else
      {
        sourceString = 0LL;
        v105[9] = 0LL;
        v92 = 0LL;
        v25 = **(__int64 (__fastcall ***)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))a3;
        v26 = &v92;
        v27 = &GUID_e99a73b1_cde0_477b_91b8_e995fa037387;
        v28 = a3;
        if ( (char *)v25 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
        {
          v29 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                  a3,
                  &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                  &v92);
          goto LABEL_32;
        }
        if ( v25 == CWin32ApplicationView::QueryInterface )
        {
          v29 = CWin32ApplicationView::QueryInterface(
                  (CWin32ApplicationView *)a3,
                  &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                  &v92);
          goto LABEL_32;
        }
      }
      v29 = v25((CWin32ApplicationView *)v28, v27, v26);
LABEL_32:
      v30 = v29 >= 0;
      if ( v92 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v92 + 16LL))(v92);
      dwProcessId = 0;
      if ( !v30 )
      {
        if ( GetWindowThreadProcessId(v21, &dwProcessId) )
          goto LABEL_58;
        goto LABEL_134;
      }
      v78 = 0LL;
      v85 = 0LL;
      v31 = **(__int64 (__fastcall ***)(WCHAR *, GUID *, CWinRTApplicationView **))a3;
      if ( (char *)v31 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
        v32 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                a3,
                &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
                &v85);
      else
        v32 = v31(a3, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v85);
      v33 = (unsigned int)v32;
      if ( v32 < 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v85);
        v11 = 0LL;
      }
      else
      {
        v34 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v85 + 24LL);
        if ( v34 == CWinRTApplicationView::GetApplication )
          v35 = CWinRTApplicationView::GetApplication(v85, &v78);
        else
          v35 = v34(v85, &v78);
        v33 = (unsigned int)v35;
        if ( v35 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59,
            (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
            (const char *)(unsigned int)v35,
            cData);
        v36 = v85;
        v11 = 0LL;
        if ( v85 )
        {
          v85 = 0LL;
          (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
      if ( (v33 & 0x80000000) != 0LL )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x10B,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v33,
          cData);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      }
      else
      {
        v33 = (unsigned __int64)v78;
        v86 = 0LL;
      }
      v37 = *(__int64 (__fastcall **)(unsigned __int64, __int64, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v33 + 24LL);
      if ( (char *)v37 == (char *)CImmersiveApp::GetWindows )
        v38 = CImmersiveApp::GetWindows(v33, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v86);
      else
        v38 = v37(v33, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v86);
      if ( v38 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x10E,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
          (const char *)(unsigned int)v38,
          cData);
      }
      else
      {
        v39 = v86;
        v40 = *(__int64 (__fastcall **)(HWND *, unsigned int *))(*(_QWORD *)v86 + 48LL);
        p_dwProcessId = &dwProcessId;
        if ( v40 == CImmersiveApplicationWindow::GetProcessId )
        {
          ProcessId = CImmersiveApplicationWindow::GetProcessId((HWND *)v86, &dwProcessId);
LABEL_51:
          v5 = 0LL;
          if ( ProcessId == -2147023496 )
            ProcessId = 0;
          if ( ProcessId >= 0 )
          {
            if ( v86 )
              (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v86 + 16LL))(v86);
            if ( v78 )
              (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v78 + 16LL))(v78);
            goto LABEL_58;
          }
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x113,
            (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
            (const char *)(unsigned int)ProcessId,
            cData);
LABEL_134:
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError == -2147023496 )
            LastError = 0;
          if ( LastError < 0 )
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x11D,
              (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
              (const char *)(unsigned int)LastError,
              cData);
            goto LABEL_140;
          }
LABEL_58:
          if ( !v30 )
          {
            p_sourceString = &sourceString;
            *(_QWORD *)&v102[0].unused = 0LL;
            v103 = 1;
            v66 = (int)CallerIdentity::GetImmersiveAppIdFromWindow(v21, (LPWSTR *)v102, v43) < 0;
            if ( v103 )
            {
              v11 = *(WCHAR **)&v102[0].unused;
              v5 = p_sourceString;
              v67 = (WCHAR *)*p_sourceString;
              if ( *p_sourceString )
              {
                a3 = (WCHAR *)GetLastError();
                CoTaskMemFree(v67);
                SetLastError((DWORD)a3);
              }
              *v5 = v11;
              LODWORD(v5) = 0;
            }
            if ( v66 )
            {
              v68 = (WCHAR *)sourceString;
              if ( sourceString )
              {
                a3 = (WCHAR *)GetLastError();
                CoTaskMemFree(v68);
                SetLastError((DWORD)a3);
              }
              LODWORD(v5) = 0;
              sourceString = 0LL;
            }
LABEL_65:
            v93 = 0LL;
            string = 0LL;
            v48 = WindowsCreateStringReference(
                    L"Windows.Internal.Shell.TaskFlow.DataEngine.AppViewExecutionData",
                    0x3Fu,
                    &hstringHeader,
                    &string);
            if ( v48 < 0 )
            {
              RaiseException(v48, 1u, 0, 0LL);
            }
            else
            {
              ActivationFactory = RoGetActivationFactory(string, &GUID_4687f708_73f4_4222_905a_6a639cd93e7c, &v93);
              v50 = retaddr;
              if ( ActivationFactory >= 0 )
              {
                string = 0LL;
                v87 = 0LL;
                v51 = sourceString;
                if ( !sourceString )
                {
                  LOBYTE(v11) = v88;
LABEL_75:
                  a3 = v93;
                  v55 = v87;
                  v14 = 0LL;
                  if ( !v87 )
                    goto LABEL_76;
                  goto LABEL_149;
                }
                v109 = 0LL;
                v52 = -1LL;
                do
                  ++v52;
                while ( sourceString[v52] );
                v105[10] = v52;
                if ( v52 <= 0xFFFFFFFF )
                {
                  v53 = v52 + 1;
                  if ( (int)v52 + 1 < (unsigned int)v52 )
                    goto LABEL_148;
                  if ( (unsigned int)v52 < v53 )
                  {
LABEL_73:
                    v54 = WindowsCreateStringReference(v51, v52, &v108, &v109);
                    if ( v54 >= 0 )
                    {
                      LOBYTE(v11) = 1;
                      v88 = 1;
                      LODWORD(v5) = (_DWORD)v109;
                      goto LABEL_75;
                    }
                    RaiseException(v54, 1u, 0, 0LL);
LABEL_148:
                    RaiseException(0x80070216, 1u, 0, 0LL);
LABEL_149:
                    v87 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
                    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v55)[2])(v55);
LABEL_76:
                    cDataa = (int)v5;
                    v56 = v79;
                    v57 = (*(__int64 (__fastcall **)(WCHAR *, _QWORD, unsigned __int64, HWND))(*(_QWORD *)a3 + 48LL))(
                            a3,
                            (unsigned int)v79,
                            v6,
                            v97);
                    if ( v57 < 0 )
                    {
                      wil::details::in1diag3::Throw_Hr(
                        retaddr,
                        (void *)0xF1,
                        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                        (const char *)(unsigned int)v57,
                        (int)v5);
                    }
                    else
                    {
                      if ( ((unsigned __int8)v11 & 1) != 0 )
                        v109 = v14;
                      v58 = (**v87)(v87, &GUID_8b64ae0c_f844_4307_8b0c_a086658c6356, Context);
                      v59 = retaddr;
                      if ( v58 >= 0 )
                      {
                        a3 = (WCHAR *)sourceString;
                        Context = v14;
                        if ( !InitOnceBeginInitialize(
                                &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
                                0,
                                &fPending,
                                &Context)
                          || !fPending )
                        {
                          goto LABEL_82;
                        }
                        goto LABEL_152;
                      }
                    }
                    wil::details::in1diag3::Throw_Hr(
                      v59,
                      (void *)0xF3,
                      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                      (const char *)(unsigned int)v58,
                      cDataa);
LABEL_152:
                    Context = qword_1804388F0;
                    qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
                    qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
                    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
                    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908);
                    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
LABEL_82:
                    if ( **((_DWORD **)Context + 1) > 5u )
                    {
                      v80 = v56;
                      v111 = &v80;
                      v112 = 4;
                      v113 = (int)v14;
                      v105[0] = v6;
                      v114 = v105;
                      v115 = 8;
                      v116 = (int)v14;
                      v117 = &v97;
                      v118 = 8;
                      v119 = (int)v14;
                      TlgCreateWsz(&pDesc, a3);
                      TlgWrite(v73, &unk_180391FB8, 0LL, 0LL, 6u, &pData);
                    }
                    v61 = v87;
                    if ( v87 )
                    {
                      v87 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v14;
                      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v61)[2])(v61);
                    }
                    v62 = v93;
                    if ( v93 )
                    {
                      v93 = (WCHAR *)v14;
                      (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v62 + 16LL))(v62);
                    }
                    if ( sourceString )
                      CoTaskMemFree((LPVOID)sourceString);
                    return 0LL;
                  }
LABEL_146:
                  LODWORD(v52) = v53 - 1;
                  goto LABEL_73;
                }
LABEL_145:
                RaiseException(0x80070216, 1u, 0, 0LL);
                goto LABEL_146;
              }
            }
            wil::details::in1diag3::Throw_Hr(
              v50,
              (void *)0xE6,
              (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
              (const char *)(unsigned int)ActivationFactory,
              cData);
            goto LABEL_145;
          }
          v98 = &sourceString;
          v99 = 0LL;
          v100 = 1;
          v44 = *(__int64 (__fastcall **)(CWinRTApplicationView *, unsigned __int16 **))(*(_QWORD *)a3 + 136LL);
          v45 = &v99;
          v46 = (CWinRTApplicationView *)a3;
          if ( v44 == CWinRTApplicationView::GetAppUserModelId )
          {
            AppUserModelId = CWinRTApplicationView::GetAppUserModelId((CWinRTApplicationView *)a3, &v99);
            goto LABEL_61;
          }
LABEL_140:
          AppUserModelId = v44(v46, v45);
LABEL_61:
          if ( AppUserModelId < 0 )
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xD4,
              (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
              (const char *)(unsigned int)AppUserModelId,
              cData);
          }
          else
          {
            if ( !v100 )
              goto LABEL_65;
            v21 = (HWND)v99;
            v5 = v98;
            v11 = (WCHAR *)*v98;
            if ( !*v98 )
              goto LABEL_64;
          }
          a3 = (WCHAR *)GetLastError();
          CoTaskMemFree(v11);
          SetLastError((DWORD)a3);
LABEL_64:
          *v5 = v21;
          LODWORD(v5) = 0;
          goto LABEL_65;
        }
      }
      ProcessId = v40((HWND *)v39, p_dwProcessId);
      goto LABEL_51;
    }
    v95 = 0LL;
    if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &v79, &v95) && v79 )
    {
      v95 = qword_1804388F0;
      qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
      qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908);
      InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
    }
    v65 = (const struct _TlgProvider_t *)*((_QWORD *)v95 + 1);
    v105[8] = v65;
    if ( *(_DWORD *)v65 > 5u && TlgKeywordOn(v65, 0x200000000000uLL) )
      TlgWrite(v70, &unk_180391E73, 0LL, 0LL, 2u, &v121);
    _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFC,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
                           v60);
  }
  return result;
}
