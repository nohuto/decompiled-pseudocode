/*
 * XREFs of ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x180092160 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x1800B7988 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800B7B54 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18019C274 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18019C560 (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18019C5E4 (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18019C658 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801A1064 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801A44E4 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1801A4B24 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(
        CNaturalAnimationScalarForceAdapater **a1)
{
  unsigned int result; // eax
  CNaturalAnimationScalarForceAdapater *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CNaturalAnimationScalarForceAdapater::Release )
      return CNaturalAnimationScalarForceAdapater::Release(v3);
    else
      return v4();
  }
  return result;
}
