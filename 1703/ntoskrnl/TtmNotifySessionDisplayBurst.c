/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1406D9278
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopNotifyConsoleDisplayBurst @ 0x1406D48F0 (PopNotifyConsoleDisplayBurst.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1406D8208 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = TtmpAcquireSessionById(&v6, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    TtmiResetTerminalTimeouts(v6, *(_QWORD *)(v6 + 32), a2, 1111778643, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 2246, v3, v3);
  }
  return v4;
}
