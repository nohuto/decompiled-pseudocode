/*
 * XREFs of PopPowerButtonTimerCallback @ 0x14027FB60
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

void __fastcall PopPowerButtonTimerCallback(__int64 a1, int a2)
{
  KxAcquireSpinLock(&PopPowerButtonHold);
  if ( (qword_1403A7F38 & 1) != 0 && HIDWORD(qword_1403A7F38) == a2 )
  {
    LODWORD(qword_1403A7F38) = qword_1403A7F38 & 1 | ((qword_1403A7F38 & 0xFFFFFFFE) + 2000);
    PopQueueWorkItem((__int64)&unk_1403A7F10, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
}
