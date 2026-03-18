/*
 * XREFs of ObInitializeFastReference @ 0x14048C56C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14048C3A8 (PspInitializeProcessSecurity.c)
 *     PspLocateSystemDll @ 0x1405BF580 (PspLocateSystemDll.c)
 *     SeAssignPrimaryToken @ 0x1405F09B8 (SeAssignPrimaryToken.c)
 *     SepInitializationPhase0 @ 0x14084AA68 (SepInitializationPhase0.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
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
