/*
 * XREFs of ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18018D640
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180166890 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800205EC (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18018FDA8 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMIL.c)
 */

char __fastcall CInteractionProcessor::CanSkipChildren(CInteractionProcessor *this)
{
  _DWORD *v1; // r11
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 872) & 3) != 0 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 916, &v5, &v4);
    switch ( v1[101] )
    {
      case 1:
        return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                 v1 + 84,
                 v5,
                 v4);
      case 2:
        return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                 v1 + 92,
                 v5,
                 v4);
      case 3:
        return v1[83] == -1;
      case 4:
        return v1[82] == -1;
    }
  }
  return 0;
}
