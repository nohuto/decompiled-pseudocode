/*
 * XREFs of ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x1800616F0
 * Callers:
 *     ?IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089D3C (-IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089E5C (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1800924CC (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 * Callees:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180061810 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORDCore(WCHAR *a1, int a2, int a3, _DWORD *a4)
{
  char v7; // bl
  unsigned __int8 *v8; // r9
  int FlightedValue; // eax
  unsigned int v10; // ebx
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  _BYTE v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  int pvData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h]
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a4 = 0;
  if ( a2 != 1 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      pdwType);
    return v10;
  }
  v7 = 0;
  *(_DWORD *)&v17[2] = 0;
  *(_DWORD *)v17 = 1;
  string = 0LL;
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
          a1,
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
  {
    *(_DWORD *)&v17[2] = pvData;
    v7 = 1;
  }
  if ( v7 )
  {
    v10 = 0;
    goto LABEL_9;
  }
  v14[0] = 0;
  FlightedValue = CortanaFeatureConfiguration::GetFlightedValue(
                    (CortanaFeatureConfiguration *)a1,
                    v17,
                    (struct CortanaFeatureConfiguration::FeatureValue *)v14,
                    v8);
  v10 = FlightedValue;
  if ( FlightedValue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)(unsigned int)FlightedValue,
      pdwTypea);
  }
  else
  {
    v10 = 0;
    if ( v14[0] )
    {
LABEL_9:
      *a4 = *(_DWORD *)&v17[2];
      return v10;
    }
    *(_DWORD *)&v17[2] = a3;
  }
  if ( (v10 & 0x80000000) == 0 )
    goto LABEL_9;
  return v10;
}
