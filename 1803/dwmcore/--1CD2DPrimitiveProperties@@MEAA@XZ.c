/*
 * XREFs of ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x1801E5DDC
 * Callers:
 *     ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x1801E5E10 (--_GCD2DPrimitiveProperties@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CD2DPrimitiveProperties::~CD2DPrimitiveProperties(CD2DPrimitiveProperties *this)
{
  *(_QWORD *)this = &CD2DPrimitiveProperties::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 13));
  CD2DResource::~CD2DResource(this);
}
