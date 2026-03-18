/*
 * XREFs of PopPowerButtonTimerCallback @ 0x140234660
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     PopQueueWorkItem @ 0x140155A70 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_14034A078 & 1) != 0 && HIDWORD(qword_14034A078) == a2 )
  {
    LODWORD(qword_14034A078) = qword_14034A078 & 1 | ((qword_14034A078 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_14034A050, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
