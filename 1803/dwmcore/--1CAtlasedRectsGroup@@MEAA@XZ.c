/*
 * XREFs of ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x1800B3C50
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800B3340 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800B3BE0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::~CAtlasedRectsGroup(CAtlasedRectsGroup *this)
{
  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable';
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
