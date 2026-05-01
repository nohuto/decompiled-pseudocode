/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180016A30
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800047CC (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000F1DC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015900 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180016E7C (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockTrackerMarkReleased @ 0x180017F3C (CempLockTrackerMarkReleased.c)
 *     CempLockTrackerMarkAcquired @ 0x180017F7C (CempLockTrackerMarkAcquired.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017FF8 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A79C (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180036268 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  DWORD v10; // ebx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // edx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v19; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[80]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v22; // [rsp+D0h] [rbp-30h]
  int v23; // [rsp+D8h] [rbp-28h]
  int v24; // [rsp+DCh] [rbp-24h]
  __int64 *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+100h] [rbp+0h] BYREF
  void *v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  int v32; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v33; // [rsp+120h] [rbp+20h]
  __int64 v34; // [rsp+128h] [rbp+28h]
  int *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  __int64 *v38; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+168h] [rbp+68h]
  int *v40; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+178h] [rbp+78h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  v4 = *((_QWORD *)a2 + 5);
  v17 = *((_QWORD *)a2 + 3);
  if ( hProvider > 4u && (qword_1800670D0 & 0x11) != 0 && (qword_1800670D8 & 0x11) == qword_1800670D8 )
  {
    v26 = 8LL;
    v25 = &v17;
    v14 = *((_DWORD *)a2 + 253);
    v27 = &v14;
    v28 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180058721 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 17LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v22 = &unk_18005872C;
    UserData.Reserved = 2;
    v23 = 45;
    v24 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  RmpAcquireGlobalLock();
  CempLockTrackerMarkAcquired(v6, v5, 1LL);
  RtlAcquireSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 18) = GetCurrentThreadId();
  *((_DWORD *)a2 + 172) = GetCurrentThreadId();
  while ( *((int *)a2 + 5) >= 0 )
  {
    if ( !HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 1u) )
    {
      *((_DWORD *)a2 + 253) &= ~*((_DWORD *)a2 + 255);
      *((_DWORD *)a2 + 255) = 0;
      v9 = RmpPolicyComputeDesiredState((__int64)a2);
      LOBYTE(v8) = (a2[1012] & 8) == 0;
      if ( ((unsigned __int8)v8 & ((v9 & 8) != 0)) != 0
        && (a2[1008] & 0x20) == 0
        && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
      {
        *((_DWORD *)a2 + 252) |= 0x20u;
      }
      if ( *((_DWORD *)a2 + 253) == v9 )
        break;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v39 = 8LL;
        v38 = &v17;
        v40 = &v15;
        v15 = v9;
        v41 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800586DE, v11, v12, 4u, &pData);
      }
      v13 = *((_DWORD *)a2 + 253);
      if ( (v9 & v13) == v9 )
        RmpEnforcementUnoptimizeHost(a2, v4 + 40, v13 & (unsigned int)~v9);
      else
        RmpEnforcementOptimizeHost(a2, v9 & (unsigned int)~v13);
      RtlWakeAllConditionVariable(a2 + 992);
    }
  }
  *((_DWORD *)a2 + 172) = 0;
  CempLockTrackerMarkReleased(v8, v7, 1LL);
  *((_DWORD *)a2 + 18) = 0;
  RtlReleaseSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 332) = 0;
  if ( *((_QWORD *)a2 + 160) )
    RmpActivityHostRemoveFromRemediationGroup(a2, 1u);
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(v4 + 1896));
  if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
    RmpActivityHostDelete(a2);
  if ( hProvider > 4u && (qword_1800670D0 & 0x19) != 0 && (qword_1800670D8 & 0x19) == qword_1800670D8 )
  {
    v34 = 8LL;
    v33 = &v17;
    v16 = *((_DWORD *)a2 + 253);
    v35 = &v16;
    v36 = 4LL;
    *(_DWORD *)&v19.Level = 516;
    v29.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v19.Id = ((unsigned int)&unk_180058A42 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v19.Keyword = 25LL;
    v29.Size = *(unsigned __int16 *)off_1800670C8;
    v30 = &unk_180058A4D;
    v29.Reserved = 2;
    v31 = 45;
    v32 = 1;
    EventWriteTransfer(RegHandle, &v19, 0LL, 0LL, 4u, &v29);
  }
  *((_DWORD *)a2 + 173) &= ~0x400u;
  RmpReleaseGlobalLock();
  RtlWakeAllConditionVariable(a2 + 992);
  RmpObjectRelease(a2);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
}
