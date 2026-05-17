/*
 * XREFs of sub_1800721C8 @ 0x1800721C8
 * Callers:
 *     sub_180072114 @ 0x180072114 (sub_180072114.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1800721C8(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  HANDLE *v5; // rsi
  unsigned __int64 UniqueThread; // r14
  void *ProcessHeap; // r15
  volatile signed __int64 *v8; // rbx
  HANDLE *v9; // rax
  _QWORD *v10; // rcx
  signed __int64 result; // rax
  unsigned __int64 v12; // rbx

  v4 = 0LL;
  v5 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v8 = (volatile signed __int64 *)((char *)&unk_18015D120 + 16 * ((UniqueThread >> 2) & 0xF));
  RtlAcquireSRWLockExclusive((unsigned __int64)(v8 + 1), a2, a3, a4);
  v9 = (HANDLE *)*v8;
  if ( *v8 )
  {
    do
    {
      v10 = v9[1];
      if ( *v9 == (HANDLE)UniqueThread )
      {
        if ( v5 )
          v5[1] = v10;
        else
          *v8 = (volatile signed __int64)v10;
        v9[1] = (HANDLE)v4;
        v4 = (unsigned __int64)v9;
        v9 = v5;
      }
      v5 = v9;
      v9 = (HANDLE *)v10;
    }
    while ( v10 );
  }
  result = RtlReleaseSRWLockExclusive(v8 + 1);
  if ( v4 )
  {
    do
    {
      v12 = *(_QWORD *)(v4 + 8);
      result = RtlFreeHeap((__int64)ProcessHeap, 0, v4);
      v4 = v12;
    }
    while ( v12 );
  }
  return result;
}
