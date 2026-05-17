/*
 * XREFs of sub_1800D0C68 @ 0x1800D0C68
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D1950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1800D0C68(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  signed __int64 result; // rax

  if ( !a1 )
    return RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, a2, a3, a4);
  if ( a1 != 1 )
    return RtlReleaseSRWLockExclusive(&qword_18015BF98);
  qword_18015BF98 = 1LL;
  return result;
}
