/*
 * XREFs of ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1801368A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180003B78 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z @ 0x18013026C (-StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180132A78 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::OnRequestNavigateToView(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct MsgBlob *Src)
{
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-198h]
  __int64 v17; // [rsp+48h] [rbp-190h]
  _QWORD v18[4]; // [rsp+50h] [rbp-188h] BYREF
  int v19; // [rsp+70h] [rbp-168h]
  int *v20; // [rsp+78h] [rbp-160h]
  int *v21; // [rsp+80h] [rbp-158h]
  int v22; // [rsp+88h] [rbp-150h] BYREF
  char v23; // [rsp+8Ch] [rbp-14Ch]
  int v24; // [rsp+B0h] [rbp-128h] BYREF
  const char *v25; // [rsp+B8h] [rbp-120h]
  __int64 v26; // [rsp+C0h] [rbp-118h]
  char v27; // [rsp+C8h] [rbp-110h]
  __int64 v28; // [rsp+D0h] [rbp-108h]
  _BYTE v29[144]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v30; // [rsp+168h] [rbp-70h]
  __int64 v31; // [rsp+170h] [rbp-68h]
  __int64 v32; // [rsp+178h] [rbp-60h]
  __int64 v33; // [rsp+180h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v17 = -2LL;
  v16 = a1;
  try
  {
    v18[1] = 0LL;
    v18[2] = v18;
    v18[3] = 0LL;
    v19 = 0;
    v20 = &v24;
    v21 = &v22;
    v22 = 0;
    v23 = 0;
    v27 = 0;
    v24 = 0;
    v25 = "OnRequestNavigateToView";
    v26 = 0LL;
    v28 = 1LL;
    v30 = 0LL;
    v31 = 0LL;
    memset(v29, 0, sizeof(v29));
    v32 = 0LL;
    v33 = 0LL;
    v18[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
    ViewManagerInteropTraceLogging::OnRequestNavigateToView::StartActivity(
      (ViewManagerInteropTraceLogging::OnRequestNavigateToView *)v18,
      a2,
      a3,
      a4);
    v10 = 0LL;
    v15 = 0LL;
    if ( Src )
    {
      v11 = DeserializePropertySet(Src, &v15);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x44A,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      v10 = (__int64)v15;
    }
    if ( (a4 & 0x20) != 0 )
    {
      a4 = (int)retaddr;
      if ( !v10 )
      {
        v10 = 2147942487LL;
        wil::details::OriginateError();
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x452,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070057LL);
      }
      v12 = ViewManagerBridge::OnRequestApplicationViewSwitcherOperation(
              (ViewManagerBridge *)(a1 - 32),
              a2,
              a3,
              (struct Windows::Foundation::Collections::IPropertySet *)v10);
      if ( v12 >= 0 )
        goto LABEL_12;
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x453,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    }
    ViewEventDispatcher::ViewNavigationRequested(*(_QWORD *)(a1 + 56), a2, a3, a4, v10);
LABEL_12:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v18[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  }
  catch ( ... )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(v16 + 80) + 112LL))(
      *(_QWORD *)(v16 + 80),
      a2,
      0LL,
      0LL,
      1);
  }
  return 0LL;
}
