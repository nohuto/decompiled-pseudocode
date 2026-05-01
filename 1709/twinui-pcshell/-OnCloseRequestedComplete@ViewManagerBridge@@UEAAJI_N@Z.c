/*
 * XREFs of ?OnCloseRequestedComplete@ViewManagerBridge@@UEAAJI_N@Z @ 0x180136EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011EA30 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x18013180C (-StartActivity@OnCloseRequestedComplete@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnCloseRequestedComplete(RTL_SRWLOCK **this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  _QWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+50h] [rbp-B0h]
  int *v9; // [rsp+58h] [rbp-A8h]
  int *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+6Ch] [rbp-94h]
  int v13; // [rsp+90h] [rbp-70h] BYREF
  const char *v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  char v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h]
  _BYTE v18[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+148h] [rbp+48h]
  __int64 v20; // [rsp+150h] [rbp+50h]
  __int64 v21; // [rsp+158h] [rbp+58h]
  __int64 v22; // [rsp+160h] [rbp+60h]

  v3 = a3;
  v7[1] = 0LL;
  v7[2] = v7;
  v7[3] = 0LL;
  v8 = 0;
  v9 = &v13;
  v10 = &v11;
  v11 = 0;
  v12 = 0;
  v16 = 0;
  v13 = 0;
  v14 = "OnCloseRequestedComplete";
  v15 = 0LL;
  v17 = 1LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v18, 0, sizeof(v18));
  v21 = 0LL;
  v22 = 0LL;
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  ViewManagerInteropTraceLogging::OnCloseRequestedComplete::StartActivity(
    (ViewManagerInteropTraceLogging::OnCloseRequestedComplete *)v7,
    a2,
    v3);
  ViewEventDispatcher::ViewOperationRequestComplete(this[7], a2, 1u, v3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v7);
  v7[0] = &ViewManagerInteropTraceLogging::OnCloseRequestedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  return 0LL;
}
