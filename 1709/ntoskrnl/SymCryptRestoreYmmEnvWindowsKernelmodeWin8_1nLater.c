/*
 * XREFs of SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140177088
 * Callers:
 *     SymCryptRestoreYmm @ 0x140203D08 (SymCryptRestoreYmm.c)
 * Callees:
 *     KeRestoreExtendedProcessorState @ 0x14000B260 (KeRestoreExtendedProcessorState.c)
 */

void __fastcall SymCryptRestoreYmmEnvWindowsKernelmodeWin8_1nLater(struct _XSTATE_SAVE *a1)
{
  KeRestoreExtendedProcessorState(a1);
}
