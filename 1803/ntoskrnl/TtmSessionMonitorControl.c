/*
 * XREFs of TtmSessionMonitorControl @ 0x1407730CC
 * Callers:
 *     PopControlMonitor @ 0x1405EEFF0 (PopControlMonitor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     TtmiTerminalMonitorControl @ 0x140771FE0 (TtmiTerminalMonitorControl.c)
 *     TtmiLogSessionMonitorControl @ 0x140776E40 (TtmiLogSessionMonitorControl.c)
 */

__int64 __fastcall TtmSessionMonitorControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = TtmpAcquireSessionById(&v11, a1);
  v7 = v11;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = TtmiTerminalMonitorControl(v11, *(unsigned int **)(v11 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 2532;
  }
  else
  {
    v9 = 2520;
  }
  TtmiLogError("TtmSessionMonitorControl", v9, v6, v6);
LABEL_6:
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, v8);
  return v8;
}
