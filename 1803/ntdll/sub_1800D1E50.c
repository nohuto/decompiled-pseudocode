/*
 * XREFs of sub_1800D1E50 @ 0x1800D1E50
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800D1E50(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  struct _PEB *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  signed __int64 result; // rax

  v4 = NtCurrentPeb();
  if ( v4->FlsCallback )
  {
    v5 = 16LL;
    v6 = 127LL;
    do
    {
      result = RtlAcquireSRWLockExclusive((unsigned __int64)v4->FlsCallback + v5 + 8, a2, a3, a4);
      v5 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
