/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x18007C280
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 */

NTSTATUS __cdecl LdrQueryImageFileExecutionOptions(
        PUNICODE_STRING SubKey,
        PCWSTR ValueName,
        ULONG ValueSize,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnedLength)
{
  if ( byte_18015B26C )
    return -1073741772;
  else
    return LdrQueryImageFileExecutionOptionsEx(SubKey, ValueName, ValueSize, Buffer, BufferSize, ReturnedLength, 0);
}
