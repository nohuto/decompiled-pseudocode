/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003F664
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003F9F0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x18001E4E0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(struct _RM_MEMORY_MONITOR_DATA *a1, struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  __int64 v2; // rax
  char v5; // si
  __int64 v6; // rdi
  const GUID *v7; // r8
  const GUID *v8; // r9
  char v9; // al
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  DWORD cbData; // [rsp+3Ch] [rbp-CCh] BYREF
  BYTE Data[8]; // [rsp+40h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  _BYTE SystemInformation[8]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+90h] [rbp-78h]
  _BYTE v24[16]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v26[48]; // [rsp+118h] [rbp+10h] BYREF
  int v27; // [rsp+148h] [rbp+40h]
  int v28; // [rsp+14Ch] [rbp+44h]
  int v29; // [rsp+150h] [rbp+48h]
  int v30; // [rsp+188h] [rbp+80h]
  int v31; // [rsp+18Ch] [rbp+84h]
  __int64 v32; // [rsp+268h] [rbp+160h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v34; // [rsp+298h] [rbp+190h]
  int v35; // [rsp+2A0h] [rbp+198h]
  int v36; // [rsp+2A4h] [rbp+19Ch]
  __int64 *v37; // [rsp+2A8h] [rbp+1A0h]
  int v38; // [rsp+2B0h] [rbp+1A8h]
  int v39; // [rsp+2B4h] [rbp+1ACh]
  __int64 *v40; // [rsp+2B8h] [rbp+1B0h]
  int v41; // [rsp+2C0h] [rbp+1B8h]
  int v42; // [rsp+2C4h] [rbp+1BCh]
  __int64 *v43; // [rsp+2C8h] [rbp+1C0h]
  int v44; // [rsp+2D0h] [rbp+1C8h]
  int v45; // [rsp+2D4h] [rbp+1CCh]
  __int64 *v46; // [rsp+2D8h] [rbp+1D0h]
  int v47; // [rsp+2E0h] [rbp+1D8h]
  int v48; // [rsp+2E4h] [rbp+1DCh]
  __int64 *v49; // [rsp+2E8h] [rbp+1E0h]
  int v50; // [rsp+2F0h] [rbp+1E8h]
  int v51; // [rsp+2F4h] [rbp+1ECh]
  int *v52; // [rsp+2F8h] [rbp+1F0h]
  int v53; // [rsp+300h] [rbp+1F8h]
  int v54; // [rsp+304h] [rbp+1FCh]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+308h] [rbp+200h] BYREF
  unsigned __int64 *v56; // [rsp+328h] [rbp+220h]
  int v57; // [rsp+330h] [rbp+228h]
  int v58; // [rsp+334h] [rbp+22Ch]

  v2 = *(_QWORD *)a1;
  phkResult = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, (UCHAR)a2, 0LL) )
  {
    memset_0(SystemInformation, 0, 0x40uLL);
    memset_0(v26, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v26, 0x158u, 0LL);
    if ( (*((_BYTE *)a1 + 92) & 2) == 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
      {
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v48 = 0;
        v51 = 0;
        v16 = v27 * v23;
        v34 = &v16;
        v35 = 8;
        v38 = 8;
        v41 = 8;
        v44 = 8;
        v17 = v23 * v29;
        v37 = &v17;
        v47 = 8;
        v50 = 8;
        v53 = 1;
        v18 = v23 * v28;
        v40 = &v18;
        v19 = v32 * v23;
        v43 = &v19;
        v20 = v23 * v31;
        v46 = &v20;
        v21 = v23 * v30;
        v49 = &v21;
        v9 = *(_BYTE *)(v6 + 508) & 1;
        v54 = 0;
        LOBYTE(v12) = v9;
        v52 = &v12;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059AE7, v7, v8, 9u, &pData);
      }
      *((_DWORD *)a1 + 23) |= 2u;
      v5 = 1;
    }
  }
  if ( (*(_BYTE *)(v6 + 508) & 1) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData))
      || *(_DWORD *)Data )
    {
      if ( (unsigned int)RmpMemoryMonitorWaitForEvents(
                           a1,
                           52,
                           *((_DWORD *)a1 + 18),
                           (enum _RM_MEMORY_MONITOR_EVENT *)&v16) )
      {
        RmpSystemMemoryMetricsQuery(*(struct _RM_PARTITION **)a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v24);
        if ( v25 >= *((_QWORD *)a2 + 15) )
          __fastfail(0xC00001AD);
        if ( v5 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
        {
          v58 = 0;
          v56 = &v25;
          v57 = 8;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800599CA, v10, v11, 3u, &v55);
        }
      }
    }
  }
  if ( phkResult )
    RegCloseKey(phkResult);
}
