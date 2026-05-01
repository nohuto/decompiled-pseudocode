/*
 * XREFs of _lambda_c3020acaf10c7144233ee4f2e713fc58_::operator() @ 0x1800A1BF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c3020acaf10c7144233ee4f2e713fc58___::Run @ 0x1800A2330 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c3020acaf10c7144233ee4f2e713fc58___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001B0F4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVTouchKeyboardExperienceManager@@P84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVTouchKeyboardExperienceManager@@$$QEAP84@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@6789@@Z@Z @ 0x1800A0B40 (--$MakeAgileCallback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Inter.c)
 *     wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___ @ 0x1800A0FE0 (wil--ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___.c)
 *     _lambda_43e11fa879b2ec28bc1102f8a62053cb_::operator() @ 0x1800A17AC (_lambda_43e11fa879b2ec28bc1102f8a62053cb_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F78A0 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??0?$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x18023BA88 (--0-$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18023C96C (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z.c)
 *     ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x18023E4A8 (-InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFram.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180241564 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MultiViewInputApp@@@wil@@CAX_NW4Repo.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802415C0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuspendInputAppDesktop@@@wil@@CAX_NW.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_c3020acaf10c7144233ee4f2e713fc58_::operator()(_QWORD *a1)
{
  int v2; // ebx
  int v3; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rax
  char v6; // r14
  unsigned int v7; // edi
  _QWORD *v8; // r15
  int TitleBar; // eax
  TouchKeyboardExperienceManager *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // r12
  __int64 v18; // rcx
  ExperienceManagerUtils *v19; // rcx
  __int64 (__fastcall *v20)(ExperienceManagerUtils *, __int64); // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  struct IInspectable *v25[2]; // [rsp+20h] [rbp-59h] BYREF
  __int128 v26; // [rsp+30h] [rbp-49h] BYREF
  struct IApplicationFrameWrapper **v27; // [rsp+40h] [rbp-39h]
  struct IApplicationFrameTitleBar **v28; // [rsp+48h] [rbp-31h]
  char v29; // [rsp+50h] [rbp-29h]
  __int64 v30; // [rsp+60h] [rbp-19h] BYREF
  __int64 v31; // [rsp+68h] [rbp-11h] BYREF
  std::_Ref_count_base *v32; // [rsp+70h] [rbp-9h]
  _QWORD *v33; // [rsp+78h] [rbp-1h]
  char v34; // [rsp+80h] [rbp+7h]
  __int64 v35; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct IApplicationFrameWrapper *v37; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v38; // [rsp+E8h] [rbp+6Fh] BYREF
  ExperienceManagerUtils *v39; // [rsp+F0h] [rbp+77h] BYREF
  struct IApplicationFrameTitleBar *v40; // [rsp+F8h] [rbp+7Fh] BYREF

  v35 = -2LL;
  v2 = 0;
  v25[0] = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::Details::WeakReferenceImpl **)a1 + 1, v25);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1954LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( !v25[0] )
    goto LABEL_7;
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper((ExperienceManagerUtils *)*a1, v4);
  v6 = 1;
  if ( v5 && !SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v2 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B2,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
LABEL_7:
    v7 = v2;
    goto LABEL_43;
  }
  v33 = a1;
  v34 = 1;
  v37 = 0LL;
  v40 = 0LL;
  v8 = a1 + 2;
  TitleBar = TouchKeyboardExperienceManager::CreateAppFrameWrapper((TouchKeyboardExperienceManager *)a1[2], &v37);
  v7 = TitleBar;
  if ( TitleBar >= 0 )
  {
    TitleBar = TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(v10, v37, &v40);
    v7 = TitleBar;
    if ( TitleBar < 0 )
    {
      v11 = 1982LL;
      goto LABEL_20;
    }
    TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v37 + 48LL))(v37, 3LL);
    v7 = TitleBar;
    if ( TitleBar < 0 )
    {
      v11 = 1985LL;
      goto LABEL_20;
    }
    v12 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)v37 + 128LL))(v37, 0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1986LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    TitleBar = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, _QWORD))(*(_QWORD *)v37 + 104LL))(v37, *a1);
    v7 = TitleBar;
    if ( TitleBar < 0 )
    {
      v11 = 1988LL;
      goto LABEL_20;
    }
    *(_QWORD *)&v26 = *v8;
    *((_QWORD *)&v26 + 1) = a1;
    v27 = &v37;
    v28 = &v40;
    v29 = *((_BYTE *)a1 + 24);
    TitleBar = wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___((__int64)&v26);
    v7 = TitleBar;
    if ( TitleBar < 0 )
    {
      v11 = 2002LL;
      goto LABEL_20;
    }
    std::shared_ptr<KBViewInfo>::shared_ptr<KBViewInfo>(&v31, *(_QWORD *)(*v8 + 432LL) - 16LL);
    v38 = 0LL;
    v39 = (ExperienceManagerUtils *)*a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v39);
    v13 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
            &v39,
            &v38);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_38;
    }
    *(_QWORD *)&v26 = TouchKeyboardExperienceManager::OnClientWindowReadyForPresentationChanged;
    DWORD2(v26) = 0;
    wil::MakeAgileCallback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,TouchKeyboardExperienceManager * const &,long (TouchKeyboardExperienceManager::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>(
      &v30,
      a1 + 2,
      &v26);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v38 + 80LL))(v38, v30, v31 + 24);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7DD,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_37:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
LABEL_38:
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v39);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v38);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      goto LABEL_40;
    }
    *(_QWORD *)&v26 = &v38;
    *((_QWORD *)&v26 + 1) = &v31;
    v17 = 1;
    LOBYTE(v27) = 1;
    LOBYTE(v15) = 3;
    wil::Feature<__WilFeatureTraits_Feature_MultiViewInputApp>::ReportUsageToService(v16, v15);
    if ( *((_BYTE *)a1 + 24) )
    {
      *(_DWORD *)(v31 + 36) = -1;
    }
    else
    {
      v18 = (unsigned int)((__int64)(*(_QWORD *)(*v8 + 432LL) - *(_QWORD *)(*v8 + 424LL)) >> 4) - 2;
      *(_DWORD *)(v31 + 36) = v18;
    }
    wil::Feature<__WilFeatureTraits_Feature_SuspendInputAppDesktop>::ReportUsageToService(v18);
    v19 = (ExperienceManagerUtils *)*a1;
    v20 = *(__int64 (__fastcall **)(ExperienceManagerUtils *, __int64))(*(_QWORD *)*a1 + 336LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 664LL) + 96LL) + 500LL) )
    {
      v21 = v20(v19, 4LL);
      v7 = v21;
      if ( v21 < 0 )
      {
        v22 = 2045LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v21);
        goto LABEL_35;
      }
    }
    else
    {
      v21 = v20(v19, 1LL);
      v7 = v21;
      if ( v21 < 0 )
      {
        v22 = 2050LL;
        goto LABEL_33;
      }
    }
    v17 = 0;
    v6 = 0;
    v34 = 0;
    v7 = 0;
LABEL_35:
    if ( v17 )
    {
      LOBYTE(v27) = 0;
      lambda_43e11fa879b2ec28bc1102f8a62053cb_::operator()((_QWORD **)&v26);
    }
    goto LABEL_37;
  }
  v11 = 1981LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)TitleBar);
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
  if ( v6 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 336LL))(*a1, 0LL);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1976LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
  }
LABEL_43:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)v25);
  return v7;
}
