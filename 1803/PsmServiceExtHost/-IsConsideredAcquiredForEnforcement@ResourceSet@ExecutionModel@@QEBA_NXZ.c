/*
 * XREFs of ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18001FF04
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostComputeDigestForCategory@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180053FC8 (-RmpActivityHostComputeDigestForCategory@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@W4_RM_R.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(ExecutionModel::ResourceSet *this)
{
  return *((_DWORD *)this + 350) == 2 || (*((_BYTE *)this + 1452) & 0x10) != 0;
}
