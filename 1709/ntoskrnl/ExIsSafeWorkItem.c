/*
 * XREFs of ExIsSafeWorkItem @ 0x140168640
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x14027BA30 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140169480;
}
