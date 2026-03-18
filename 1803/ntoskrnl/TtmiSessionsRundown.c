/*
 * XREFs of TtmiSessionsRundown @ 0x140773298
 * Callers:
 *     TtmpTraceLoggingCallback @ 0x14048BF60 (TtmpTraceLoggingCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmiDevicesRundown @ 0x140770A80 (TtmiDevicesRundown.c)
 *     TtmiTerminalsRundown @ 0x1407720EC (TtmiTerminalsRundown.c)
 *     TtmiAcquireCurrentSession @ 0x140773184 (TtmiAcquireCurrentSession.c)
 *     TtmiLogSessionRundown @ 0x140777194 (TtmiLogSessionRundown.c)
 */

void TtmiSessionsRundown()
{
  int v0; // eax
  int *v1; // rbx
  _DWORD v2[12]; // [rsp+20h] [rbp-30h] BYREF
  int *v3; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = TtmiAcquireCurrentSession(&v3);
  v1 = v3;
  if ( v0 >= 0 )
  {
    memset(v2, 0, 0x28uLL);
    v2[0] = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[19];
    v2[4] = v3[29];
    v2[5] = v3[3];
    v2[6] = v3[4];
    v2[7] = v3[5];
    v2[8] = v3[48];
    v2[9] = v3[49];
    TtmiLogSessionRundown(v2);
    TtmiTerminalsRundown((__int64)v1);
    TtmiDevicesRundown(v1);
  }
  else
  {
    TtmiLogError("TtmiSessionsRundown", 2816, v0, -1);
  }
  if ( v1 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
