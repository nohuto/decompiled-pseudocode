/*
 * XREFs of ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0
 * Callers:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180032D68 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1800347FC (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x1800350BC (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180056E10 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x1800F06F4 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 *     _lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator() @ 0x1801C9430 (_lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator().c)
 *     _lambda_f762a111a87cc3672fab2d2d37f8e7d5_::operator() @ 0x1801C97B8 (_lambda_f762a111a87cc3672fab2d2d37f8e7d5_--operator().c)
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1801CA3A0 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1801CAB60 (-GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z.c)
 *     ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x1801CB2E0 (-GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1801CB8E0 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801CC810 (-RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandle.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1801CF1C4 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1801CF5A0 (-UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801CF968 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     std::_Func_impl_no_alloc__lambda_0f49487d85e93c22671acec955f9e90a__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x1801CFDE0 (std--_Func_impl_no_alloc__lambda_0f49487d85e93c22671acec955f9e90a__void_Windows--In_ea_1801CFDE0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromViewInstanceId(
        ViewEventDispatcher *this,
        int a2,
        struct IViewWrapperInternal **a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  ViewWrapperBase *v8; // rcx
  unsigned int (__fastcall *v9)(ViewWrapperBase *__hidden); // rax
  int v10; // eax
  __int64 result; // rax
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v8 = *(ViewWrapperBase **)(*((_QWORD *)this + 46) + 8 * v7);
      v9 = *(unsigned int (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v8 + 592LL);
      v10 = v9 == ViewWrapperBase::GetViewInstanceId ? *((_DWORD *)v8 + 35) : v9(v8);
      if ( v10 == a2 )
        break;
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 47) )
        goto LABEL_6;
    }
    v6 = v7;
    result = 0LL;
  }
  else
  {
LABEL_6:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 46) + 8 * v6);
    v13 = (**v12)(v12, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a3);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B8,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        -2);
    return v14;
  }
  return result;
}
