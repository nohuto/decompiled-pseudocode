/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x14014AF10
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401777A0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & MEMORY[0xFFFFF780000003D8];
}
