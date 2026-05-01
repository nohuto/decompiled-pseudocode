/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6_____lambda_08db8c0acc0062cc5e32c4f43fd7daf6___ @ 0x18011B290
 * Callers:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___ @ 0x18011A3C4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6_____lambda_08db8c0acc0062cc5e32c4f43fd7daf6___(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = off_1801B7B68;
    v6 = (_QWORD *)(a2 + 8);
    *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 6 != (_DWORD *)(a2 + 8) )
    {
      *((_QWORD *)v5 + 3) = *v6;
      *v6 = 0LL;
    }
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    v5[10] = *(_DWORD *)(a2 + 24);
    v5[11] = *(_DWORD *)(a2 + 28);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
