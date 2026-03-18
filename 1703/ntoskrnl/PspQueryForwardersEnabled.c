/*
 * XREFs of PspQueryForwardersEnabled @ 0x1405A559C
 * Callers:
 *     PsBootPhaseComplete @ 0x1405A529C (PsBootPhaseComplete.c)
 *     PspSiloLoadApiSets @ 0x1406DF778 (PspSiloLoadApiSets.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 */

char PspQueryForwardersEnabled()
{
  char v0; // bl
  _QWORD v2[15]; // [rsp+30h] [rbp-78h] BYREF
  int v3; // [rsp+B0h] [rbp+8h] BYREF

  memset(v2, 0, 0x70uLL);
  LODWORD(v2[1]) = 292;
  v2[2] = L"OCFW_Enabled";
  LODWORD(v2[4]) = 0x4000000;
  v0 = 1;
  v2[3] = &v3;
  if ( (int)RtlpQueryRegistryValues(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\OneCore",
              (__int64)v2,
              0LL) < 0
    || !v3 )
  {
    return 0;
  }
  return v0;
}
