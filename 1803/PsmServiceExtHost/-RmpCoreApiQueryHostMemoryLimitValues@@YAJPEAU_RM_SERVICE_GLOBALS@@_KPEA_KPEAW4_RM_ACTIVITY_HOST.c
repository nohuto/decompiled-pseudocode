/*
 * XREFs of ?RmpCoreApiQueryHostMemoryLimitValues@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_KPEAW4_RM_ACTIVITY_HOST_CALLBACK_TYPE@@@Z @ 0x1800519FC
 * Callers:
 *     RmCoreRpcSrvQueryHostMemoryLimitValues @ 0x180051EB0 (RmCoreRpcSrvQueryHostMemoryLimitValues.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010080 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCoreApiQueryHostMemoryLimitValues(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        enum _RM_ACTIVITY_HOST_CALLBACK_TYPE *a4)
{
  int v4; // ebx
  struct _RM_SERVICE_GLOBALS *v7; // rdi
  int v8; // eax
  char *v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  unsigned int v13; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 *v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  PVOID *p_P; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]

  P = 0LL;
  v4 = 6;
  v16 = 0LL;
  v7 = RmSvcGlobals;
  v15 = a2;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 3uLL) )
  {
    v20 = 0;
    v18 = &v15;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D6C7, 0LL, 0LL, 3u, &pData);
  }
  RmpAcquireGlobalLock();
  v8 = RmpActivityHostFindByHostId(v7, v15, (struct _RM_ACTIVITY_HOST **)&P);
  v9 = (char *)P;
  v13 = v8;
  if ( v8 >= 0 )
  {
    v10 = *((_QWORD *)P + 171);
    v16 = v10;
    v11 = *((_DWORD *)P + 344);
    switch ( v11 )
    {
      case 4:
        v4 = 5;
LABEL_13:
        v13 = 0;
        *a3 = v10;
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
    v13 = -1073741823;
  }
LABEL_15:
  if ( v9 )
    RmpObjectRelease(v9);
  RmpReleaseGlobalLock();
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 3uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v18 = (unsigned __int64 *)&v13;
    v21 = &v16;
    p_P = &P;
    v19 = 4;
    v22 = 8;
    LODWORD(P) = v4;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007D60B, 0LL, 0LL, 5u, &pData);
  }
  return v13;
}
