/*
 * XREFs of PopulateEnergyEstimationParameters @ 0x1C0031EA4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003140C (ProcLibGlobalInit.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001008 (_TlgWrite.c)
 *     RtlStringCchPrintfW @ 0x1C000C144 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     memmove @ 0x1C000C940 (memmove.c)
 *     memset @ 0x1C000CC80 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0021D48 (GetRegistryDwordValueNoDefault.c)
 *     ReadEnergyEquation @ 0x1C0032114 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0032374 (ReadPowerCurve.c)
 */

int PopulateEnergyEstimationParameters()
{
  unsigned __int8 v0; // si
  unsigned int *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // edx
  unsigned int *v8; // r11
  unsigned int v9; // edi
  unsigned int v10; // edi
  int result; // eax
  int v13; // ecx
  UINT32 cData[2]; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v15; // [rsp+38h] [rbp-D0h] BYREF
  char v16; // [rsp+39h] [rbp-CFh] BYREF
  __int16 v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  char *v20; // [rsp+68h] [rbp-A0h]
  __int64 v21; // [rsp+70h] [rbp-98h]
  char *v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  __int16 *v25; // [rsp+88h] [rbp-80h]
  int v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+94h] [rbp-74h]
  _BYTE *v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  _BYTE v31[32]; // [rsp+A8h] [rbp-60h] BYREF
  wchar_t pszDest[192]; // [rsp+C8h] [rbp-40h] BYREF

  v0 = 0;
  v1 = (unsigned int *)&unk_1C00119A0;
  do
  {
    memset(v1, 0, 0x100uLL);
    LOBYTE(v2) = v0;
    ReadEnergyEquation(v2, v1);
    LOBYTE(v3) = v0;
    if ( (int)ReadPowerCurve(v3, v1) >= 0 )
    {
      LOBYTE(v5) = 0;
      v7 = (v1[1] >> 1) & 0x7F;
      if ( v7 < 2 || (unsigned __int8)v1[v7 + 1] > 0x64u || (v1[2] & 0xFFFFFF00) > 0x3E8000 )
      {
LABEL_13:
        if ( (_BYTE)v5 )
        {
          v1[1] |= 1u;
          goto LABEL_24;
        }
      }
      else
      {
        v5 = 1LL;
        v8 = v1 + 3;
        while ( 1 )
        {
          v6 = (const GUID *)*v8;
          v9 = v1[(unsigned int)(v5 - 1) + 2];
          v4 = (const struct _TlgProvider_t *)(unsigned __int8)v9;
          if ( (unsigned __int8)v6 <= (unsigned int)(unsigned __int8)v9 )
            break;
          v6 = (const GUID *)((unsigned int)v6 >> 8);
          if ( (unsigned int)v6 < v9 >> 8 || (unsigned int)v6 > 0x3E80 )
            break;
          v5 = (unsigned int)(v5 + 1);
          ++v8;
          if ( (unsigned int)v5 >= v7 )
          {
            LOBYTE(v5) = 1;
            goto LABEL_13;
          }
        }
      }
      v10 = (v1[1] >> 1) & 0x7F;
      if ( v10 )
        memmove(v31, v1 + 2, 4LL * v10);
      if ( (unsigned int)dword_1C0011060 > 5
        && (qword_1C0011070 & 0x400000000000LL) != 0
        && (qword_1C0011078 & 0x400000000000LL) == qword_1C0011078 )
      {
        v24 = 0;
        v27 = 0;
        v20 = (char *)&v15;
        v22 = &v16;
        v25 = &v17;
        v28 = v31;
        v30 = 0;
        v29 = 4 * v10;
        v15 = v0;
        v16 = v10;
        v17 = v10;
        v21 = 1LL;
        v23 = 1;
        v26 = 2;
        TlgWrite(v4, &unk_1C000E849, (LPCGUID)v5, v6, 6u, &pData);
      }
    }
LABEL_24:
    cData[0] = v0;
    result = RtlStringCchPrintfW(
               pszDest,
               0xC0uLL,
               L"%s\\EfficiencyClass\\%d",
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
               *(_QWORD *)cData);
    if ( result < 0
      || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)&v18), result < 0)
      || (v13 = v18, result = v18 - 1, (unsigned int)(v18 - 1) > 0x3E7F) )
    {
      v13 = 750;
      v18 = 750;
    }
    *v1 = v13;
    ++v0;
    v1 += 64;
  }
  while ( v0 < 2u );
  return result;
}
