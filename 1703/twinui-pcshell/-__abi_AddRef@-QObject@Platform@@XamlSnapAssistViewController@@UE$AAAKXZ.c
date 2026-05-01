/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x18013D870
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ @ 0x18013B100 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x18013B1B0 (-__abi_AddRef@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ @ 0x18013B200 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x18013B730 (-__abi_AddRef@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ @ 0x18013D4D0 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x18013D520 (-__abi_AddRef@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x18013D8A0 (-__abi_AddRef@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Common@Multitasking_ea_18013D8A0.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAltTabViewController@@WIA@E$AAAKXZ @ 0x1801432E0 (-__abi_AddRef@-QObject@Platform@@XamlAltTabViewController@@WIA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAKXZ @ 0x180143390 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform__XamlSnapAssistViewController__UE_AAAKXZ(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 104) && *(int *)(*(_QWORD *)(a1 + 104) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 104) + 12LL));
  else
    return (unsigned int)-1;
}
