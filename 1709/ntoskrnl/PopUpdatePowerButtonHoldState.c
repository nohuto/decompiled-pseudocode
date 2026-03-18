/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x14024A060
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x14023D120 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  if ( (a1 != 0) != (qword_1403646F8 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_1403646F8);
      LODWORD(qword_1403646F8) = qword_1403646F8 | 1;
    }
    else
    {
      LODWORD(qword_1403646F8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_1403646D0, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = v2;
  __writecr8(v2);
  return result;
}
