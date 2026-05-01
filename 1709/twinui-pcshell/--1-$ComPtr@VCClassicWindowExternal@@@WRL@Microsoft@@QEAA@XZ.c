/*
 * XREFs of ??1?$ComPtr@VCClassicWindowExternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180039178
 * Callers:
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run_::_1_::dtor$0 @ 0x1801E7E4F (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___--Run_-.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CClassicWindowExternal>::~ComPtr<CClassicWindowExternal>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 15, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
