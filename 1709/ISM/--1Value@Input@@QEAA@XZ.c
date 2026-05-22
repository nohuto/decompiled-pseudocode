/*
 * XREFs of ??1Value@Input@@QEAA@XZ @ 0x1800169BC
 * Callers:
 *     _Input::PropertyModifiedAdapter_Input::ModifiedNotifier_Input::Property___::MoveConstruct_::_1_::dtor$7 @ 0x1800CD949 (_Input--PropertyModifiedAdapter_Input--ModifiedNotifier_Input--Property___--MoveCon_ea_1800CD949.c)
 *     _Input::Property::MoveConstruct_::_1_::dtor$3 @ 0x1800CE083 (_Input--Property--MoveConstruct_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Input::Value::~Value(void **this)
{
  operator delete(*this);
  *this = 0LL;
  this[1] = 0LL;
}
