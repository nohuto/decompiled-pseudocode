/*
 * XREFs of ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800AF034
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800AEDE0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DeleteAllD2DCommandLists@CAtlasedRectsGroup@@IEAAXXZ @ 0x1800AEF38 (-DeleteAllD2DCommandLists@CAtlasedRectsGroup@@IEAAXXZ.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800AEFD0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::~CAtlasedRectsGroup(CAtlasedRectsGroup *this)
{
  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CAtlasedRectsGroup::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRectsGroup::DeleteAllD2DCommandLists(this);
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  CResource::~CResource(this);
}
