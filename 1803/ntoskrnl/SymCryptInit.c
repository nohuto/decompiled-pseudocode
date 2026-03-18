/*
 * XREFs of SymCryptInit @ 0x140186C54
 * Callers:
 *     HvInitializeHashLibrary @ 0x140655718 (HvInitializeHashLibrary.c)
 * Callees:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401A17A0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 SymCryptInit()
{
  return SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
}
