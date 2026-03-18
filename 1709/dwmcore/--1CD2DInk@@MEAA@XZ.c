/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x1801B3CA0
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x1801B3CE0 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  *(_QWORD *)this = &CD2DInk::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 13));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 14));
  CD2DResource::~CD2DResource(this);
}
