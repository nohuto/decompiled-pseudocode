/*
 * XREFs of ??1CMILBrushBitmap@@MEAA@XZ @ 0x1800461D0
 * Callers:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18007CF28 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x180176AA0 (--_E-$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18007BED8 (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 */

void __fastcall CMILBrushBitmap::~CMILBrushBitmap(CMILBrushBitmap *this)
{
  *(_QWORD *)this = &CMILBrushBitmap::`vftable';
  *((_QWORD *)this + 3) = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 6) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(*((_QWORD *)this + 24));
  CMILResourceCache::~CMILResourceCache((CMILBrushBitmap *)((char *)this + 48));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
