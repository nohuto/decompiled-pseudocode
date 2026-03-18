/*
 * XREFs of ExpWnfDeletePermanentName @ 0x1405679F4
 * Callers:
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140517AAC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x140517BE4 (ExpWnfComposeValueName.c)
 */

int __fastcall ExpWnfDeletePermanentName(unsigned __int64 a1)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v5;
  ExpWnfComposeValueName(a1, &ValueName);
  result = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}
