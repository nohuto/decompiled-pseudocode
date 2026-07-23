/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x1405A20B0
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1406C7608 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgVerifyService @ 0x1405A2558 (PiDevCfgVerifyService.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1405A284C (PiDevCfgBuildDriverConfigurationId.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  int ObjectProperties; // edi
  const WCHAR *v4; // rdi
  int RegistryValues; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // rsi
  void *v9; // r9
  __int64 v10; // rdx
  char v11; // al
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[20]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v18[56]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 168);
  LOWORD(v15) = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v4 = *(const WCHAR **)(a1 + 32);
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, a1 + 376);
    if ( ObjectProperties < 0 )
      goto LABEL_41;
    if ( !*(_QWORD *)(a1 + 24) )
    {
LABEL_42:
      ObjectProperties = -1073740653;
      goto LABEL_41;
    }
    v4 = *(const WCHAR **)(a1 + 32);
  }
  if ( !v4 )
    goto LABEL_42;
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[4]) = 0x1000000;
  LODWORD(v18[11]) = 117440512;
  LODWORD(v18[1]) = 288;
  LODWORD(v18[18]) = 117440512;
  v18[2] = L"Service";
  LODWORD(v18[25]) = 0x4000000;
  LODWORD(v18[8]) = 304;
  v18[9] = L"LowerFilters";
  LODWORD(v18[15]) = 304;
  v18[16] = L"UpperFilters";
  LODWORD(v18[32]) = 117440512;
  v18[23] = L"ConfigFlags";
  LODWORD(v18[29]) = 304;
  v18[24] = a1 + 368;
  LODWORD(v18[39]) = 117440512;
  v18[30] = L"IncludedInfs";
  LODWORD(v18[36]) = 304;
  v18[37] = L"IncludedConfigs";
  LODWORD(v18[46]) = 0x4000000;
  v18[44] = L"Reboot";
  LODWORD(v18[43]) = 288;
  v18[45] = a1 + 372;
  v18[3] = a1 + 272;
  v18[10] = a1 + 288;
  v18[17] = a1 + 304;
  LODWORD(v18[22]) = 292;
  v18[31] = a1 + 320;
  v18[38] = a1 + 336;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v4, (__int64)v18, 0LL);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    goto LABEL_42;
  if ( RegistryValues < 0 )
    goto LABEL_41;
  if ( *(_WORD *)(a1 + 288) <= 2u && *(_QWORD *)(a1 + 296) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 288));
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 336));
  if ( (*(_DWORD *)(a1 + 168) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 4) == 0 && *(_QWORD *)(a1 + 280) )
      RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 272));
    if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 296) )
        RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 288));
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
    }
  }
  v6 = *(const WCHAR **)(a1 + 280);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 272) )
    {
      ObjectProperties = PiDevCfgVerifyService(v6);
      if ( ObjectProperties < 0 )
        goto LABEL_42;
    }
  }
  v7 = *(const WCHAR **)(a1 + 296);
  if ( !v7 )
    goto LABEL_75;
  while ( *v7 )
  {
    ObjectProperties = PiDevCfgVerifyService(v7);
    if ( ObjectProperties < 0 )
    {
      ObjectProperties = -1073740653;
      break;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v7[v13] );
    v7 += v13 + 1;
  }
  if ( ObjectProperties >= 0 )
  {
LABEL_75:
    v8 = *(const WCHAR **)(a1 + 312);
    if ( !v8 )
      goto LABEL_26;
    while ( *v8 )
    {
      ObjectProperties = PiDevCfgVerifyService(v8);
      if ( ObjectProperties < 0 )
      {
        ObjectProperties = -1073740653;
        break;
      }
      v14 = -1LL;
      do
        ++v14;
      while ( v8[v14] );
      v8 += v14 + 1;
    }
    if ( ObjectProperties >= 0 )
    {
LABEL_26:
      if ( (*(_DWORD *)(a1 + 168) & 0x20) != 0 )
      {
LABEL_40:
        *(_DWORD *)(a1 + 168) |= 1u;
        goto LABEL_41;
      }
      memset(v17, 0, sizeof(v17));
      v9 = *(void **)(a1 + 16);
      v10 = *(_QWORD *)(a1 + 64);
      v17[0] = &DEVPKEY_DriverPackage_ClassGuid;
      LODWORD(v17[1]) = 13;
      v17[5] = &DEVPKEY_DriverPackage_ProviderName;
      v17[10] = &DEVPKEY_DriverPackage_NeedsReconfig;
      v17[12] = &v15;
      v17[2] = a1 + 224;
      v17[15] = &DEVPKEY_DriverPackage_GroupIds;
      v17[17] = &DestinationString;
      LODWORD(v17[3]) = 16;
      LODWORD(v17[6]) = 18;
      v17[7] = a1 + 256;
      HIDWORD(v17[8]) = 6;
      LODWORD(v17[11]) = 17;
      LODWORD(v17[13]) = 1;
      LODWORD(v17[16]) = 8210;
      HIDWORD(v17[18]) = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v10, 7u, v9, (__int64)v17, 4u);
      if ( ObjectProperties >= 0 )
      {
        if ( SLODWORD(v17[4]) < 0 )
        {
          *(_QWORD *)(a1 + 224) = 0LL;
          *(_QWORD *)(a1 + 232) = 0LL;
        }
        else
        {
          ObjectProperties = RtlStringFromGUIDEx((PGUID)(a1 + 224), (PUNICODE_STRING)(a1 + 240), 1u);
          if ( ObjectProperties < 0 )
            goto LABEL_41;
        }
        if ( SLODWORD(v17[9]) < 0 )
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 256), 0LL);
        v11 = v15;
        if ( SLODWORD(v17[14]) < 0 )
          v11 = 0;
        LOBYTE(v15) = v11;
        if ( v11 == -1 )
          *(_DWORD *)(a1 + 168) |= 0x40u;
        if ( SLODWORD(v17[19]) < 0 )
          RtlInitUnicodeString(&DestinationString, 0LL);
        if ( DestinationString.Buffer && DestinationString.Length > 2u )
          *(_DWORD *)(a1 + 168) |= 0x80u;
        ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
        if ( ObjectProperties >= 0 )
          goto LABEL_40;
      }
    }
  }
LABEL_41:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
