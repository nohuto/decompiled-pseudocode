/*
 * XREFs of ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@234@UE$AAAJPE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@6789WindowsInternal@@@Z @ 0x180135C70
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation___TypedEventHandler_PE_AAUISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUIEvaluateItemEventArgs_23456____abi_IDelegate____abi_Invoke__Q__abi_IDelegate___TypedEventHandler_PE_AAUISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUIEvaluateItemEventArgs_23456__Foundation_Windows__234_UE_AAAJPE_AAUISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__PE_AAUIEvaluateItemEventArgs_6789WindowsInternal___Z(
        _QWORD **a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  try
  {
    if ( *a1 == &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
    }
    else
    {
      v2 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
      if ( v2 < 0 )
        __abi_WinRTraiseException(v2);
    }
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
