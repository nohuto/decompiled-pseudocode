/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@?$VectorChangedEventHandler@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@2345@UE$AAAJPE$AAU?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@345@PE$AAUIVectorChangedEventArgs@345@@Z @ 0x180165760
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___VectorChangedEventHandler_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows_____abi_IDelegate____abi_Invoke__Q__abi_IDelegate___VectorChangedEventHandler_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows__2345_UE_AAAJPE_AAU__IObservableVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___345_PE_AAUIVectorChangedEventArgs_345__Z(
        _QWORD **a1)
{
  int v1; // eax

  try
  {
    if ( *a1 == &Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *>::`vftable'{for `__abi_IUnknown'} )
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
