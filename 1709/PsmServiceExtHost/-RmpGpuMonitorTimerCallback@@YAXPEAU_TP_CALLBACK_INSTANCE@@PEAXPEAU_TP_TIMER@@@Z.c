/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003E240
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180005144 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800055A4 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DBA8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x18003E0F8 (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  char *v7; // rbx
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v9; // rax
  struct _RM_ACTIVITY_HOST *Next; // rdi
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  DWORD v18; // ebx
  _QWORD v19[2]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v20[80]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v4, &unk_180059906, v5, v6, 2u, &pData);
  v7 = a2 + 88;
  RmpAcquireGlobalLock();
  if ( (a2[132] & 1) != 0 )
  {
    IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 88));
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(a2 + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
      if ( !Next )
        break;
      v19[1] = 2LL;
      v19[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
      while ( 1 )
      {
        v9 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v19);
        if ( !v9 )
          break;
        if ( (*((_BYTE *)v9 + 1500) & 8) != 0 )
        {
          RmpActivityHostCheckAndUpdateGpuInterference(Next, IsGpuBusy);
          break;
        }
      }
      RmpObjectRelease((char *)Next);
    }
    RtlReleaseSRWLockShared(pData.Ptr + 16);
  }
  v11 = *((_DWORD *)v7 + 11);
  if ( (v11 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v7, v7 + 8, 0LL, *((unsigned int *)v7 + 10));
  }
  else
  {
    *((_DWORD *)v7 + 11) = v11 & 0xFFFFFFFD;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite(v12, &unk_180059934, v13, v14, 2u, &pData);
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v15, &unk_180059959, v16, v17, 2u, &pData);
  v18 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
}
