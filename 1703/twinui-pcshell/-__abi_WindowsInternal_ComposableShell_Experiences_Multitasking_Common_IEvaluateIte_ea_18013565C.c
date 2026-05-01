/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateItemEventArgs____abi_set_EvaluationState@?QIEvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItemEventArgs@23456@UE$AAAJW4SwitchItemInclusion@23456@@Z @ 0x18013565C
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateItemEventArgs____abi_set_EvaluationState@?QIEvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItemEventArgs@23456@W7E$AAAJW4SwitchItemInclusion@23456@@Z @ 0x1801356A0 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateIte_ea_1801356A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateItemEventArgs____abi_set_EvaluationState__QIEvaluateItemEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__EvaluateItemEventArgs_23456_UE_AAAJW4SwitchItemInclusion_23456__Z(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 72) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 80LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
