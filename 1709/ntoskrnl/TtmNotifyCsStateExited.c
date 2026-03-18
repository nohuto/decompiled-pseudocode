/*
 * XREFs of TtmNotifyCsStateExited @ 0x14070F594
 * Callers:
 *     PopNotifyCsStateExited @ 0x1406FF660 (PopNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x1407129C4 (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyCsStateExited(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v3 = v4;
    *(_DWORD *)(v4 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v3, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    TtmiLogError("TtmNotifyCsStateExited", 2126, v2, v2);
  }
}
