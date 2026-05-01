/*
 * XREFs of ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x18010BC70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1800F31E8 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAIAEA_N@OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@SA?AV01@AEAIAEA_N@Z @ 0x18010DF58 (--$Start@AEAIAEA_N@OnRequestBeginPresentView@ViewManagerInteropTraceLogging@@SA-AV01@AEAIAEA_N@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestBeginPresentView(RTL_SRWLOCK **this, unsigned int a2, char a3)
{
  __int64 v6; // r8
  _QWORD v8[40]; // [rsp+40h] [rbp-168h] BYREF

  ViewManagerInteropTraceLogging::OnRequestBeginPresentView::Start<unsigned int &,bool &>((ViewManagerInteropTraceLogging::OnRequestBeginPresentView *)v8);
  ViewEventDispatcher::ViewVisibilityChanged(this[5], 0, a2, a3 != 0);
  LOBYTE(v6) = a3;
  (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, __int64))this[8]->Ptr + 17))(this[8], a2, v6);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8);
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestBeginPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return 0LL;
}
