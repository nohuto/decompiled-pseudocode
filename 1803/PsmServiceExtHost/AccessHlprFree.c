/*
 * XREFs of AccessHlprFree @ 0x18002AE28
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18002A6B4 (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     QuerySecurityDescriptorValue @ 0x18002AB30 (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18002AD14 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x18002AFF4 (GetNormalizedObjectPath.c)
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
