/*
 * XREFs of ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x1801DD3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800590A4 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801CF968 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x1801DE6EC (-StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnCloseRequestedComplete(RTL_SRWLOCK **this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  _QWORD v7[40]; // [rsp+30h] [rbp-168h] BYREF

  v3 = a3;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v7,
    (__int64)"OnCloseRequestedComplete");
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  ViewManagerInteropTraceLogging::OnCloseRequestedComplete::StartActivity(
    (ViewManagerInteropTraceLogging::OnCloseRequestedComplete *)v7,
    a2,
    v3);
  ViewEventDispatcher::ViewOperationRequestComplete(this[6], a2, 1u, v3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7);
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return 0LL;
}
