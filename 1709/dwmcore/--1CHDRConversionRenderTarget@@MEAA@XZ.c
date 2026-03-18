/*
 * XREFs of ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801ADE10
 * Callers:
 *     ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x1801ADF30 (--_GCHDRConversionRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CHDRConversionRenderTarget::~CHDRConversionRenderTarget(CHDRConversionRenderTarget *this)
{
  *(_QWORD *)this = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 18) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 24) = &CHDRConversionRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 71));
  FastRegion::CRegion::FreeMemory((void **)this + 72);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
}
