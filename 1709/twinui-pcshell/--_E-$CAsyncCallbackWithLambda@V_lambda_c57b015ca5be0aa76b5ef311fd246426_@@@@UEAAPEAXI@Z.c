/*
 * XREFs of ??_E?$CAsyncCallbackWithLambda@V_lambda_c57b015ca5be0aa76b5ef311fd246426_@@@@UEAAPEAXI@Z @ 0x18001C5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda<_lambda_c57b015ca5be0aa76b5ef311fd246426_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx

  v4 = (volatile signed __int32 *)Block[7];
  if ( v4 )
  {
    Block[7] = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
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
