/*
 * XREFs of ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005348
 * Callers:
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x1800066B8 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800650B8 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066DD0 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostGetAppliedTaskCompletions(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _HAM_ACTIVITY *i; // rax
  __int64 v2; // r8

  for ( i = HampHostGetFirstActivity(a1); i; i = HampHostGetNextActivity(i) )
    ;
  return v2;
}
