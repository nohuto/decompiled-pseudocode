/*
 * XREFs of ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x180136D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011EA30 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z @ 0x18013129C (-StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnSystemKeyPressedComplete(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int8 a4)
{
  _QWORD v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h]
  int *v11; // [rsp+58h] [rbp-A8h]
  int *v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h] BYREF
  char v14; // [rsp+6Ch] [rbp-94h]
  int v15; // [rsp+90h] [rbp-70h] BYREF
  const char *v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  char v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  _BYTE v20[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+148h] [rbp+48h]
  __int64 v22; // [rsp+150h] [rbp+50h]
  __int64 v23; // [rsp+158h] [rbp+58h]
  __int64 v24; // [rsp+160h] [rbp+60h]

  v9[1] = 0LL;
  v9[2] = v9;
  v9[3] = 0LL;
  v10 = 0;
  v11 = &v15;
  v12 = &v13;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v15 = 0;
  v16 = "OnSystemKeyPressedComplete";
  v17 = 0LL;
  v19 = 1LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  v23 = 0LL;
  v24 = 0LL;
  v9[0] = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::StartActivity(
    (ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *)v9,
    a2,
    a3,
    a4);
  if ( a3 == 1 )
    ViewEventDispatcher::ViewOperationRequestComplete(*(RTL_SRWLOCK **)(a1 + 56), a2, 0, a4);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9);
  v9[0] = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return 0LL;
}
