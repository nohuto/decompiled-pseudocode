/*
 * XREFs of ExpWnfDeletePermanentName @ 0x1404390F4
 * Callers:
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404C01E8 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1404C0378 (ExpWnfComposeValueName.c)
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
