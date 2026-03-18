/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x180001F80
 * Callers:
 *     ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x180001F50 (--_GCD2DPrimitiveProperties@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 13));
  CD2DResource::~CD2DResource(this);
}
