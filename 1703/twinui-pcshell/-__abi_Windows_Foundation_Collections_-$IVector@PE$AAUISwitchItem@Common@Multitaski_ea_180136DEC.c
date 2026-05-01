/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_get_Size@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJPEAI@Z @ 0x180136DEC
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_get_Size@?Q?$IVector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAJPEAI@Z @ 0x180136E40 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItem@Common@Multitaski_ea_180136E40.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_get_Size@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCI@E$AAAJPEAI@Z @ 0x180137B70 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_get_Size@-QIBindableVector@Interop@Xaml@UI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_get_Size__Q__IVector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAJPEAI_Z(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 144LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
