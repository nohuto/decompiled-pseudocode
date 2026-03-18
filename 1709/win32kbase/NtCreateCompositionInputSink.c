/*
 * XREFs of NtCreateCompositionInputSink @ 0x1C0095090
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C00950CC (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 */

int __fastcall NtCreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 0, a2);
}
