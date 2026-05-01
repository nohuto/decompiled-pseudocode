/*
 * XREFs of ?HampUtilExternalAccessMaskFromMaskData@@YAXPEAU_HAM_EXTERNAL_RESOURCE_MASK@@PEAU_RTL_BITMAP@@@Z @ 0x18003F92C
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000F7EC (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180023270 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18006841C (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 * Callees:
 *     <none>
 */

void __fastcall HampUtilExternalAccessMaskFromMaskData(ULONG *a1, struct _RTL_BITMAP *a2)
{
  RtlInitializeBitMap(a2, a1, 0x2Fu);
}
