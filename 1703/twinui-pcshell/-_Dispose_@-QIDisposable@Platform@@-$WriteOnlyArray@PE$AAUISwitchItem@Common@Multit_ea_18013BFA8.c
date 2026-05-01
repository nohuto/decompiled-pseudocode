/*
 * XREFs of ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18013BFA8
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAXXZ @ 0x18013B9F0 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experi.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x18013BF2C (--1-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 */

void __fastcall __Dispose___QIDisposable_Platform____WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAXXZ(
        __int64 a1)
{
  if ( !*(_BYTE *)(a1 + 72) )
  {
    *(_BYTE *)(a1 + 72) = 1;
    Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>(a1);
  }
}
