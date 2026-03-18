/*
 * XREFs of KiLoadMTRRTarget @ 0x14047CDA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140477C20 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
