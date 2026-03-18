/*
 * XREFs of ?SupportsPointerType@CInteractionRoot@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180194EF0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ConvertToInputType @ 0x180020614 (_anonymous_namespace_--ConvertToInputType.c)
 */

__int64 __fastcall CInteractionRoot::SupportsPointerType(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned int v5; // r9d

  v2 = anonymous_namespace_::ConvertToInputType(a2);
  return CInteractionProcessor::SupportsPointerType(v3 + 32, v2, v4, v5);
}
