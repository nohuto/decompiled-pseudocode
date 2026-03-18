/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1401F565C
 * Callers:
 *     IopHardErrorThread @ 0x1406B51B0 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403850D0);
  v1 = qword_1403850C0;
  v2 = v0;
  v3 = *(_QWORD *)qword_1403850C0;
  if ( *(__int64 **)(qword_1403850C0 + 8) != &qword_1403850C0 || *(_QWORD *)(v3 + 8) != qword_1403850C0 )
    __fastfail(3u);
  qword_1403850C0 = *(_QWORD *)qword_1403850C0;
  *(_QWORD *)(v3 + 8) = &qword_1403850C0;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_1403850D0);
  __writecr8(v2);
  return v1;
}
