/*
 * XREFs of TtmSessionMonitorControl @ 0x14070F8B8
 * Callers:
 *     PopControlMonitor @ 0x1406FF5E0 (PopControlMonitor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiTerminalMonitorControl @ 0x14070E880 (TtmiTerminalMonitorControl.c)
 *     TtmiLogSessionMonitorControl @ 0x140712D58 (TtmiLogSessionMonitorControl.c)
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
    v9 = 2508;
  }
  else
  {
    v9 = 2496;
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
