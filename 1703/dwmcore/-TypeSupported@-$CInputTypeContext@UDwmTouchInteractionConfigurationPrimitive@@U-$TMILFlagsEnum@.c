/*
 * XREFs of ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18018FE20
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020564 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U-$TMILFlagsEnum@W4FlagsEnum@DwmIn.c)
 * Callees:
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18018FDA8 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMIL.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  unsigned int v4; // r10d
  int v5; // edx

  v4 = 0;
  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 112) > 1u
      || *(_DWORD *)(a1 + 112) == 1 && a4 & a3 | ~a4 & *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL) )
    {
      return 1;
    }
    return v4;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    LOBYTE(v4) = (((unsigned __int8)(a4 & a3) | (unsigned __int8)(~(_BYTE)a4 & *(_BYTE *)(a1 + 16))) & 0x3F) != 0;
    return v4;
  }
  if ( v5 == 1 )
    return (unsigned __int8)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                              a1 + 88,
                              a3,
                              a4);
  else
    return 0LL;
}
