/*
 * XREFs of ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x180029C0C
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$2 @ 0x180198FC6 (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$2.c)
 *     _CApplicationViewManager::_CApplicationViewManager_::_1_::dtor$17 @ 0x18019ACA8 (_CApplicationViewManager--_CApplicationViewManager_--_1_--dtor$17.c)
 *     _CApplicationViewManager::_CApplicationViewManager_::_1_::dtor$18 @ 0x18019ACB4 (_CApplicationViewManager--_CApplicationViewManager_--_1_--dtor$18.c)
 *     _SmartCookie::_SmartCookie_::_1_::dtor$0 @ 0x18019AFFC (_SmartCookie--_SmartCookie_--_1_--dtor$0.c)
 *     _HolographicPositioner::SubscribeToServices_::_1_::dtor$0 @ 0x18019D3A6 (_HolographicPositioner--SubscribeToServices_--_1_--dtor$0.c)
 *     _XamlTaskbarManager::_scalar_deleting_destructor__::_1_::dtor$7 @ 0x1801A0107 (_XamlTaskbarManager--_scalar_deleting_destructor__--_1_--dtor$7.c)
 *     _AppViewSwitchItemDataSource::_scalar_deleting_destructor__::_1_::dtor$104 @ 0x1801A41EF (_AppViewSwitchItemDataSource--_scalar_deleting_destructor__--_1_--dtor$104.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
