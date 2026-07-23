/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14003A030
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14003A020 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsNonEmptyDirectoryReparsePointAllowed(ULONG ReparseTag)
{
  return (ReparseTag & 0x10000000) != 0 || ReparseTag == -2147483624;
}
