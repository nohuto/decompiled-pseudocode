/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_get_SwitchItemDataSource@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAJPEAPE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@34@@Z @ 0x18011F4BC
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_get_SwitchItemDataSource@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAJPEAPE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@34@@Z @ 0x18011F320 (-__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_get_SwitchItemDataSource@-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_get_SwitchItemDataSource__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAJPEAPE_AAUISwitchItemDataSource_Common_Multitasking_Experiences_34__Z(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_BYTE *)(a1 + 104) )
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
