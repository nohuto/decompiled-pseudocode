/*
 * XREFs of NtCreateImplicitCompositionInputSink @ 0x1C000C080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NtCreateImplicitCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 1, a2);
}
