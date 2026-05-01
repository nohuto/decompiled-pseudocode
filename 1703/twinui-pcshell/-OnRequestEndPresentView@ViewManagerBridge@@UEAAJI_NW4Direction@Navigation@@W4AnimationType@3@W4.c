/*
 * XREFs of ?OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4AnimationFlags@3@@Z @ 0x18010BD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1800F31E8 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAIAEA_N@OnRequestEndPresentView@ViewManagerInteropTraceLogging@@SA?AV01@AEAIAEA_N@Z @ 0x18010E024 (--$Start@AEAIAEA_N@OnRequestEndPresentView@ViewManagerInteropTraceLogging@@SA-AV01@AEAIAEA_N@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestEndPresentView(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // r8
  _QWORD v8[40]; // [rsp+40h] [rbp-168h] BYREF

  ViewManagerInteropTraceLogging::OnRequestEndPresentView::Start<unsigned int &,bool &>((ViewManagerInteropTraceLogging::OnRequestEndPresentView *)v8);
  ViewEventDispatcher::ViewVisibilityChanged(*(RTL_SRWLOCK **)(a1 + 40), 1u, a2, a3 != 0);
  LOBYTE(v6) = a3;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 144LL))(*(_QWORD *)(a1 + 64), a2, v6);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8);
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestEndPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return 0LL;
}
