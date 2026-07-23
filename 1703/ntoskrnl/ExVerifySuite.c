/*
 * XREFs of ExVerifySuite @ 0x140159290
 * Callers:
 *     MmWriteTriageInformation @ 0x1402137CC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1405B8A04 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140810DD4 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
