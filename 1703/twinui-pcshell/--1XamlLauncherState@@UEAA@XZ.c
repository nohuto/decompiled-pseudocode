/*
 * XREFs of ??1XamlLauncherState@@UEAA@XZ @ 0x1801537AC
 * Callers:
 *     ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180150270 (--_EXamlLauncherState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001DA88 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18014831C (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014DC80 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??_GFocusHoldingTank@@QEAAPEAXI@Z @ 0x180150994 (--_GFocusHoldingTank@@QEAAPEAXI@Z.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x180156330 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::~XamlLauncherState(XamlLauncherState *this)
{
  PTP_TIMER *v2; // rsi
  char *v3; // rcx
  HWND *v4; // rcx
  struct _TP_TIMER *v5; // rbx
  struct _TP_TIMER *v6; // rbx
  struct _TP_TIMER *v7; // rbx
  struct _TP_TIMER *v8; // rbx
  struct _TP_TIMER *v9; // rbx
  struct _TP_TIMER *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  *(_QWORD *)this = &XamlLauncherState::`vftable';
  *((_QWORD *)this + 2) = &XamlLauncherState::`vftable'{for `IXamlLauncherState'};
  *((_QWORD *)this + 3) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveLauncherCortana,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 4) = &XamlLauncherState::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 5) = &XamlLauncherState::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil>,1,0>'};
  XamlLauncherState::CancelStartTelemetryTimeout(this, 0);
  v2 = (PTP_TIMER *)((char *)this + 936);
  if ( *((_QWORD *)this + 117) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 117,
      0LL);
  if ( *((_QWORD *)this + 118) )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 118,
      0LL);
  v3 = (char *)*((_QWORD *)this + 129);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (HWND *)*((_QWORD *)this + 123);
  if ( v4 )
    FocusHoldingTank::`scalar deleting destructor'(v4);
  WindowsDeleteString(*((HSTRING *)this + 122));
  *((_QWORD *)this + 122) = 0LL;
  v5 = (struct _TP_TIMER *)*((_QWORD *)this + 118);
  if ( v5 )
  {
    SetThreadpoolTimer(v5, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v5, 1);
    CloseThreadpoolTimer(v5);
  }
  v6 = *v2;
  if ( *v2 )
  {
    SetThreadpoolTimer(*v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v6, 1);
    CloseThreadpoolTimer(v6);
  }
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 116);
  if ( v7 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 116), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v7, 1);
    CloseThreadpoolTimer(v7);
  }
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 115);
  if ( v8 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 115), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v8, 1);
    CloseThreadpoolTimer(v8);
  }
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 114);
  if ( v9 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 114), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v9, 1);
    CloseThreadpoolTimer(v9);
  }
  v10 = (struct _TP_TIMER *)*((_QWORD *)this + 113);
  if ( v10 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 113), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v10, 1);
    CloseThreadpoolTimer(v10);
  }
  *((_QWORD *)this + 74) = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)this + 74);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 592);
  *((_QWORD *)this + 35) = &StartWindowTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((_QWORD *)this + 35);
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 280);
  v11 = *((_QWORD *)this + 33);
  if ( v11 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 14);
  if ( v12 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 13);
  if ( v13 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 12);
  if ( v14 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 11);
  if ( v15 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 10);
  if ( v16 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *((_DWORD *)this + 13) = -1073741823;
  v18 = *((_QWORD *)this + 1);
  if ( v18 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
}
