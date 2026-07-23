/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800EE250
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EE9AC @ 0x1800EE9AC (sub_1800EE9AC.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)sub_1800EE9AC(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
