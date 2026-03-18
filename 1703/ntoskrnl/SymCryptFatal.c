/*
 * XREFs of SymCryptFatal @ 0x1401FDBE0
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401777A0 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140177858 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptParallelHashProcess @ 0x14017AAE0 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14017AD90 (SymCryptParallelHashProcess_serial.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
