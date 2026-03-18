/*
 * XREFs of ExpWnfDeletePermanentStateData @ 0x140762A7C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x1404E0DE8 (ExpWnfComposeValueName.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x14059D7A8 (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x140762C54 (ExpWnfEnumeratePermanentDataStores.c)
 */

int __fastcall ExpWnfDeletePermanentStateData(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  int result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-38h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v9;
  v3 = (a2 >> 4) & 3;
  v4 = (a2 >> 6) & 0xF;
  ExpWnfComposeValueName(a2, &ValueName);
  v5 = 0;
  if ( a1 )
    result = ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v3, 0LL, &KeyHandle);
  else
    result = ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, 0LL, &KeyHandle);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      result = ZwDeleteValueKey(KeyHandle, &ValueName);
      if ( a1 )
        break;
      ZwClose(KeyHandle);
      if ( (int)ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, (unsigned int)++v5, &KeyHandle) < 0 )
        return 0;
    }
  }
  return result;
}
