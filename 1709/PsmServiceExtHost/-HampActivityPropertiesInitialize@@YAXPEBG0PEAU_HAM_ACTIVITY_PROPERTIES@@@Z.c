/*
 * XREFs of ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18004D0F8
 * Callers:
 *     ?HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180043254 (-HampHostAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z @ 0x180044290 (-HampDepGroupAddDependency@@YAJPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAX2@Z.c)
 *     ?HampExtendedExecutionComputePolicy@@YAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180046FB0 (-HampExtendedExecutionComputePolicy@@YAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800366DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall HampActivityPropertiesInitialize(char *a1, char *a2, struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  memset_0(a3, 0, 0x180uLL);
  StringCchCopyW((char *)a3 + 4, 64LL, a1);
  StringCchCopyW((char *)a3 + 132, 64LL, a2);
  *((_DWORD *)a3 + 65) = 4;
  RmpResourceSetPropertiesInitialize((__int64)a3 + 272);
}
