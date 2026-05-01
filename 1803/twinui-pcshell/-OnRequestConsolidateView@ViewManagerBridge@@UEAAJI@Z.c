/*
 * XREFs of ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x1801DDA40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800590A4 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1801CF1C4 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801DE978 (-StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestConsolidateView(RTL_SRWLOCK **this, unsigned int a2)
{
  __int64 v4; // r8
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v6,
    (__int64)"OnRequestConsolidateView");
  v6[0] = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestConsolidateView::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestConsolidateView *)v6,
    a2);
  ViewEventDispatcher::TryConsolidate(this[6], a2, v4);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6);
  v6[0] = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
  return 0LL;
}
