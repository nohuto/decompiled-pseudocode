/*
 * XREFs of ??_E?$CAsyncCallbackWithLambda@V_lambda_298796646347532e56582e46723c0847_@@@@UEAAPEAXI@Z @ 0x1800794B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda<_lambda_298796646347532e56582e46723c0847_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = Block[10];
  if ( v4 )
  {
    Block[10] = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 228), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 80) + 64LL))(v4 + 80, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *((_DWORD *)Block + 13) = -1073741823;
  v5 = Block[5];
  if ( v5 )
  {
    Block[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
