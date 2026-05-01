/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopDataSourceComponent@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B4308
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopDataSourceComponent_IUnknown__::_1_::dtor$1 @ 0x1801F6CB6 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopDataSourceComponent_IUnkn_ea_1801F6CB6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopDataSourceComponent>::~ComPtr<VirtualDesktopDataSourceComponent>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 148), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 40) + 64LL))(v2 + 40, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
