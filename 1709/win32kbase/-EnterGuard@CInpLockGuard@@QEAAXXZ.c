/*
 * XREFs of ?EnterGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::EnterGuard(CInpLockGuard *this)
{
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 3) = KeGetCurrentThread();
  ++glMitInGuard;
}
