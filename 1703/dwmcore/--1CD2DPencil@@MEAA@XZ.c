/*
 * XREFs of ??1CD2DPencil@@MEAA@XZ @ 0x18019E868
 * Callers:
 *     ??_GCD2DPencil@@MEAAPEAXI@Z @ 0x18019E8A0 (--_GCD2DPencil@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CD2DPencil::~CD2DPencil(CD2DPencil *this)
{
  *(_QWORD *)this = &CD2DMesh::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DGenericInk::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 13));
  CD2DResource::~CD2DResource(this);
}
