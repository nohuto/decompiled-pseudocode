/*
 * XREFs of ReadEnergyEquation @ 0x1C00310C4
 * Callers:
 *     PopulateEnergyEstimationParameters @ 0x1C0030E68 (PopulateEnergyEstimationParameters.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1C0009AEC (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x1C0009B84 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  size_t v4; // rdx
  size_t v5; // rdx
  __int64 v7; // rdx
  _WORD *v8; // rcx
  __int16 v9; // ax
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // [rsp+20h] [rbp-E0h]
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[384]; // [rsp+1E0h] [rbp+E0h] BYREF

  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\EnergyEquation",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                                  a1);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"EquationIndex",
                                    (__int64)&v15);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v15);
      if ( RegistryDwordValueNoDefault >= 0 )
      {
        RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v4, pszSrc);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)pszDest,
                                          (__int64)L"NumberOfCounters",
                                          (__int64)&v14);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            if ( v14 )
            {
              if ( v14 > 0x10 )
                RegistryDwordValueNoDefault = -2147483643;
              if ( RegistryDwordValueNoDefault >= 0 )
              {
                RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, L"\\EnergyCounter");
                if ( RegistryDwordValueNoDefault >= 0 )
                {
                  v7 = 192LL;
                  RegistryDwordValueNoDefault = 0;
                  v8 = v18;
                  do
                  {
                    if ( v7 == -2147483454 )
                      break;
                    v9 = *(_WORD *)((char *)v8 + (char *)pszDest - v18);
                    if ( !v9 )
                      break;
                    *v8++ = v9;
                    --v7;
                  }
                  while ( v7 );
                  if ( !v7 )
                  {
                    --v8;
                    RegistryDwordValueNoDefault = -2147483643;
                  }
                  *v8 = 0;
                  if ( RegistryDwordValueNoDefault >= 0 )
                  {
                    v10 = v14;
                    v11 = a2 + 44;
                    v12 = 0;
                    if ( !v14 )
                    {
LABEL_27:
                      *(_DWORD *)(a2 + 40) = v10;
                      return (unsigned int)RegistryDwordValueNoDefault;
                    }
                    while ( 1 )
                    {
                      LODWORD(v13) = v12;
                      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v18, v13);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterId",
                                                      v11);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterType",
                                                      v11 + 4);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"Factor",
                                                      v11 + 8);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      v10 = v14;
                      ++v12;
                      v11 += 12LL;
                      if ( v12 >= v14 )
                        goto LABEL_27;
                    }
                  }
                }
              }
            }
            else
            {
              RegistryDwordValueNoDefault = -1073741807;
            }
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 40) = 0;
  memset((void *)(a2 + 44), 0, 0xC0uLL);
  return (unsigned int)RegistryDwordValueNoDefault;
}
