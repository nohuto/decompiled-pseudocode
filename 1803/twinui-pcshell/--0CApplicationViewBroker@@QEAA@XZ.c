/*
 * XREFs of ??0CApplicationViewBroker@@QEAA@XZ @ 0x18008EBA8
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008EA20 (--$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CApplicationViewBroker *__fastcall CApplicationViewBroker::CApplicationViewBroker(CApplicationViewBroker *this)
{
  __int64 (*v2)(); // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewBroker>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v2 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( v2 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v2)(Microsoft::WRL::Details::ModuleBase::module_);
  }
  *(_QWORD *)this = &CApplicationViewBroker::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  return this;
}
