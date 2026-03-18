/*
 * XREFs of SymCryptCpuFeaturesNeverPresent @ 0x14003BE4C
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140177858 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSha256AppendBlocks @ 0x1401779E0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x14017A6A8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 SymCryptCpuFeaturesNeverPresent()
{
  return PsGetHostSilo();
}
