/*
 * XREFs of sub_1800D7D28 @ 0x1800D7D28
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D89C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800D7D28(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      stru_18015AF70.Ptr = (PVOID)1;
    else
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
  }
}
