/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_RepositionThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@UE$AAAJVRect@Foundation@Windows@@@Z @ 0x18011F54C
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_RepositionThreadWindow@?QIDesktopAppHost@Desktop@ComposableShell@WindowsInternal@@XamlExplorerHost@@W7E$AAAJVRect@Foundation@Windows@@@Z @ 0x18011F2A0 (-__abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_RepositionThreadWindow@-QI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Desktop_IDesktopAppHost____abi_RepositionThreadWindow__QIDesktopAppHost_Desktop_ComposableShell_WindowsInternal__XamlExplorerHost__UE_AAAJVRect_Foundation_Windows___Z(
        __int64 a1,
        __int128 *a2)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(a1 + 104) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    v4 = *a2;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(a1 + 8) + 120LL))(a1 + 8, &v4);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v2;
}
