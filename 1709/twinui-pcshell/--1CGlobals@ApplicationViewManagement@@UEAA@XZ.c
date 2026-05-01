/*
 * XREFs of ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x180079394
 * Callers:
 *     ??_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z @ 0x180079360 (--_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18007ED60 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 *     ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180082820 (-v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ.c)
 *     _CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$2 @ 0x1801E9C54 (_CWin32ApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$2.c)
 *     _CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded_::_1_::dtor$2 @ 0x1801E9DBC (_CWinRTApplicationView--v_RefreshEnterpriseIdIfNeeded_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewManagement::CGlobals::~CGlobals(ApplicationViewManagement::CGlobals *this)
{
  __int64 v2; // rcx
  HKEY v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    *((_QWORD *)this + 7) = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 228), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 80) + 64LL))(v2 + 80, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v3 = (HKEY)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 )
    RegCloseKey(v3);
  *((_DWORD *)this + 11) = -1073741823;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
