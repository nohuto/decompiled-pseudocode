/*
 * XREFs of ?LockShared@CInpPushLock@@QEAAXXZ @ 0x1C006ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::LockShared(CInpPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
}
