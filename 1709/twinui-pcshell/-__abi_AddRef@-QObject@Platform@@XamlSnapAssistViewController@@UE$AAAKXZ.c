/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAKXZ @ 0x180168A60
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ @ 0x1801662F0 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ @ 0x1801663A0 (-__abi_AddRef@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ @ 0x1801663F0 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@WBI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ @ 0x180166920 (-__abi_AddRef@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ @ 0x1801686C0 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@WCI@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDA@E$AAAKXZ @ 0x180168710 (-__abi_AddRef@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Int.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$VectorView@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@Collections@2@WDI@E$AAAKXZ @ 0x180168A90 (-__abi_AddRef@-QObject@Platform@@-$VectorView@PE$AAUISwitchItem@Multitasking@Compos_ea_180168A90.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAltTabViewController@@WIA@E$AAAKXZ @ 0x1801776E0 (-__abi_AddRef@-QObject@Platform@@XamlAltTabViewController@@WIA@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAKXZ @ 0x180177A40 (-__abi_AddRef@-QObject@Platform@@XamlSnapAssistViewController@@WII@E$AAAKXZ.c)
 *     ?__abi_AddRef@?QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAKXZ @ 0x180177D60 (-__abi_AddRef@-QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAKXZ.c)
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
