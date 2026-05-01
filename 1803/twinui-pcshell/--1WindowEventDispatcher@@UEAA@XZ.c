/*
 * XREFs of ??1WindowEventDispatcher@@UEAA@XZ @ 0x1801D28E8
 * Callers:
 *     ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x1801D2F74 (--_EWindowEventDispatcher@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?_Freenode@?$_List_buy@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@2@@Z @ 0x1801DA924 (-_Freenode@-$_List_buy@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispa.c)
 */

void __fastcall WindowEventDispatcher::~WindowEventDispatcher(WindowEventDispatcher *this)
{
  char **v2; // rax
  char *v3; // rdx
  char *v4; // rcx
  char *v5; // rbx
  char **v6; // rax
  char *v7; // rdx
  char *v8; // rcx
  char *v9; // rbx
  char *v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rsi
  __int64 *v13; // rbx
  __int64 *v14; // rsi
  __int64 *v15; // rbx
  __int64 *v16; // rsi
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  volatile int *v21; // rdx

  v2 = (char **)*((_QWORD *)this + 64);
  v3 = *v2;
  *v2 = (char *)v2;
  *(_QWORD *)(*((_QWORD *)this + 64) + 8LL) = *((_QWORD *)this + 64);
  *((_QWORD *)this + 65) = 0LL;
  v4 = (char *)*((_QWORD *)this + 64);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *(char **)v3;
      std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Freenode(v4);
      v3 = v5;
      v4 = (char *)*((_QWORD *)this + 64);
    }
    while ( v5 != v4 );
  }
  std::_Deallocate(v4, 1uLL, 0x18uLL);
  v6 = (char **)*((_QWORD *)this + 62);
  v7 = *v6;
  *v6 = (char *)v6;
  *(_QWORD *)(*((_QWORD *)this + 62) + 8LL) = *((_QWORD *)this + 62);
  *((_QWORD *)this + 63) = 0LL;
  v8 = (char *)*((_QWORD *)this + 62);
  if ( v7 != v8 )
  {
    do
    {
      v9 = *(char **)v7;
      std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Freenode(v8);
      v7 = v9;
      v8 = (char *)*((_QWORD *)this + 62);
    }
    while ( v9 != v8 );
  }
  std::_Deallocate(v8, 1uLL, 0x18uLL);
  v10 = (char *)*((_QWORD *)this + 59);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 56);
  v11 = (__int64 *)*((_QWORD *)this + 52);
  if ( v11 )
  {
    v12 = (__int64 *)*((_QWORD *)this + 53);
    if ( v11 != v12 )
    {
      do
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v11++);
      while ( v11 != v12 );
      v11 = (__int64 *)*((_QWORD *)this + 52);
    }
    std::_Deallocate((char *)v11, (__int64)(*((_QWORD *)this + 54) - (_QWORD)v11) >> 3, 8uLL);
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
  }
  v13 = (__int64 *)*((_QWORD *)this + 48);
  if ( v13 )
  {
    v14 = (__int64 *)*((_QWORD *)this + 49);
    if ( v13 != v14 )
    {
      do
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v13++);
      while ( v13 != v14 );
      v13 = (__int64 *)*((_QWORD *)this + 48);
    }
    std::_Deallocate((char *)v13, (__int64)(*((_QWORD *)this + 50) - (_QWORD)v13) >> 3, 8uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  v15 = (__int64 *)*((_QWORD *)this + 45);
  if ( v15 )
  {
    v16 = (__int64 *)*((_QWORD *)this + 46);
    if ( v15 != v16 )
    {
      do
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v15++);
      while ( v15 != v16 );
      v15 = (__int64 *)*((_QWORD *)this + 45);
    }
    std::_Deallocate((char *)v15, (__int64)(*((_QWORD *)this + 47) - (_QWORD)v15) >> 3, 8uLL);
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
  }
  v17 = (std::_Ref_count_base *)*((_QWORD *)this + 44);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  v18 = *((_QWORD *)this + 42);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 41);
  v19 = *((_QWORD *)this + 40);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 39);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 38);
  v20 = *((_QWORD *)this + 37);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 36);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,IWindowEventDispatcherInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,IWindowDispatcherConnectedStandby,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v21);
}
