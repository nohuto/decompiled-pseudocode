/*
 * XREFs of RmpTracingControlCallback @ 0x1800201F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180005144 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800055A4 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180007450 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003BFCC (-LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004303C (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpTracingControlCallback(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        char *CallbackContext)
{
  __int64 v7; // rdi
  struct _RM_ACTIVITY_HOST *i; // rax
  int v9; // eax
  unsigned __int64 v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  ExecutionModel::ResourceSet *Next; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rdi
  _QWORD *j; // rbx
  ExecutionModel::ResourceSet *v17; // rcx
  DWORD v18; // ebx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[80]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR pwsz[268]; // [rsp+C0h] [rbp-40h] BYREF
  int v26; // [rsp+2D8h] [rbp+1D8h]
  char v27; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v28; // [rsp+2E8h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F0h] [rbp+1F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+310h] [rbp+210h] BYREF
  int *v31; // [rsp+320h] [rbp+220h]
  __int64 v32; // [rsp+328h] [rbp+228h]
  char *v33; // [rsp+330h] [rbp+230h]
  __int64 v34; // [rsp+338h] [rbp+238h]
  int *v35; // [rsp+340h] [rbp+240h]
  __int64 v36; // [rsp+348h] [rbp+248h]
  __int64 v37; // [rsp+350h] [rbp+250h]
  __int64 v38; // [rsp+358h] [rbp+258h]
  __int64 v39; // [rsp+360h] [rbp+260h]
  __int64 v40; // [rsp+368h] [rbp+268h]
  unsigned __int64 *v41; // [rsp+370h] [rbp+270h]
  __int64 v42; // [rsp+378h] [rbp+278h]

  if ( IsEnabled == 2 )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
    RmpAcquireGlobalLock();
    v7 = *((_QWORD *)CallbackContext + 237);
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(CallbackContext + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v23);
    for ( i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v23);
          ;
          i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v23) )
    {
      v14 = (__int64)i;
      if ( !i )
        break;
      RmpActivityHostGetTracingId(i, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
      v9 = RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)v14, 0LL, 0LL, &v21);
      v10 = v21;
      if ( v9 < 0 )
        v10 = 0LL;
      v21 = v10;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
      {
        TlgCreateWsz(&pDesc, pwsz);
        v31 = &v19;
        v33 = &v27;
        v20 = v28;
        v35 = &v20;
        v37 = v14 + 866;
        v39 = v14 + 864;
        v41 = &v21;
        v19 = v26;
        v32 = 4LL;
        v34 = 8LL;
        v36 = 4LL;
        v38 = 2LL;
        v40 = 2LL;
        v42 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055C52, v11, v12, 9u, &pData);
      }
      if ( (*(_BYTE *)(v14 + 772) & 1) != 0 )
        HamRmHostLogRundownEvents((struct _RM_HAM_ACTIVITY_HOST *)(v14 + 64));
      v22[1] = 3LL;
      v22[0] = RmpActivityHostEnumerateResourceSetGetFirst(v14, 3, 0);
      while ( 1 )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v22);
        if ( !Next )
          break;
        ExecutionModel::ResourceSet::LogRundownEvent(Next);
      }
      RmpObjectRelease((char *)v14);
    }
    RtlReleaseSRWLockShared(v23[0] + 16LL);
    v15 = (_QWORD *)(*(_QWORD *)(v7 + 104) + 160LL);
    for ( j = (_QWORD *)*v15; j != v15; j = (_QWORD *)*j )
    {
      v17 = (ExecutionModel::ResourceSet *)j[2];
      if ( !*((_QWORD *)v17 + 180) )
        ExecutionModel::ResourceSet::LogRundownEvent(v17);
    }
    RmpReleaseGlobalLock();
    v18 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v18, 0LL);
    }
  }
}
