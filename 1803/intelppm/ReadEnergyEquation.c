/*
 * XREFs of ReadEnergyEquation @ 0x1C0036450
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0036358 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00039D4 (RtlStringCchPrintfW.c)
 *     RtlStringCopyWorkerW @ 0x1C0003A50 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C0003C40 (__security_check_cookie.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     RtlStringCchCatW @ 0x1C000DE38 (RtlStringCchCatW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023E80 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  size_t v5; // rdx
  size_t *v6; // r8
  __int64 v7; // rax
  wchar_t *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  char *v12; // rdx
  __int16 v13; // r9
  size_t *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rsi
  unsigned int v17; // ebp
  size_t cchToCopy; // [rsp+20h] [rbp-368h]
  size_t cchToCopya; // [rsp+20h] [rbp-368h]
  unsigned int v20; // [rsp+30h] [rbp-358h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-354h] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-350h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-328h] BYREF
  wchar_t v24[192]; // [rsp+1E0h] [rbp-1A8h] BYREF

  LODWORD(cchToCopy) = a1;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\EnergyEquation",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"EquationIndex",
                                    (__int64)&v21);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v21);
      if ( RegistryDwordValueNoDefault >= 0 )
      {
        RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, pszSrc);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)pszDest,
                                          (__int64)L"NumberOfCounters",
                                          (__int64)&v20);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            if ( v20 )
            {
              if ( v20 <= 0x10 )
              {
                v7 = 192LL;
                v8 = pszDest;
                do
                {
                  if ( !*v8 )
                    break;
                  ++v8;
                  --v7;
                }
                while ( v7 );
                RegistryDwordValueNoDefault = -1073741811;
                if ( v7 )
                {
                  RegistryDwordValueNoDefault = 0;
                  v9 = 192 - v7;
                }
                else
                {
                  v9 = 0LL;
                }
                if ( v7 )
                {
                  v6 = (size_t *)&pszDest[v9];
                  v10 = 192 - v9;
                  if ( v9 != 192 )
                  {
                    v11 = 2147483646LL;
                    v12 = (char *)((char *)L"\\EnergyCounter" - (char *)v6);
                    do
                    {
                      if ( !v11 )
                        break;
                      v13 = *(_WORD *)((char *)v6 + (_QWORD)v12);
                      if ( !v13 )
                        break;
                      *(_WORD *)v6 = v13;
                      --v11;
                      v6 = (size_t *)((char *)v6 + 2);
                      --v10;
                    }
                    while ( v10 );
                  }
                  v14 = (size_t *)((char *)v6 - 2);
                  RegistryDwordValueNoDefault = -2147483643;
                  if ( v10 )
                  {
                    v14 = v6;
                    RegistryDwordValueNoDefault = 0;
                  }
                  *(_WORD *)v14 = 0;
                }
                if ( RegistryDwordValueNoDefault >= 0 )
                {
                  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v24, 0xC0uLL, v6, pszDest, cchToCopy);
                  if ( RegistryDwordValueNoDefault >= 0 )
                  {
                    v15 = v20;
                    v16 = a2 + 44;
                    v17 = 0;
                    if ( !v20 )
                    {
LABEL_35:
                      *(_DWORD *)(a2 + 40) = v15;
                      return (unsigned int)RegistryDwordValueNoDefault;
                    }
                    while ( 1 )
                    {
                      LODWORD(cchToCopya) = v17;
                      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v24, cchToCopya);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterId",
                                                      v16);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterType",
                                                      v16 + 4);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"Factor",
                                                      v16 + 8);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      v15 = v20;
                      ++v17;
                      v16 += 12LL;
                      if ( v17 >= v20 )
                        goto LABEL_35;
                    }
                  }
                }
              }
              else
              {
                RegistryDwordValueNoDefault = -2147483643;
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
