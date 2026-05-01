/*
 * XREFs of ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003DC70
 * Callers:
 *     <none>
 * Callees:
 *     CemRcTableGetNext @ 0x180005FE4 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x1800060D0 (CemRcTableGetFirst.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180029FD0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002A038 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z @ 0x180068534 (-HampActShouldBeRevoked@@YAKPEAU_HAM_ACTIVITY@@PEAK@Z.c)
 */

__int64 __fastcall HampManagerSystemStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _HOST_ACTIVITY_MANAGER *a4,
        unsigned int *a5)
{
  __int64 v6; // rdx
  __int64 i; // rax
  __int64 v8; // rbx
  DWORD v9; // ebx
  unsigned int v10; // eax
  unsigned int v12[4]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-48h] BYREF
  unsigned int *v15; // [rsp+F0h] [rbp-28h]
  int v16; // [rsp+F8h] [rbp-20h]
  int v17; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800825A0, 0LL, 0LL, 2u, &pData);
  HampManagerAcquireLockExclusive(a4);
  *((_DWORD *)a4 + 82) = *a5;
  HampManagerReleaseLockExclusive(a4, v6);
  for ( i = CemRcTableGetFirst((__int64)a4 + 200); ; i = CemRcTableGetNext((struct _CEM_RC_OBJECT *)v8) )
  {
    v8 = i;
    if ( !i )
      break;
    HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(i + 80), 0);
    if ( HampActShouldBeRevoked((struct _HAM_ACTIVITY *)v8, v12) )
      HampActRequestStop(v8, 2LL, 3LL, 6400LL, v12[0], 0LL);
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(v8 + 80));
  }
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v10 = *a5;
    v17 = 0;
    v12[0] = v10;
    v15 = v12;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082452, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
