/*
 * XREFs of ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800067A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011944 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampHostCacheTimeoutCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_TIMER *a3)
{
  int v4; // edi
  unsigned int v5; // edx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  DWORD v9; // ebx
  __int64 v10; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+F0h] [rbp-28h]
  int v14; // [rsp+F8h] [rbp-20h]
  int v15; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = 0;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082968, 0LL, 0LL, 2u, &pData);
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  if ( HampHostIsCached((struct _RM_HAM_ACTIVITY_HOST *)a2) )
    v4 = HampHostQueueTerminate(v6, 1LL, 2560LL, 0LL, 1);
  *((_QWORD *)a2 + 79) &= ~0x200000000000uLL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, v5);
  if ( v4 )
    HampDepGroupRunStateChangeWorker(*((struct _HAM_DEPENDENCY_GROUP **)a2 + 83));
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v8 = *((_QWORD *)a2 - 4);
    v15 = 0;
    v10 = v8;
    v13 = &v10;
    v14 = v7;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082B3B, 0LL, 0LL, 3u, &pData);
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
}
