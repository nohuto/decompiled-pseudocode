/*
 * XREFs of wcsstr @ 0x14018A850
 * Callers:
 *     BcpGetProgressMessages @ 0x14017C468 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1402A66D0 (SmUniqueIdParseProductName.c)
 *     PopGetBitlockerKeyLocation @ 0x1404774BC (PopGetBitlockerKeyLocation.c)
 *     PiGetDeviceRegProperty @ 0x1405261D8 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x1405697C8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x140569834 (SiGetBootDeviceName.c)
 *     PfSnIsHostingApplication @ 0x14057231C (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1405878D8 (EtwpGenerateFileName.c)
 *     SiGetBiosSystemPartition @ 0x1405F12FC (SiGetBiosSystemPartition.c)
 *     BiIsWinPEBoot @ 0x140607744 (BiIsWinPEBoot.c)
 *     IopCheckIfNotNativeDriver @ 0x140719710 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140724398 (PiGetDeviceRegistryProperty.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407E4DF4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1407E5D78 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SubstringMatch @ 0x1407F555C (SubstringMatch.c)
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
