/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemCollectionChangedEventArgs____abi_get_Item@?QISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemCollectionChangedEventArgs@23456@UE$AAAJPEAPE$AAUISwitchItem@23456@@Z @ 0x1801360EC
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemCollectionChangedEventArgs____abi_get_Item@?QISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemCollectionChangedEventArgs@23456@W7E$AAAJPEAPE$AAUISwitchItem@23456@@Z @ 0x180136140 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemC_ea_180136140.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemCollectionChangedEventArgs____abi_get_Item__QISwitchItemCollectionChangedEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemCollectionChangedEventArgs_23456_UE_AAAJPEAPE_AAUISwitchItem_23456__Z(
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
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 72LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
