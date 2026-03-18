/*
 * XREFs of wcsstr @ 0x1401606A0
 * Callers:
 *     BcpGetProgressMessages @ 0x14013E908 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1402723AC (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x140431554 (PopGetBitlockerKeyLocation.c)
 *     PfSnIsHostingApplication @ 0x140448228 (PfSnIsHostingApplication.c)
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057DBD8 (SiGetFirmwareBootDeviceName.c)
 *     SiIsWinPEBoot @ 0x14057E0DC (SiIsWinPEBoot.c)
 *     EtwpGenerateFileName @ 0x14059E648 (EtwpGenerateFileName.c)
 *     BiIsWinPEBoot @ 0x1405AE824 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x1406B4A60 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14077D278 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x14077E0A0 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x140788D9C (SubstringMatch.c)
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
