/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x18004AF80
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0 (LdrQueryImageFileExecutionOptionsEx.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptions(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG ValueSize,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  if ( byte_18015C298 )
    return -1073741772;
  else
    return LdrQueryImageFileExecutionOptionsEx(SubKey, ValueName, ValueSize, Buffer, BufferSize, ReturnedLength, 0);
}
