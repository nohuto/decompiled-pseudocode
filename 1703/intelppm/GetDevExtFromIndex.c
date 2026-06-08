/*
 * XREFs of GetDevExtFromIndex @ 0x1C000786C
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C001EFF8 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C001F410 (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C0026754 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C0027480 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C002E028 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0030448 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
