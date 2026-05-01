/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_9b32178155644dca32c61cf47e9b5774___ @ 0x180176EA0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180176248 (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_9b32178155644dca32c61cf47e9b5774_(_QWORD *a1, __int64 *a2)
{
  char *v2; // rdi
  char *v5; // rax
  char *v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  _QWORD *result; // rax

  v2 = 0LL;
  v5 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    *((_DWORD *)v6 + 13) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = off_1802B5D00;
    *v7 = off_1802B5D28;
    v8 = *a2;
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*a2);
    *((_QWORD *)v6 + 7) = v8;
    v9 = a2[1];
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(a2[1]);
    *((_QWORD *)v6 + 8) = v9;
    v2 = v6;
    *((_DWORD *)v6 + 18) = *((_DWORD *)a2 + 4);
    *((_QWORD *)v6 + 10) = a2[3];
  }
  result = a1;
  *a1 = v2;
  return result;
}
