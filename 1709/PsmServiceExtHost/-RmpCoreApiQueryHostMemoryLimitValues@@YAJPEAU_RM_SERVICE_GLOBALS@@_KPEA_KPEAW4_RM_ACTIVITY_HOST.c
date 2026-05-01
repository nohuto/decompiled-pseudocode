/*
 * XREFs of ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x18003470C
 * Callers:
 *     RmCoreRpcSrvQueryHostMemoryLimitValues @ 0x1800349F0 (RmCoreRpcSrvQueryHostMemoryLimitValues.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCoreApiQueryHostMemoryLimitValues(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        enum _RM_ACTIVITY_HOST_CALLBACK_TYPE *a4)
{
  int v4; // ebx
  struct _RM_SERVICE_GLOBALS *v7; // rdi
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // eax
  char *v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 *v22; // [rsp+70h] [rbp-9h]
  int v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 *v25; // [rsp+80h] [rbp+7h]
  int v26; // [rsp+88h] [rbp+Fh]
  int v27; // [rsp+8Ch] [rbp+13h]
  PVOID *p_P; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]
  int v30; // [rsp+9Ch] [rbp+23h]

  P = 0LL;
  v4 = 6;
  v20 = 0LL;
  v7 = RmSvcGlobals;
  v19 = a2;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 3uLL) )
  {
    v24 = 0;
    v22 = &v19;
    v23 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800572AA, v8, v9, 3u, &pData);
  }
  RmpAcquireGlobalLock();
  v10 = RmpActivityHostFindByHostId(v7, v19, (struct _RM_ACTIVITY_HOST **)&P);
  v11 = (char *)P;
  v17 = v10;
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)P + 153);
    v20 = v12;
    v13 = *((_DWORD *)P + 308);
    switch ( v13 )
    {
      case 4:
        v4 = 5;
LABEL_13:
        v17 = 0;
        *a3 = v12;
        *(_DWORD *)a4 = v4;
        goto LABEL_15;
      case 3:
        v4 = 4;
        goto LABEL_13;
      case 2:
        v4 = 3;
        goto LABEL_13;
      case 1:
        v4 = 2;
        goto LABEL_13;
    }
    v17 = -1073741823;
  }
LABEL_15:
  if ( v11 )
    RmpObjectRelease(v11);
  RmpReleaseGlobalLock();
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 3uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = (unsigned __int64 *)&v17;
    v25 = &v20;
    p_P = &P;
    v23 = 4;
    v26 = 8;
    LODWORD(P) = v4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057244, v14, v15, 5u, &pData);
  }
  return v17;
}
