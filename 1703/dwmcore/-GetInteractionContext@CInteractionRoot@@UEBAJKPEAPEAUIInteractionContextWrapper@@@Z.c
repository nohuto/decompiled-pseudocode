/*
 * XREFs of ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180166920
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x180020614 (_anonymous_namespace_--ConvertToInputType.c)
 */

__int64 __fastcall CInteractionRoot::GetInteractionContext(
        CInteractionRoot *this,
        int a2,
        struct IInteractionContextWrapper **a3)
{
  unsigned int v3; // eax
  __int64 v4; // r9

  v3 = anonymous_namespace_::ConvertToInputType(a2);
  return CInteractionProcessor::GetInteractionContext(v4 + 32, v3);
}
