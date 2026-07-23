/*
 * XREFs of sub_1800D0C68 @ 0x1800D0C68
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D1950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800D0C68(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      stru_18015BF98.Ptr = (PVOID)1;
    else
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
  }
}
