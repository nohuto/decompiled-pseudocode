/*
 * XREFs of HvUnlockHiveFlusherExclusive @ 0x140496614
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

char __fastcall HvUnlockHiveFlusherExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  char v5; // al

  v4 = a1 + 72;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  return KeAbPostRelease(v4);
}
