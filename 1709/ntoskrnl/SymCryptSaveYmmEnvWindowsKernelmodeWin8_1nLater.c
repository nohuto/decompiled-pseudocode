/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14017709C
 * Callers:
 *     SymCryptSaveYmm @ 0x140203D1C (SymCryptSaveYmm.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x14000A740 (KeSaveExtendedProcessorState.c)
 *     SymCryptCpuFeaturesNeverPresent @ 0x140130328 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFatal @ 0x140203CE0 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater(PXSTATE_SAVE XStateSave)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0 )
    SymCryptFatal(544042361LL);
  if ( KeSaveExtendedProcessorState(4uLL, XStateSave) < 0 )
    return 157286504;
  return v2;
}
