/*
 * XREFs of ReadEnergyEquation @ 0x1C0035340
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0035264 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00017E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     RtlStringCchCatW @ 0x1C000DA48 (RtlStringCchCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C000DAB0 (RtlStringCopyWorkerW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadEnergyEquation(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  size_t v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  wchar_t *v8; // rcx
  __int64 v9; // rdx
  wchar_t *v10; // rax
  __int64 v11; // rcx
  char *v12; // rdx
  wchar_t v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rsi
  unsigned int v16; // ebp
  size_t cchToCopy; // [rsp+20h] [rbp-368h]
  size_t cchToCopya; // [rsp+20h] [rbp-368h]
  unsigned int v19; // [rsp+30h] [rbp-358h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-354h] BYREF
  wchar_t pszSrc[20]; // [rsp+38h] [rbp-350h] BYREF
  wchar_t pszDest[192]; // [rsp+60h] [rbp-328h] BYREF
  wchar_t v23[192]; // [rsp+1E0h] [rbp-1A8h] BYREF

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
                                    (__int64)&v20);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszSrc, 0x10uLL, L"\\%d", v20);
      if ( RegistryDwordValueNoDefault >= 0 )
      {
        RegistryDwordValueNoDefault = RtlStringCchCatW(pszDest, v5, pszSrc);
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                          (__int64)pszDest,
                                          (__int64)L"NumberOfCounters",
                                          (__int64)&v19);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            if ( v19 )
            {
              if ( v19 <= 0x10 )
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
                  v10 = &pszDest[v9];
                  RegistryDwordValueNoDefault = 0;
                  v11 = 192 - v9;
                  if ( v9 == 192 )
                    goto LABEL_26;
                  v6 = 2147483646LL;
                  v12 = (char *)((char *)L"\\EnergyCounter" - (char *)v10);
                  while ( v6 )
                  {
                    v13 = *(wchar_t *)((char *)v10 + (_QWORD)v12);
                    if ( !v13 )
                      break;
                    *v10 = v13;
                    --v6;
                    ++v10;
                    if ( !--v11 )
                      goto LABEL_26;
                  }
                  if ( !v11 )
                  {
LABEL_26:
                    --v10;
                    RegistryDwordValueNoDefault = -2147483643;
                  }
                  *v10 = 0;
                }
                if ( RegistryDwordValueNoDefault >= 0 )
                {
                  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v23, 0xC0uLL, (size_t *)v6, pszDest, cchToCopy);
                  if ( RegistryDwordValueNoDefault >= 0 )
                  {
                    v14 = v19;
                    v15 = a2 + 44;
                    v16 = 0;
                    if ( !v19 )
                    {
LABEL_36:
                      *(_DWORD *)(a2 + 40) = v14;
                      return (unsigned int)RegistryDwordValueNoDefault;
                    }
                    while ( 1 )
                    {
                      LODWORD(cchToCopya) = v16;
                      RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v23, cchToCopya);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterId",
                                                      v15);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"CounterType",
                                                      v15 + 4);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                                      (__int64)pszDest,
                                                      (__int64)L"Factor",
                                                      v15 + 8);
                      if ( RegistryDwordValueNoDefault < 0 )
                        break;
                      v14 = v19;
                      ++v16;
                      v15 += 12LL;
                      if ( v16 >= v19 )
                        goto LABEL_36;
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
