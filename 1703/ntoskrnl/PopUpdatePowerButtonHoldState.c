/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140234864
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x14022A270 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x140155A70 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  if ( (a1 != 0) != (qword_14034A078 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_14034A078);
      LODWORD(qword_14034A078) = qword_14034A078 | 1;
    }
    else
    {
      LODWORD(qword_14034A078) = 0;
    }
    PopQueueWorkItem((__int64)&unk_14034A050, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = v2;
  __writecr8(v2);
  return result;
}
