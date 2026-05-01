/*
 * XREFs of ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800561F8
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180054C74 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180055CB0 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x180055E00 (-RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerPublishAllocationState(struct _RM_CPU_SET_ALLOCATION *a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // r9d
  const struct _TlgProvider_t *v4; // rcx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v8; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v9[514]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+850h] [rbp+750h] BYREF
  int *v11; // [rsp+870h] [rbp+770h]
  int v12; // [rsp+878h] [rbp+778h]
  int v13; // [rsp+87Ch] [rbp+77Ch]

  if ( *((_DWORD *)a1 + 66) )
  {
    v7 = 0;
    RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(a1, &v8, v9);
    v2 = v8;
  }
  else
  {
    v2 = 0;
    v7 = -1073741393;
    v8 = 0;
  }
  v6 = RtlPublishWnfStateData(*((_QWORD *)a1 + 12), 0LL, &v7, 4 * v2 + 8, 0LL);
  v3 = v6;
  if ( v6 < 0 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v13 = 0;
    v11 = &v6;
    v12 = 4;
    TlgWrite(v4, &unk_18007E237, 0LL, 0LL, 3u, &pData);
    return (unsigned int)v6;
  }
  return v3;
}
