/*
 * XREFs of ??_ECCortanaShownEventArgs@?1??OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z@UEAAPEAXI@Z @ 0x1800A4D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall `CortanaExperienceManagerNotification::OnShown'::`2'::CCortanaShownEventArgs::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v4 = Block[3];
  if ( v4 < 0 )
  {
    v5 = (volatile signed __int32 *)(2 * v4);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v5 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
