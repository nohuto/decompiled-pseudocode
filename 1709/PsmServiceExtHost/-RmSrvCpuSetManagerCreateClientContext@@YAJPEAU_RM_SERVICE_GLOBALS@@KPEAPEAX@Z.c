/*
 * XREFs of ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180032DB4
 * Callers:
 *     ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x1800308B0 (-RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800188C0 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180023560 (-RmpCpuSetManagerCreateClientContext@@YAJPEAU_RM_CPU_SET_MANAGER@@KPEAPEAU_RM_CPU_SET_CLIENT_CON.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z @ 0x180037D04 (-RmpCpuSetManagerReleaseClientContext@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmSrvCpuSetManagerCreateClientContext(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2,
        struct _RM_CPU_SET_CLIENT_CONTEXT **a3)
{
  const GUID *v6; // r8
  const GUID *v7; // r9
  struct _RM_CPU_SET_CLIENT_CONTEXT *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  DWORD v11; // ebx
  int v13; // [rsp+30h] [rbp-79h] BYREF
  struct _RM_CPU_SET_CLIENT_CONTEXT *v14; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v15[4]; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v16[80]; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-9h] BYREF
  int *v18; // [rsp+C0h] [rbp+17h]
  int v19; // [rsp+C8h] [rbp+1Fh]
  int v20; // [rsp+CCh] [rbp+23h]
  struct _RM_CPU_SET_CLIENT_CONTEXT **v21; // [rsp+D0h] [rbp+27h]
  int v22; // [rsp+D8h] [rbp+2Fh]
  int v23; // [rsp+DCh] [rbp+33h]

  RmpUtilCheckStartLockTracking(v15, (struct _CEM_LOCK_TRACKER *)v16);
  v14 = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180056CD0, v6, v7, 2u, &pData);
  RmpAcquireGlobalLock();
  v13 = RmpCpuSetManagerCreateClientContext((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 680), a2, &v14);
  if ( v13 < 0 )
  {
    v8 = v14;
  }
  else
  {
    v8 = 0LL;
    v13 = 0;
    *a3 = v14;
  }
  if ( v8 )
    RmpCpuSetManagerReleaseClientContext(v8);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v20 = 0;
    v23 = 0;
    v18 = &v13;
    v21 = &v14;
    v19 = 4;
    LODWORD(v14) = a2;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800566F5, v9, v10, 4u, &pData);
  }
  if ( v15[0] )
  {
    v11 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v11, 0LL);
    }
  }
  return (unsigned int)v13;
}
