/*
 * XREFs of ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x18010BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1800F3044 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAI@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI@Z @ 0x18010E28C (--$Start@AEAI@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@SA-AV01@AEAI@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestConsolidateView(RTL_SRWLOCK **this, unsigned int a2)
{
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF

  ViewManagerInteropTraceLogging::OnRequestConsolidateView::Start<unsigned int &>((ViewManagerInteropTraceLogging::OnRequestConsolidateView *)v5);
  ViewEventDispatcher::TryConsolidate(this[5], a2);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
  v5[0] = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return 0LL;
}
