/*
 * XREFs of FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14012BE20
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x14012BE40 (RtlIsNonEmptyDirectoryReparsePointAllowed.c)
 */

BOOLEAN __fastcall FsRtlIsNonEmptyDirectoryReparsePointAllowed(ULONG a1)
{
  return RtlIsNonEmptyDirectoryReparsePointAllowed(a1);
}
