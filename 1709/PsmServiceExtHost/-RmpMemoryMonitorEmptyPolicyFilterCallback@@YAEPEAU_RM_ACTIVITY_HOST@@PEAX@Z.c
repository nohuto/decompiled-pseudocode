/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180018568 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B66C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003F5F4 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

bool __fastcall RmpMemoryMonitorEmptyPolicyFilterCallback(struct _RM_ACTIVITY_HOST *a1, void *a2)
{
  char v2; // bp
  int v5; // eax
  int v6; // esi
  int v7; // ebx

  v2 = (char)a2;
  if ( *((_DWORD *)a1 + 254) )
    return 0;
  v5 = RmpPolicyComputeDesiredEmptyState(*((_QWORD *)a1 + 5) + 400LL, (__int64)a1, 1);
  v6 = v5 & *((_DWORD *)a1 + 253);
  v7 = v5;
  if ( RmpPolicyActivityHostIsValidEmptyTarget(a1) && (v6 != v7 || (v2 & 0x20) == 0) )
    return 1;
  if ( (v2 & 1) == 0 || v6 == v7 )
    return 0;
  return RmpMemoryMonitorIsLargeAppTerminationTarget(a1, 0LL) != 0;
}
