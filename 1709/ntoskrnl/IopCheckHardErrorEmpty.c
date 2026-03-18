/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1401F4DD4
 * Callers:
 *     IopHardErrorThread @ 0x1406B51B0 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  KIRQL v1; // di
  bool v2; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403850D0);
  IopCurrentHardError = 0LL;
  v1 = v0;
  if ( (__int64 *)qword_1403850C0 == &qword_1403850C0 )
    byte_1403850F8 = 0;
  v2 = qword_1403850C0 != (_QWORD)&qword_1403850C0;
  KxReleaseSpinLock(&qword_1403850D0);
  __writecr8(v1);
  return v2;
}
