/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18005E0D4
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x18005E3F8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18002DEA8 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180059F78 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005E7CC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyProcessHostArray(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        char a3)
{
  unsigned int v3; // r12d
  char v5; // r14
  bool v7; // r13
  __int64 v8; // rax
  _WORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rsi
  int v12; // eax
  __int16 *v13; // rbx
  int (__cdecl *v14)(const void *, const void *); // r9
  __int64 v16; // [rsp+78h] [rbp+20h]

  v3 = a2;
  v5 = a3 & 1;
  v7 = 0;
  if ( !a2 )
    goto LABEL_17;
  v8 = a2;
  v9 = (_WORD *)((char *)a1 + 60);
  v10 = a2;
  v16 = a2;
  do
  {
    v11 = *(_QWORD *)(v9 - 6);
    if ( v5 )
    {
      if ( RmpMemoryMonitorIsLargeAppTerminationTarget(
             *(struct _RM_ACTIVITY_HOST **)(v9 - 6),
             (struct _RM_ACTIVITY_HOST_METRICS *)(v9 - 30)) )
      {
        *v9 |= 0x8000u;
        goto LABEL_10;
      }
      v8 = v16;
    }
    if ( v7 )
      goto LABEL_11;
    if ( RmpPolicyActivityHostIsValidEmptyTarget((struct _RM_ACTIVITY_HOST *)v11) )
    {
      v12 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v11 + 48) + 424LL, v11, 1);
      v7 = (*(_DWORD *)(v11 + 1156) & v12) != v12;
    }
LABEL_10:
    v8 = v16;
LABEL_11:
    v9 += 32;
    v16 = --v8;
  }
  while ( v8 );
  v3 = a2;
  v13 = (__int16 *)((char *)a1 + 48);
  do
  {
    if ( v13[6] >= 0 && (a3 & 0x10) == 0 )
      RmpPolicyActivityHostIsValidEmptyTarget(*(struct _RM_ACTIVITY_HOST **)v13);
    v13 += 32;
    --v10;
  }
  while ( v10 );
LABEL_17:
  v14 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForCommitSave;
  if ( (a3 & 0x10) == 0 )
    v14 = (int (__cdecl *)(const void *, const void *))RmpMemoryMonitorCompareActivityHostsForEmpty;
  qsort(a1, v3, 0x40uLL, v14);
}
