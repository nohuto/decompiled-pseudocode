/*
 * XREFs of NtCreateCompositionInputSink @ 0x1C000BD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NtCreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 0, a2);
}
