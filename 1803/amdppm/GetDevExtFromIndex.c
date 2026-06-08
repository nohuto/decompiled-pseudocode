/*
 * XREFs of GetDevExtFromIndex @ 0x1C000387C
 * Callers:
 *     GetLpIndex @ 0x1C001AF90 (GetLpIndex.c)
 *     RegisterKernelIdleDomains @ 0x1C001D59C (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C001D8E8 (DeregisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C002D300 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C002DAA0 (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002DE9C (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
