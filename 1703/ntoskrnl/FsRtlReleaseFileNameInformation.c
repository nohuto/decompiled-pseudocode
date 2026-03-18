/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1404530F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
}
