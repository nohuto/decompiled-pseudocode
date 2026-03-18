/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x14048CE74
 * Callers:
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14001A0A0 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14048CF60 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepAddLuidToIndexEntry @ 0x14048CF8C (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING *v6; // [rsp+28h] [rbp-48h]
  _BYTE v7[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString[3]; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+28h] BYREF

  memset(DestinationString, 0, 0x28uLL);
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
    RtlInitUnicodeString(DestinationString, L"TSA://ProcUnique");
    v4 = *(_QWORD *)(a1 + 776);
    LODWORD(DestinationString[1].Buffer) = 2;
    *(_DWORD *)&DestinationString[1].Length = 2;
    *(_QWORD *)&DestinationString[2].Length = v7;
    *(_DWORD *)(&DestinationString[1].MaximumLength + 1) = 65;
    v6 = DestinationString;
    v10 = 4;
    v5 = 0x100000001LL;
    return AuthzBasepSetSecurityAttributesToken(v4, &v10, (__int64)&v5);
  }
  return result;
}
