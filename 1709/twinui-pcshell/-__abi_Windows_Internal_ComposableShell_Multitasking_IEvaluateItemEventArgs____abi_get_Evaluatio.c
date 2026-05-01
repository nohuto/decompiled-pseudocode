/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_EvaluationState@?QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@EvaluateItemEventArgs@2345@UE$AAAJPEAW4SwitchItemInclusion@2345@@Z @ 0x18016A9BC
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_EvaluationState@?QIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@EvaluateItemEventArgs@2345@W7E$AAAJPEAW4SwitchItemInclusion@2345@@Z @ 0x18016AA10 (-__abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi__ea_18016AA10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs____abi_get_EvaluationState__QIEvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__EvaluateItemEventArgs_2345_UE_AAAJPEAW4SwitchItemInclusion_2345__Z(
        __int64 a1,
        _DWORD *a2)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 72LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
