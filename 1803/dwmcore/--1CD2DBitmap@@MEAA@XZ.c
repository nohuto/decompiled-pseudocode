/*
 * XREFs of ??1CD2DBitmap@@MEAA@XZ @ 0x1800774E0
 * Callers:
 *     ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x1800776E0 (--_GCD2DBitmap@@MEAAPEAXI@Z.c)
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x180083408 (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  *(_QWORD *)this = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CD2DBitmap::`vftable'{for `IBitmapUnlock'};
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 16));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 17));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 18));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 19));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 20));
  CD2DResource::~CD2DResource(this);
}
