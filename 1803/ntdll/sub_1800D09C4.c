/*
 * XREFs of sub_1800D09C4 @ 0x1800D09C4
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D1950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800D09C4(int a1)
{
  unsigned __int64 *v1; // rdi
  volatile signed __int64 *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx

  v1 = (unsigned __int64 *)&unk_18015D210;
  v3 = (volatile signed __int64 *)&unk_18015D218;
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
    dword_18015C1C0 = 1;
    qword_18015D118 = 17LL;
  }
  return RtlReleaseSRWLockShared(&qword_18015D118);
}
