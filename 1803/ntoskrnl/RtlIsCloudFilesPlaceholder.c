/*
 * XREFs of RtlIsCloudFilesPlaceholder @ 0x14028DB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsCloudFilesPlaceholder(ULONG FileAttributes, ULONG ReparseTag)
{
  return (FileAttributes & 0x400) != 0 && (ReparseTag & 0xFFFF0FFF) == 0x9000001A;
}
