/*
 * XREFs of ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035230
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800350A4 (-RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_RS_ENFORCEMENT_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  int v4; // esi
  const GUID *v5; // r8
  const GUID *v6; // r9
  bool v7; // zf
  __int64 v8; // rdi
  char *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  DWORD v12; // ebx
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h]
  _BYTE v19[80]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v21; // [rsp+E8h] [rbp-20h]
  int v22; // [rsp+F0h] [rbp-18h]
  int v23; // [rsp+F4h] [rbp-14h]
  __int64 *v24; // [rsp+F8h] [rbp-10h]
  int v25; // [rsp+100h] [rbp-8h]
  int v26; // [rsp+104h] [rbp-4h]
  __int64 *v27; // [rsp+108h] [rbp+0h]
  int v28; // [rsp+110h] [rbp+8h]
  int v29; // [rsp+114h] [rbp+Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v4 = 1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800575F7, v5, v6, 2u, &pData);
  v14 = 0LL;
  RmpAcquireGlobalLock();
  v7 = *((_QWORD *)a2 + 6) == 0LL;
  v8 = *(_QWORD *)a2;
  v16 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  if ( v7 )
  {
    v4 = 0;
    v9 = (char *)v8;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(v8 + 40) + 12LL) )
    {
      RtlQueryUnbiasedInterruptTime(&v15);
      if ( v15 < *((_QWORD *)a2 + 6) )
      {
        TpSetTimerEx(*((_QWORD *)a2 + 5), 0LL, 0LL, 0LL);
        RmpRsEnforcedThresholdsArmTimer(a2);
        goto LABEL_15;
      }
      *((_QWORD *)a2 + 6) = 0LL;
      *(_QWORD *)(v8 + 144) = 0LL;
      v4 = 2;
      RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v8, (struct _RM_COMMIT_THRESHOLDS *)v17);
      v14 = v18;
      RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*(_QWORD *)(v8 + 40) + 1440LL));
    }
    else
    {
      v4 = 0;
      *((_QWORD *)a2 + 6) = 0LL;
      *(_QWORD *)(v8 + 144) = 0LL;
    }
    v9 = *(char **)a2;
  }
  RmpObjectRelease(v9);
  if ( *((_QWORD *)a2 + 5) )
    TpReleaseTimer();
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
LABEL_15:
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v21 = &v16;
    v24 = &v13;
    v27 = &v14;
    v22 = 8;
    LODWORD(v13) = v4;
    v25 = 4;
    v28 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057426, v10, v11, 5u, &v20);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
}
