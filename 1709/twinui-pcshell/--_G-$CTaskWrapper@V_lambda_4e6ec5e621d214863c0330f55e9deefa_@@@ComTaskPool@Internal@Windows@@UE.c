/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_4e6ec5e621d214863c0330f55e9deefa_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180155090
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_ @ 0x180153050 (_lambda_e5d643bc643c8a09454132ff8d011188_--__lambda_e5d643bc643c8a09454132ff8d011188_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4e6ec5e621d214863c0330f55e9deefa_>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)Block[4];
  if ( v4 )
  {
    Block[4] = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_((__int64)(Block + 2));
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
