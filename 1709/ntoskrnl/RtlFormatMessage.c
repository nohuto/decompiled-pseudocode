/*
 * XREFs of RtlFormatMessage @ 0x14071F150
 * Callers:
 *     <none>
 * Callees:
 *     RtlFormatMessageEx @ 0x14071F1A4 (RtlFormatMessageEx.c)
 */

NTSTATUS __stdcall RtlFormatMessage(
        PWSTR Message,
        ULONG MaxWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  return RtlFormatMessageEx(
           (int)Message,
           MaxWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           (__int64)Arguments,
           Buffer,
           BufferSize,
           (__int64)ReturnLength);
}
