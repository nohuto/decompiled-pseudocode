/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140249BC0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_1403646F8 & 1) != 0 && HIDWORD(qword_1403646F8) == a2 )
  {
    LODWORD(qword_1403646F8) = qword_1403646F8 & 1 | ((qword_1403646F8 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_1403646D0, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
