/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9_____lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___ @ 0x18006BCAC
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___ @ 0x18006A928 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9_____lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rdx

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
    *(_QWORD *)v5 = off_1801ABE80;
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 4 != (_DWORD *)a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *((_QWORD *)v5 + 3) = *(_QWORD *)(a2 + 8);
    v6 = (_QWORD *)(a2 + 24);
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *((_QWORD *)v5 + 5) = 0LL;
    if ( v5 + 10 != (_DWORD *)(a2 + 24) )
    {
      *((_QWORD *)v5 + 5) = *v6;
      *v6 = 0LL;
    }
    *((_BYTE *)v5 + 48) = *(_BYTE *)(a2 + 32);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
