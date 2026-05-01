/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAKXZ @ 0x18011F910
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCA@E$AAAKXZ @ 0x18011F270 (-__abi_AddRef@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCA@E$AA.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAKXZ @ 0x18011F300 (-__abi_AddRef@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@Compo.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBA@E$AAAKXZ @ 0x18011F380 (-__abi_AddRef@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBA@E$AA.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AAAKXZ @ 0x18011F3E0 (-__abi_AddRef@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AA.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$AAAKXZ @ 0x1801278B0 (-__abi_AddRef@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$AA.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WDA@E$AAAKXZ @ 0x180127A20 (-__abi_AddRef@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Expe_ea_180127A20.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WDI@E$AAAKXZ @ 0x180127A80 (-__abi_AddRef@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Expe_ea_180127A80.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WEA@E$AAAKXZ @ 0x180127AD0 (-__abi_AddRef@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Expe_ea_180127AD0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WHA@E$AAAKXZ @ 0x180127B20 (-__abi_AddRef@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WHA@E$AA.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WHI@E$AAAKXZ @ 0x180127FF0 (-__abi_AddRef@-QObject@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WHI@E$AA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Details_Collections_2_UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 88) && *(int *)(*(_QWORD *)(a1 + 88) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 88) + 12LL));
  else
    return (unsigned int)-1;
}
