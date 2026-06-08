/*
 * XREFs of GetDevExtFromIndex @ 0x1C0008E0C
 * Callers:
 *     PepNotifyCoordinatedLpiStates @ 0x1C0020E20 (PepNotifyCoordinatedLpiStates.c)
 *     RegisterKernelIdleDomains @ 0x1C00236EC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0023A24 (DeregisterKernelIdleDomains.c)
 *     GetLpIndex @ 0x1C002B140 (GetLpIndex.c)
 *     LpiEnumerateDependencies @ 0x1C002BCF8 (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C002C0F4 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *(_QWORD *)(DevExts + 8LL * a1);
}
