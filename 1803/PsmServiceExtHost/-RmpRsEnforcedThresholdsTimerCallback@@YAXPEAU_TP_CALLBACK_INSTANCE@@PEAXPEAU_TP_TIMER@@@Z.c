/*
 * XREFs of ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180053880
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053438 (-RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_RS_ENFORCEMENT_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  int v4; // esi
  bool v5; // zf
  __int64 v6; // rdi
  char *v7; // rcx
  __int64 v8; // rcx
  DWORD v9; // ebx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  char v14[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h]
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v18; // [rsp+120h] [rbp+20h]
  int v19; // [rsp+128h] [rbp+28h]
  int v20; // [rsp+12Ch] [rbp+2Ch]
  int *v21; // [rsp+130h] [rbp+30h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v24; // [rsp+140h] [rbp+40h]
  int v25; // [rsp+148h] [rbp+48h]
  int v26; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v4 = 1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D9C7, 0LL, 0LL, 2u, &pData);
  v11 = 0LL;
  RmpAcquireGlobalLock();
  v5 = *((_QWORD *)a2 + 6) == 0LL;
  v6 = *(_QWORD *)a2;
  v13 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( v5 )
  {
    v4 = 0;
    v7 = (char *)v6;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v12);
    if ( v12 < *((_QWORD *)a2 + 6) )
    {
      TpSetTimerEx(*((_QWORD *)a2 + 5), 0LL, 0LL, 0LL);
      RmpRsEnforcedThresholdsArmTimer(a2);
      goto LABEL_12;
    }
    *((_QWORD *)a2 + 6) = 0LL;
    *(_QWORD *)(v6 + 152) = 0LL;
    v4 = 2;
    RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v6, (struct _RM_COMMIT_THRESHOLDS *)v14);
    v11 = v15;
    RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*(_QWORD *)(v6 + 48) + 1440LL));
    v7 = *(char **)a2;
  }
  RmpObjectRelease(v7);
  v8 = *((_QWORD *)a2 + 5);
  if ( v8 )
    TpReleaseTimer(v8);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
LABEL_12:
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = &v13;
    v21 = &v10;
    v24 = &v11;
    v19 = 8;
    v10 = v4;
    v22 = 4;
    v25 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D9F4, 0LL, 0LL, 5u, &v17);
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
