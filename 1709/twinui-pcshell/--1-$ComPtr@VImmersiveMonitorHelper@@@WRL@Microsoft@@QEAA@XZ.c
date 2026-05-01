/*
 * XREFs of ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x180182828
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServiceProvider_____ptr64_&___ptr64_IXamlLauncherState_____ptr64__::_1_::dtor$1 @ 0x1801F5640 (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitor_ea_1801F5640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::~ComPtr<ImmersiveMonitorHelper>(
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
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 40LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
