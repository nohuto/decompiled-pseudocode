/*
 * XREFs of ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@____abi_get_HasCurrent@?Q?$IIterator@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJPEA_N@Z @ 0x18013B810
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_HasCurrent@?QIBindableIterator@Interop@Xaml@UI@Windows@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@WBA@E$AAAJPEA_N@Z @ 0x18013C980 (-__abi_Windows_UI_Xaml_Interop_IBindableIterator____abi_get_HasCurrent@-QIBindableIterator@Inter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Windows_Foundation_Collections___IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal______abi_get_HasCurrent__Q__IIterator_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAAJPEA_N_Z(
        _BYTE *a1,
        _BYTE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1[104] )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 88LL))(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
