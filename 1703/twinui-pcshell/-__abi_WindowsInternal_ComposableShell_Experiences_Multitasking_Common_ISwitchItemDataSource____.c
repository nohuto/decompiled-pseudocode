/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataSource____abi_get_SwitchItems@?QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJPEAPE$AAU?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180136AAC
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataSource____abi_get_SwitchItems@?QISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@WBA@E$AAAJPEAPE$AAU?$IVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180136B00 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_180136B00.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataSource____abi_get_SwitchItems__QISwitchItemDataSource_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_UE_AAAJPEAPE_AAU__IVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows___Z(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 152) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0LL;
  try
  {
    *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 72LL))(a1 + 16);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
