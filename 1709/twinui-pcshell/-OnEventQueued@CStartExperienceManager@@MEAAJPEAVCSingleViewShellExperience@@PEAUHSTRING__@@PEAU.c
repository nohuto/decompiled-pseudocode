/*
 * XREFs of ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B6FB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x180006810 (-_GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIProper.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ??$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAPEAU4@@Z1@Z @ 0x1800A7B7C (--$_GetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1800B8A6C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWindow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800B9900 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StartFullScreenTransparentWi.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1800B9B2C (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BGI@AA @ 0x1800BA6AC (--_9IPropertyValue@Foundation@Windows@@$BGI@AA.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1801D040C (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CStartExperienceManager::OnEventQueued(
        CStartExperienceManager *this,
        ExperienceManagerUtils **a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  __int64 v8; // rax
  HRESULT v9; // eax
  int LastError; // ebx
  __int64 v11; // rdx
  __int64 v13; // rax
  HRESULT v14; // eax
  char *v15; // r15
  __int64 v16; // rbx
  struct IUnknown **i; // rdi
  int v18; // eax
  int v19; // esi
  struct Microsoft::WRL::Details::ModuleBase *v20; // rcx
  __int64 v21; // rax
  HRESULT v22; // eax
  __int64 v23; // rax
  int PropVal; // edi
  struct Windows::Foundation::IPropertyValue *v25; // rcx
  int v26; // eax
  struct Windows::Foundation::IPropertyValue *v27; // rcx
  char *v28; // rbx
  int v29; // eax
  HWND v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  HRESULT v33; // eax
  __int64 v34; // rbx
  struct Windows::Foundation::IPropertyValue *v35; // r8
  int v36; // eax
  HRESULT v37; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v38; // rdx
  HWND v39; // rbx
  const WCHAR *StringRawBuffer; // rax
  const char *v41; // r9
  __int64 v42; // rax
  HRESULT v43; // eax
  HRESULT v44; // eax
  HRESULT v45; // eax
  HANDLE v46; // rax
  void *v47; // rbx
  const struct _TlgProvider_t *v48; // rbx
  PCWSTR v49; // rax
  const WCHAR *v50; // rcx
  __int64 v51; // rdi
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::Foundation::IPropertyValue *v53; // [rsp+40h] [rbp-C8h] BYREF
  int v54; // [rsp+48h] [rbp-C0h]
  __int16 v55; // [rsp+4Ch] [rbp-BCh]
  int v56; // [rsp+50h] [rbp-B8h]
  int v57; // [rsp+54h] [rbp-B4h]
  INT32 result; // [rsp+58h] [rbp-B0h] BYREF
  INT32 v59; // [rsp+5Ch] [rbp-ACh] BYREF
  INT32 v60; // [rsp+60h] [rbp-A8h] BYREF
  INT32 v61; // [rsp+64h] [rbp-A4h] BYREF
  INT32 v62; // [rsp+68h] [rbp-A0h] BYREF
  INT32 v63; // [rsp+6Ch] [rbp-9Ch] BYREF
  INT32 v64; // [rsp+70h] [rbp-98h] BYREF
  int v65; // [rsp+78h] [rbp-90h] BYREF
  __int16 v66; // [rsp+7Ch] [rbp-8Ch]
  int v67; // [rsp+80h] [rbp-88h] BYREF
  __int16 v68; // [rsp+84h] [rbp-84h]
  struct Windows::Foundation::Collections::IPropertySet *v69; // [rsp+88h] [rbp-80h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v70; // [rsp+90h] [rbp-78h] BYREF
  __int64 v71; // [rsp+98h] [rbp-70h]
  __int64 v72; // [rsp+A0h] [rbp-68h]
  HANDLE hObject[3]; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C0h] [rbp-48h] BYREF
  HSTRING string2; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v76[32]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v77[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v78[32]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v79[32]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v80[32]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE v81[32]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v82[32]; // [rsp+1A0h] [rbp+98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp+B8h] BYREF
  const WCHAR *v84; // [rsp+1E0h] [rbp+D8h]
  int v85; // [rsp+1E8h] [rbp+E0h]
  int v86; // [rsp+1ECh] [rbp+E4h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  hObject[1] = (HANDLE)-2LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v76, (const WCHAR **)&off_180214840);
  result = 0;
  v9 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v8 + 24), &result);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  if ( !result )
  {
    LastError = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                  (char *)this + 104,
                  (char *)this - 96);
    if ( LastError < 0 )
    {
      v11 = 437LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)LastError);
      return (unsigned int)LastError;
    }
    return 0LL;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v77, (const WCHAR **)&off_180214810);
  v59 = 0;
  v14 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v13 + 24), &v59);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    __debugbreak();
  }
  if ( !v59 )
  {
    v71 = 0LL;
    v72 = 0LL;
    v15 = (char *)this + 80;
    v16 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 11);
    if ( *((_QWORD *)this + 10) )
    {
      v16 = *(_QWORD *)v15;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v15 + 12LL));
    }
    if ( this != (CStartExperienceManager *)-88LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 11);
    if ( !v16 )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
    for ( i = *(struct IUnknown ***)(v16 + 16); i != *(struct IUnknown ***)(v16 + 24); ++i )
    {
      v18 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))(*i)->lpVtbl[1].QueryInterface)(*i, v72, v71);
      v19 = v18;
      if ( v18 < 0 )
      {
        RoTransformError((unsigned int)v18, 0LL, 0LL);
        if ( v19 == -2147417848 || v19 == -2147023174 || v19 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            (__int64)v15,
            *i);
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) != 1 )
      return 0LL;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
    v20 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_72:
    if ( v20 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v20 + 16LL))(v20);
    return 0LL;
  }
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v78, (const WCHAR **)&off_180214818);
  v60 = 0;
  v22 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v21 + 24), &v60);
  if ( v22 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    __debugbreak();
  }
  if ( v60 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetCachedFeatureEnabledState();
    v54 = 6;
    LOBYTE(v55) = 3;
    v65 = 6;
    v66 = v55;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
      0x7AE09Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v65,
      1,
      3);
    v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v80, (const WCHAR **)&off_180214830);
    v61 = 0;
    v33 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v32 + 24), &v61);
    if ( v33 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
      __debugbreak();
    }
    if ( !v61 )
    {
      v70 = a4;
      if ( a4 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
      v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v81, (const WCHAR **)&off_180214838);
      WindowsDeleteString(0LL);
      string = 0LL;
      v36 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<HSTRING__ *>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v70,
              *(HSTRING *)(v34 + 24),
              v35,
              (__int64)&string);
      LastError = v36;
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1DF,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v36);
        goto LABEL_69;
      }
      v62 = 0;
      v37 = WindowsCompareStringOrdinal(string, 0LL, &v62);
      if ( v37 >= 0 )
      {
        if ( v62 )
        {
          v39 = ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v38);
          if ( !v39 )
          {
            LastError = -2147023728;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1E3,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
              (const char *)0x80070490LL);
            goto LABEL_69;
          }
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          if ( !SetWindowTextW(v39, StringRawBuffer) )
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x1E4,
                          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                          v41);
LABEL_69:
            WindowsDeleteString(string);
            string = 0LL;
            if ( v70 )
              (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v70 + 16LL))(v70);
            return (unsigned int)LastError;
          }
        }
        WindowsDeleteString(string);
        string = 0LL;
        v20 = v70;
        goto LABEL_72;
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
    }
    v42 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v82, (const WCHAR **)&off_180214800);
    v63 = 0;
    v43 = WindowsCompareStringOrdinal(a3, *(HSTRING *)(v42 + 24), &v63);
    if ( v43 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v43);
      __debugbreak();
    }
    if ( v63 )
    {
      string2 = 0LL;
      v44 = WindowsCreateStringReference(L"InitializationComplete", 0x16u, &hstringHeader, &string2);
      if ( v44 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v44);
        __debugbreak();
      }
      v64 = 0;
      v45 = WindowsCompareStringOrdinal(a3, string2, &v64);
      if ( v45 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v45);
        __debugbreak();
      }
      if ( v64 )
      {
        if ( (`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
          wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetCachedFeatureEnabledState();
        v56 = 6;
        LOBYTE(v57) = 3;
        v67 = 6;
        v68 = v57;
        wil_details_FeaturePropertyCache_ReportUsageToService(
          &`wil::Feature<__WilFeatureTraits_Feature_StartFullScreenTransparentWindow>::GetFeaturePropertyCache'::`2'::data,
          0x7AE09Bu,
          (const struct FEATURE_LOGGED_TRAITS *)&v67,
          1,
          3);
      }
      else
      {
        CSingleViewShellExperience::LaunchCompleted((CStartExperienceManager *)((char *)this + 208));
        v46 = OpenEventW(2u, 0, L"ShellStartReadyEvent");
        v47 = v46;
        if ( v46 )
        {
          SetEvent(v46);
          CloseHandle(v47);
        }
        v48 = SingleViewExperienceLogging::Provider();
        if ( *(_DWORD *)v48 > 5u
          && (*((_QWORD *)v48 + 2) & 0x200000000000LL) != 0
          && (*((_QWORD *)v48 + 3) & 0x200000000000LL) == *((_QWORD *)v48 + 3) )
        {
          v49 = WindowsGetStringRawBuffer(*((HSTRING *)this + 28), 0LL);
          v50 = &word_18021F3A8;
          LODWORD(v51) = 0;
          if ( v49 )
          {
            v50 = v49;
            v51 = -1LL;
            do
              ++v51;
            while ( v49[v51] );
          }
          v84 = v50;
          v85 = 2 * v51 + 2;
          v86 = 0;
          TlgWrite(v48, &unk_18025B9B2, 0LL, 0LL, 3u, &pData);
        }
      }
    }
    else
    {
      LastError = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
                    (char *)this + 128,
                    (char *)this - 96);
      if ( LastError < 0 )
      {
        v11 = 489LL;
        goto LABEL_5;
      }
    }
    return 0LL;
  }
  v69 = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a4 + 8LL))(a4);
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v79, (const WCHAR **)&off_180214808);
  v53 = 0LL;
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::_GetPropVal(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v69,
              *(HSTRING *)(v23 + 24),
              &v53);
  if ( PropVal < 0 )
    goto LABEL_32;
  v26 =  Windows::Foundation::IPropertyValue::`vcall'{104,{flat}}(v53, hObject);
  PropVal = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2F,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v26);
LABEL_32:
    v25 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_39;
  }
  v27 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  PropVal = 0;
LABEL_39:
  if ( PropVal >= 0 )
  {
    v28 = (char *)hObject[0];
    if ( hObject[0] )
    {
      hObject[2] = hObject[0];
      v29 = CStartExperienceManager::SetBackgroundImage((CStartExperienceManager *)((char *)this - 96), hObject[0]);
      PropVal = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1C9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
          (const char *)(unsigned int)v29);
        if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(v28);
        goto LABEL_45;
      }
      if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v28);
    }
    else
    {
      v30 = (HWND)*((_QWORD *)this + 66);
      if ( v30 )
        DestroyWindow(v30);
      v31 = *((_QWORD *)this + 65);
      if ( v31 )
      {
        *((_QWORD *)this + 65) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    v20 = v69;
    goto LABEL_72;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1C2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)PropVal);
LABEL_45:
  if ( v69 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v69 + 16LL))(v69);
  return (unsigned int)PropVal;
}
