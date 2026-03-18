/*
 * XREFs of TtmSessionMonitorControl @ 0x1406D9530
 * Callers:
 *     PopControlMonitor @ 0x1406CB600 (PopControlMonitor.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiTerminalMonitorControl @ 0x1406D84F8 (TtmiTerminalMonitorControl.c)
 *     TtmiLogSessionMonitorControl @ 0x1406DC88C (TtmiLogSessionMonitorControl.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, v8);
  return v8;
}
