/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64___lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_ @ 0x18004EB04
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_ @ 0x18004E920 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_96e0e644045a5df6c639af1253b871cf__-___ptr64.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf______ptr64___lambda_96e0e644045a5df6c639af1253b871cf______ptr64_(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = off_1801A9C70;
    *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
    *((_OWORD *)v5 + 2) = *(_OWORD *)(a2 + 16);
    *((_QWORD *)v5 + 6) = *(_QWORD *)(a2 + 32);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
