/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1400CCDC0
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1400CCDA0 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsNonEmptyDirectoryReparsePointAllowed(ULONG ReparseTag)
{
  return (ReparseTag & 0x10000000) != 0 || ReparseTag == -2147483624;
}
