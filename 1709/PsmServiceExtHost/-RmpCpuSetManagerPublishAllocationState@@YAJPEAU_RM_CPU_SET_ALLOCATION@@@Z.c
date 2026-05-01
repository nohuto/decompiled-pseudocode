/*
 * XREFs of ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18003796C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180036754 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180037704 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x180037850 (-RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerPublishAllocationState(struct _RM_CPU_SET_ALLOCATION *a1)
{
  unsigned int v2; // r9d
  const GUID *v3; // r9
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v10[514]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+850h] [rbp+750h] BYREF
  int *v12; // [rsp+870h] [rbp+770h]
  int v13; // [rsp+878h] [rbp+778h]
  int v14; // [rsp+87Ch] [rbp+77Ch]

  if ( *((_DWORD *)a1 + 64) )
  {
    v8 = 0;
    RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(a1, &v9, v10);
    v2 = v9;
  }
  else
  {
    v2 = 0;
    v8 = -1073741393;
    v9 = 0;
  }
  v7 = RtlPublishWnfStateData(*((_QWORD *)a1 + 11), 0LL, &v8, 4 * v2 + 8, 0LL);
  LODWORD(v3) = v7;
  if ( v7 < 0 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
  {
    v14 = 0;
    v12 = &v7;
    v13 = 4;
    TlgWrite(v4, &unk_180057E82, v5, v3, 3u, &pData);
    LODWORD(v3) = v7;
  }
  return (unsigned int)v3;
}
