/*
 * XREFs of ??0TaskbarLayoutPolicyManager@@QEAA@XZ @ 0x18008C70C
 * Callers:
 *     ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18008C658 (--$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

TaskbarLayoutPolicyManager *__fastcall TaskbarLayoutPolicyManager::TaskbarLayoutPolicyManager(
        TaskbarLayoutPolicyManager *this)
{
  TaskbarLayoutPolicyManager *result; // rax

  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,ITaskbarLayoutPolicyManager>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &TaskbarLayoutPolicyManager::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  VariantInit((VARIANTARG *)((char *)this + 80));
  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
