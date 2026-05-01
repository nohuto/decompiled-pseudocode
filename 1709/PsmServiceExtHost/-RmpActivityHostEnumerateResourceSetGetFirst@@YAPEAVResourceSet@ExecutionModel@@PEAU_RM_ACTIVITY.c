/*
 * XREFs of ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70
 * Callers:
 *     ?RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005A38 (-RmpActivityHostGetForegroundSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180006354 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180007C00 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B404 (-RmpResourceSetCheckAddPpleRecipient@@YAJPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B5CC (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B82C (-RmpActivityHostIsForegroundBoostAppliedOrPending@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpTracingControlCallback @ 0x1800201F0 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035650 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003604C (-RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x180036124 (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036608 (-RmpActivityHostTryGetPpleResourceSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003E240 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostEnumerateResourceSetGetFirst(__int64 a1, int a2, signed int a3)
{
  __int64 result; // rax
  _QWORD *i; // rcx

  if ( a3 >= 2 )
    return 0LL;
  for ( i = (_QWORD *)(a1 + 8 * (3LL * a3 + 102)); ; i += 3 )
  {
    if ( _bittest(&a2, a3) )
    {
      if ( (_QWORD *)*i != i )
      {
        result = *i - 1416LL;
        if ( *i != 1416LL )
          break;
      }
    }
    if ( ++a3 >= 2 )
      return 0LL;
  }
  return result;
}
