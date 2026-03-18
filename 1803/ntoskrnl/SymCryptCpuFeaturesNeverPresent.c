/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x1400D0A60
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401A185C (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1401A19E0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x1401A476C (SymCryptParallelSha256Process.c)
 * Callees:
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
