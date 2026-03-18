/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180091D44
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z @ 0x180091840 (-SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18019A2FC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x18019C4A8 (-HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKW4SupportedTypeOption@@@Z @ 0x1801A3EB0 (-SupportsPointerType@CInteractionRoot@@UEBAHKW4SupportedTypeOption@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18019DA48 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsPointerType(CInteractionProcessor *a1, int a2, unsigned int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask((char *)a1 + 1072, &v10, &v11);
  v6 = a2 - 1;
  if ( !v6 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1,
             a3,
             v10,
             v11);
  v7 = v6 - 1;
  if ( !v7 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             (char *)a1 + 160,
             a3,
             v10,
             v11);
  v8 = v7 - 1;
  if ( v8 )
  {
    return v8 == 1 && *((_DWORD *)a1 + 120) == -805306369;
  }
  else if ( CInteractionProcessor::AllowPenGestureDetection(a1) )
  {
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             (char *)a1 + 320,
             a3,
             v10,
             v11);
  }
  else
  {
    return 1LL;
  }
}
