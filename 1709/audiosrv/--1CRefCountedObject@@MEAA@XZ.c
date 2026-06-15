/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180031EC8
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$0 @ 0x180060D14 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x18007F707 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
