/*
 * XREFs of ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x180191CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetInteractionContext(__int64 a1)
{
  return CInteractionProcessor::GetInteractionContext(a1 + 32);
}
