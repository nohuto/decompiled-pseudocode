/*
 * XREFs of GetDevExtFromIndex @ 0x1C00077EC
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C0022228 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C002263C (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C0029F04 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C002ACD0 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0031920 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0033998 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
