/*
 * XREFs of ??0CProcessSubmixManager@@QEAA@XZ @ 0x18005E0B4
 * Callers:
 *     ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x18005DF58 (--$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

CProcessSubmixManager *__fastcall CProcessSubmixManager::CProcessSubmixManager(CProcessSubmixManager *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IProcessSubmixManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CProcessSubmixManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
