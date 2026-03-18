/*
 * XREFs of ?SupportsPointerType@CInteractionRoot@@UEBAHKW4SupportedTypeOption@@@Z @ 0x1801A3EB0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x1800921C4 (_anonymous_namespace_--ConvertToInputType.c)
 */

__int64 __fastcall CInteractionRoot::SupportsPointerType(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // r8d

  v2 = anonymous_namespace_::ConvertToInputType(a2);
  return CInteractionProcessor::SupportsPointerType((CInteractionProcessor *)(v3 + 32), v2, v4);
}
