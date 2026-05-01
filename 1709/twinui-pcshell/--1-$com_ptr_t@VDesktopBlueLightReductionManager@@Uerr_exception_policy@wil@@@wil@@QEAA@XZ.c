/*
 * XREFs of ??1?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180086D8C
 * Callers:
 *     _DesktopBlueLightReductionManager::OnMessage_::_1_::dtor$0 @ 0x1801EA0A3 (_DesktopBlueLightReductionManager--OnMessage_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::DisplaySettingsChange_::_1_::dtor$0 @ 0x1801EA13A (_DesktopBlueLightReductionManager--DisplaySettingsChange_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::dtor$1 @ 0x1801EA194 (_DesktopBlueLightReductionManager--OnIdleStateFlagsChanged_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::~com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 172), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v1 + 40) + 64LL))(v1 + 40, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
