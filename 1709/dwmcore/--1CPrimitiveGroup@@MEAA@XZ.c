/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x180028288
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x180025EE0 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180025FD0 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800269F8 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180026A68 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180026AD4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CPrimitiveGroupLayerClip::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = &CPrimitiveGroupLayerClip::`vftable'{for `IDirtyRectSource'};
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 0);
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v2 = (CMILCOMBase *)*((_QWORD *)this + 53);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 9));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 10));
  CPrimitiveGroup::ReleaseHeatMap(this);
  FastRegion::CRegion::FreeMemory((CPrimitiveGroup *)((char *)this + 584));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 360);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 296);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 232);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 168);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 112);
  CResource::~CResource(this);
}
