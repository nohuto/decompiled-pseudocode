/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800976C8
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x180097140 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 *     ??_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z @ 0x18016EAA0 (--_ECPrimitiveGroupLayerClip@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180097788 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097838 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180097888 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800978F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 8) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 0);
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v2 = (CMILCOMBase *)*((_QWORD *)this + 53);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 9));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 10));
  CPrimitiveGroup::ReleaseHeatMap(this);
  FastRegion::CRegion::FreeMemory((void **)this + 73);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 360);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 296);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 232);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 168);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 112);
  CResource::~CResource(this);
}
