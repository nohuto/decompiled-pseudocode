/*
 * XREFs of ObInitializeFastReference @ 0x1404A11D4
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x1405B8A80 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1405D4698 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x14081A294 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 */

__int64 __fastcall ObInitializeFastReference(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    ObReferenceObjectExWithTag(a2, 15);
    result = a2 + 15;
    *a1 = a2 + 15;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
