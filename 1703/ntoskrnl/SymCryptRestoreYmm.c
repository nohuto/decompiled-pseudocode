/*
 * XREFs of SymCryptRestoreYmm @ 0x1401FDBF8
 * Callers:
 *     SymCryptParallelSha256Process @ 0x14017A6A8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SymCryptRestoreYmm(PXSTATE_SAVE XStateSave)
{
  SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(XStateSave);
}
