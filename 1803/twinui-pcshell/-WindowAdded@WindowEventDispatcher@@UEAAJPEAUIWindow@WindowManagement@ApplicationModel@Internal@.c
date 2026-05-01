/*
 * XREFs of ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801D9DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@AEAY0DF@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIWindowWrapperInternal@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@AEAY0DF@$$CBG@Z @ 0x1801D1A44 (--$MakeAndInitialize@VWindowWrapper@@UIWindowWrapperInternal@@PEAVWindowEventDispatcher@@PEAUIAp.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1E1C (--$emplace_back@AEBV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@-$vec.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1801D5858 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@PEBG0@Z @ 0x1801D59B0 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@V-$CRefCountedObject@UViewEventR.c)
 *     ?IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D6750 (-IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1801D76E8 (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1801D7774 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall WindowEventDispatcher::WindowAdded(__int64 a1, __int64 a2, unsigned int a3, const char *a4)
{
  __int64 result; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  WindowWrapper *v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  const WCHAR *v22; // rdi
  const WCHAR *v23; // rax
  __int64 *EventRegistration; // rax
  __int64 v25; // rdi
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v26; // rcx
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v27; // rcx
  int v28; // edi
  bool v29; // zf
  __int64 v30; // rdi
  unsigned int v31; // eax
  int v32; // eax
  DWORD pcbData[2]; // [rsp+40h] [rbp-68h] BYREF
  WindowWrapper *v34; // [rsp+48h] [rbp-60h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-58h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v36; // [rsp+58h] [rbp-50h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v37; // [rsp+60h] [rbp-48h] BYREF
  DWORD pdwType[2]; // [rsp+68h] [rbp-40h] BYREF
  int v39; // [rsp+70h] [rbp-38h] BYREF
  int v40; // [rsp+74h] [rbp-34h] BYREF
  __int64 v41; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v43; // [rsp+B8h] [rbp+10h] BYREF
  WindowWrapper *pvData; // [rsp+C8h] [rbp+20h] BYREF

  v41 = -2LL;
  try
  {
    if ( !a2 )
      return 0LL;
    v37 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(*(_QWORD *)a2 + 112LL))(
           a2,
           &v37);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        905LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v35);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        908LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    if ( IsComponentAppView(v37) )
      goto LABEL_66;
    v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v37 + 48LL))(
            v37,
            &v39);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        913LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10);
    LOBYTE(v43) = 0;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 448));
    *(_QWORD *)pcbData = a1 + 448;
    WindowEventDispatcher::GetCachedView(a1 - 16, (__int64 *)&pvData, v39);
    v11 = pvData;
    pvData = 0LL;
    v34 = v11;
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&pvData);
    if ( !v11 )
    {
      v43 = v37;
      pvData = (WindowWrapper *)(a1 - 16);
      v34 = 0LL;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<WindowWrapper,IWindowWrapperInternal,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,unsigned short const (&)[53]>(
              &v34,
              &pvData,
              &v43);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          929LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      LOBYTE(v43) = 1;
      v11 = v34;
    }
    if ( a1 != -448 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 448));
    v36 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(WindowWrapper *, GUID *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))v11)(
            v11,
            &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
            &v36);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5691LL,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int *))(*(_QWORD *)v36 + 344LL))(
            v36,
            &v40);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        939LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    if ( v40 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 448));
      *(_QWORD *)pdwType = a1 + 448;
      v18 = (*(__int64 (__fastcall **)(WindowWrapper *, __int64, _QWORD))(*(_QWORD *)v11 + 168LL))(v11, a2, a3);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          950LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v18);
      pvData = 0LL;
      v19 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, DWORD *))(**(_QWORD **)(a1 + 296) + 48LL))(
                         *(_QWORD *)(a1 + 296),
                         pcbData);
      v20 = (__int64)pvData;
      pvData = 0LL;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, WindowWrapper **))(*(_QWORD *)v19 + 64LL))(
              v19,
              v35,
              1LL,
              &pvData);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          954LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v21);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)pcbData);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&pvData);
      if ( a1 != -448 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 448));
    }
    else
    {
      pvData = 0LL;
      v15 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, DWORD *))(**(_QWORD **)(a1 + 296) + 48LL))(
                         *(_QWORD *)(a1 + 296),
                         pcbData);
      v16 = (__int64)pvData;
      pvData = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, WindowWrapper **))(*(_QWORD *)v15 + 72LL))(v15, v35, &pvData);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          945LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v17);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)pcbData);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&pvData);
    }
    if ( !a3 )
    {
      pvData = 0LL;
      AcquireSRWLockShared((PSRWLOCK)(a1 + 448));
      *(_QWORD *)pdwType = a1 + 448;
      v22 = (const WCHAR *)(*(__int64 (__fastcall **)(WindowWrapper *))(*(_QWORD *)v11 + 232LL))(v11);
      v23 = (const WCHAR *)(*(__int64 (__fastcall **)(WindowWrapper *))(*(_QWORD *)v11 + 224LL))(v11);
      EventRegistration = WindowEventDispatcher::GetEventRegistration(a1 - 16, (__int64 *)pcbData, v23, v22);
      v25 = *EventRegistration;
      *EventRegistration = 0LL;
      pvData = (WindowWrapper *)v25;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)pcbData);
      if ( !v25 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          964LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)0x80070490LL);
      if ( a1 != -448 )
        ReleaseSRWLockShared((PSRWLOCK)(a1 + 448));
      if ( (_BYTE)v43 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)(a1 + 448));
        v43 = (struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *)(a1 + 448);
        (*(void (__fastcall **)(WindowWrapper *, _QWORD, _QWORD))(*(_QWORD *)v11 + 248LL))(
          v11,
          (v25 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64),
          0LL);
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
          a1 + 344,
          (__int64 *)&v34);
        if ( a1 != -448 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 448));
        v26 = *(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **)(v25 + 32);
        v43 = v26;
        if ( v26 )
          (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v26 + 8LL))(v26);
        WindowEventDispatcher::RaiseViewEventWithPropertySet(a1 - 16, v36, 0, 0LL, &v43);
      }
      v27 = *(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **)(v25 + 32);
      v43 = v27;
      if ( v27 )
        (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)v27 + 8LL))(v27);
      WindowEventDispatcher::RaiseViewEvent(a1 - 16, (__int64)v36, 6u, (__int64 *)&v43);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&pvData);
      goto LABEL_65;
    }
    if ( a3 != 1 )
    {
LABEL_65:
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v36);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v34);
LABEL_66:
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v37);
      return 0LL;
    }
    v28 = 0;
    pdwType[0] = 0;
    pcbData[0] = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
            L"DisableAppRecoveryAfterShellRestart",
            0x10000012u,
            pdwType,
            &pvData,
            pcbData) )
    {
      if ( pdwType[0] == 4 )
      {
        v29 = (_DWORD)pvData == 1;
        if ( (unsigned int)pvData > 1 )
          goto LABEL_58;
        goto LABEL_57;
      }
      if ( pcbData[0] == 4 && (unsigned __int16)((_WORD)pvData - 48) <= 1u )
      {
        v29 = (_WORD)pvData == 49;
LABEL_57:
        LOBYTE(v28) = v29;
      }
    }
LABEL_58:
    if ( (_BYTE)v43 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)(a1 + 448));
      v43 = (struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *)(a1 + 448);
      if ( v28 )
      {
        v30 = *(_QWORD *)(a1 + 296);
        v31 = (*(__int64 (__fastcall **)(WindowWrapper *))(*(_QWORD *)v11 + 240LL))(v11);
        v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v30 + 56LL))(v30, v31, 0LL);
        if ( v32 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            995LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v32);
      }
      else
      {
        std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
          a1 + 368,
          (__int64 *)&v34);
      }
      if ( a1 != -448 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 448));
    }
    goto LABEL_65;
  }
  catch ( ... )
  {
    LODWORD(v43) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3EF,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                     a4);
    return (unsigned int)v43;
  }
  return result;
}
