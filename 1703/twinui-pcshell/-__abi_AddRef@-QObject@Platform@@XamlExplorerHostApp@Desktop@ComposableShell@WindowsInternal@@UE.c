/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180126B20
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x180124900 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WB.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAKXZ @ 0x180124AC0 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WE.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180124BE0 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAKXZ @ 0x180124C60 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Window_ea_180124C60.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180124D80 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@Window_ea_180124D80.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAKXZ @ 0x180124E10 (-__abi_AddRef@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 224) && *(int *)(*(_QWORD *)(a1 + 224) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 224) + 12LL));
  else
    return (unsigned int)-1;
}
