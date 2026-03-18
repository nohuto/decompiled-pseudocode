/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800B6008
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800B5F60 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800B5FA0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable';
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
