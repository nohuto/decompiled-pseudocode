/*
 * XREFs of ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x180169510
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x180169A20 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x18016EB1C (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18016EC8C (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z @ 0x18016909C (--0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z.c)
 */

struct IManipulationTelemetryData *__fastcall CInteraction::GetTelemetryDataNoRef(CInteraction *this)
{
  __int64 v2; // rdi
  CManipulationTelemetryData *v3; // rax
  CManipulationTelemetryData *v4; // rax
  CManipulationTelemetryData *v5; // rdi
  __int64 v6; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 194) )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 )
    {
      v3 = (CManipulationTelemetryData *)WPF::ProcessHeapImpl::AllocClear(0xA0uLL);
      if ( !v3 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      v4 = CManipulationTelemetryData::CManipulationTelemetryData(
             v3,
             *((struct CComposition **)this + 3),
             *(_DWORD *)(v2 + 16));
      v5 = v4;
      if ( v4 )
        (**(void (__fastcall ***)(CManipulationTelemetryData *))v4)(v4);
      v6 = *((_QWORD *)this + 194);
      *((_QWORD *)this + 194) = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return (struct IManipulationTelemetryData *)*((_QWORD *)this + 194);
}
