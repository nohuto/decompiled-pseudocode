/*
 * XREFs of SymCryptInitEnvCommon @ 0x14017A2EC
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140176FE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     <none>
 */

__int64 SymCryptInitEnvCommon()
{
  __int64 result; // rax

  _InterlockedOr(&g_SymCryptFlags, 1u);
  result = (unsigned int)~g_SymCryptCpuFeaturesNotPresent;
  g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
  return result;
}
