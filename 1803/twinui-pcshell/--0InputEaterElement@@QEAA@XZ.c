/*
 * XREFs of ??0InputEaterElement@@QEAA@XZ @ 0x1802A3BBC
 * Callers:
 *     ??$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVInputEaterElement@@AEAPEAUIInputEaterElementNotifications@@@Z @ 0x1802A3AF0 (--$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x18027D4C8 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::InputEaterElement(InputEaterElement *this)
{
  InputEaterElement *result; // rax

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(this);
  *((_DWORD *)this + 53) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &InputEaterElement::`vftable';
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
