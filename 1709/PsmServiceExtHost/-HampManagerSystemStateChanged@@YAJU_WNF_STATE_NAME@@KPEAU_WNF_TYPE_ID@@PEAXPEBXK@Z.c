/*
 * XREFs of ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180025570
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018FF8 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180019038 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcTableGetFirst @ 0x18001F640 (CemRcTableGetFirst.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampActIsAllowedInSystemState@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@@Z @ 0x180047A40 (-HampActIsAllowedInSystemState@@YAKPEAU_HAM_ACTIVITY@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z @ 0x180047D48 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@@Z.c)
 *     CemRcTableGetNext @ 0x1800495FC (CemRcTableGetNext.c)
 */

__int64 __fastcall HampManagerSystemStateChanged(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _HOST_ACTIVITY_MANAGER *a4,
        struct _SYSTEM_STATE_TRACKER_SYSTEM_STATE *a5)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 i; // rax
  __int64 v9; // rbx
  DWORD v10; // ebx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v13; // eax
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[80]; // [rsp+40h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-48h] BYREF
  int *v19; // [rsp+B0h] [rbp-28h]
  int v20; // [rsp+B8h] [rbp-20h]
  int v21; // [rsp+BCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B31A, v6, v7, 2u, &pData);
  HampManagerAcquireLockExclusive(a4);
  *((_DWORD *)a4 + 62) = *(_DWORD *)a5;
  HampManagerReleaseLockExclusive(a4);
  for ( i = CemRcTableGetFirst((__int64)a4 + 176); ; i = CemRcTableGetNext(v9) )
  {
    v9 = i;
    if ( !i )
      break;
    HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(i + 72), 0);
    if ( (unsigned __int8)(*(_BYTE *)(v9 + 500) - 2) <= 1u
      && !HampActIsAllowedInSystemState((struct _HAM_ACTIVITY *)v9, a5) )
    {
      HampActRequestStop(v15, 1LL);
    }
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(v9 + 72));
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v13 = *(_DWORD *)a5;
    v21 = 0;
    v16 = v13;
    v19 = &v16;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B2E0, v11, v12, 3u, &pData);
  }
  return 0LL;
}
