/*
 * XREFs of MyRegQueryUlong @ 0x1C005A140
 * Callers:
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C0059578 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C00596F4 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C00597B8 (ReadTestOverrideValue.c)
 *     UpdateUcmIsPresentBit @ 0x1C0059D14 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 */

__int64 __fastcall MyRegQueryUlong(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS v5; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]

  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength);
  if ( v5 >= 0 )
  {
    if ( v10 == 4 )
      *a3 = v11;
    else
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
