/*
 * XREFs of ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005E204
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180022070 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x18002DF14 (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18002EB00 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x180061C4C (-RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z.c)
 */

__int64 __fastcall RmpMemoryMonitorEmptySystemStore(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // r14
  int *v5; // rsi
  unsigned __int64 v7; // rcx
  int v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v16; // [rsp+70h] [rbp-39h]
  int v17; // [rsp+78h] [rbp-31h]
  int v18; // [rsp+7Ch] [rbp-2Dh]
  int *v19; // [rsp+80h] [rbp-29h]
  int v20; // [rsp+88h] [rbp-21h]
  int v21; // [rsp+8Ch] [rbp-1Dh]
  unsigned __int64 *v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+9Ch] [rbp-Dh]
  unsigned __int64 *v25; // [rsp+A0h] [rbp-9h]
  int v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+ACh] [rbp+3h]
  unsigned __int64 *v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B8h] [rbp+Fh]
  int v30; // [rsp+BCh] [rbp+13h]
  unsigned __int64 *v31; // [rsp+C0h] [rbp+17h]
  int v32; // [rsp+C8h] [rbp+1Fh]
  int v33; // [rsp+CCh] [rbp+23h]

  v3 = (int *)(a2 + 56);
  v5 = (int *)(a3 + 56);
  v13 = *(_QWORD *)(a2 + 56) - *(_QWORD *)(a3 + 56);
  if ( RmpSystemQueryCompressionProcessPrivateWorkingSet(&v12) < 0 )
    return 2LL;
  v7 = v13;
  v14 = v13 >> 2;
  if ( v12 < v13 >> 2 )
  {
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v22 = &v14;
        v25 = &v12;
        v16 = v3;
        v17 = v8 + 7;
        v19 = v5;
        v20 = v8 + 7;
        v23 = v8 + 7;
        v26 = v8 + 7;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180080375, 0LL, 0LL, 6u, &pData);
      }
    }
    return 2LL;
  }
  if ( v12 < v13 )
    v7 = v12;
  v13 = v7;
  v9 = RmpSystemTrimCompressionProcessPrivateWorkingSet(v7);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v25 = &v14;
    v28 = &v12;
    v16 = &v11;
    v31 = &v13;
    v11 = v9;
    v17 = 4;
    v19 = v3;
    v20 = v10 + 7;
    v22 = (unsigned __int64 *)v5;
    v23 = v10 + 7;
    v26 = v10 + 7;
    v29 = v10 + 7;
    v32 = v10 + 7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007FF39, 0LL, 0LL, v10 + 7, &pData);
  }
  if ( v9 < 0
    || (unsigned int)RmpMemoryMonitorWaitForEvents(
                       (struct _RM_MEMORY_MONITOR_DATA *)a1,
                       5,
                       *(_DWORD *)(a1 + 72),
                       (enum _RM_MEMORY_MONITOR_EVENT *)&v11)
    || v11 != 2 )
  {
    return 0LL;
  }
  else
  {
    return 4LL;
  }
}
