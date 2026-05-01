/*
 * XREFs of _lambda_d2a883147a4aaef7223296bf15465975_::__lambda_d2a883147a4aaef7223296bf15465975_ @ 0x180104274
 * Callers:
 *     _CApplicationManager::SwitchToDesktopOnMonitor_::_1_::dtor$3 @ 0x18010DC4B (_CApplicationManager--SwitchToDesktopOnMonitor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d2a883147a4aaef7223296bf15465975_::__lambda_d2a883147a4aaef7223296bf15465975_(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 8));
}
