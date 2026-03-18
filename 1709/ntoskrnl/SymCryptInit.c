/*
 * XREFs of SymCryptInit @ 0x140145644
 * Callers:
 *     HvInitializeHashLibrary @ 0x1405BFAAC (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140176FE0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
}
