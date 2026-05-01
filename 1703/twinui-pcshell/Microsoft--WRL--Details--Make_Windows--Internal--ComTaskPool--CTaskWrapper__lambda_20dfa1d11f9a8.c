/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5_____lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___ @ 0x1801430D0
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___ @ 0x180142E7C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5_____lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD *v8; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = off_180241698;
    v6 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*a2);
    v5[2] = v6;
    v7 = a2[1];
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(a2[1]);
    v5[3] = v7;
    v5[4] = 0LL;
    v8 = a2 + 2;
    if ( v5 + 4 != a2 + 2 )
    {
      v5[4] = *v8;
      *v8 = 0LL;
    }
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
