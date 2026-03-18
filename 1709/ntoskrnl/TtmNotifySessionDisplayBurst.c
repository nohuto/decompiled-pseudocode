/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x14070F608
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x14070E590 (TtmiResetTerminalTimeouts.c)
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
    TtmiLogError("TtmNotifySessionDisplayBurst", 2246, v1, v1);
  }
  return v2;
}
