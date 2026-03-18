/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x14027FDA4
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x1402745C0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  KIRQL v4; // di
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_1403A7E04 + dword_1403A7E08) & 0x3F);
  if ( a1 )
  {
    qword_1403A7E10 |= v5;
    v3 = 1;
    ++dword_1403A7E08;
  }
  else
  {
    qword_1403A7E10 &= ~v5;
    ++dword_1403A7E04;
  }
  if ( v3 != (qword_1403A7F38 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_1403A7F38);
      LODWORD(qword_1403A7F38) = qword_1403A7F38 | 1;
    }
    else
    {
      LODWORD(qword_1403A7F38) = 0;
    }
    PopQueueWorkItem((__int64)&unk_1403A7F10, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = v4;
  __writecr8(v4);
  return result;
}
