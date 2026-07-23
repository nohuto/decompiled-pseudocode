/*
 * XREFs of FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14003A020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __cdecl FsRtlIsNonEmptyDirectoryReparsePointAllowed(ULONG ReparseTag)
{
  return RtlIsNonEmptyDirectoryReparsePointAllowed(ReparseTag);
}
