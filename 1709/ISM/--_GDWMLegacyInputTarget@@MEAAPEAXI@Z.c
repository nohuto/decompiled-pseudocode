/*
 * XREFs of ??_GDWMLegacyInputTarget@@MEAAPEAXI@Z @ 0x1800229AC
 * Callers:
 *     ??_EDWMLegacyInputTarget@@OBI@EAAPEAXI@Z @ 0x180022BC0 (--_EDWMLegacyInputTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

DWMLegacyInputTarget *__fastcall DWMLegacyInputTarget::`scalar deleting destructor'(
        DWMLegacyInputTarget *this,
        char a2)
{
  *(_QWORD *)this = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
