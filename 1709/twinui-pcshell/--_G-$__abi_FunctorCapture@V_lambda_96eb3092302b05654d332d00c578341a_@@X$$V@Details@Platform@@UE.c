/*
 * XREFs of ??_G?$__abi_FunctorCapture@V_lambda_96eb3092302b05654d332d00c578341a_@@X$$V@Details@Platform@@UEAAPEAXI@Z @ 0x1801549E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_96eb3092302b05654d332d00c578341a_,void,>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)Block[2];
  if ( v4 )
  {
    Block[2] = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *Block = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
