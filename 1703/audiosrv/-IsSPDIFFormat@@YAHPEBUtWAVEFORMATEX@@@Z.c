/*
 * XREFs of ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800040B0
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPDIFFormat(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // edx
  BOOL v2; // edi
  unsigned int v4; // r9d
  WORD wFormatTag; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  DWORD v10; // ebx
  HRESULT v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  DWORD cchName; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+18h] BYREF

  v1 = g_cCompressedPassThruFormats;
  v2 = 0;
  hKey = 0LL;
  if ( !g_cCompressedPassThruFormats )
  {
    if ( RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices\\SPDIF_Formats",
           0,
           8u,
           &hKey) )
    {
      goto LABEL_14;
    }
    v10 = 0;
    while ( 1 )
    {
      cchName = 260;
      if ( RegEnumKeyExW(hKey, v10, sz, &cchName, 0LL, 0LL, 0LL, 0LL) )
        break;
      v11 = CLSIDFromString(sz, &g_rgCompressedPassThruFormats + v10);
      v1 = g_cCompressedPassThruFormats;
      if ( v11 >= 0 )
        v1 = ++g_cCompressedPassThruFormats;
      if ( ++v10 >= 0x20 )
        goto LABEL_2;
    }
    v1 = g_cCompressedPassThruFormats;
  }
LABEL_2:
  if ( a1 )
  {
    v4 = 0;
    if ( v1 )
    {
      wFormatTag = a1->wFormatTag;
      while ( wFormatTag != 0xFFFE )
      {
        v6 = 16LL * v4;
        v7 = *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2)
           - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6 + 2);
        if ( *(_QWORD *)((char *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data1 + 2) == *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6 + 2) )
        {
          v8 = *(unsigned int *)&g_rgCompressedPassThruFormats.Data4[v6 + 2];
          v7 = *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] - v8;
          if ( *(unsigned int *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[2] == v8 )
            v7 = *(unsigned __int16 *)&GUID_00000000_0000_0010_8000_00aa00389b71.Data4[6]
               - (unsigned __int64)*(unsigned __int16 *)&g_rgCompressedPassThruFormats.Data4[v6 + 6];
        }
        if ( !v7 )
        {
          if ( *(_WORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v6) == wFormatTag )
          {
            v2 = 1;
            goto LABEL_14;
          }
          v2 = 0;
          goto LABEL_12;
        }
LABEL_13:
        if ( ++v4 >= v1 )
          goto LABEL_14;
      }
      v12 = 16LL * v4;
      v13 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
          - *(_QWORD *)((char *)&g_rgCompressedPassThruFormats.Data1 + v12);
      if ( !v13 )
        v13 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)&g_rgCompressedPassThruFormats.Data4[v12];
      v2 = v13 == 0;
LABEL_12:
      if ( v2 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( hKey )
    RegCloseKey(hKey);
  return v2;
}
