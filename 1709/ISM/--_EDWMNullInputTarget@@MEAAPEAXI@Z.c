/*
 * XREFs of ??_EDWMNullInputTarget@@MEAAPEAXI@Z @ 0x18002264C
 * Callers:
 *     ??_EDWMNullInputTarget@@OBI@EAAPEAXI@Z @ 0x180022980 (--_EDWMNullInputTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x180016C64 (--1PropertyMap@Input@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
DWMNullInputTarget *__fastcall DWMNullInputTarget::`vector deleting destructor'(DWMNullInputTarget *this, char a2)
{
  *(_QWORD *)this = &DWMNullInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMNullInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMNullInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &DWMNullInputTarget::`vftable'{for `RefCountedObject'};
  Input::PropertyMap::~PropertyMap((void **)this + 5);
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
