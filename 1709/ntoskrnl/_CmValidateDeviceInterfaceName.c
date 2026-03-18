/*
 * XREFs of _CmValidateDeviceInterfaceName @ 0x14051E570
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14044B5FC (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14044B688 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14051AE6C (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpDispatchDeviceInterface @ 0x14051C600 (_PnpDispatchDeviceInterface.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14051D41C (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1405567A8 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405D18F0 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x1400DE810 (RtlStringCchCopyNExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall CmValidateDeviceInterfaceName(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  __int16 v5; // ax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  GUID Guid; // [rsp+50h] [rbp-78h] BYREF
  wchar_t pszDest[40]; // [rsp+60h] [rbp-68h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)a2) < 0
    || (DestinationString.MaximumLength & 0xFFFEu) < 0x62
    || !RtlPrefixUnicodeString(&stru_1402B5C08, &DestinationString, 0)
    && !RtlPrefixUnicodeString(&stru_1402B5BF8, &DestinationString, 0) )
  {
    return -1073741773;
  }
  v5 = *(_WORD *)(a2 + 8);
  v6 = a2 + 8;
  if ( !v5 )
    goto LABEL_9;
  do
  {
    if ( v5 == 92 )
    {
      if ( (unsigned int)++v2 > 1 )
        return -1073741773;
      v3 = v6;
    }
    v5 = *(_WORD *)(v6 + 2);
    v6 += 2LL;
  }
  while ( v5 );
  if ( v3 )
    v7 = (v3 - a2) >> 1;
  else
LABEL_9:
    v7 = (unsigned __int64)DestinationString.Length >> 1;
  if ( v7 > 0xFFFFFFFF )
    return -1073741773;
  if ( (unsigned int)v7 < 0x30 )
    return -1073741773;
  result = RtlStringCchCopyNExW(
             pszDest,
             0x27uLL,
             (STRSAFE_PCNZWCH)(a2 + 2 * ((unsigned int)v7 - 38LL)),
             0x26uLL,
             0LL,
             0LL,
             0x800u);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( result >= 0 )
    {
      result = RtlGUIDFromString(&DestinationString, &Guid);
      if ( result < 0 )
        return -1073741773;
    }
  }
  return result;
}
