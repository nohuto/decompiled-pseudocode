/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18013BFC0
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAXXZ @ 0x18013BE70 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@Com.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WCI@E$AAAXXZ @ 0x18013BFF0 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Ex_ea_18013BFF0.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x18013BF2C (--1-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 */

void __fastcall __Dispose___QIDisposable_Platform____Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAXXZ(
        __int64 a1)
{
  __int64 v1; // rcx

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        *(_BYTE *)(v1 + 72) = 1;
        Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(v1);
      }
    }
  }
}
