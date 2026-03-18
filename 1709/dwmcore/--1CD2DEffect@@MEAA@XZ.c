/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x1801B40DC
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x1801B4110 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 13));
  CD2DResource::~CD2DResource(this);
}
