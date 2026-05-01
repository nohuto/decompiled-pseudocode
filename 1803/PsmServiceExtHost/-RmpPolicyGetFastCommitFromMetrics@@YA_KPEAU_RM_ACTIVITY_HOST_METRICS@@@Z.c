/*
 * XREFs of ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005A484
 * Callers:
 *     ?RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x18005A584 (-RmpPolicyPopulateFastCommitUse@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_POLICY_WORK_BUFFER@@@.c)
 * Callees:
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180024E68 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DC44 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

unsigned __int64 __fastcall RmpPolicyGetFastCommitFromMetrics(struct _RM_ACTIVITY_HOST_METRICS *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  int v4; // edi

  v1 = *((_QWORD *)a1 + 6);
  v3 = *(_QWORD *)(v1 + 48);
  v4 = (*(_DWORD *)(v3 + 532) >> 2) & 1;
  if ( (*(_BYTE *)(v1 + 804) & 1) != 0 )
  {
    if ( !(unsigned int)HampHostCanKillForResourcePressure(
                          (struct _RM_HAM_ACTIVITY_HOST *)(v1 + 64),
                          (*(_DWORD *)(v3 + 532) & 4) == 0) )
      return *((_QWORD *)a1 + 5);
  }
  else if ( (*(_BYTE *)(v1 + 1058) & 0x20) == 0 )
  {
    return *((_QWORD *)a1 + 5);
  }
  if ( !v4 && (unsigned int)RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)v1, 1)
    || (*(_BYTE *)(v1 + 1058) & 0x40) == 0 )
  {
    return *((_QWORD *)a1 + 5);
  }
  return *(_QWORD *)a1;
}
