/*
 * XREFs of sub_180079C20 @ 0x180079C20
 * Callers:
 *     sub_180079B6C @ 0x180079B6C (sub_180079B6C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 sub_180079C20()
{
  unsigned __int64 v0; // rdi
  HANDLE *v1; // rsi
  unsigned __int64 UniqueThread; // r14
  void *ProcessHeap; // r15
  volatile signed __int64 *v4; // rbx
  HANDLE *v5; // rax
  signed __int64 result; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v4 = (volatile signed __int64 *)((char *)&unk_18015C0E0 + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v4 + 1);
  v5 = (HANDLE *)*v4;
  if ( *v4 )
  {
    do
    {
      v7 = v5[1];
      if ( *v5 == (HANDLE)UniqueThread )
      {
        if ( v1 )
          v1[1] = v7;
        else
          *v4 = (volatile signed __int64)v7;
        v5[1] = (HANDLE)v0;
        v0 = (unsigned __int64)v5;
        v5 = v1;
      }
      v1 = v5;
      v5 = (HANDLE *)v7;
    }
    while ( v7 );
  }
  result = RtlReleaseSRWLockExclusive(v4 + 1);
  if ( v0 )
  {
    do
    {
      v8 = *(_QWORD *)(v0 + 8);
      result = RtlFreeHeap((__int64)ProcessHeap, 0, v0);
      v0 = v8;
    }
    while ( v8 );
  }
  return result;
}
