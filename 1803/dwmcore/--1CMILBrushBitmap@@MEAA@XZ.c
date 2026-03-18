/*
 * XREFs of ??1CMILBrushBitmap@@MEAA@XZ @ 0x18001DA7C
 * Callers:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x1800B8284 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCMILBrushBitmap@@MEAAPEAXI@Z @ 0x1800DA540 (--_GCMILBrushBitmap@@MEAAPEAXI@Z.c)
 *     ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1801A61E0 (--_E-$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18001DC24 (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 */

void __fastcall CMILBrushBitmap::~CMILBrushBitmap(CMILBrushBitmap *this)
{
  *(_QWORD *)this = &CMILBrushBitmap::`vftable';
  *((_QWORD *)this + 3) = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 6) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  ReleaseInterfaceNoNULL<IBitmapSource>(*((_QWORD *)this + 24));
  CMILResourceCache::~CMILResourceCache((CMILBrushBitmap *)((char *)this + 48));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
