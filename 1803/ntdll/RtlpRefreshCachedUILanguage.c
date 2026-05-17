/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x1800FA3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800362CC @ 0x1800362CC (sub_1800362CC.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwFlushInstallUILanguage @ 0x18009C6B0 (ZwFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x18009C890 (ZwGetMUIRegistryInfo.c)
 *     ZwQueryInstallUILanguage @ 0x18009D3B0 (ZwQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString)
{
  int InstallUILanguage; // ebx
  unsigned __int16 v3; // si
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  __int16 v7; // [rsp+80h] [rbp+40h] BYREF
  int v8; // [rsp+88h] [rbp+48h] BYREF

  v8 = 0;
  v7 = -1;
  v5 = 0LL;
  if ( SourceString )
  {
    InstallUILanguage = ZwQueryInstallUILanguage();
    if ( InstallUILanguage >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v8) )
      {
        v3 = v8;
        InstallUILanguage = ZwFlushInstallUILanguage();
        if ( InstallUILanguage >= 0 )
        {
          InstallUILanguage = RtlpCreateProcessRegistryInfo(&v5);
          if ( InstallUILanguage >= 0 )
          {
            InstallUILanguage = sub_1800362CC(v5, v3, 1, &v7);
            if ( InstallUILanguage < 0 )
              ZwFlushInstallUILanguage();
            else
              InstallUILanguage = ZwFlushInstallUILanguage();
            ZwGetMUIRegistryInfo();
          }
        }
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InstallUILanguage;
}
