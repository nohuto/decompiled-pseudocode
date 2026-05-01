/*
 * XREFs of ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B31C
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x180031264 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18003DDD8 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpEnforcerContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx

  if ( *((_QWORD *)a1 + 6) )
  {
    PostQueuedCompletionStatus(*((HANDLE *)a1 + 5), 0, 0LL, 0LL);
    WaitForSingleObject(*((HANDLE *)a1 + 6), 0xBB8u);
  }
  v2 = (_QWORD *)((char *)a1 + 88);
  RmpAcquireGlobalLock();
  if ( (*((_BYTE *)a1 + 132) & 1) != 0 )
    RmpGpuMonitorDisable((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 88));
  RmpReleaseGlobalLock();
  if ( *v2 )
  {
    TpSetTimer(*v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*v2, 1LL);
  }
  v3 = *((_QWORD *)a1 + 20);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)a1 + 20), 1LL);
  }
  RmpQoSRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 176));
}
