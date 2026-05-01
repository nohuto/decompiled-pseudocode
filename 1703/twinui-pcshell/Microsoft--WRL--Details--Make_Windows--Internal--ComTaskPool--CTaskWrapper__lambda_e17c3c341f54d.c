/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e_____lambda_e17c3c341f54d35a13f5e5412be3822e___ @ 0x1800B0B60
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_e17c3c341f54d35a13f5e5412be3822e___ @ 0x1800B0880 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_e17c3c341f54d35a13f5e5412be3822e___.c)
 * Callees:
 *     ??0ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@$$QEAV01@@Z @ 0x1800AB360 (--0ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e_____lambda_e17c3c341f54d35a13f5e5412be3822e___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // r8
  _QWORD *v7; // r8

  *a1 = 0LL;
  v4 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = off_1801AF938;
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != (_DWORD *)a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_QWORD *)v5 + 3) = 0LL;
    v6 = (_QWORD *)(a2 + 8);
    if ( v5 + 6 != (_DWORD *)(a2 + 8) )
    {
      *((_QWORD *)v5 + 3) = *v6;
      *v6 = 0LL;
    }
    *((_QWORD *)v5 + 4) = 0LL;
    v7 = (_QWORD *)(a2 + 16);
    if ( v5 + 8 != (_DWORD *)(a2 + 16) )
    {
      *((_QWORD *)v5 + 4) = *v7;
      *v7 = 0LL;
    }
    *((_BYTE *)v5 + 40) = *(_BYTE *)(a2 + 24);
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::ExperienceManager_CheckAndPopulateContact(
      (__int64)(v5 + 12),
      a2 + 32);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
