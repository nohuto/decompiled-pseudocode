/*
 * XREFs of ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x18006AE40
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x18006A510 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x18006ADE0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::~CAtlasedRectsGroup(CAtlasedRectsGroup *this)
{
  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable';
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
