/*
 * XREFs of ?OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4AnimationFlags@3@@Z @ 0x180136C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x18011DDE0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnRequestEndPresentView@ViewManagerInteropTraceLogging@@QEAAXK_N@Z @ 0x180130D3C (-StartActivity@OnRequestEndPresentView@ViewManagerInteropTraceLogging@@QEAAXK_N@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnRequestEndPresentView(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // esi
  __int64 v6; // r8
  _QWORD v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+50h] [rbp-B0h]
  int *v10; // [rsp+58h] [rbp-A8h]
  int *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h] BYREF
  char v13; // [rsp+6Ch] [rbp-94h]
  int v14; // [rsp+90h] [rbp-70h] BYREF
  const char *v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  char v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  _BYTE v19[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+148h] [rbp+48h]
  __int64 v21; // [rsp+150h] [rbp+50h]
  __int64 v22; // [rsp+158h] [rbp+58h]
  __int64 v23; // [rsp+160h] [rbp+60h]

  v3 = a3;
  v8[1] = 0LL;
  v8[2] = v8;
  v8[3] = 0LL;
  v9 = 0;
  v10 = &v14;
  v11 = &v12;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  v14 = 0;
  v15 = "OnRequestEndPresentView";
  v16 = 0LL;
  v18 = 1LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v19, 0, sizeof(v19));
  v22 = 0LL;
  v23 = 0LL;
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestEndPresentView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestEndPresentView::StartActivity(
    (ViewManagerInteropTraceLogging::OnRequestEndPresentView *)v8,
    a2,
    v3);
  ViewEventDispatcher::ViewVisibilityChanged(*(RTL_SRWLOCK **)(a1 + 56), 1u, a2, v3);
  LOBYTE(v6) = v3;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 80) + 144LL))(*(_QWORD *)(a1 + 80), a2, v6);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v8);
  v8[0] = &ViewManagerInteropTraceLogging::OnRequestEndPresentView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return 0LL;
}
