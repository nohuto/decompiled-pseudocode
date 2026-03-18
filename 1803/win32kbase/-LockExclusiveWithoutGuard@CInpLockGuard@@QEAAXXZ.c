/*
 * XREFs of ?LockExclusiveWithoutGuard@CInpLockGuard@@QEAAXXZ @ 0x1C0124AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::LockExclusiveWithoutGuard(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
