/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14003A030
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14003A020 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}
