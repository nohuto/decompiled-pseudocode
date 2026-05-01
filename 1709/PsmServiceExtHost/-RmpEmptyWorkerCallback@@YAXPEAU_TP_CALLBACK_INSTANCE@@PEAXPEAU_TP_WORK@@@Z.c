/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003A890
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpEmptyWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, unsigned int *a2, struct _TP_WORK *a3)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rax
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  DWORD v10; // ebx
  __int64 v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v13[80]; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp+7h] BYREF
  __int64 *v15; // [rsp+B0h] [rbp+27h]
  int v16; // [rsp+B8h] [rbp+2Fh]
  int v17; // [rsp+BCh] [rbp+33h]
  __int64 *v18; // [rsp+C0h] [rbp+37h]
  int v19; // [rsp+C8h] [rbp+3Fh]
  int v20; // [rsp+CCh] [rbp+43h]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v6 = *((_QWORD *)a2 + 3);
    v17 = 0;
    v20 = 0;
    v12 = v6;
    v15 = &v12;
    v11 = a2[276];
    v18 = &v11;
    v16 = 8;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058998, v4, v5, 4u, &pData);
  }
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    12288,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementEmptyProcess,
    (_QWORD *)a2[276]);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v9 = *((_QWORD *)a2 + 3);
    v17 = 0;
    v11 = v9;
    v15 = &v11;
    v16 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058896, v7, v8, 3u, &pData);
  }
  NtSetEvent(*((HANDLE *)a2 + 137), 0LL);
  RmpObjectRelease((char *)a2);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
}
