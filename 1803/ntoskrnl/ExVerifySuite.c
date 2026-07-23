/*
 * XREFs of ExVerifySuite @ 0x14017D7F0
 * Callers:
 *     MmWriteTriageInformation @ 0x140257A18 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14063B20C (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1408BBA7C (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
