/*
 * XREFs of FsRtlQueryMaximumVirtualDiskNestingLevel @ 0x140166A80
 * Callers:
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140135BE0 (FsRtlGetVirtualDiskNestingLevel.c)
 * Callees:
 *     FsRtlpGetMaxVirtualDiskNestingLevel @ 0x140166AA8 (FsRtlpGetMaxVirtualDiskNestingLevel.c)
 */

ULONG FsRtlQueryMaximumVirtualDiskNestingLevel(void)
{
  ULONG result; // eax

  result = FsRtlVirtualDiskMaxTreeDepth;
  if ( FsRtlVirtualDiskMaxTreeDepth == -1 )
  {
    result = FsRtlpGetMaxVirtualDiskNestingLevel();
    FsRtlVirtualDiskMaxTreeDepth = result;
  }
  return result;
}
