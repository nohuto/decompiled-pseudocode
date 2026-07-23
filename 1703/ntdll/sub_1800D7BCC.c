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

void __fastcall sub_1800D7BCC(int a1)
{
  char *v1; // rdi
  _RTL_SRWLOCK *v3; // rbp
  int v4; // esi
  PVOID ProcessHeap; // r15
  _QWORD *v6; // r8
  _QWORD *v7; // rbx

  v1 = (char *)&unk_18015C1D0;
  v3 = &stru_18015C1D8;
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
    dword_18015B1A0 = 1;
    stru_18015C0D8.Ptr = (PVOID)17;
  }
  RtlReleaseSRWLockShared(&stru_18015C0D8);
}
