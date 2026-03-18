/*
 * XREFs of ??1CMILBrushBitmap@@MEAA@XZ @ 0x180054204
 * Callers:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18007C3FC (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1800CFA10 (--_E-$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180056F24 (--1CMILResourceCache@@IEAA@XZ.c)
 */

void __fastcall CMILBrushBitmap::~CMILBrushBitmap(CMILBrushBitmap *this)
{
  *(_QWORD *)this = &CMILBrushBitmap::`vftable';
  *((_QWORD *)this + 3) = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 6) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 24));
  CMILResourceCache::~CMILResourceCache((CMILBrushBitmap *)((char *)this + 48));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
