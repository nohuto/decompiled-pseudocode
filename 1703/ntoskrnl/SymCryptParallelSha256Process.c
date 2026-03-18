/*
 * XREFs of SymCryptParallelSha256Process @ 0x14017A6A8
 * Callers:
 *     KeComputeParallelSha256 @ 0x1401FD520 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x14003BE4C (SymCryptCpuFeaturesNeverPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SymCryptParallelHashProcess @ 0x14017AAE0 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14017AD90 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptRestoreXmm @ 0x1401FDBEC (SymCryptRestoreXmm.c)
 *     SymCryptRestoreYmm @ 0x1401FDBF8 (SymCryptRestoreYmm.c)
 *     SymCryptSaveYmm @ 0x1401FDC04 (SymCryptSaveYmm.c)
 */

void __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _XSTATE_SAVE XStateSave; // [rsp+40h] [rbp-78h] BYREF

  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm(&XStateSave) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptCpuFeaturesNeverPresent() )
    {
      SymCryptParallelHashProcess_serial((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6);
    }
    else
    {
      SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 4);
      SymCryptRestoreXmm(&XStateSave);
    }
  }
  else
  {
    SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    SymCryptRestoreYmm(&XStateSave);
  }
}
