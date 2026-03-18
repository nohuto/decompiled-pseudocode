/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x140130328
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14017709C (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x140177220 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x140179EE0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 */

__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
