/*
 * XREFs of ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x18027EEC0
 * Callers:
 *     ??_GAltEscHotkeyHandler@@MEAAPEAXI@Z @ 0x18027EFA0 (--_GAltEscHotkeyHandler@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180184C78 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 */

void __fastcall AltEscHotkeyHandler::~AltEscHotkeyHandler(AltEscHotkeyHandler *this)
{
  HWND *v2; // rdi
  const char *v3; // r9
  const char *v4; // r9
  volatile int *v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &AltEscHotkeyHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>'};
  v2 = (HWND *)((char *)this + 64);
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>,IWeakReferenceSource>>'};
  *((_QWORD *)this + 6) = &AltEscHotkeyHandler::`vftable'{for `CImpWorkerWndProc'};
  if ( !UnregisterHotKey(*((HWND *)this + 8), 58) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      v3);
  if ( !UnregisterHotKey(*v2, 59) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alteschotkeyhandler.cpp",
      v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>>(v2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
    (__int64)this,
    v5);
}
