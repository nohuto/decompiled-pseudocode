/*
 * XREFs of ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x18010BE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F3DA8 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAIAEAW4SystemKey@Navigation@@AEA_N@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@SA?AV01@AEAIAEAW4SystemKey@Navigation@@AEA_N@Z @ 0x18010E0F0 (--$Start@AEAIAEAW4SystemKey@Navigation@@AEA_N@OnSystemKeyPressedComplete@ViewManagerInteropTrace.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnSystemKeyPressedComplete(__int64 a1, unsigned int a2, int a3, char a4)
{
  _QWORD v9[40]; // [rsp+40h] [rbp-178h] BYREF

  ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::Start<unsigned int &,enum Navigation::SystemKey &,bool &>((ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *)v9);
  if ( a3 == 1 )
    ViewEventDispatcher::ViewOperationRequestComplete(*(RTL_SRWLOCK **)(a1 + 40), a2, 0, a4 != 0);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9);
  v9[0] = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return 0LL;
}
