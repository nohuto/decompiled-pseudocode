/*
 * XREFs of sub_180049C00 @ 0x180049C00
 * Callers:
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

volatile signed __int32 *__fastcall sub_180049C00(int a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // rax
  unsigned __int64 v6; // rbx
  volatile signed __int32 *result; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v15; // rdi
  __int64 **v16; // rdx
  __int64 *v17; // rcx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 48), a2, a3, a4);
  for ( i = *(_QWORD **)(qword_18015D058 + 32); i != (_QWORD *)(qword_18015D058 + 32); i = (_QWORD *)*i )
  {
    v6 = (unsigned __int64)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 48));
      return (volatile signed __int32 *)v6;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 48));
  result = (volatile signed __int32 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v6 = (unsigned __int64)result;
  if ( result )
  {
    memset((void *)result, 0, 0x28uLL);
    v8 = qword_18015D058;
    *(_DWORD *)v6 = 2623763;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_DWORD *)(v6 + 4) = a1;
    *(_DWORD *)(v6 + 32) = 1;
    RtlAcquireSRWLockExclusive(v8 + 48, v9, v10, v11);
    v12 = qword_18015D058;
    v13 = qword_18015D058 + 32;
    for ( j = *(_QWORD **)(qword_18015D058 + 32); j != (_QWORD *)v13; j = (_QWORD *)*j )
    {
      v15 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v15 + 8);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015D058 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        return v15;
      }
    }
    v16 = *(__int64 ***)(qword_18015D058 + 40);
    v17 = (__int64 *)(v6 + 8);
    if ( *v16 != (__int64 *)v13 )
      __fastfail(3u);
    *v17 = v13;
    *(_QWORD *)(v6 + 16) = v16;
    *v16 = v17;
    *(_QWORD *)(v13 + 8) = v17;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v12 + 48));
    return (volatile signed __int32 *)v6;
  }
  return result;
}
