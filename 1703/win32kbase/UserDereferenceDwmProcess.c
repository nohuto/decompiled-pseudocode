/*
 * XREFs of UserDereferenceDwmProcess @ 0x1C007D170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall UserDereferenceDwmProcess(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObject(a1);
  return result;
}
