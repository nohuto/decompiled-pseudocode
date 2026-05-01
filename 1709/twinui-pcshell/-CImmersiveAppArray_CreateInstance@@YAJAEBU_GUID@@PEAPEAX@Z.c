/*
 * XREFs of ?CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DB64
 * Callers:
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18000BAE0 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18000EAD0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x180030500 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180024440 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray_CreateInstance(const struct _GUID *a1, void **a2)
{
  void **v3; // rbx
  void **v4; // rax
  const struct _GUID *v5; // rcx
  void **v6; // rdi
  signed int Instance; // edi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (void **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v4;
  if ( v4 )
  {
    v4[1] = 0LL;
    v4[2] = 0LL;
    *v4 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::`vftable';
    v5 = (const struct _GUID *)Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &CImmersiveAppArray::`vftable';
    v6[2] = 0LL;
    v3 = v6;
  }
  Instance = v3 == 0LL ? 0x8007000E : 0;
  if ( v3 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v5, v3 + 2);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(void **, GUID *, void **))*v3)(
                   v3,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  if ( v3 )
    (*((void (__fastcall **)(void **))*v3 + 2))(v3);
  return (unsigned int)Instance;
}
