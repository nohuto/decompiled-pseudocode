/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1801ADEB8
 * Callers:
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801ADE10 (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801ADF60 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801ADF90 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 18) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 24) = &CHwFullScreenRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 68));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 69));
  FastRegion::CRegion::FreeMemory((void **)this + 59);
  FastRegion::CRegion::FreeMemory((void **)this + 50);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
