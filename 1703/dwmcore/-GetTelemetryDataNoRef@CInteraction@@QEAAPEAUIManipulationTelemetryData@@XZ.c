/*
 * XREFs of ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180166A40
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x180166DE0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DF54 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EA58 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z @ 0x1801666A8 (--0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z.c)
 */

struct IManipulationTelemetryData *__fastcall CInteraction::GetTelemetryDataNoRef(struct CComposition **this)
{
  CManipulationTelemetryData *v2; // rcx
  CManipulationTelemetryData *v3; // rax
  CManipulationTelemetryData *v4; // rdi
  struct CComposition *v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !this[168] )
  {
    v2 = (CManipulationTelemetryData *)WPF::ProcessHeapImpl::AllocClear(0xA0uLL);
    if ( !v2 )
    {
      ModuleFailFastForHRESULT(-2147024882, retaddr);
      __debugbreak();
    }
    v3 = CManipulationTelemetryData::CManipulationTelemetryData(v2, this[3], *((_DWORD *)this[7] + 4));
    v4 = v3;
    if ( v3 )
      (**(void (__fastcall ***)(CManipulationTelemetryData *))v3)(v3);
    v5 = this[168];
    this[168] = v4;
    if ( v5 )
      (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return this[168];
}
