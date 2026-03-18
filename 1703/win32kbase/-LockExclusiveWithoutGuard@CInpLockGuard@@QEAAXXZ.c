/*
 * XREFs of ?LockExclusiveWithoutGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::LockExclusiveWithoutGuard(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
