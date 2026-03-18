/*
 * XREFs of ??1CVisualGroup@@EEAA@XZ @ 0x1801A943C
 * Callers:
 *     ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x1801A9480 (--_GCVisualGroup@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801A94C4 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(CVisualGroup *this)
{
  *(_QWORD *)this = &CVisualGroup::`vftable';
  CVisualGroup::ClearVisualGroupData(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 56);
  CResource::~CResource(this);
}
