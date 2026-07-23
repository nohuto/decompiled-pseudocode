/*
 * XREFs of SepSecureBootCheckForUpdates @ 0x140835554
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140823478 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 */

int SepSecureBootCheckForUpdates()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-9h] BYREF
  ULONG MatchingChangeStamp; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+84h] [rbp+3Bh]
  int v6; // [rsp+88h] [rbp+3Fh]
  int v7; // [rsp+8Ch] [rbp+43h]

  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_14028E660,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &MatchingChangeStamp);
    if ( result >= 0 && v5 == 4 && v6 == 4 && v7 )
      result = NtUpdateWnfStateData(&WNF_SBS_UPDATE_AVAILABLE, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
