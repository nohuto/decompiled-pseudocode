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
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *result; // rax
  _RTL_SRWLOCK *v5; // rcx
  _RTL_SRWLOCK *v6; // r8
  __int64 v7; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v9; // rdi
  __int64 **v10; // rdx
  __int64 *v11; // rcx

  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_18015C008 + 48));
  for ( i = *(_QWORD **)(qword_18015C008 + 32); i != (_QWORD *)(qword_18015C008 + 32); i = (_QWORD *)*i )
  {
    v3 = (volatile signed __int32 *)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement(v3 + 8);
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18015C008 + 48));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_18015C008 + 48));
  result = (volatile signed __int32 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v3 = result;
  if ( result )
  {
    memset((void *)result, 0, 0x28uLL);
    v5 = (_RTL_SRWLOCK *)qword_18015C008;
    *v3 = 2623763;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_DWORD *)v3 + 1) = a1;
    *((_DWORD *)v3 + 8) = 1;
    RtlAcquireSRWLockExclusive(v5 + 6);
    v6 = (_RTL_SRWLOCK *)qword_18015C008;
    v7 = qword_18015C008 + 32;
    for ( j = *(_QWORD **)(qword_18015C008 + 32); j != (_QWORD *)v7; j = (_QWORD *)*j )
    {
      v9 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v9 + 8);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18015C008 + 48));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v3);
        return v9;
      }
    }
    v10 = *(__int64 ***)(qword_18015C008 + 40);
    v11 = (__int64 *)(v3 + 2);
    if ( *v10 != (__int64 *)v7 )
      __fastfail(3u);
    *v11 = v7;
    *((_QWORD *)v3 + 2) = v10;
    *v10 = v11;
    *(_QWORD *)(v7 + 8) = v11;
    RtlReleaseSRWLockExclusive(v6 + 6);
    return v3;
  }
  return result;
}
