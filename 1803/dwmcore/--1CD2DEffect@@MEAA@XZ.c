/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x1801EC76C
 * Callers:
 *     ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x1801EC7A0 (--_GCD2DEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 13));
  CD2DResource::~CD2DResource(this);
}
