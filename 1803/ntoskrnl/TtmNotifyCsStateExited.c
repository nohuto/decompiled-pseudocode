/*
 * XREFs of TtmNotifyCsStateExited @ 0x140772D70
 * Callers:
 *     PopNotifyCsStateExited @ 0x140764EE0 (PopNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 *     TtmiScheduleSessionWorker @ 0x140773264 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x140776AAC (TtmiLogSessionCsExitComplete.c)
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
    TtmiLogError("TtmNotifyCsStateExited", 2127, v2, v2);
  }
}
