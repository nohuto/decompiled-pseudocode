/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020564
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020530 (-SupportsPointerType@CInteraction@@UEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePri.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18018CE58 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x18018ECD0 (-HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180194EF0 (-SupportsPointerType@CInteractionRoot@@UEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMous.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800205EC (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18018FE20 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsPointerType(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  int v7; // r11d
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ecx
  bool v12; // zf
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 880, &v14, &v15);
  v8 = a2 - 1;
  if ( !v8 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1,
             a4,
             v14,
             v15);
  v9 = v8 - 1;
  if ( !v9 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1 + 160,
             a4,
             v14,
             v15);
  v10 = v9 - 1;
  if ( !v10 )
    return *(_DWORD *)(a1 + 320) == -1;
  if ( v10 == 1 )
  {
    v11 = 0;
    if ( v7 )
      v12 = ((unsigned __int8)v7 & *(_BYTE *)(a1 + 324) & 3) == 0;
    else
      v12 = (*(_DWORD *)(a1 + 324) & 0xFFFFFFFC) == 0;
    LOBYTE(v11) = !v12;
    return v11;
  }
  return 0LL;
}
