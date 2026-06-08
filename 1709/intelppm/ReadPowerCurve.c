/*
 * XREFs of ReadPowerCurve @ 0x1C00353FC
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0035264 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00017E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     RtlStringCopyWorkerW @ 0x1C000DAB0 (RtlStringCopyWorkerW.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001D7B4 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadPowerCurve(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  size_t *v4; // r8
  unsigned int v6; // eax
  _BYTE *v7; // rsi
  unsigned int v8; // r14d
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v15[192]; // [rsp+1C0h] [rbp+C0h] BYREF

  LODWORD(cchToCopy) = a1;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\PowerCurve",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault >= 0 )
  {
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"PointCount",
                                    (__int64)&v11);
    if ( RegistryDwordValueNoDefault >= 0 )
    {
      if ( v11 )
      {
        if ( v11 > 8 )
          RegistryDwordValueNoDefault = -2147483643;
        if ( RegistryDwordValueNoDefault >= 0 )
        {
          RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v15, 0xC0uLL, v4, pszDest, cchToCopy);
          if ( RegistryDwordValueNoDefault >= 0 )
          {
            v6 = v11;
            v7 = (_BYTE *)(a2 + 8);
            v8 = 0;
            if ( !v11 )
            {
LABEL_16:
              *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (2 * v6)) & 0xFE;
              return (unsigned int)RegistryDwordValueNoDefault;
            }
            while ( 1 )
            {
              LODWORD(cchToCopya) = v8;
              RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v15, cchToCopya);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)pszDest,
                                              (__int64)L"FrequencyPercent",
                                              (__int64)v12);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              *v7 = v12[0];
              RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                              (__int64)pszDest,
                                              (__int64)L"PowerEnvelope",
                                              (__int64)&v13);
              if ( RegistryDwordValueNoDefault < 0 )
                break;
              ++v8;
              v6 = v11;
              *(_DWORD *)v7 = (v13 << 8) | (unsigned __int8)*(_DWORD *)v7;
              v7 += 4;
              if ( v8 >= v6 )
                goto LABEL_16;
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
