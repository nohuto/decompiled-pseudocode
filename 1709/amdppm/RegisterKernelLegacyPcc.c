/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C00085E0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C00085FC (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, RegisterKernelPerfStatesCallback);
}
