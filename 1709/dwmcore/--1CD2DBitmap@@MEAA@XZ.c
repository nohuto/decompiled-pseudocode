/*
 * XREFs of ??1CD2DBitmap@@MEAA@XZ @ 0x18004C490
 * Callers:
 *     ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x18004C690 (--_GCD2DBitmap@@MEAAPEAXI@Z.c)
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x1800922CC (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  *(_QWORD *)this = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CD2DBitmap::`vftable'{for `IBitmapUnlock'};
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 16));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 17));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 18));
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 19));
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 20));
  CD2DResource::~CD2DResource(this);
}
