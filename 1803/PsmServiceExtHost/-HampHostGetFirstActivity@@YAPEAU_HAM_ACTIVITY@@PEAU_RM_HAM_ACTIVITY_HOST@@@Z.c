/*
 * XREFs of ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390
 * Callers:
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180004180 (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180004D64 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180005138 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005348 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800062A0 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007310 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180007EA8 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016C24 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180024E68 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004057C (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006479C (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180064F50 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065204 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065358 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180065930 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_ACTIVITY *__fastcall HampHostGetFirstActivity(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)a1 + 584);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct _HAM_ACTIVITY *)(*v1 - 96LL);
}
