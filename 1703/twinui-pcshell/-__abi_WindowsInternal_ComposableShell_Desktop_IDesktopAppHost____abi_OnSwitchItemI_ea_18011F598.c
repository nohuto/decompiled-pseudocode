/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@34@@Z @ 0x18011F598
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@34@@Z @ 0x18011F240 (-__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked@-QIDes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_OnSwitchItemInvoked__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAJPE_AAUISwitchItem_Common_Multitasking_Experiences_34__Z(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 104) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 112LL))(a1 + 8);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
