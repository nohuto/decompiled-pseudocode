/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateItemEventArgs____abi_get_Item@?QIEvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItemEventArgs@23456@UE$AAAJPEAPE$AAUISwitchItem@23456@@Z @ 0x18013559C
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateItemEventArgs____abi_get_Item@?QIEvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItemEventArgs@23456@W7E$AAAJPEAPE$AAUISwitchItem@23456@@Z @ 0x1801355F0 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateIte_ea_1801355F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_IEvaluateItemEventArgs____abi_get_Item__QIEvaluateItemEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__EvaluateItemEventArgs_23456_UE_AAAJPEAPE_AAUISwitchItem_23456__Z(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 72) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 88LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
