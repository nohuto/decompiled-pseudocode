/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x140772CD8
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     TtmiResetTerminalTimeouts @ 0x140771D4C (TtmiResetTerminalTimeouts.c)
 *     TtmiLogConsoleUserPresent @ 0x1407751F8 (TtmiLogConsoleUserPresent.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 2296, v4, -1);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
