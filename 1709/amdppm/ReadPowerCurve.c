/*
 * XREFs of ReadPowerCurve @ 0x1C0031318
 * Callers:
 *     PopulateEnergyEstimationParameters @ 0x1C0030E68 (PopulateEnergyEstimationParameters.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0009B84 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     memset @ 0x1C000CA40 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0029830 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadPowerCurve(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  unsigned int v4; // ecx
  __int64 v6; // r8
  _WORD *v7; // rdx
  __int16 v8; // ax
  _BYTE *v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // [rsp+20h] [rbp-E0h]
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[384]; // [rsp+1C0h] [rbp+C0h] BYREF

  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\PowerCurve",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
                                  a1);
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"PointCount",
                                    (__int64)&v12);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      v4 = v12;
      if ( v12 )
      {
        if ( v12 > 8 )
          RegistryDwordValueNoDefault = -2147483643;
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          v6 = 192LL;
          RegistryDwordValueNoDefault = 0;
          v7 = v16;
          do
          {
            if ( v6 == -2147483454 )
              break;
            v8 = *(_WORD *)((char *)v7 + (char *)pszDest - v16);
            if ( !v8 )
              break;
            *v7++ = v8;
            --v6;
          }
          while ( v6 );
          if ( !v6 )
          {
            --v7;
            RegistryDwordValueNoDefault = -2147483643;
          }
          *v7 = 0;
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            v9 = (_BYTE *)(a2 + 8);
            v10 = 0;
            if ( !v4 )
            {
LABEL_22:
              *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (2 * v4)) & 0xFE;
              return (unsigned int)RegistryDwordValueNoDefault;
            }
            while ( 1 )
            {
              LODWORD(v11) = v10;
              RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v16, v11);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)pszDest,
                                              (__int64)L"FrequencyPercent",
                                              (__int64)v13);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              *v9 = v13[0];
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)pszDest,
                                              (__int64)L"PowerEnvelope",
                                              (__int64)&v14);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              ++v10;
              *(_DWORD *)v9 = (v14 << 8) | (unsigned __int8)*(_DWORD *)v9;
              v9 += 4;
              v4 = v12;
              if ( v10 >= v12 )
                goto LABEL_22;
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
  *(_DWORD *)(a2 + 4) &= 0xFFFFFF01;
  memset((void *)(a2 + 8), 0, 0x20uLL);
  return (unsigned int)RegistryDwordValueNoDefault;
}
