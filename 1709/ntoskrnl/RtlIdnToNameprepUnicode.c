/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x140724250
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x140724598 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __stdcall RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  return RtlpNameprepAsciiWorker(
           Flags,
           SourceString,
           SourceStringLength,
           DestinationString,
           DestinationStringLength,
           v6);
}
