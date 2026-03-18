/*
 * XREFs of ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18019AC30
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x1801692D0 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18019D9D4 (-SupportsAllInteractions@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInteractionProcessor::CanSkipChildren(CInteractionProcessor *this)
{
  __int64 v1; // r11
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 1064) & 3) != 0 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1108, &v4, &v3);
    switch ( *(_DWORD *)(v1 + 596) )
    {
      case 1:
        LOBYTE(result) = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 528,
                           v4,
                           v3);
        break;
      case 2:
        LOBYTE(result) = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 560,
                           v4,
                           v3);
        break;
      case 3:
        LOBYTE(result) = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 496,
                           v4,
                           v3);
        break;
      case 4:
        return *(_DWORD *)(v1 + 488) == -805306369;
      default:
        return 0LL;
    }
    return (unsigned __int8)result;
  }
  return 0LL;
}
