/*
 * XREFs of ExIsSafeWorkItem @ 0x140173DD0
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x140253D00 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140174B40;
}
