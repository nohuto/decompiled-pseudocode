/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1406D9168
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x140575AAC (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1406D8208 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionById(&v7, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 2295, v4, -1);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
