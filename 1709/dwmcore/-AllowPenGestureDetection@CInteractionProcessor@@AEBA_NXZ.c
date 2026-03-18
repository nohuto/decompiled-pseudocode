/*
 * XREFs of ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180091D44 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180199F6C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18019A2FC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18019AF98 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18019C390 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x18019C4A8 (-HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x18019D854 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x18019B0A8 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$.c)
 */

bool __fastcall CInteractionProcessor::AllowPenGestureDetection(CInteractionProcessor *this)
{
  __int64 v1; // r11
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1072, &v4, &v3);
  return (unsigned int)CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
                         v1 + 320,
                         0x10000000LL,
                         v4,
                         v3) == 0;
}
