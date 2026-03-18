/*
 * XREFs of ??1CDcompRenderTarget@@MEAA@XZ @ 0x180132414
 * Callers:
 *     ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x180132470 (--_ECDcompRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CDcompRenderTarget::~CDcompRenderTarget(CDcompRenderTarget *this)
{
  *(_QWORD *)this = &CDcompRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 7));
  CResource::~CResource(this);
}
