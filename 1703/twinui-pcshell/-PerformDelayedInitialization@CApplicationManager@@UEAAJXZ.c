/*
 * XREFs of ?PerformDelayedInitialization@CApplicationManager@@UEAAJXZ @ 0x18000B460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::PerformDelayedInitialization(CApplicationManager *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 58) + 88LL))(*((_QWORD *)this + 58));
  return 0LL;
}
