/*
 * XREFs of ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180053360
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z @ 0x180053190 (-RmpResourceSetUpdateDonatedCommmit@@YAXPEAU_RM_RESOURCE_SET@@K@Z.c)
 */

void __fastcall RmpResourceSetUpdateReceivedCommit(struct _RM_RESOURCE_SET *a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( *((_QWORD *)a1 + 12) != a2 )
  {
    v3 = 0LL;
    for ( *((_QWORD *)a1 + 12) = a2; (unsigned int)v3 < *((_DWORD *)a1 + 28); v3 = (unsigned int)(v3 + 1) )
      RmpResourceSetUpdateDonatedCommmit(*(struct _RM_RESOURCE_SET **)(*((_QWORD *)a1 + 13) + 8 * v3), 3);
  }
}
