/*
 * XREFs of IopRemoveHardErrorPacket @ 0x140232BE4
 * Callers:
 *     IopHardErrorThread @ 0x140719E60 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  KIRQL v2; // di
  __int64 v3; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403C8490);
  v1 = qword_1403C8480;
  v2 = v0;
  v3 = *(_QWORD *)qword_1403C8480;
  if ( *(__int64 **)(qword_1403C8480 + 8) != &qword_1403C8480 || *(_QWORD *)(v3 + 8) != qword_1403C8480 )
    __fastfail(3u);
  qword_1403C8480 = *(_QWORD *)qword_1403C8480;
  *(_QWORD *)(v3 + 8) = &qword_1403C8480;
  IopCurrentHardError = v1;
  KxReleaseSpinLock(&qword_1403C8490);
  __writecr8(v2);
  return v1;
}
