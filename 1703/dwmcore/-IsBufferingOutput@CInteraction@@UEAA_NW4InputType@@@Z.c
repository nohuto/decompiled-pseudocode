/*
 * XREFs of ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x180166DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::IsBufferingOutput(__int64 a1)
{
  return CInteractionProcessor::IsBufferingOutput(a1 + 360);
}
