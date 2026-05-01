/*
 * XREFs of ?RmpSystemFreezeHostJob@@YAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180040E40
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B684 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 * Callees:
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemFreezeHostJob(struct _RM_ACTIVITY_HOST *a1, UCHAR a2)
{
  int v3; // ecx
  int v4; // r10d
  void *v5; // rcx
  unsigned int v6; // r10d
  int v7; // r10d
  int v8; // r10d
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  UCHAR v13; // [rsp+30h] [rbp-D0h] BYREF
  NTSTATUS v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD JobInformation[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pwsz[272]; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+270h] [rbp+170h] BYREF
  int v19; // [rsp+278h] [rbp+178h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+280h] [rbp+180h] BYREF
  NTSTATUS *v21; // [rsp+2A0h] [rbp+1A0h]
  int v22; // [rsp+2A8h] [rbp+1A8h]
  int v23; // [rsp+2ACh] [rbp+1ACh]
  UCHAR *v24; // [rsp+2B0h] [rbp+1B0h]
  int v25; // [rsp+2B8h] [rbp+1B8h]
  int v26; // [rsp+2BCh] [rbp+1BCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp+1C0h] BYREF
  char *v28; // [rsp+2D0h] [rbp+1D0h]
  int v29; // [rsp+2D8h] [rbp+1D8h]
  int v30; // [rsp+2DCh] [rbp+1DCh]
  int *v31; // [rsp+2E0h] [rbp+1E0h]
  int v32; // [rsp+2E8h] [rbp+1E8h]
  int v33; // [rsp+2ECh] [rbp+1ECh]

  v13 = a2;
  v3 = *((_DWORD *)a1 + 14);
  if ( !v3 )
  {
    (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, UCHAR))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) + 144LL))(
      (char *)a1 + 552,
      *((unsigned int *)a1 + 155),
      (char *)a1 + 88,
      *((_QWORD *)a1 + 3),
      a2);
    goto LABEL_8;
  }
  if ( v3 != 1 )
  {
    v4 = -1073741811;
LABEL_9:
    v14 = v4;
    goto LABEL_10;
  }
  if ( ((*((_DWORD *)a1 + 253) & 0x40) != 0) == a2
    || (v5 = (void *)*((_QWORD *)a1 + 117),
        JobInformation[0] = 1LL,
        BYTE4(JobInformation[0]) = a2,
        JobInformation[1] = 0LL,
        v14 = NtSetInformationJobObject(v5, (JOBOBJECTINFOCLASS)18, JobInformation, 0x10u),
        v14 >= 0) )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
LABEL_10:
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, a2, 0LL) )
  {
    RmpAcquireGlobalLock();
    RmpActivityHostGetTracingId(a1, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v23 = 0;
      v26 = 0;
      v21 = &v14;
      v22 = v7;
      v24 = &v13;
      v25 = 1;
      TlgCreateWsz(&pDesc, pwsz);
      v30 = 0;
      v33 = 0;
      v15 = v19;
      v31 = &v15;
      v28 = &v18;
      v29 = 8;
      v32 = v8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A57A, v9, v10, 7u, &pData);
    }
    RmpReleaseGlobalLock();
    return (unsigned int)v14;
  }
  return v6;
}
