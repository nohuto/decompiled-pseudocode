/*
 * XREFs of TtmiSessionsRundown @ 0x14070FA28
 * Callers:
 *     TtmpTraceLoggingCallback @ 0x1404F1980 (TtmpTraceLoggingCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     memset @ 0x140192F40 (memset.c)
 *     TtmiAcquireCurrentSession @ 0x1405EA044 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiDevicesRundown @ 0x14070D320 (TtmiDevicesRundown.c)
 *     TtmiTerminalsRundown @ 0x14070E990 (TtmiTerminalsRundown.c)
 *     TtmiLogSessionRundown @ 0x1407130AC (TtmiLogSessionRundown.c)
 */

void TtmiSessionsRundown()
{
  int v0; // eax
  int *v1; // rbx
  _DWORD v2[12]; // [rsp+20h] [rbp-30h] BYREF
  int *v3; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = TtmiAcquireCurrentSession((__int64)&v3);
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
    v2[8] = v3[46];
    v2[9] = v3[47];
    TtmiLogSessionRundown(v2);
    TtmiTerminalsRundown((__int64)v1);
    TtmiDevicesRundown(v1);
  }
  else
  {
    TtmiLogError("TtmiSessionsRundown", 2782, v0, -1);
  }
  if ( v1 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
