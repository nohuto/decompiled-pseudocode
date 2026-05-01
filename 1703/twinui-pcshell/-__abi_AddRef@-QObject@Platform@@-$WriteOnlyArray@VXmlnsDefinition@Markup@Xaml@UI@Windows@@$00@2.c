/*
 * XREFs of ?__abi_AddRef@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAKXZ @ 0x180123CF0
 * Callers:
 *     ?__abi_AddRef@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x180124980 (-__abi_AddRef@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@Composabl.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@W7E$AAAKXZ @ 0x180124AB0 (-__abi_AddRef@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@W_ea_180124AB0.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@WCI@E$AAAKXZ @ 0x180124AF0 (-__abi_AddRef@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@Composa.c)
 *     ?__abi_AddRef@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180124C30 (-__abi_AddRef@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experien_ea_180124C30.c)
 *     ?__abi_AddRef@?QObject@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AAAKXZ @ 0x180124DF0 (-__abi_AddRef@-QObject@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@W_ea_180124DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___abi_AddRef__QObject_Platform____WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAKXZ(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 56) && *(int *)(*(_QWORD *)(a1 + 56) + 12LL) >= 0 )
    return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 56) + 12LL));
  else
    return (unsigned int)-1;
}
