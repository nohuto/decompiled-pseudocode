/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@UE$AAAKXZ @ 0x180139010
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@W7E$AAAKXZ @ 0x180136D50 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@Comp.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBA@E$AAAKXZ @ 0x180137780 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_180137780.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WBI@E$AAAKXZ @ 0x180137890 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_180137890.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCA@E$AAAKXZ @ 0x1801378E0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_1801378E0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WCI@E$AAAKXZ @ 0x180137AA0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_180137AA0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x1801389D0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_1801389D0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x180138BE0 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_180138BE0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WEA@E$AAAKXZ @ 0x180138C40 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_180138C40.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WEI@E$AAAKXZ @ 0x180139050 (-__abi_AddRef@-QObject@Platform@@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Exp_ea_180139050.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform____Vector_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___std___00_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 136) && *(int *)(*(_QWORD *)(a1 + 136) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 136) + 12LL));
  else
    return (unsigned int)-1;
}
