/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800B5728
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800B5670 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x1800B56B0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable';
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
