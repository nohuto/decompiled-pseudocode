/*
 * XREFs of ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802158BC
 * Callers:
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18020725C (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ??1Completer@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ @ 0x1802074B0 (--1Completer@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z @ 0x18020D628 (-MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18020D8B0 (-NotifyFailure@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18020F708 (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z @ 0x18020FBE8 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z.c)
 *     ?StopActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@MEAAXXZ @ 0x180210290 (-StopActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@MEAAXXZ.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z @ 0x18021F2F0 (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI@Z.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

LPVOID __fastcall wil::details::static_lazy<XamlSwitcherLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`XamlSwitcherLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_1804389A8;
    qword_1804389A8 = &XamlSwitcherLogging::`vftable';
    qword_1804389C0 = (struct _TlgProvider_t *)&`XamlSwitcherLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1804389A8, qword_1804389C0, v3);
    InitOnceComplete(&`XamlSwitcherLogging::Instance'::`2'::wrapper, 0, &qword_1804389A8);
  }
  return v6;
}
