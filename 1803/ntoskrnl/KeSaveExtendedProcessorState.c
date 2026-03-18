/*
 * XREFs of KeSaveExtendedProcessorState @ 0x1400C57C0
 * Callers:
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x1401A185C (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     KeSaveExtendedAndSupervisorState @ 0x1400C5810 (KeSaveExtendedAndSupervisorState.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall KeSaveExtendedProcessorState(ULONG64 Mask, PXSTATE_SAVE XStateSave)
{
  bool v2; // zf

  if ( (KeFeatureBits & 0x800000) != 0 )
    v2 = (~MEMORY[0xFFFFF780000003D8] & Mask) == 0;
  else
    v2 = (Mask & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  if ( !v2 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)Mask, HIDWORD(Mask));
  return KeSaveExtendedAndSupervisorState(Mask);
}
