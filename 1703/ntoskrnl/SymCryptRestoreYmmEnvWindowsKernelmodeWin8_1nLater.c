/*
 * XREFs of SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14017784C
 * Callers:
 *     SymCryptRestoreYmm @ 0x1401FDBF8 (SymCryptRestoreYmm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(PXSTATE_SAVE XStateSave)
{
  KeRestoreExtendedProcessorState(XStateSave);
}
