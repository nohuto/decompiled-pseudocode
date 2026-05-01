/*
 * XREFs of ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x180136FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x18011DC3C (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1801322CC (-StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestConsolidateView(RTL_SRWLOCK **this, unsigned int a2)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+50h] [rbp-B0h]
  int *v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  int v9; // [rsp+68h] [rbp-98h] BYREF
  char v10; // [rsp+6Ch] [rbp-94h]
  int v11; // [rsp+90h] [rbp-70h] BYREF
  const char *v12; // [rsp+98h] [rbp-68h]
  __int64 v13; // [rsp+A0h] [rbp-60h]
  char v14; // [rsp+A8h] [rbp-58h]
  __int64 v15; // [rsp+B0h] [rbp-50h]
  _BYTE v16[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v17; // [rsp+148h] [rbp+48h]
  __int64 v18; // [rsp+150h] [rbp+50h]
  __int64 v19; // [rsp+158h] [rbp+58h]
  __int64 v20; // [rsp+160h] [rbp+60h]

  v5[1] = 0LL;
  v5[2] = v5;
  v5[3] = 0LL;
  v6 = 0;
  v7 = &v11;
  v8 = &v9;
  v9 = 0;
  v10 = 0;
  v14 = 0;
  v11 = 0;
  v12 = "OnRequestConsolidateView";
  v13 = 0LL;
  v15 = 1LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(v16, 0, sizeof(v16));
  v19 = 0LL;
  v20 = 0LL;
  v5[0] = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestConsolidateView::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestConsolidateView *)v5,
    a2);
  ViewEventDispatcher::TryConsolidate(this[7], a2);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
  v5[0] = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return 0LL;
}
