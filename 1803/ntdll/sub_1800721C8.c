/*
 * XREFs of sub_1800721C8 @ 0x1800721C8
 * Callers:
 *     sub_180072114 @ 0x180072114 (sub_180072114.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void sub_1800721C8()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rsi
  unsigned __int64 UniqueThread; // r14
  PVOID ProcessHeap; // r15
  _RTL_SRWLOCK *v4; // rbx
  _QWORD *Ptr; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v4 = (_RTL_SRWLOCK *)((char *)&unk_18015D120 + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v4 + 1);
  Ptr = v4->Ptr;
  if ( v4->Ptr )
  {
    do
    {
      v6 = (_QWORD *)Ptr[1];
      if ( *Ptr == UniqueThread )
      {
        if ( v1 )
          v1[1] = v6;
        else
          v4->Ptr = v6;
        Ptr[1] = v0;
        v0 = Ptr;
        Ptr = v1;
      }
      v1 = Ptr;
      Ptr = v6;
    }
    while ( v6 );
  }
  RtlReleaseSRWLockExclusive(v4 + 1);
  if ( v0 )
  {
    do
    {
      v7 = (_QWORD *)v0[1];
      RtlFreeHeap(ProcessHeap, 0, v0);
      v0 = v7;
    }
    while ( v7 );
  }
}
