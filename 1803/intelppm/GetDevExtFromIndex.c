/*
 * XREFs of GetDevExtFromIndex @ 0x1C0007B90
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C001FFC8 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0020564 (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002B0F4 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C002BEC0 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0032C44 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0034CDC (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
