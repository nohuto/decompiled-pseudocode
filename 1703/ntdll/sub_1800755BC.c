/*
 * XREFs of sub_1800755BC @ 0x1800755BC
 * Callers:
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

volatile signed __int32 *__fastcall sub_1800755BC(int a1)
{
  _QWORD *i; // rax
  unsigned __int64 v3; // rbx
  volatile signed __int32 *result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 **v10; // rdx
  __int64 *v11; // rcx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015C008 + 48));
  for ( i = *(_QWORD **)(qword_18015C008 + 32); i != (_QWORD *)(qword_18015C008 + 32); i = (_QWORD *)*i )
  {
    v3 = (unsigned __int64)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 32));
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18015C008 + 48));
      return (volatile signed __int32 *)v3;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18015C008 + 48));
  result = (volatile signed __int32 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v3 = (unsigned __int64)result;
  if ( result )
  {
    memset((void *)result, 0, 0x28uLL);
    v5 = qword_18015C008;
    *(_DWORD *)v3 = 2623763;
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_DWORD *)(v3 + 4) = a1;
    *(_DWORD *)(v3 + 32) = 1;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v5 + 48));
    v6 = qword_18015C008;
    v7 = qword_18015C008 + 32;
    for ( j = *(_QWORD **)(qword_18015C008 + 32); j != (_QWORD *)v7; j = (_QWORD *)*j )
    {
      v9 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v9 + 8);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18015C008 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
        return v9;
      }
    }
    v10 = *(__int64 ***)(qword_18015C008 + 40);
    v11 = (__int64 *)(v3 + 8);
    if ( *v10 != (__int64 *)v7 )
      __fastfail(3u);
    *v11 = v7;
    *(_QWORD *)(v3 + 16) = v10;
    *v10 = v11;
    *(_QWORD *)(v7 + 8) = v11;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 48));
    return (volatile signed __int32 *)v3;
  }
  return result;
}
