/*
 * XREFs of sub_1800D1EA8 @ 0x1800D1EA8
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D1950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800D1EA8(int a1)
{
  struct _PEB *v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rsi
  signed __int64 result; // rax

  v1 = NtCurrentPeb();
  if ( v1->FlsCallback )
  {
    v3 = 2032LL;
    v4 = 127LL;
    do
    {
      if ( a1 )
        *(_QWORD *)((char *)v1->FlsCallback + v3 + 8) = 1LL;
      result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)((char *)v1->FlsCallback + v3 + 8));
      v3 -= 16LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
