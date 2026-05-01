/*
 * XREFs of ?HampTerminateHostWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180044140
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004346C (-HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampTerminateHostWorker(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r8
  const GUID *v7; // r9
  DWORD v8; // ebx
  _QWORD v9[2]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v10[80]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+17h] BYREF
  _QWORD *v12; // [rsp+B0h] [rbp+37h]
  int v13; // [rsp+B8h] [rbp+3Fh]
  int v14; // [rsp+BCh] [rbp+43h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v10);
  v9[0] = *((_QWORD *)a2 - 5);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a2, 0);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
  {
    v14 = 0;
    v12 = v9;
    v13 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B444, v4, v5, 3u, &pData);
  }
  HampHostCheckTerminate(a2);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v14 = 0;
    v12 = v9;
    v13 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005B414, v6, v7, 3u, &pData);
  }
  HampHostReleaseLockExclusiveEx(a2);
  RmpReleaseGlobalLock();
  RmpObjectRelease((char *)a2 - 64);
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
}
