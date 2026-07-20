/*
 * XREFs of SmpQueryCopyDumpSetting @ 0x14000C924
 * Callers:
 *     SmpPagefileInitialize @ 0x140009E74 (SmpPagefileInitialize.c)
 * Callees:
 *     <none>
 */

bool SmpQueryCopyDumpSetting()
{
  return (SmpSystemWriteConstraintInfo & 4) != 0;
}
