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

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  ULONG v2; // edi
  int v5; // ebx
  unsigned __int16 v6; // si
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  LANGID InstallUILanguageId; // [rsp+70h] [rbp+30h] BYREF
  __int16 v11; // [rsp+80h] [rbp+40h] BYREF
  DWORD Lcid; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  Lcid = 0;
  InstallUILanguageId = 0;
  v11 = -1;
  v8 = 0LL;
  if ( SourceString )
  {
    v5 = ZwQueryInstallUILanguage(&InstallUILanguageId);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
      {
        v6 = Lcid;
        v5 = ZwFlushInstallUILanguage(Lcid, 0);
        if ( v5 >= 0 )
        {
          v5 = RtlpCreateProcessRegistryInfo(&v8);
          if ( v5 >= 0 )
          {
            v5 = sub_1800362CC(v8, v6, 1, &v11);
            if ( v5 < 0 )
            {
              ZwFlushInstallUILanguage(InstallUILanguageId, 0);
            }
            else
            {
              LOBYTE(v2) = a2 != 0;
              v5 = ZwFlushInstallUILanguage(v6, v2);
            }
            ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
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
  return (unsigned int)v5;
}
