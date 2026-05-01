/*
 * XREFs of ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DFE4
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18003DF44 (-RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z.c)
 *     ?RmpActivityHostQueryGpuInterferenceCounter@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180040A50 (-RmpActivityHostQueryGpuInterferenceCounter@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 */

void __fastcall RmpGpuMonitorEnableForHost(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  int v3; // eax
  unsigned __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v8; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  unsigned __int64 *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  v1 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v1 + 1892) & 2) == 0 )
  {
    v3 = RmpActivityHostQueryGpuInterferenceCounter(a1, &v9);
    v4 = v9;
    if ( v3 < 0 )
      v4 = 0LL;
    *((_QWORD *)a1 + 122) = v4;
    *((_BYTE *)a1 + 924) |= 2u;
    v9 = v4;
    ++*(_DWORD *)(v1 + 120);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v10 = *((_QWORD *)a1 + 3);
      v12 = &v10;
      v14 = &v9;
      v16 = &v8;
      v13 = 8LL;
      v15 = 8LL;
      v8 = (int)v7;
      v17 = 4LL;
      TlgWrite(v5, &unk_180059723, v6, v7, 5u, &pData);
    }
    if ( (*(_BYTE *)(v1 + 132) & 1) == 0 )
      RmpGpuMonitorEnable((struct _RM_GPU_MONITOR *)(v1 + 88));
  }
}
