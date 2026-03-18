/*
 * XREFs of ExIsSafeWorkItem @ 0x140192720
 * Callers:
 *     EtwTraceThreadWorkItem @ 0x1402AF4F0 (EtwTraceThreadWorkItem.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExIsSafeWorkItem(__int64 (__fastcall *a1)())
{
  return a1 == sub_140193530;
}
