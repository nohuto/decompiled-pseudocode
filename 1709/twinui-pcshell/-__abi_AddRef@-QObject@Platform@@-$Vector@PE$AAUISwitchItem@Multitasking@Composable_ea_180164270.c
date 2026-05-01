/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180164270
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x180161FE0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x180162A20 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x180162B30 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180162B30.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x180162B80 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180162B80.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x180162D40 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180162D40.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x180163C30 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180163C30.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x180163E40 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180163E40.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WEA@E$AAAKXZ @ 0x180163EA0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_180163EA0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WEI@E$AAAKXZ @ 0x1801642B0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Swit_ea_1801642B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform____Vector_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__U__equal_to_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___std___00_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 136) && *(int *)(*(_QWORD *)(a1 + 136) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 136) + 12LL));
  else
    return (unsigned int)-1;
}
