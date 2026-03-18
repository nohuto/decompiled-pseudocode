/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x14012FB54
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x14059B9C0 (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PiDrvDbUnloadNodeReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  unsigned __int64 v3; // rbx

  v1 = (KSPIN_LOCK *)(a1 + 424);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 424));
  *(_BYTE *)(a1 + 432) = 0;
  KxReleaseSpinLock(v1);
  __writecr8(v3);
}
