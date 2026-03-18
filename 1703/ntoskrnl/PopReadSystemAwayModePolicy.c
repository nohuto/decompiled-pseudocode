/*
 * XREFs of PopReadSystemAwayModePolicy @ 0x140578544
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x14014CFA8 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 */

int PopReadSystemAwayModePolicy()
{
  bool v0; // bl
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v6; // [rsp+60h] [rbp-10h]

  v0 = 0;
  if ( byte_14034BB32 )
    v0 = dword_14033B6E0 != 0;
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    if ( byte_14034BB32 )
    {
      RtlInitUnicodeString(&DestinationString, L"AwayModeEnabled");
      KeyValueInformation = 0uLL;
      v6 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL
        && HIDWORD(KeyValueInformation) )
      {
        v0 = 1;
      }
    }
    result = ZwClose(KeyHandle);
  }
  byte_14034BB30 = v0;
  return result;
}
