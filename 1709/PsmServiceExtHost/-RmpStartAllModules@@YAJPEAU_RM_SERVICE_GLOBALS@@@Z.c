/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800217D4
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180021774 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800218B4 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021944 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021A60 (-RmpTelemetryContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021ABC (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v2; // rbx
  int v3; // ebx
  HANDLE Thread; // rax

  v2 = (char *)a1 + 680;
  RmpAcquireGlobalLock();
  v3 = RtlSubscribeWnfStateChangeNotification(
         v2 + 424,
         WNF_AUDC_CPUSET_ID_SYSTEM,
         0LL,
         RmpCpuSetManagerAudioCpuWnfCallback,
         v2,
         0LL,
         0,
         0);
  RmpReleaseGlobalLock();
  if ( v3 >= 0 )
  {
    Thread = CreateThread(0LL, 0LL, RmpEnforcerJobCompletionThread, (char *)a1 + 40, 0, 0LL);
    *((_QWORD *)a1 + 6) = Thread;
    if ( Thread )
    {
      v3 = RmpSystemNotificationContextStart(a1);
      if ( v3 >= 0 )
      {
        v3 = RmpTelemetryContextStart(a1);
        if ( v3 >= 0 )
        {
          v3 = RmpRpExtStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 664), a1);
          if ( v3 >= 0 )
          {
            v3 = HampManagerStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1288));
            if ( v3 >= 0 )
              return 0;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v3;
}
