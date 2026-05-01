/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64_ @ 0x18003B62C
 * Callers:
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18003ABE0 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64_(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 3) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v7 = *a2;
    v6[2] = *a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v2 = v6;
    v6[3] = a2[1];
    *v6 = off_1801FC008;
  }
  result = a1;
  *a1 = v2;
  return result;
}
