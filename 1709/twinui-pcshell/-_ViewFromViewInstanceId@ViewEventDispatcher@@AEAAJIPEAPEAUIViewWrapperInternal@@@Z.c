/*
 * XREFs of ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x18011DC3C (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x18011DDE0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x18011DEC8 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18011E678 (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011EA30 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x18011EB18 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     _lambda_3e1390e1d2422aea3f572ae27706a686_::operator() @ 0x18011F56C (_lambda_3e1390e1d2422aea3f572ae27706a686_--operator().c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x18012081C (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x1801209C0 (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 *     ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x180122070 (-GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x180122220 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1801222F0 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1801223C0 (-GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z.c)
 *     ?RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180122490 (-RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandle.c)
 *     ?UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1801225A0 (-UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180123720 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x180123DD0 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     std::_Func_impl__lambda_f762a111a87cc3672fab2d2d37f8e7d5__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x18012B760 (std--_Func_impl__lambda_f762a111a87cc3672fab2d2d37f8e7d5__std--allocator_int__void__ea_18012B760.c)
 *     std::_Func_impl__lambda_61d3afee79580b9c6347012a379f4b56__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x18012B890 (std--_Func_impl__lambda_61d3afee79580b9c6347012a379f4b56__std--allocator_int__void__ea_18012B890.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromViewInstanceId(
        ViewEventDispatcher *this,
        int a2,
        struct IViewWrapperInternal **a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 46) + 8 * v7);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 576LL))(v8) == a2 )
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
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 46) + 8 * v6);
    v11 = (**v10)(v10, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a3);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    return v12;
  }
  return result;
}
