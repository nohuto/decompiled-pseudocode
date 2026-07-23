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

void __fastcall sub_1800D09C4(int a1)
{
  char *v1; // rdi
  _RTL_SRWLOCK *v3; // rbp
  int v4; // esi
  PVOID ProcessHeap; // r15
  _QWORD *v6; // r8
  _QWORD *v7; // rbx

  v1 = (char *)&unk_18015D210;
  v3 = &stru_18015D218;
  v4 = 15;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( a1 )
    {
      v6 = *(_QWORD **)v1;
      if ( *(_QWORD *)v1 )
      {
        do
        {
          v7 = (_QWORD *)v6[1];
          RtlFreeHeap(ProcessHeap, 0, v6);
          v6 = v7;
        }
        while ( v7 );
        *(_QWORD *)v1 = 0LL;
      }
      *((_QWORD *)v1 + 1) = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
    v3 -= 2;
    v1 -= 16;
    --v4;
  }
  while ( v4 >= 0 );
  if ( a1 )
  {
    dword_18015C1C0 = 1;
    stru_18015D118.Ptr = (PVOID)17;
  }
  RtlReleaseSRWLockShared(&stru_18015D118);
}
