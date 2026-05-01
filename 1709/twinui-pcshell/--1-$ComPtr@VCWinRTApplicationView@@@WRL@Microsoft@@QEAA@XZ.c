/*
 * XREFs of ??1?$ComPtr@VCWinRTApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18007747C
 * Callers:
 *     _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$0 @ 0x1801E979B (_CApplicationViewManager--AddWinRTApplicationView_--_1_--dtor$0.c)
 *     _CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$0 @ 0x1801E9DA4 (_CWinRTApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWinRTApplicationView>::~ComPtr<CWinRTApplicationView>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 45, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 416LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
