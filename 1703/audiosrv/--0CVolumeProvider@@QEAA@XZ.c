/*
 * XREFs of ??0CVolumeProvider@@QEAA@XZ @ 0x1800383D0
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x18003829C (--$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolu.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

CVolumeProvider *__fastcall CVolumeProvider::CVolumeProvider(CVolumeProvider *this)
{
  CVolumeProvider *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVolumeProvider::`vftable';
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_QWORD *)this + 7) = 0LL;
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 10;
  return result;
}
