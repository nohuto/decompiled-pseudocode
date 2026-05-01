/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_2727d797a9b3b93bbc18d3ec3a83ce66__&___ptr64_ @ 0x1800462E0
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x180040890 (-WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_2727d797a9b3b93bbc18d3ec3a83ce66______ptr64_(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v2; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7 = *a2;
    *((_QWORD *)v6 + 2) = *a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v2 = v6;
    *(_OWORD *)(v6 + 6) = *(_OWORD *)(a2 + 1);
    *((_QWORD *)v6 + 5) = a2[3];
    *(_QWORD *)v6 = off_1801FC4F0;
  }
  result = a1;
  *a1 = v2;
  return result;
}
