/*
 * XREFs of ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x1800C07E0
 * Callers:
 *     ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x1800C07B0 (--_GCD2DPrimitiveProperties@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CD2DPrimitiveProperties::~CD2DPrimitiveProperties(CD2DPrimitiveProperties *this)
{
  *(_QWORD *)this = &CD2DPrimitiveProperties::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 13));
  CD2DResource::~CD2DResource(this);
}
