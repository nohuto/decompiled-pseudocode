/*
 * XREFs of ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032300
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D24C (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18000D508 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041624 (-HampSystemGenerateLegacyHangReport@@YAJPEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampSystemPopulateLegacyHangReportParameters@@YAJPEAX0W4_HAM_TERMINATE_REASON@@@Z @ 0x1800418D8 (-HampSystemPopulateLegacyHangReportParameters@@YAJPEAX0W4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall HampAllocateHeap(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
