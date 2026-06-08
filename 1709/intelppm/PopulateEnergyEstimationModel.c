/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C0035264
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00354C0 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00017E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 *     ReadEnergyEquation @ 0x1C0035340 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C00353FC (ReadPowerCurve.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C00365E8 (ProcLibTraceInvalidPowerCurve.c)
 *     IsValidPowerCurve @ 0x1C00366E8 (IsValidPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int result; // eax
  int v7; // ecx
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-1B8h]
  int v10[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  memset(a2, 0, 0x100uLL);
  LOBYTE(v4) = a1;
  ReadEnergyEquation(v4, a2);
  LOBYTE(v5) = a1;
  if ( (int)ReadPowerCurve(v5, a2) >= 0 )
  {
    if ( (unsigned __int8)IsValidPowerCurve(a2) )
    {
      a2[1] |= 1u;
    }
    else
    {
      LOBYTE(v8) = a1;
      ProcLibTraceInvalidPowerCurve(v8, ((unsigned int)a2[1] >> 1) & 0x7F, a2 + 2);
    }
  }
  v9 = a1;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v9);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v10), result < 0)
    || (v7 = v10[0], result = v10[0] - 1, (unsigned int)(v10[0] - 1) > 0x3E7F) )
  {
    v7 = 750;
  }
  *a2 = v7;
  return result;
}
