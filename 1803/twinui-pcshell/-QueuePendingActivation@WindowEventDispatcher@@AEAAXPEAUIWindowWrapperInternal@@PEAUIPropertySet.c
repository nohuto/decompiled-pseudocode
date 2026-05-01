/*
 * XREFs of ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1801D70E4
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3130 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@AEBU_GUID@@@Z @ 0x180094374 (-SetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     ?GetNavigationRequestId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x1800958C8 (-GetNavigationRequestId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHel.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180149930 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_281168bc4fef0a369225048757561f78___ @ 0x1801D1C70 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_281168bc4fef0a369225048757561f78___.c)
 *     ??$_Buynode@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1D04 (--$_Buynode@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@.c)
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1801D7550 (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall WindowEventDispatcher::QueuePendingActivation(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        char a4)
{
  _QWORD *v8; // rax
  const char *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned __int64 *v12; // r8
  int NavigationRequestId; // eax
  const unsigned __int16 *v14; // rax
  HRESULT v15; // eax
  __int64 v16; // rcx
  const struct _GUID *v17; // r8
  HWND v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  LPVOID v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 *v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-49h]
  LPVOID v33; // [rsp+38h] [rbp-39h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-31h] BYREF
  __int64 v35; // [rsp+48h] [rbp-29h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h] BYREF
  __int64 v37; // [rsp+58h] [rbp-19h] BYREF
  WindowEventDispatcher *v38; // [rsp+60h] [rbp-11h] BYREF
  __int64 v39[3]; // [rsp+68h] [rbp-9h] BYREF
  GUID v40; // [rsp+80h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v39[2] = -2LL;
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v8;
  if ( v8 )
  {
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    *v8 = &CRefCountedObject<WindowEventDispatcher::PendingActivationData>::`vftable';
    *((_DWORD *)v8 + 10) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v37 = v10;
  if ( !v10 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      1564LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v9);
    __debugbreak();
  }
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 32) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v35 = *(_QWORD *)(v10 + 32);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v35);
  NavigationRequestId = Windows::Internal::Shell::Desktop::ViewManagerInterop::GetNavigationRequestId(
                          (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v35,
                          (struct Windows::Internal::ShellHelpers::PropertySetHelper *)(v10 + 8),
                          v12);
  if ( NavigationRequestId < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1571LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)NavigationRequestId);
    __debugbreak();
  }
  v14 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 224LL))(a2);
  if ( v14 )
    v15 = Windows::Internal::String::_InitializeHelper((HSTRING *)(v10 + 16), v14);
  else
    v15 = -2147467261;
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1573LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15);
  v16 = *((_QWORD *)this + 42);
  v36 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &v36) >= 0 )
  {
    v40 = GUID_NULL;
    if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v36 + 32LL))(v36, &v40) >= 0 )
      Windows::Internal::Shell::Desktop::ViewManagerInterop::SetActivationVirtualDesktopId(
        (Windows::Internal::Shell::Desktop::ViewManagerInterop *)&v35,
        (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v40,
        v17);
  }
  if ( a4 )
  {
    AcquireSRWLockShared((PSRWLOCK)this + 58);
    *(_QWORD *)&v40.Data1 = (char *)this + 464;
    v18 = (HWND)(*(int (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 216LL))(a2);
    if ( this != (WindowEventDispatcher *)-464LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 58);
    v33 = 0LL;
    dwProcessId = 0;
    if ( GetWindowThreadProcessId(v18, &dwProcessId) )
    {
      v33 = 0LL;
      if ( CoCreateInstance(&CLSID_OSTaskCompletion, 0LL, 1u, &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558, &v33) >= 0
        && (*(int (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)v33 + 24LL))(v33, dwProcessId, 0x100000LL) >= 0 )
      {
        v21 = *(_QWORD *)(v10 + 24);
        v22 = v33;
        *(_QWORD *)(v10 + 24) = v33;
        if ( v22 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v22 + 8LL))(v22);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)v22, 3u, v20);
        v23 = *(_QWORD *)(v10 + 8);
        wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
          &v40,
          this);
        v38 = this;
        wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
          v39,
          *(_QWORD *)&v40.Data1);
        v39[1] = v23;
        Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_281168bc4fef0a369225048757561f78___(
          v25,
          v24,
          *((_DWORD *)this + 123),
          v26,
          (__int64)ppv,
          &v38);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v39);
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v40);
      }
    }
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v19, 3u, v20);
    AcquireSRWLockExclusive((PSRWLOCK)this + 58);
    *(_QWORD *)&v40.Data1 = (char *)this + 464;
    v27 = *((_QWORD *)this + 62);
    v28 = *(__int64 **)(v27 + 8);
    v30 = std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Buynode<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
            v29,
            v27,
            (__int64)v28,
            &v37);
    v31 = *((_QWORD *)this + 63);
    if ( v31 == 0xAAAAAAAAAAAAAA9LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 63) = v31 + 1;
    *(_QWORD *)(v27 + 8) = v30;
    *v28 = v30;
    while ( *((_QWORD *)this + 63) > 0x80uLL )
      WindowEventDispatcher::QueuePendingActivationForDestruction(
        this,
        *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 62) + 16LL) + 8LL));
    if ( this != (WindowEventDispatcher *)-464LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 58);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v33);
  }
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v37);
}
