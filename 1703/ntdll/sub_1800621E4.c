/*
 * XREFs of sub_1800621E4 @ 0x1800621E4
 * Callers:
 *     sub_18006227C @ 0x18006227C (sub_18006227C.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlSetEnvironmentVariable @ 0x180062E10 (RtlSetEnvironmentVariable.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

NTSTATUS __fastcall sub_1800621E4(WCHAR a1)
{
  _UNICODE_STRING Value; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  WCHAR SourceString[2]; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+44h] [rbp-1Ch]
  WCHAR v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+4Ah] [rbp-16h]
  __int16 v9; // [rsp+4Eh] [rbp-12h]

  SourceString[1] = a1;
  v6 = 58;
  SourceString[0] = 61;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v7 = a1;
  v8 = 6029370;
  v9 = 0;
  RtlInitUnicodeString(&Value, &v7);
  return RtlSetEnvironmentVariable(0LL, &DestinationString, &Value);
}
