/*
 * XREFs of RtlIdnToAscii @ 0x180067FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 */

NTSTATUS __cdecl RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return sub_180068000(Flags, SourceString, SourceStringLength, DestinationString, DestinationStringLength, v6);
}
