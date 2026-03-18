/*
 * XREFs of KiLoadMTRRTarget @ 0x140412B80
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x14040E400 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
