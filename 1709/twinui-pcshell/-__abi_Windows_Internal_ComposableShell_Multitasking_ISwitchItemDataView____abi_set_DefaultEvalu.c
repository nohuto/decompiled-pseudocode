/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_set_DefaultEvaluationState@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJW4SwitchItemInclusion@2345@@Z @ 0x18016166C
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_set_DefaultEvaluationState@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAJW4SwitchItemInclusion@2345@@Z @ 0x1801616B0 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_set_ea_1801616B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_set_DefaultEvaluationState__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJW4SwitchItemInclusion_2345__Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 152) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 104LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
