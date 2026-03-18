/*
 * XREFs of ?SupportsAllInteractions@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18019D9D4
 * Callers:
 *     ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18019AC30 (-CanSkipChildren@CInteractionProcessor@@QEBAHXZ.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18019DA48 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::SupportsAllInteractions(
        __int64 a1,
        int a2,
        int a3)
{
  char v3; // r9
  _DWORD *v4; // rcx

  v3 = 1;
  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 0;
  v4 = *(_DWORD **)a1;
  if ( *v4 != 1 || v4[1] != -1 || (a3 & a2 | ~a3 & v4[2]) != 0xCFFFFFFF )
    return 0;
  return v3;
}
