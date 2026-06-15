/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x18000AF8C
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x180028200 (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18002829B (_CApplication--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CApplicationManager::CreateInstance_::_1_::dtor$1 @ 0x18002877F (_CApplicationManager--CreateInstance_--_1_--dtor$1.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18002879B (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
