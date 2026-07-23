/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800043E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800043F8 @ 0x1800043F8 (sub_1800043F8.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)sub_1800043F8(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
