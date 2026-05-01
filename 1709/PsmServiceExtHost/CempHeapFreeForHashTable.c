/*
 * XREFs of CempHeapFreeForHashTable @ 0x18001FEE0
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180013B60 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017054 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x1800172D4 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18001A144 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18002376C (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180023A6C (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x180023BA4 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x1800373D8 (-RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CempHeapFreeForHashTable(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
