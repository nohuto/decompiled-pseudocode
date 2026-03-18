/*
 * XREFs of KiLoadMTRRTarget @ 0x140426BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140426BF0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
