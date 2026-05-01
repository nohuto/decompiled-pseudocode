/*
 * XREFs of ??$Make@VCMonitorNotificationHelper@@AEAPEAUIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCMonitorNotificationHelper@@@12@AEAPEAUIImmersiveMonitorNotification@@@Z @ 0x18002AE30
 * Callers:
 *     ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002ABD4 (-CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CMonitorNotificationHelper,IImmersiveMonitorNotification * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &CMonitorNotificationHelper::`vftable';
    v5[2] = 0LL;
    if ( v5[2] != v6 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = v5[2];
      v5[2] = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
