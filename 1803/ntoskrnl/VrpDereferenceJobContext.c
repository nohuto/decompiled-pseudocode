/*
 * XREFs of VrpDereferenceJobContext @ 0x1407081DC
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x1402234A0 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
