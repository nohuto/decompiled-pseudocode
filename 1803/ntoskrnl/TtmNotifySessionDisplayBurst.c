/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x140772DE4
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     TtmiResetTerminalTimeouts @ 0x140771D4C (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v1 = TtmpAcquireSessionById(&v4, a1);
  v2 = v1;
  if ( v1 >= 0 )
  {
    TtmiResetTerminalTimeouts(v4, *(_QWORD *)(v4 + 32), 6, 1111778643, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 2247, v1, v1);
  }
  return v2;
}
