/*
 * XREFs of ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0064C88
 * Callers:
 *     CleanupPowerRequestList @ 0x1C0063C90 (CleanupPowerRequestList.c)
 *     xxxUserPowerCalloutWorker @ 0x1C0064B40 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     Template_xq @ 0x1C00DE128 (Template_xq.c)
 */

struct tagPOWERREQUEST *UnqueuePowerRequest(void)
{
  __int64 v0; // rbx
  __int64 v1; // r8
  _QWORD *v3; // rax

  v0 = 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
  if ( gPowerRequestList.Flink != &gPowerRequestList )
  {
    v0 = qword_1C018DE58;
    v3 = *(_QWORD **)(qword_1C018DE58 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C018DE58 != &gPowerRequestList || *v3 != qword_1C018DE58 )
      __fastfail(3u);
    qword_1C018DE58 = *(_QWORD *)(qword_1C018DE58 + 8);
    *v3 = &gPowerRequestList;
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      Template_xq(&gPowerRequestList, &RemovePowerRequestFromQueue, v1, v0, -1);
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  return (struct tagPOWERREQUEST *)v0;
}
