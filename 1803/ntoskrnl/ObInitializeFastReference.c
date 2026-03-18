/*
 * XREFs of ObInitializeFastReference @ 0x1404F0348
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x14063B288 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x140640A5C (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x1408BC6F0 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 */

ULONG_PTR __fastcall ObInitializeFastReference(ULONG_PTR *a1, ULONG_PTR a2)
{
  ULONG_PTR result; // rax

  result = 0LL;
  if ( a2 )
  {
    ObReferenceObjectExWithTag(a2, 15);
    result = a2 + 15;
  }
  *a1 = result;
  return result;
}
