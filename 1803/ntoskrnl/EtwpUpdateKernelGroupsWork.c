/*
 * XREFs of EtwpUpdateKernelGroupsWork @ 0x14057B910
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14057B938 (EtwpUpdateGlobalGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupsWork(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return EtwpUpdateGlobalGroupMasks(EtwpHostSiloState, 0LL, 8LL);
}
