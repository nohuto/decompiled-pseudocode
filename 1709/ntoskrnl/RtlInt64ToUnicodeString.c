/*
 * XREFs of RtlInt64ToUnicodeString @ 0x1404DE870
 * Callers:
 *     ExpWnfComposeValueName @ 0x1404E0DE8 (ExpWnfComposeValueName.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlLargeIntegerToChar @ 0x1404DEA80 (RtlLargeIntegerToChar.c)
 */

NTSTATUS __stdcall RtlInt64ToUnicodeString(ULONGLONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-78h] BYREF
  CHAR v7[80]; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&SourceString.Length = Value;
  result = RtlLargeIntegerToChar((PLARGE_INTEGER)&SourceString, Base, 0x41u, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
