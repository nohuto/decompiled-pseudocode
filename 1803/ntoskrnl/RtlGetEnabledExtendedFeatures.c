/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x14016E720
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401A17A0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & MEMORY[0xFFFFF780000003D8];
}
