/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180008E4C
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800096F0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18003F24C (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *cData; // r9
  unsigned int v12; // [rsp+30h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  __int128 v14; // [rsp+50h] [rbp-69h]
  __int128 v15; // [rsp+60h] [rbp-59h]
  __int128 v16; // [rsp+70h] [rbp-49h]
  __int128 v17; // [rsp+80h] [rbp-39h]
  _OWORD v18[3]; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v19[2]; // [rsp+C0h] [rbp+7h] BYREF

  v2 = *a1;
  v5 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v2, (struct _RM_SYSTEM_MEMORY_METRICS *)&pData);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v5 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v5 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&pData,
    pData.Ptr,
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v18[0] = pData;
  v18[2] = v15;
  v18[1] = v14;
  v19[0] = v16;
  v19[1] = v17;
  *(_WORD *)(v2 + 188) = 0;
  v6 = a2[13];
  if ( *((_QWORD *)&v19[0] + 1) > v6 )
  {
    memset_0(&pData, 0, 0x50uLL);
    *((_QWORD *)&v16 + 1) = v6;
    v7 = RmpMemoryMonitorEmptyWorkingSets(a1, v18, &pData, 6LL);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v12 = v7;
      *(_QWORD *)&v15 = &v12;
      *(_QWORD *)&v16 = (char *)v19 + 8;
      *((_QWORD *)&v15 + 1) = cData;
      *((_QWORD *)&v16 + 1) = 8LL;
      TlgWrite(v9, &unk_180059A49, v10, cData, (UINT32)cData, &pData);
    }
  }
  else
  {
    return 3;
  }
  return v7;
}
