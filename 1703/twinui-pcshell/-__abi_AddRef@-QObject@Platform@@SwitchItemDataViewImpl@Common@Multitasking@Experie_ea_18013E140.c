/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18013E140
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180133260 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@Composab.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180136A70 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experie_ea_180136A70.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x18013DE00 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experie_ea_18013DE00.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x18013DE50 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experie_ea_18013DE50.c)
 *     ?__abi_AddRef@?QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCI@E$AAAKXZ @ 0x18013E170 (-__abi_AddRef@-QObject@Platform@@SwitchItemDataViewImpl@Common@Multitasking@Experie_ea_18013E170.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform__SwitchItemDataViewImpl_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 120) && *(int *)(*(_QWORD *)(a1 + 120) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 12LL));
  else
    return (unsigned int)-1;
}
