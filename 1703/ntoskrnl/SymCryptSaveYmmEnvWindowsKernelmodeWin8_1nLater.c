/*
 * XREFs of SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x140177858
 * Callers:
 *     SymCryptSaveYmm @ 0x1401FDC04 (SymCryptSaveYmm.c)
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x140007400 (KeSaveExtendedProcessorState.c)
 *     SymCryptCpuFeaturesNeverPresent @ 0x14003BE4C (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFatal @ 0x1401FDBE0 (SymCryptFatal.c)
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
