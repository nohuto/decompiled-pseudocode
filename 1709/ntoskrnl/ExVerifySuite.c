/*
 * XREFs of ExVerifySuite @ 0x140143C10
 * Callers:
 *     MmWriteTriageInformation @ 0x14021B7B0 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1405BF504 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140839930 (ExpUpdateProductSuiteTypeInRegistry.c)
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
