/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x1801EC330
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x1801EC370 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  *(_QWORD *)this = &CD2DInk::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 13));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 14));
  CD2DResource::~CD2DResource(this);
}
