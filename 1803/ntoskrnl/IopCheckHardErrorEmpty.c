/*
 * XREFs of IopCheckHardErrorEmpty @ 0x140232304
 * Callers:
 *     IopHardErrorThread @ 0x140719E60 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  KIRQL v1; // di
  bool v2; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403C8490);
  IopCurrentHardError = 0LL;
  v1 = v0;
  if ( (__int64 *)qword_1403C8480 == &qword_1403C8480 )
    byte_1403C84B8 = 0;
  v2 = qword_1403C8480 != (_QWORD)&qword_1403C8480;
  KxReleaseSpinLock(&qword_1403C8490);
  __writecr8(v1);
  return v2;
}
