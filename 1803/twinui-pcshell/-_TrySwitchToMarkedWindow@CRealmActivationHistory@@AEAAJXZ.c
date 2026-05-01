/*
 * XREFs of ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x180128A50
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180090200 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRealmActivationHistory::_TrySwitchToMarkedWindow(CRealmActivationHistory *this)
{
  LPARAM lParam; // [rsp+38h] [rbp+10h] BYREF

  lParam = 0LL;
  EnumWindows((WNDENUMPROC)lambda_21ab0f95d81107e5cccfa51f206c78c4_::_lambda_invoker_cdecl_, (LPARAM)&lParam);
  if ( lParam )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 50) + 128LL))(*((_QWORD *)this + 50), 8LL);
  else
    return 2147943568LL;
}
