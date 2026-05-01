/*
 * XREFs of ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x180079A28
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x18022DD24 (--1XamlLauncherState@@UEAA@XZ.c)
 * Callees:
 *     ?close_reset@?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007A9FC (-close_reset@-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolTimer@US.c)
 */

void __fastcall XamlLauncherState::CancelStartTelemetryTimeout(XamlLauncherState *this, char a2)
{
  struct _TP_TIMER *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER *v6; // rcx

  if ( !a2 )
  {
    v3 = (struct _TP_TIMER *)*((_QWORD *)this + 115);
    if ( v3 )
    {
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v3);
      *((_QWORD *)this + 115) = 0LL;
    }
    v4 = (struct _TP_TIMER *)*((_QWORD *)this + 114);
    if ( v4 )
    {
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v4);
      *((_QWORD *)this + 114) = 0LL;
    }
    v5 = (struct _TP_TIMER *)*((_QWORD *)this + 116);
    if ( v5 )
    {
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v5);
      *((_QWORD *)this + 116) = 0LL;
    }
  }
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 117);
  if ( v6 )
  {
    wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v6);
    *((_QWORD *)this + 117) = 0LL;
  }
}
