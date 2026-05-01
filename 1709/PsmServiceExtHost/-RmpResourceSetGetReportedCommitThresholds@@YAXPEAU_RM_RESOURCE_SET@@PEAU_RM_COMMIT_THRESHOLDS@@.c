/*
 * XREFs of ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001847C
 * Callers:
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180006210 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001808C (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800183E0 (-RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x18001BC28 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001F83C (-RmpResourceSetUpdateElasticRecipient@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180034DD8 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 *     ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180035230 (-RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035650 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x18003C1F0 (-NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpResourceSetGetReportedCommitThresholds(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_COMMIT_THRESHOLDS *a2)
{
  _OWORD *v2; // rax
  _QWORD *v4; // rbx

  v2 = (_OWORD *)*((_QWORD *)a1 + 19);
  if ( v2 )
  {
    *(_OWORD *)a2 = *v2;
    *((_OWORD *)a2 + 1) = v2[1];
  }
  else
  {
    v4 = (_QWORD *)*((_QWORD *)a1 + 5);
    memset_0(a2, 0, 0x20uLL);
    *((_QWORD *)a2 + 3) = v4[191];
    *((_QWORD *)a2 + 2) = v4[185];
    *((_QWORD *)a2 + 1) = v4[190];
    *(_QWORD *)a2 = v4[228];
  }
}
