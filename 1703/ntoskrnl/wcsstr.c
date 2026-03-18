/*
 * XREFs of wcsstr @ 0x14016BDC0
 * Callers:
 *     BcpGetProgressMessages @ 0x14015E110 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x14024D164 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x14040E124 (PopGetBitlockerKeyLocation.c)
 *     EtwpGenerateFileName @ 0x14045E0F4 (EtwpGenerateFileName.c)
 *     PiGetDeviceRegProperty @ 0x14055B3C0 (PiGetDeviceRegProperty.c)
 *     PfSnIsHostingApplication @ 0x140564E38 (PfSnIsHostingApplication.c)
 *     SiGetFirmwareBootDeviceName @ 0x140569680 (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPEBoot @ 0x140569B70 (SiIsWinPEBoot.c)
 *     BiIsWinPEBoot @ 0x14058A2A0 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140688A80 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x1406938D8 (PiGetDeviceRegistryProperty.c)
 *     SdbpOpenLocalDatabaseEx @ 0x14072D3A4 (SdbpOpenLocalDatabaseEx.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140737D3C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140738B00 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x1407397F0 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x1407468C8 (SubstringMatch.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  wchar_t v5; // ax
  signed __int64 i; // r9
  const wchar_t *v7; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  v5 = *Str;
  if ( !*Str )
    return 0LL;
  for ( i = (char *)Str - (char *)SubStr; ; i += 2LL )
  {
    v7 = SubStr;
    if ( v5 )
      break;
LABEL_9:
    if ( !*v7 )
      return v3;
    v5 = *++v3;
    if ( !*v3 )
      return 0LL;
  }
  while ( *v7 )
  {
    if ( *(const wchar_t *)((char *)v7 + i) == *v7 )
    {
      if ( *(const wchar_t *)((char *)++v7 + i) )
        continue;
    }
    goto LABEL_9;
  }
  return v3;
}
