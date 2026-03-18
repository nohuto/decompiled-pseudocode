/*
 * XREFs of ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801D5010
 * Callers:
 *     ?GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180191D60 (-GetProperty@CInteraction@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801D5208 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x1801D5870 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801D5C28 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::GetRailsEnabled(__int64 a1, int a2)
{
  char v2; // al
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v2 = *(_BYTE *)(a1 + 148) >> 5;
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 148) >> 4;
  }
  return v2 & 1;
}
