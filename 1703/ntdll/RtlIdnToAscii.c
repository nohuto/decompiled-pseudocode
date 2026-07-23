/*
 * XREFs of RtlIdnToAscii @ 0x180069C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
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
  return sub_180069CA0(Flags, SourceString, SourceStringLength, DestinationString, DestinationStringLength, v6);
}
