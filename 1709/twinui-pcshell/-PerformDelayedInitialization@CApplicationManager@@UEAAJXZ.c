/*
 * XREFs of ?PerformDelayedInitialization@CApplicationManager@@UEAAJXZ @ 0x18000B620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::PerformDelayedInitialization(CApplicationManager *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 88LL))(*((_QWORD *)this + 64));
  return 0LL;
}
