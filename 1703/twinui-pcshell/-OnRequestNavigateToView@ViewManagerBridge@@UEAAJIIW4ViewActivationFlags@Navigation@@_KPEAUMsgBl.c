/*
 * XREFs of ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x18010BAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x1800039D8 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F189C (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801082CC (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010C48C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     ??$Start@AEAIAEAIAEAW4ViewActivationFlags@Navigation@@@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI0AEAW4ViewActivationFlags@Navigation@@@Z @ 0x18010DE88 (--$Start@AEAIAEAIAEAW4ViewActivationFlags@Navigation@@@OnRequestNavigateToView@ViewManagerIntero.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::OnRequestNavigateToView(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct MsgBlob *Src)
{
  unsigned int v6; // edi
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-1A8h]
  __int64 v17; // [rsp+48h] [rbp-1A0h]
  __int64 v18; // [rsp+50h] [rbp-198h]
  _QWORD v19[40]; // [rsp+60h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v18 = -2LL;
  v6 = a4;
  v17 = a1;
  LODWORD(v15) = a3;
  v16 = a4;
  try
  {
    ViewManagerInteropTraceLogging::OnRequestNavigateToView::Start<unsigned int &,unsigned int &,enum Navigation::ViewActivationFlags &>((ViewManagerInteropTraceLogging::OnRequestNavigateToView *)v19);
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
    if ( (v6 & 0x20) != 0 )
    {
      v6 = (unsigned int)retaddr;
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
    ViewEventDispatcher::ViewNavigationRequested(*(_QWORD *)(a1 + 40), a2, a3, v6, v10);
LABEL_12:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v19[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
  }
  catch ( ... )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(v17 + 64) + 112LL))(
      *(_QWORD *)(v17 + 64),
      a2,
      0LL,
      0LL,
      1);
  }
  return 0LL;
}
