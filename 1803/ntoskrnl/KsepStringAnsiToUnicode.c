/*
 * XREFs of KsepStringAnsiToUnicode @ 0x140623958
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1408A5680 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitAcpiOemInfo @ 0x1408A5AC8 (KsepMatchInitAcpiOemInfo.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall KsepStringAnsiToUnicode(wchar_t *a1, unsigned __int16 a2, char *a3, unsigned __int16 a4)
{
  ANSI_STRING v5; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-18h] BYREF

  v6.Buffer = a1;
  v6.MaximumLength = a2;
  v5.Buffer = a3;
  v6.Length = 0;
  v5.MaximumLength = a4;
  v5.Length = a4;
  return RtlAnsiStringToUnicodeString(&v6, &v5, 0);
}
