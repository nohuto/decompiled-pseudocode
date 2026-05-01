/*
 * XREFs of ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180059D28
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004E354 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z @ 0x180001424 (-RmpQoSGetEarliestHostInfo@@YAPEAU_RM_ACTIVITY_ENFORCEMENT_INFO@@PEAU_RM_QOS_CONTEXT@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18005CEE0 (-RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005EF30 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpEnforcerContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  struct _RM_GPU_MONITOR *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _RM_ACTIVITY_ENFORCEMENT_INFO *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 72);
  RmpAcquireGlobalLock();
  if ( (*((_BYTE *)v2 + 44) & 1) != 0 )
    RmpGpuMonitorDisable(v2);
  RmpReleaseGlobalLock();
  if ( *(_QWORD *)v2 )
  {
    TpSetTimer(*(_QWORD *)v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)v2, 1LL);
  }
  v3 = *((_QWORD *)a1 + 19);
  if ( v3 )
    TpWaitForTimer(v3, 1LL);
  v4 = *((_QWORD *)a1 + 23);
  if ( v4 )
    TpWaitForTimer(v4, 1LL);
  RmpAcquireGlobalLock();
  while ( 1 )
  {
    v5 = RmpQoSGetEarliestHostInfo((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 200));
    if ( !v5 )
      break;
    RmpQoSDisableForHostOnTimerExpiry(
      (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 200),
      (struct _RM_ACTIVITY_ENFORCEMENT_INFO *)((char *)v5 - 1064));
  }
  RmpReleaseGlobalLock();
  v6 = *((_QWORD *)a1 + 27);
  if ( v6 )
  {
    TpSetTimer(v6, 0LL, 0LL, 0LL);
    TpWaitForTimer(*((_QWORD *)a1 + 27), 1LL);
  }
  v7 = *((_QWORD *)a1 + 30);
  if ( v7 )
  {
    TpWaitForWork(v7, 0LL);
    TpReleaseWork(*((_QWORD *)a1 + 30));
  }
}
