/*
 * XREFs of ?MessageProc@MPCManager@@SAJPEAXPEBXH@Z @ 0x18005E0E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManager::MessageProc(volatile signed __int32 *a1, const void *a2, int a3)
{
  unsigned int v4; // edi

  if ( a1 )
    _InterlockedIncrement(a1 + 3);
  v4 = CoreUICallReceive(
         *((_QWORD *)a1 + 3),
         &IMPCManager_Receive<MPCManager>::Type,
         &g_parameters_lubsbgF6GPm1xAkmystV9Txv49w,
         24LL,
         a1,
         a2,
         a3);
  if ( _InterlockedExchangeAdd(a1 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v4;
}
