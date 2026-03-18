/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1401EFFB8
 * Callers:
 *     IopHardErrorThread @ 0x1406891D0 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140369090);
  v1 = qword_140369080;
  v2 = v0;
  v3 = *(_QWORD *)qword_140369080;
  if ( *(__int64 **)(qword_140369080 + 8) != &qword_140369080 || *(_QWORD *)(v3 + 8) != qword_140369080 )
    __fastfail(3u);
  qword_140369080 = *(_QWORD *)qword_140369080;
  *(_QWORD *)(v3 + 8) = &qword_140369080;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_140369090);
  __writecr8(v2);
  return v1;
}
