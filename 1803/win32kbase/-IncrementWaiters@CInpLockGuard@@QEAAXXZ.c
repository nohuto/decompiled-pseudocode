/*
 * XREFs of ?IncrementWaiters@CInpLockGuard@@QEAAXXZ @ 0x1C0124940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::IncrementWaiters(CInpLockGuard *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
