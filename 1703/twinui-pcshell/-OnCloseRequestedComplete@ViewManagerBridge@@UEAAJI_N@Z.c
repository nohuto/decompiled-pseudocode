/*
 * XREFs of ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x18010BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F3DA8 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAIAEA_N@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@SA?AV01@AEAIAEA_N@Z @ 0x18010E1C0 (--$Start@AEAIAEA_N@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@SA-AV01@AEAIAEA_N@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnCloseRequestedComplete(RTL_SRWLOCK **this, unsigned int a2, char a3)
{
  _QWORD v7[40]; // [rsp+40h] [rbp-168h] BYREF

  ViewManagerInteropTraceLogging::OnCloseRequestedComplete::Start<unsigned int &,bool &>((ViewManagerInteropTraceLogging::OnCloseRequestedComplete *)v7);
  ViewEventDispatcher::ViewOperationRequestComplete(this[5], a2, 1u, a3 != 0);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7);
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return 0LL;
}
