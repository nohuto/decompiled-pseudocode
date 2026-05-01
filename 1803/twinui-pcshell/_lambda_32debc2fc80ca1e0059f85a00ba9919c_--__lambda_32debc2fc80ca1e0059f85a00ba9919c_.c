/*
 * XREFs of _lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_ @ 0x180116ED8
 * Callers:
 *     _CImmersiveMode::_ScheduleDesktopVisibilityNotification_::_1_::dtor$2 @ 0x1801188A5 (_CImmersiveMode--_ScheduleDesktopVisibilityNotification_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_32debc2fc80ca1e0059f85a00ba9919c_::__lambda_32debc2fc80ca1e0059f85a00ba9919c_(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1);
}
