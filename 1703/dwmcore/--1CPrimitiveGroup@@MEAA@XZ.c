/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004CAD8
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18004C380 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3B0 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3E0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C450 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C4BC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
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
  v2 = (CMILCOMBase *)*((_QWORD *)this + 37);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 9));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 10));
  CPrimitiveGroup::ReleaseHeatMap(this);
  FastRegion::CRegion::FreeMemory((CPrimitiveGroup *)((char *)this + 456));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 232);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 168);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 112);
  CResource::~CResource(this);
}
