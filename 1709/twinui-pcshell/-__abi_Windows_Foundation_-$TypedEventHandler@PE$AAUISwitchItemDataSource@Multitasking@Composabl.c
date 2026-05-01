/*
 * XREFs of ?__abi_Windows_Foundation_?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@234@UE$AAAJPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@4@PE$AAUISwitchItemCollectionChangedEventArgs@6784@@Z @ 0x18016BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation___TypedEventHandler_PE_AAUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemCollectionChangedEventArgs_2345____abi_IDelegate____abi_Invoke__Q__abi_IDelegate___TypedEventHandler_PE_AAUISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemCollectionChangedEventArgs_2345__Foundation_Windows__234_UE_AAAJPE_AAUISwitchItemDataSource_Multitasking_ComposableShell_Internal_4_PE_AAUISwitchItemCollectionChangedEventArgs_6784__Z(
        _QWORD **a1)
{
  int v1; // eax

  try
  {
    if ( *a1 == &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `__abi_IUnknown'} )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
    }
    else
    {
      v1 = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
      if ( v1 < 0 )
        __abi_WinRTraiseException(v1);
    }
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
