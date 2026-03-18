/*
 * XREFs of _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x14073F1B0
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140740D1C (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassMappedPropertyFromCoInstallers(_QWORD *a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  int CachedContextBaseKey; // eax
  NTSTATUS inited; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 11, &KeyHandle);
  if ( CachedContextBaseKey >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
      return (unsigned int)inited;
  }
  else
  {
    return (unsigned int)CachedContextBaseKey;
  }
  return v2;
}
