/*
 * XREFs of ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x18004846C
 * Callers:
 *     ??_EISMHeatFrameworkHost@@OBA@EAAPEAXI@Z @ 0x1800488B0 (--_EISMHeatFrameworkHost@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@@Z @ 0x180048630 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
ISMHeatFrameworkHost *__fastcall ISMHeatFrameworkHost::`vector deleting destructor'(
        ISMHeatFrameworkHost *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
  *((_QWORD *)this + 1) = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  ISMHeatFrameworkHost::RegisterForSystemContext(this, 1LL);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
