/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x1800ED2D4
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_4f9db91f7b3ef4e45d712402b4d08f96___ @ 0x1800ECE78 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_4f9db91f7b3ef4e45d712402b4d08f96___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96_____lambda_4f9db91f7b3ef4e45d712402b4d08f96___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rax

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = off_1801B41B0;
    *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
    v5[6] = *(_DWORD *)(a2 + 8);
    *((_QWORD *)v5 + 5) = *(_QWORD *)(a2 + 24);
    *((_QWORD *)v5 + 6) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    *((_QWORD *)v5 + 4) = v6;
    *((_BYTE *)v5 + 56) = 0;
    *(_BYTE *)(a2 + 40) = 1;
    v5[16] = *(_DWORD *)(a2 + 48);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
