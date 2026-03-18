/*
 * XREFs of ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x18008662C
 * Callers:
 *     ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800866D0 (--_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 */

void __fastcall CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(CD2DBitmapBrushWrapper *this)
{
  *(_QWORD *)this = &CD2DBitmapBrushWrapper::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 2));
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 3));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
