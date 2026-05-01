/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@____abi_remove_VectorChanged@?Q?$IObservableVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAJVEventRegistrationToken@34@@Z @ 0x180161F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IObservableVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows______abi_remove_VectorChanged__Q__IObservableVector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_2Platform__UE_AAAJVEventRegistrationToken_34__Z(
        _BYTE *a1)
{
  if ( a1[168] )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 72LL))(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
