/*
 * XREFs of ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801693D0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 */

__int64 __fastcall CInteraction::GetInteractionContext(
        CInteraction *this,
        int a2,
        struct IInteractionContextWrapper **a3)
{
  unsigned int v3; // eax
  __int64 v4; // r9

  v3 = anonymous_namespace_::ConvertToInputType(a2);
  return CInteractionProcessor::GetInteractionContext(v4 + 376, v3);
}
