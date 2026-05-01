/*
 * XREFs of ??0StubImmersiveApplication@@QEAA@XZ @ 0x18023BB5C
 * Callers:
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEBQEAG@Z @ 0x18025747C (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

StubImmersiveApplication *__fastcall StubImmersiveApplication::StubImmersiveApplication(StubImmersiveApplication *this)
{
  StubImmersiveApplication *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveApplication>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &StubImmersiveApplication::`vftable';
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
