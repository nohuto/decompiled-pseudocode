/*
 * XREFs of ExpWnfDeletePermanentName @ 0x140451204
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x1404E0DE8 (ExpWnfComposeValueName.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404E1054 (ExpWnfGetNameStoreRegistryRoot.c)
 */

NTSTATUS __fastcall ExpWnfDeletePermanentName(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v5;
  ExpWnfComposeValueName(a1, &ValueName);
  result = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, &KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}
