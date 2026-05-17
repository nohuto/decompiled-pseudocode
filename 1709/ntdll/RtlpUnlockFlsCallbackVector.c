/*
 * XREFs of RtlpUnlockFlsCallbackVector @ 0x1800D7E18
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D78C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D7B40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpUnlockFlsCallbackVector(int a1)
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
