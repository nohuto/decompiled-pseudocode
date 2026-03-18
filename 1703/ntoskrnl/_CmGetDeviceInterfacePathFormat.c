/*
 * XREFs of _CmGetDeviceInterfacePathFormat @ 0x14056C0E8
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404878A0 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall CmGetDeviceInterfacePathFormat(__int64 a1, const WCHAR *a2, _BYTE *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  inited = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      return (unsigned int)-1073741773;
    if ( RtlPrefixUnicodeString(&stru_140288B00, &DestinationString, 0) )
    {
      *a3 = 1;
      return (unsigned int)inited;
    }
    if ( !RtlPrefixUnicodeString(&stru_140288AF0, &DestinationString, 0) )
      return (unsigned int)-1073741773;
    *a3 = 0;
  }
  return (unsigned int)inited;
}
