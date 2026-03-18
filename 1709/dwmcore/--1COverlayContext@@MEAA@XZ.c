/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x18013FA20
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x18013FB10 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18006737C (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x18006A400 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &COverlayContext::`vftable';
  if ( !v1 )
  {
    COverlayContext::Reset(this);
    ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 2));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 141);
  FastRegion::CRegion::FreeMemory((void **)this + 132);
  *((_QWORD *)this + 115) = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 920));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 69);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 35);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 23);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
