/*
 * XREFs of GetDevExtFromIndex @ 0x1C0009170
 * Callers:
 *     PepNotifyCoordinatedLpiStates @ 0x1C0023E90 (PepNotifyCoordinatedLpiStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0026880 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0026BB8 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C002E5C0 (GetLpIndex.c)
 *     LpiEnumerateDependencies @ 0x1C002F188 (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002F584 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
