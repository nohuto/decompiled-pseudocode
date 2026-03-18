/*
 * XREFs of ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x1801A2140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CInteractionRoot::IsBufferingOutput(__int64 a1, int a2)
{
  return CInteractionProcessor::IsBufferingOutput((CInteractionProcessor *)(a1 + 32), a2);
}
