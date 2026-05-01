/*
 * XREFs of ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180063E54
 * Callers:
 *     PsmHamTerminateHost @ 0x18004CD50 (PsmHamTerminateHost.c)
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateHostForBi(struct _HOST_ACTIVITY_MANAGER *a1, unsigned __int64 a2, unsigned int a3)
{
  const WCHAR *v5; // rsi
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  int v8; // r10d
  DWORD v10; // ebx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  char *v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v15 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082004, 0LL, 0LL, 2u, &pData);
  v5 = 0LL;
  v14 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  Host = RmHamFindHost(a1, v15, &v14);
  v7 = v14;
  v13 = Host;
  if ( Host >= 0 )
  {
    v5 = (const WCHAR *)((char *)v14 + 24);
    HampHostQueueTerminate((__int64)v14, 3u, a3, 0LL, 0);
    v13 = 0;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v20 = 0;
    v18 = &v13;
    v19 = 4;
    TlgCreateWsz(&pDesc, v5);
    v24 = 0;
    v27 = 0;
    v25 = &v12;
    v22 = &v15;
    v23 = v8;
    v12 = a3;
    v26 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008122E, 0LL, 0LL, 6u, &v17);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return v13;
}
