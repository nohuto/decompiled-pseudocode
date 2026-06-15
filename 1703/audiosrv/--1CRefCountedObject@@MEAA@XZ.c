/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x18002F9B8
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$0 @ 0x18005C020 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x1800989B7 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
