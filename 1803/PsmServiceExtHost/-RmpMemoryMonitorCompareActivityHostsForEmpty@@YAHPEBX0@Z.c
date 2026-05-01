/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18005DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18002DEA8 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180059F78 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18005DAD0 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  int v9; // eax
  int v10; // r8d
  int v11; // r15d
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // r11
  int v16; // eax
  char v17; // r14
  int v18; // eax
  char v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax

  v2 = *((_QWORD *)a1 + 6);
  v4 = *((_QWORD *)a2 + 6);
  result = RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(a1, a2);
  v7 = 0;
  if ( !(_DWORD)result )
  {
    if ( !RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v2) )
      return 0LL;
    v8 = *(_QWORD *)(v2 + 48) + 424LL;
    v9 = RmpPolicyComputeDesiredEmptyState(v8, v2, 1);
    v11 = *(_DWORD *)(v2 + 1156);
    if ( (v9 & v11) != v9 )
    {
      v12 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v4 + 48) + 424LL, v4, v10);
      if ( (v12 & *(_DWORD *)(v4 + 1156)) == v12 )
        return 0xFFFFFFFFLL;
    }
    v13 = RmpPolicyComputeDesiredEmptyState(v8, v2, v10);
    if ( (v13 & v11) != v13
      || (v16 = RmpPolicyComputeDesiredEmptyState(v15 + *(_QWORD *)(v4 + 48), v4, v14),
          (v16 & *(_DWORD *)(v4 + 1156)) == v16) )
    {
      v17 = v14 & *(_BYTE *)(v4 + 1465);
      v18 = RmpPolicyComputeDesiredEmptyState(v8, v2, v14);
      if ( (v18 & v11) == v18 )
      {
        v20 = *((_QWORD *)a1 + 4);
        if ( v19 )
          v20 >>= 1;
        v21 = *((_QWORD *)a2 + 4);
      }
      else
      {
        v20 = *((_QWORD *)a1 + 3);
        if ( v19 )
          v20 >>= 1;
        v21 = *((_QWORD *)a2 + 3);
      }
      if ( v17 )
        v21 >>= 1;
      if ( v20 > v21 )
        return 0xFFFFFFFFLL;
      LOBYTE(v7) = v20 < v21;
      return v7;
    }
    else
    {
      return v14;
    }
  }
  return result;
}
