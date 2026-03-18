/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x1404A16F4
 * Callers:
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400654EC (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404A17E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepAddLuidToIndexEntry @ 0x1404A1810 (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  _BYTE *v6; // [rsp+28h] [rbp-48h]
  _BYTE v7[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  _BYTE DestinationString[40]; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+28h] BYREF

  memset(DestinationString, 0, sizeof(DestinationString));
  v5 = 0LL;
  v6 = 0LL;
  v11 = 0LL;
  v8 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v8, v7, &v11);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = 1;
    SepRefDerefLuidToIndexEntryIfNecessary(a1, v3);
    *(_QWORD *)(a1 + 1136) = v11;
    RtlInitUnicodeString((PUNICODE_STRING)DestinationString, L"TSA://ProcUnique");
    v4 = *(_DWORD **)(a1 + 776);
    *(_DWORD *)&DestinationString[24] = 2;
    *(_DWORD *)&DestinationString[16] = 2;
    *(_QWORD *)&DestinationString[32] = v7;
    *(_DWORD *)&DestinationString[20] = 65;
    v6 = DestinationString;
    v10 = 4;
    v5 = 0x100000001LL;
    return AuthzBasepSetSecurityAttributesToken(v4, &v10, (__int64)&v5);
  }
  return result;
}
