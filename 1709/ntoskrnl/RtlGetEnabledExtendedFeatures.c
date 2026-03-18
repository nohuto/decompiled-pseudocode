/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x14015A1F0
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140176FE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & MEMORY[0xFFFFF780000003D8];
}
