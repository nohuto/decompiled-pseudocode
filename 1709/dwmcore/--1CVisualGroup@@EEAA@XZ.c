/*
 * XREFs of ??1CVisualGroup@@EEAA@XZ @ 0x1801782CC
 * Callers:
 *     ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180178310 (--_GCVisualGroup@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180178340 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(void **this)
{
  *this = &CVisualGroup::`vftable';
  CVisualGroup::ClearVisualGroupData((CVisualGroup *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 11);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
  CResource::~CResource((CResource *)this);
}
