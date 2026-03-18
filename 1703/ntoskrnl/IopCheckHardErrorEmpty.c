/*
 * XREFs of IopCheckHardErrorEmpty @ 0x1401EF6C8
 * Callers:
 *     IopHardErrorThread @ 0x1406891D0 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool IopCheckHardErrorEmpty()
{
  KIRQL v0; // al
  KIRQL v1; // di
  bool v2; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140369090);
  IopCurrentHardError = 0LL;
  v1 = v0;
  if ( (__int64 *)qword_140369080 == &qword_140369080 )
    byte_1403690B8 = 0;
  v2 = qword_140369080 != (_QWORD)&qword_140369080;
  KxReleaseSpinLock(&qword_140369090);
  __writecr8(v1);
  return v2;
}
