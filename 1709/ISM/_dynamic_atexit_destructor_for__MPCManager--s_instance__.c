/*
 * XREFs of _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x1800D2890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__MPCManager::s_instance__()
{
  volatile signed __int32 *v0; // rcx
  __int64 result; // rax

  v0 = (volatile signed __int32 *)MPCManager::s_instance;
  if ( MPCManager::s_instance )
  {
    MPCManager::s_instance = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v0 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v0 + 40LL))(v0, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
