/*
 * XREFs of ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180193410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::IsBufferingOutput(__int64 a1, int a2)
{
  return CInteractionProcessor::IsBufferingOutput(a1 + 32, a2);
}
