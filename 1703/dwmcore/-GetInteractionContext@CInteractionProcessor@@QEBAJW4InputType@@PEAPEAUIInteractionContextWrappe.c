/*
 * XREFs of ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18018EC28
 * Callers:
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180166900 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180166920 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18018EB04 (-DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18018ED58 (-HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18018EDDC (-IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z.c)
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18018EE50 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CInteractionProcessor::GetInteractionContext(
        __int64 (__fastcall ****a1)(_QWORD),
        int a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // edx

  v3 = 0;
  *a3 = 0LL;
  v6 = a2 - 1;
  if ( !v6 )
  {
    if ( *a1 )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(a1);
      *a3 = *a1;
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  if ( v6 == 1 )
  {
    if ( a1[20] )
    {
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(a1 + 20);
      *a3 = a1[20];
      return v3;
    }
    return (unsigned int)-2147019873;
  }
  return v3;
}
