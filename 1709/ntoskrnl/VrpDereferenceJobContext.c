/*
 * XREFs of VrpDereferenceJobContext @ 0x1406A3B6C
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x1401E5E40 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
