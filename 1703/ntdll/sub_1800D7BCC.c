/*
 * XREFs of sub_1800D7BCC @ 0x1800D7BCC
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D89C0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall sub_1800D7BCC(int a1)
{
  unsigned __int64 *v1; // rdi
  volatile signed __int64 *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx

  v1 = (unsigned __int64 *)&unk_18015C1D0;
  v3 = (volatile signed __int64 *)&unk_18015C1D8;
  v4 = 15;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( a1 )
    {
      v6 = *v1;
      if ( *v1 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 8);
          RtlFreeHeap((__int64)ProcessHeap, 0, v6);
          v6 = v7;
        }
        while ( v7 );
        *v1 = 0LL;
      }
      v1[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
    v3 -= 2;
    v1 -= 2;
    --v4;
  }
  while ( v4 >= 0 );
  if ( a1 )
  {
    dword_18015B1A0 = 1;
    qword_18015C0D8 = 17LL;
  }
  return RtlReleaseSRWLockShared(&qword_18015C0D8);
}
