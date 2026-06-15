/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x18000FCBC
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x180036A48 (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::CreateInstance_::_1_::dtor$1 @ 0x1800372ED (_CApplicationManager--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
