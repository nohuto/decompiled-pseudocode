/*
 * XREFs of PopQueryPowerButtonBugcheckConfiguration @ 0x140139FA0
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x1405B83C0 (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall PopQueryPowerButtonBugcheckConfiguration(HANDLE KeyHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+5Ch] [rbp-24h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]

  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result < 0 || v9 != 4 || v10 != 4 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result < 0 || v9 != 4 || v10 != 4 )
      return -1073741823;
  }
  if ( v11 )
    *a2 = 1;
  return result;
}
