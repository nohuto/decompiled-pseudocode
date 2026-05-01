/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003F06C
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180009070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x1800046C8 (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001E4E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x18004173C (-RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r14
  int *v5; // rsi
  unsigned __int64 v7; // rcx
  int v8; // edx
  const GUID *v9; // r8
  const GUID *v10; // r9
  int v11; // ebx
  int v12; // edx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v20; // [rsp+70h] [rbp-39h]
  int v21; // [rsp+78h] [rbp-31h]
  int v22; // [rsp+7Ch] [rbp-2Dh]
  int *v23; // [rsp+80h] [rbp-29h]
  int v24; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+8Ch] [rbp-1Dh]
  unsigned __int64 *v26; // [rsp+90h] [rbp-19h]
  int v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+9Ch] [rbp-Dh]
  unsigned __int64 *v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+ACh] [rbp+3h]
  unsigned __int64 *v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+BCh] [rbp+13h]
  unsigned __int64 *v35; // [rsp+C0h] [rbp+17h]
  int v36; // [rsp+C8h] [rbp+1Fh]
  int v37; // [rsp+CCh] [rbp+23h]

  v3 = (int *)(a2 + 56);
  v5 = (int *)(a3 + 56);
  v17 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
  if ( RmpSystemQueryCompressionProcessPrivateWorkingSet(&v16) < 0 )
    return 2LL;
  v7 = v17;
  v18 = v17 >> 2;
  if ( v16 < v17 >> 2 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v26 = &v18;
        v29 = &v16;
        v20 = v3;
        v21 = v8 + 7;
        v23 = v5;
        v24 = v8 + 7;
        v27 = v8 + 7;
        v30 = v8 + 7;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A10D, v9, v10, 6u, &pData);
      }
    }
    return 2LL;
  }
  if ( v16 < v17 )
    v7 = v16;
  v17 = v7;
  v11 = RmpSystemTrimCompressionProcessPrivateWorkingSet(v7);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v29 = &v18;
    v32 = &v16;
    v20 = &v15;
    v35 = &v17;
    v15 = v11;
    v21 = 4;
    v23 = v3;
    v24 = v12 + 7;
    v26 = (unsigned __int64 *)v5;
    v27 = v12 + 7;
    v30 = v12 + 7;
    v33 = v12 + 7;
    v36 = v12 + 7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059C6F, v13, v14, v12 + 7, &pData);
  }
  if ( v11 < 0
    || (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       5,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v15)
    || v15 != 2 )
  {
    return 0LL;
  }
  else
  {
    return 4LL;
  }
}
