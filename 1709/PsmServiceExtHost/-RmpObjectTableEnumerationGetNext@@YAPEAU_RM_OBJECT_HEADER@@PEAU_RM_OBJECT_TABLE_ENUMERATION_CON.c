/*
 * XREFs of ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800055A4
 * Callers:
 *     ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x1800054A8 (-RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEA.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F894 (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     RmpTracingControlCallback @ 0x1800201F0 (RmpTracingControlCallback.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180023CB4 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@@Z @ 0x180034D98 (-RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180037F90 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18003A00C (-RmpPartitionRevokeAllSets@@YAXPEAU_RM_PARTITION@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003E240 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

struct _RM_OBJECT_HEADER *__fastcall RmpObjectTableEnumerationGetNext(struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *a1)
{
  struct _RM_OBJECT_HEADER **v1; // rbx
  struct _RM_OBJECT_HEADER *v2; // rbx
  struct _RM_OBJECT_HEADER **i; // rdx

  v1 = (struct _RM_OBJECT_HEADER **)*((_QWORD *)a1 + 2);
  if ( v1 && (v2 = *v1, ((unsigned __int8)v2 & 1) == 0) )
  {
LABEL_7:
    *((_QWORD *)a1 + 2) = v2;
  }
  else
  {
    for ( i = (struct _RM_OBJECT_HEADER **)(*((_QWORD *)a1 + 3) + 8LL);
          (unsigned __int64)i < *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL)
                              + 8 * ((unsigned __int64)*(unsigned int *)(*((_QWORD *)a1 + 1) + 4LL) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
        v2 = *i;
        *((_QWORD *)a1 + 3) = i;
        goto LABEL_7;
      }
    }
    v2 = 0LL;
  }
  if ( !v2 )
    return 0LL;
  RmpObjectAddRef(v2);
  return v2;
}
