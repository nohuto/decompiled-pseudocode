/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180040258
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$0 @ 0x180066A9C (_CPolicyConfig--CPolicyConfig_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x1800B83E6 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
