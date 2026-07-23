/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800F4410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return sub_180068000(
           Flags,
           (WCHAR *)SourceString,
           *(__int64 *)&SourceStringLength,
           DestinationString,
           DestinationStringLength,
           0);
}
