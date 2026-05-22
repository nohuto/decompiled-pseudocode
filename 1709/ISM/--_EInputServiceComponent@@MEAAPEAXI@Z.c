/*
 * XREFs of ??_EInputServiceComponent@@MEAAPEAXI@Z @ 0x18002E948
 * Callers:
 *     ??_EInputServiceComponent@@OBA@EAAPEAXI@Z @ 0x18002EF50 (--_EInputServiceComponent@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

InputServiceComponent *__fastcall InputServiceComponent::`vector deleting destructor'(
        InputServiceComponent *this,
        char a2)
{
  *(_QWORD *)this = &InputServiceComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &InputServiceComponent::`vftable'{for `IInputTarget'};
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
