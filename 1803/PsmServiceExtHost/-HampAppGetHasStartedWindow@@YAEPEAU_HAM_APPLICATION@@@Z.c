/*
 * XREFs of ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180004180
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180003BC8 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180004214 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800093E8 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180009458 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003319C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

char __fastcall HampAppGetHasStartedWindow(struct _HAM_APPLICATION *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v4; // rbx
  struct _HAM_ACTIVITY *j; // rax
  __int64 v6; // rdx
  char v7; // di

  for ( i = HampAppGetFirstHost(a1); ; i = HampAppGetNextHost(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampHostAcquireLockSharedEx(i, 0);
    for ( j = HampHostGetFirstActivity(v4); j; j = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v3) )
    {
      LOBYTE(v6) = 2;
      if ( (unsigned int)HampActIsStartedOrReachedPendState(j, v6) && *(char *)(v3 + 112) < 0 )
      {
        v7 = 1;
        goto LABEL_8;
      }
    }
    CempLockTrackerMarkReleased(0LL, v6, 1LL);
    RtlReleaseSRWLockShared(v4);
  }
  v7 = 0;
LABEL_8:
  if ( v4 )
  {
    CempLockTrackerMarkReleased(v3, v2, 1LL);
    RtlReleaseSRWLockShared(v4);
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v4 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v4 - 64));
    RmpReleaseGlobalLock();
  }
  return v7;
}
