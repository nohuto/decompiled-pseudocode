/*
 * XREFs of AccessHlprFree @ 0x18001CF08
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001C548 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     QuerySecurityDescriptorValue @ 0x18001CC10 (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001CDF4 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x18001D0D0 (GetNormalizedObjectPath.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AccessHlprFree(void *a1)
{
  BOOLEAN result; // al

  if ( a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
