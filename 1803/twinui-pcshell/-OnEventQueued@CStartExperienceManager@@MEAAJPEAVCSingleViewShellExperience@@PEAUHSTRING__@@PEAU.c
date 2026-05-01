/*
 * XREFs of ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180077510
 * Callers:
 *     ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006A7C0 (-OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Ex.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006BEBC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ??$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x18006C838 (--$GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x180075F74 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180095B38 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___ @ 0x18015A078 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18015A078.c)
 *     ??$GetValue@_J@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEA_J@Z1@Z @ 0x180172704 (--$GetValue@_J@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x180174424 (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 *     ?UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ @ 0x180174804 (-UnsetBackgroundImage@CStartExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStartExperienceManager::OnEventQueued(
        CStartExperienceManager *this,
        ExperienceManagerUtils **a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rax
  HSTRING v9; // r8
  __int64 v10; // rax
  HSTRING v11; // r8
  __int64 v12; // rax
  HSTRING v13; // r8
  __int64 v14; // rax
  HSTRING v15; // r8
  __int64 v16; // rax
  HSTRING v17; // r8
  int LastError; // ebx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rdx
  CStartExperienceManager *v25; // rcx
  char *v26; // rbx
  int v27; // eax
  __int64 *p_string; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  int v31; // eax
  HSTRING v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // rdx
  HWND v36; // rbx
  const WCHAR *v37; // rax
  const char *v38; // r9
  HSTRING v39; // r8
  __int64 v40; // rdx
  const struct _TlgProvider_t *v41; // rdi
  const WCHAR *StringRawBuffer; // rax
  int v43; // eax
  UINT32 cData; // [rsp+20h] [rbp-39h]
  HSTRING string; // [rsp+30h] [rbp-29h] BYREF
  HANDLE hObject[3]; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER pData; // [rsp+50h] [rbp-9h] BYREF
  HSTRING v48; // [rsp+68h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  hObject[1] = (HANDLE)-2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)off_18031DF48);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v8 + 24), v9) )
  {
    LastError = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                  (RTL_SRWLOCK *)this + 13,
                  (__int64)this - 88);
    if ( LastError >= 0 )
      return 0LL;
    v20 = 447LL;
    goto LABEL_11;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)off_18031DF40);
  if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v10 + 24), v11) )
  {
    string = 0LL;
    hObject[0] = 0LL;
    pData.Reserved.Reserved1 = hObject;
    *(_QWORD *)&pData.Reserved.Reserved2[8] = &string;
    LastError = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_8241ab7c54b4c0e48d4fcc85deacecc3___(
                  (char *)this + 80,
                  &pData);
    if ( LastError >= 0 )
      return 0LL;
    v20 = 451LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)LastError,
      cData);
    return (unsigned int)LastError;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_18031DF58);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v12 + 24), v13) )
  {
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)off_18031DF30);
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v14 + 24), v15) )
    {
      v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)off_18031DF10);
      if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, *(HSTRING *)(v16 + 24), v17) )
      {
        v48 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&pData, L"InitializationComplete", 0x17u, 0x16u);
        if ( !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, v48, v39) )
        {
          CSingleViewShellExperience::LaunchCompleted((HSTRING *)this + 27);
          SetExistingEvent(L"ShellStartReadyEvent");
          hObject[0] = 0LL;
          if ( InitOnceBeginInitialize(
                 &`SingleViewExperienceLogging::Instance'::`2'::wrapper,
                 0,
                 (PBOOL)&string,
                 hObject)
            && (_DWORD)string )
          {
            hObject[0] = qword_180438800;
            qword_180438800[0] = &LockScreenServiceLogging::`vftable';
            qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
            InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
          }
          v41 = (const struct _TlgProvider_t *)*((_QWORD *)hObject[0] + 1);
          if ( *(_DWORD *)v41 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)hObject[0] + 1), 0x200000000000uLL) )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 29), 0LL);
            TlgCreateWsz(&pDesc, StringRawBuffer);
            TlgWrite(v41, &unk_18038C0B4, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
          }
          if ( *((_BYTE *)this + 554) )
          {
            *((_BYTE *)this + 554) = 0;
            LOBYTE(v40) = 1;
            v43 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 25) + 48LL))(
                    *((_QWORD *)this + 25),
                    v40);
            if ( v43 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1F6,
                (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                (const char *)(unsigned int)v43,
                cData);
          }
        }
        return 0LL;
      }
      LastError = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                    (RTL_SRWLOCK *)this + 16,
                    (__int64)this - 88);
      if ( LastError >= 0 )
        return 0LL;
      v20 = 489LL;
      goto LABEL_11;
    }
    hObject[0] = a4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)hObject);
    v29 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_18034C520);
    WindowsDeleteString(0LL);
    string = 0LL;
    v31 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)hObject,
            *(HSTRING *)(v29 + 24),
            v30,
            &string);
    LastError = v31;
    if ( v31 < 0 )
    {
      v33 = (unsigned int)v31;
      v34 = 479LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)v33,
        cData);
      goto LABEL_13;
    }
    if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                         (Microsoft::WRL::Wrappers::Details *)string,
                         0LL,
                         v32) )
    {
      v36 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v35);
      if ( !v36 )
      {
        LastError = -2147023728;
        v33 = 2147943568LL;
        v34 = 483LL;
        goto LABEL_35;
      }
      v37 = WindowsGetStringRawBuffer(string, 0LL);
      if ( !SetWindowTextW(v36, v37) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x1E4,
                      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                      v38);
LABEL_13:
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)hObject);
        return (unsigned int)LastError;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    p_string = (__int64 *)hObject;
LABEL_38:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(p_string);
    return 0LL;
  }
  string = (HSTRING)a4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&string);
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&pData, (const WCHAR **)&off_18034C510);
  v22 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<__int64>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&string,
          *(HSTRING *)(v21 + 24));
  v23 = v22;
  if ( v22 >= 0 )
  {
    v25 = (CStartExperienceManager *)((char *)this - 88);
    v26 = (char *)hObject[0];
    if ( hObject[0] )
    {
      pData.Reserved.Reserved1 = hObject[0];
      v27 = CStartExperienceManager::SetBackgroundImage(v25, hObject[0]);
      v23 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D3,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v27,
          cData);
        if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v26);
        goto LABEL_29;
      }
      if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v26);
    }
    else
    {
      v22 = CStartExperienceManager::UnsetBackgroundImage(v25);
      v23 = v22;
      if ( v22 < 0 )
      {
        v24 = 472LL;
        goto LABEL_28;
      }
    }
    p_string = (__int64 *)&string;
    goto LABEL_38;
  }
  v24 = 460LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v22,
    cData);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
  return v23;
}
