/*
 * XREFs of ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x18003ADF0
 * Callers:
 *     ?RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003AD60 (-RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     MemUtilEmptyProcess @ 0x18004C1B8 (MemUtilEmptyProcess.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcessAndLog(struct _RM_ACTIVITY_HOST *a1, HANDLE ProcessHandle, int a3, int a4)
{
  unsigned int v7; // ebx
  UCHAR v8; // dl
  int v9; // r10d
  int v10; // r10d
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  WCHAR pwsz[268]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+258h] [rbp+158h]
  char v20; // [rsp+260h] [rbp+160h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF
  int *v22; // [rsp+290h] [rbp+190h]
  int v23; // [rsp+298h] [rbp+198h]
  int v24; // [rsp+29Ch] [rbp+19Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2A0h] [rbp+1A0h] BYREF
  int *v26; // [rsp+2B0h] [rbp+1B0h]
  int v27; // [rsp+2B8h] [rbp+1B8h]
  int v28; // [rsp+2BCh] [rbp+1BCh]
  char *v29; // [rsp+2C0h] [rbp+1C0h]
  int v30; // [rsp+2C8h] [rbp+1C8h]
  int v31; // [rsp+2CCh] [rbp+1CCh]
  int *v32; // [rsp+2D0h] [rbp+1D0h]
  int v33; // [rsp+2D8h] [rbp+1D8h]
  int v34; // [rsp+2DCh] [rbp+1DCh]
  int *v35; // [rsp+2E0h] [rbp+1E0h]
  int v36; // [rsp+2E8h] [rbp+1E8h]
  int v37; // [rsp+2ECh] [rbp+1ECh]

  v7 = MemUtilEmptyProcess(ProcessHandle);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v8, 0LL) )
  {
    RmpAcquireGlobalLock();
    RmpActivityHostGetTracingId(a1, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
    RmpReleaseGlobalLock();
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
      {
        v24 = 0;
        v22 = (int *)&v14;
        v14 = v7;
        v23 = v9;
        TlgCreateWsz(&pDesc, pwsz);
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v26 = &v15;
        v29 = &v20;
        v32 = &v16;
        v35 = &v17;
        v15 = v19;
        v27 = v10;
        v30 = v10 + 4;
        v16 = a3;
        v33 = v10;
        v17 = a4;
        v36 = v10;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005879D, v11, v12, v10 + 4, &pData);
      }
    }
  }
  return v7;
}
