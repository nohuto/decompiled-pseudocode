/*
 * XREFs of ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800438A0
 * Callers:
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004303C (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043660 (-HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043720 (-HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180043978 (-HampHostQueueTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_HOST_TERMINATE_TYPE@@W4_H.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043DB8 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_ACTIVITY *__fastcall HampHostGetNextActivity(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)a1 + 11);
  if ( v1 == *((_QWORD *)a1 + 9) + 584LL )
    return 0LL;
  else
    return (struct _HAM_ACTIVITY *)(v1 - 88);
}
